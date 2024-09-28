#!/bin/bash


if [[ $# = 0 ]];
then
	echo "Please input arguments" >&2
	exit 1

else
	for counter in "$@"
	do 
		if [[ -d "$counter" ]]
		then
			echo "Directory: $counter"

		elif [[ -f "$counter" ]]
		then
			echo "File: $counter"
		else
			echo "Unknown: $counter"

		fi
	done
fi


	



