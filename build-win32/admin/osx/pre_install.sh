#!/bin/sh

# kill the old version. see issue #2044
killall vnpt-drive

# Unload the Finder plugin. see issue #2105
killall Finder

exit 0
