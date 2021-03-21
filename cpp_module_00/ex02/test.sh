#!/bin/bash

#Compare log files

clang++ tests.cpp Account.class.cpp
./a.out > log.txt
diff -y log.txt 19920104_091532.log
rm ./a.out log.txt