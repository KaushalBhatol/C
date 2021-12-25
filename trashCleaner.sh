#!/bin/bash
# you need creat exicutable this file using 
# chmod +x ./trashCleaner
# now just run: ./trashCleaner
# for using windows you just need to change .out to .exe file extantion in this file.

echo "SELECT OPTION TO REMOVE FILES" ;
echo "[1] *.exe  " ;
echo "[2] *.out  " ;
echo "[3] *.tmp.*" ;

read -r choice

if [ $choice -eq 1 ]
then
    rm -r *.exe
    rm -r */*.exe
    rm -r */*/*.exe
    rm -r */*/*/*.exe
    rm -r */*/*/*/*.exe
    clear
    printf "\n All *.exe files are removed \n\n"
elif [ $choice -eq 2 ]
then
    rm -r *.out
    rm -r */*.out
    rm -r */*/*.out
    rm -r */*/*/*.out
    rm -r */*/*/*/*.out
    clear
    printf "\n All *.out files are removed \n\n"
elif [ $choice -eq 3 ]
then
    rm -r *.tmp.*
    rm -r */*.tmp.*
    rm -r */*/*.tmp.*
    rm -r */*/*/*.tmp.*
    rm -r */*/*/*/*.tmp.*
    clear
    printf "\n All *.tmp.* files are removed \n\n"
fi