#!/bin/bash

echo "There are $(cat $1 | wc -l) words in $1"
pattern='^.{'$2','$3'}$'
echo "There are $(cat $1 | grep -P $pattern | wc -l) words between $2 and $3 characters long"
