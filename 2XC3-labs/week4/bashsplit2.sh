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
		if [[ "$word" =~ ^[a-zA-z]+$ ]];
		then
			echo "$word"
        	fi
	done
done
exit 0
