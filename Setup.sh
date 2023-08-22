#!/bin/bash
cd $(dirname "$0")

ARCHIVE=sho_20210420_190740.tar
REMOTE_ARCHIVE=https://www.oculus.com/x2asset/$ARCHIVE
LOCAL_ARCHIVE=/tmp/$ARCHIVE

echo Downloading Content...
curl -L $REMOTE_ARCHIVE --output $LOCAL_ARCHIVE

echo Extracting Content...
tar xvf $LOCAL_ARCHIVE
rm -f $LOCAL_ARCHIVE

echo Success!
