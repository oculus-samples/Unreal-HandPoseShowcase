/*
Copyright (c) Meta Platforms, Inc. and affiliates.
All rights reserved.

This source code is licensed under the license found in the
LICENSE file in the root directory of this source tree.
*/

#include "OculusUtilsLibrary.h"
#include "OculusUtilsModule.h"
#include "Misc/DefaultValueHelper.h"
#include "Misc/DateTime.h"

void UOculusUtilsLibrary::GetOculusBuildInfo(FString& SourceControlChangelist, FString& BuildDateTimeString)
{
	auto BuildInfo = GetDefault<UBuildInfo>();
	if (!BuildInfo)
	{
		SourceControlChangelist = "Unknown Changelist";
		BuildDateTimeString = "Unknown Build Time";
		return;
	}

	// Oculus Store builds have a changelist number, otherwise it's a development one.
	SourceControlChangelist = BuildInfo->PackageChangelist;
	UE_LOG(LogOculusUtils, Display, TEXT("Build Info - source control changelist: \"%s\""), *SourceControlChangelist);

	// Extracting date and time values.
	FString DateString, TimeString;
	int DateNumber = 0, TimeNumber = 0;
	if (BuildInfo->PackageDateAndTime.Split(TEXT(" "), &DateString, &TimeString) && FDefaultValueHelper::ParseInt(DateString, DateNumber) && FDefaultValueHelper::ParseInt(TimeString, TimeNumber))
	{
		UE_LOG(LogOculusUtils, Display, TEXT("Build Info - parsed package date %d and time %d"), DateNumber, TimeNumber);

		// Separating date/time components.
		int Day = DateNumber % 100;
		DateNumber /= 100;
		int Month = DateNumber % 100;
		int Year = DateNumber / 100;

		int Second = TimeNumber % 100;
		TimeNumber /= 100;
		int Minute = TimeNumber % 100;
		int Hour = TimeNumber / 100;

		// We use a generic PT for both PDT and PST, where Oculus build servers are located.
		FDateTime BuildDate(Year, Month, Day, Hour, Minute, Second);
		BuildDateTimeString = BuildDate.ToString(TEXT("%Y-%m-%d %H:%M:%S PT"));
	}
	else
	{
		// If unparsable, we keep it as is.
		UE_LOG(LogOculusUtils, Display, TEXT("Build Info - cannot parse package date and time: \"%s\""), *(BuildInfo->PackageDateAndTime));
		BuildDateTimeString = BuildInfo->PackageDateAndTime;
	}
}

TArray<UActorComponent*> UOculusUtilsLibrary::SortComponentsByName(const TArray<UActorComponent*>& Components)
{
	TArray<UActorComponent*> SortedComponents = Components;

	SortedComponents.Sort(
		[](const UActorComponent& A, const UActorComponent& B) -> bool {
			return A.GetName().Compare(B.GetName()) < 0;
		});
	return SortedComponents;
}
