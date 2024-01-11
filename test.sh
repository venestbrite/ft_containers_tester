#!/bin/bash

clear 


tput setaf 1;

echo "                                                                            ";
echo "   (                )                             *   )          )          ";
echo "   )\            ( /(   ) (          (  (       \` )  /(  (    ( /(  (  (    ";
echo " (((_)  (   (    )\()| /( )\  (     ))\ )(  (    ( )(_))))\(  )\())))\ )(   ";
echo " )\___  )\  )\ )(_))/)(_)|(_) )\ ) /((_|()\ )\  (_(_())/((_)\(_))//((_|()\  ";
echo "((/ __|((_)_(_/(| |_((_)_ (_)_(_/((_))  ((_|(_) |_   _(_))((_) |_(_))  ((_) ";
echo " | (__/ _ \ ' \))  _/ _\` || | ' \)) -_)| '_(_-<   | | / -_|_-<  _/ -_)| '_| ";
echo "  \___\___/_||_| \__\__,_||_|_||_|\___||_| /__/   |_| \___/__/\__\___||_|   ";
echo "                                                                            ";
tput setaf 7;


correct_count=0;
general_count=0;

printf "\n\n********************* Testing MAP *********************\n\n\n"
sleep 0.2
ls map_tests/*.cpp > map_tests/list_tests.txt 
filename='map_tests/list_tests.txt'



while read line; do

# echo $line;
clang++ $line

orig=$(./a.out 1)
user=$(./a.out 2)

if [ "$user" = "$orig" ]; then
	tput setaf 2; echo -n "Test ok [OK] "
  correct_count=$((correct_count + 1))
else
	tput setaf 9; echo -n "Failed [FAILED] "
fi
# printf "\n"
general_count=$((general_count + 1))
# sleep 0.2

done < $filename

printf "\n\n"

if [[ $correct_count -ne $general_count ]]; then
	tput setaf 7; echo -n "MAP: "; tput setaf 9; echo "[ X ]";
else
	tput setaf 7; echo -n "MAP: "; tput setaf 2; echo "[ ✅ ]";
fi
printf "\n"

rm map_tests/list_tests.txt
tput setaf 7;

correct_count=0;
general_count=0;

printf "\n\n********************* Testing VECTOR *********************\n\n"
sleep 1.5
ls vector_tests/*.cpp > vector_tests/list_tests.txt 
filename='vector_tests/list_tests.txt'

while read line; do

# echo $line;
clang++ $line

orig=$(./a.out 1)
user=$(./a.out 2)

if [ "$user" = "$orig" ]; then
	tput setaf 2; echo -n "Test ok [OK] "
  correct_count=$((correct_count + 1))
else
	tput setaf 9; echo -n "Failed [FAILED] "
fi

general_count=$((general_count + 1))
# sleep 0.2

done < $filename

printf "\n\n"
if [[ $correct_count -ne $general_count ]]; then
	tput setaf 7; echo -n "VECTOR: "; tput setaf 9; echo "[ X ]";
else
	tput setaf 7; echo -n "VECTOR: "; tput setaf 2; echo "[ ✅ ]";
fi

rm a.out vector_tests/list_tests.txt

tput setaf 7;
printf "\n\n********************* Testing STACK *********************\n\n\n"
sleep 1.5
correct_count=0;
general_count=0;
ls stack_tests/*.cpp > stack_tests/list_tests.txt 
filename='stack_tests/list_tests.txt'

while read line; do

# echo $line;
clang++ $line

orig=$(./a.out 1)
user=$(./a.out 2)

if [ "$user" = "$orig" ]; then
	tput setaf 2; echo -n "Test ok [OK] "
  correct_count=$((correct_count + 1))
else
	tput setaf 9; echo -n "Failed [FAILED] "
fi
general_count=$((general_count + 1))
# sleep 0.2

done < $filename

printf "\n\n"


if [[ $correct_count -ne $general_count ]]; then
	tput setaf 7; echo -n "STACK: "; tput setaf 9; echo "[ X ]";
else
	tput setaf 7; echo -n "STACK: "; tput setaf 2; echo "[ ✅ ]";
fi

rm a.out stack_tests/list_tests.txt

## SPEED TEST MAP ##
tput setaf 7;
printf "\n\n********************* Testing SPEED *********************\n\n\n"
sleep 2
clang++ speed_test/main_vector_1.cpp
orig=$(./a.out 1)
user=$(./a.out 2)
final=$(($user/$orig))

if [[ $final -le 20 ]]; then
	tput setaf 7; echo -n "SPEED: "; tput setaf 2; echo "[ ✅ ]";
else
	tput setaf 7; echo -n "SPEED: "; tput setaf 1; echo "[ X ]";
fi

## END SPEED TEST MAP ##

printf "\n\n"
rm a.out


