#!/bin/bash

git add --ignore-errors . ;
git commit -m "$1";
git push;
