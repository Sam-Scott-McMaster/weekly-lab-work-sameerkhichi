#!/bin/bash

if [[ "$#" > 0 ]]
then
	echo "invalid, dont use argument inputs, instead use pipes" >&2
        exit 1
fi



while read line;
do	
	for word in $line
	do
		echo "$word"
	done
done
exit 0
