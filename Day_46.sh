#!/bin/bash
while IFS= read -r line
do
    echo "${line:2:1}" | cut -d' ' -f1 | cut -d'.' -f2-
done
