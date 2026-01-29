#!/bin/bash

read -p "Enter choice (y/n): " o

if [[ "$o" == [yY] ]]; then
    echo "YES"
else
    echo "NO"
fi