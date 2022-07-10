#!/usr/bin/bash

mkdir -p executables

usrfile=$1  
f_length=${#usrfile}
till=$f_length-2
name="${usrfile:0:$till}"

executable=$name.out

if [[ $2 == clear ]]; 
then
	clear
fi

gcc -o ./executables/$executable $usrfile -lm
./executables/$executable