#!/bin/bash

regex='^([+-]?[1-9][0-9]{0,8}|0)$'

if [[ $# < 2 ]];
then
	echo "Not enough arguments to process." >&2
	exit 1
fi

if ! [[ "$1" =~ $regex ]]; then
    echo "First argument is invalid: $1" >&2
    exit 2
fi

if ! [[ "$2" =~ $regex ]]; then
    echo "Second argument is invalid: $2" >&2
    exit 2
fi

declare -i A=$1
declare -i B=$2

if [[ "$1" < "$2" ]]
then
        echo "$1"
        exit 0

elif [[ "$1" > "$2" ]]
then
        echo "$2"
        exit 0

elif [[ "$1" == "$2" ]]
then
        echo "The two statements are the same." >&2
        exit 1

else
        echo "invalid entry" >&2
        exit 1

fi
