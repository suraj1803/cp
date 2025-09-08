#!/bin/bash

# check if argument is provided
if [ $# -eq 0 ]; then
    echo "Usage: $0 <filename.cpp>"
    exit 1
fi

# get filename without extension
filename="${1%.*}"

# compile
g++ "$1" -o "a"
if [ $? -ne 0 ]; then
    echo "Compilation failed."
    exit 1
fi

# run
./"a"
