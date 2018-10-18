#!/bin/bash

blih -u sebastien.sattler@epitech.eu repository create $1;
blih -u sebastien.sattler@epitech.eu repository setacl $1 ramassage-tek r;
blih -u sebastien.sattler@epitech.eu repository getacl $1;
