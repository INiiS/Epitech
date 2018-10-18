#!/usr/bin/env bash

if [[ -z ${1+x} ]];
then
    echo "Error : no arguments given"
    exit 84
else cut -d: -f5 |  cut -d ' ' -f2 | grep "^$1" | wc -l
fi
