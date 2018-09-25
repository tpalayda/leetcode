#!/bin/bash

result=$(wc -l < file.txt)
if [ $result -ge 10 ]; then
    head file.txt | tail -1
fi   
