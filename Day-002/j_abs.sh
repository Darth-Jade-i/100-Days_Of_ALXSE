#!/bin/bash

# Define the function
j_abs()
{
    local num="$1"
    # Set first argument to num variable

    if ((num < 0));
    then
	echo $((-num))
    else
	echo $num
    fi
}
