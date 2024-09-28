#!/bin/bash
A=$1
B=$2

if [[ "$1" < "$2" ]]
then 
	echo "$1"
	exit 0

elif [[ "$1" > "$2" ]]
then
	echo "$2"
	exit 0

elif [[ $# < 2 ]]
then 
	echo "Not enough arguments to process." >&2
	exit 1

elif [[ "$1" == "$2" ]]
then 	
	echo "The two statements are the same." >&2
	exit 1

else
	echo "invalid entry" >&2
	exit 1

fi
