#!/bin/bash

cat file.txt
echo "\n"
read -p "str1: " STR1
read -p "str2: " STR2
./replace file.txt $STR1 $STR2
diff -y file.txt file.txt.replace