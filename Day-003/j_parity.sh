#!/bin/bash

num="$1"

if ((num % 2 == 0));
then
    echo "$num is an even number."
else
    echo "$num is an odd number."
fi
