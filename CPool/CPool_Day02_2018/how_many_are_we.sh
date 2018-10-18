#!/usr/bin/env bash


if [ -z ${1+x} ];
then wc -l ;

else
     cut -d';' -f3 |  grep -i "$1" | wc -l
fi
