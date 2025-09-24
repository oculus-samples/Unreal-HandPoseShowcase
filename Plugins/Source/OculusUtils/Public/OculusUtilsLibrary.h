/*
Copyright (c) Meta Platforms, Inc. and affiliates.
All rights reserved.

This source code is licensed under the license found in the
LICENSE file in the root directory of this source tree.
*/

#pragma once

#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "Components/ActorComponent.h"
#include "OculusUtilsLibrary.generated.h"

/**
 * Build configuration from the project's game configuration.
 */
UCLASS(Config = Game)
class OCULUSUTILS_API UBuildInfo : public UObject
{
	GENERATED_BODY()

public:
	/** Source control changelist */
	UPROPERTY(Config)
	FString PackageChangelist;

	/** Build date and time (Pacific time) "YYYYMMDD HHMMSS" */
	UPROPERTY(Config)
	FString PackageDateAndTime;
};

/**
 * Oculus Utils Blueprint Library.
 */
UCLASS()
class OCULUSUTILS_API UOculusUtilsLibrary : public UBlueprintFunctionLibrary
{
	GENERATED_BODY()

public:
	/** Returns the Oculus store version. */
	UFUNCTION(BlueprintCallable, Category = "Oculus Utils")
	static void GetOculusBuildInfo(FString& SourceControlChangelist, FString& BuildDateTimeString);

	/** Returns the array of components sorted by name. */
	UFUNCTION(BlueprintCallable, Category = "Oculus Utils", meta = (ComponentClass = "ActorComponent", DeterminesOutputType = "Components"))
	static TArray<UActorComponent*> SortComponentsByName(const TArray<UActorComponent*>& Components);
};
