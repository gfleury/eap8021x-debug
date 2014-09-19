#!/bin/sh
MY_DARWIN_H="${SYMROOT}/my_darwin.h"
DARWIN_APPLE80211="${SYMROOT}/Apple80211.framework"

if [ "${RC_RELEASE}" = "Darwin" ]; then
	echo "#define NO_WIRELESS" > "${MY_DARWIN_H}"
	mkdir -p "${DARWIN_APPLE80211}"
	echo "Placeholder for Apple80211 framework" > "${DARWIN_APPLE80211}/Apple80211"
else
	echo "" > "${MY_DARWIN_H}"
fi

exit 0
