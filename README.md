# C++ Introductory Labs

## Table of Contents
* [General Information](#general-information)
* [Description](#description)
* [Background](#background)
* [Problems Solved](#problems-solved)
* [Technologies](#technologies)
* [Instructions](#instructions)
* [Example Usage](#example-usage)

## General Information
This repository contains the code to solve all of the problems seen in the C++ Introductory Labs in the CMPUT 275 course. This code will be submitted in the C++ Intro Labs contest, providing solutions to the problems for future students. All code was created by me, Isaac Joffe, in January and February of 2022.

## Description
The aim of the project is to create solution code for the problems contained in the C++ Introductory Labs. In addition to solution code written in C++ to all of the problems, a makefile is provided which compiles and links all source code contained to create binary executables for testing of the code.

## Background
The C++ Introductory Labs are provided at the beginning of the CMPUT 275 course to teach the basics of C++. The exercises require the use and manipulation of many fundamental concepts and tools, such as input, output, basic arithmetic, selection, iteration (definite and indefinite), basic data types (integers, floats, characters, booleans, etc.), advanced data types (arrays, vectors, stacks, strings, etc.), and more. The code contained will be submitted in the C++ Intro Labs class-wide contest for a chance to win a prize and to produce useful solution code for future students taking CMPUT 275.

## Problems Solved
All problems included in the C++ Intro Labs package were solved, including the following:
* Hello, World! (Task 2.4.1, Kattis problem at https://open.kattis.com/problems/hello) under filename helloworld.cpp
* Sum (Task 2.4.2) under filename sum.cpp
* R2 (Task 2.4.3, Kattis problem at https://open.kattis.com/problems/r2) under filename r2.cpp
* Average (Task 3.5.1) under filename average.cpp
* Solving Carrots (Task 3.5.2, Kattis problem at https://open.kattis.com/problems/carrots) under filename solvingforcarrots.cpp
* Second Last Digit (Task 3.5.3) under filename secondlastdigit.cpp
* Quadrant Selection (Exercise 4.1.3, Kattis problem at https://open.kattis.com/problems/quadrant) under filename quadrantselection.cpp
* Fibonacci (Exercise 4.2.6) under filename fibonacci.cpp
* Powers (Exercise 4.3.1) under filename powers.cpp
* Last Factorial Digit (Task 4.4.1, Kattis problem at https://open.kattis.com/problems/lastfactorialdigit) under filename lastfactorialdigit.cpp
* Harshad Numbers (Task 4.4.2, Kattis problem at https://open.kattis.com/problems/harshadnumbers) under filename harshadnumbers.cpp
* Radio Commercials (Task 4.4.3, Kattis problem at https://open.kattis.com/problems/commercials) under filename radiocommercials.cpp
* Palindrome Checking (Exercise 5.1.1) under filename palindrome.v1.cpp
* Palindrome Checking (Exercise 5.3.4) under filename palindrome.v2.cpp
* Delimiter Soup (Exercise 5.4.3, Kattis problem at https://open.kattis.com/problems/delimitersoup) under filename delimitersoup.cpp
* Cipher (Exercise 5.5.2) under filename cipher.cpp
* ICPC Awards (Exercise 5.6.1, Kattis problem at https://open.kattis.com/problems/icpcawards) under filename icpcawards.cpp
* Compound Words (Exercise 5.7.1, Kattis problem at https://open.kattis.com/problems/compoundwords) under filename compoundwords.cpp
* Grand Adventure (Task 5.8.1, Kattis problem at https://open.kattis.com/problems/thegrandadventure) under filename grandadventure.cpp
* No Duplicates (Task 5.8.2, Kattis problem at https://open.kattis.com/problems/nodup) under filename noduplicates.cpp
* Babelfish (Task 5.8.3, Kattis problem at https://open.kattis.com/problems/babelfish) under filename babelfish.cpp
* Piece of Cake (Exercise 6.2.1, Kattis problem at https://open.kattis.com/problems/pieceofcake2) under filename pieceofcake.cpp
* Palindrome Checking (Exercise 6.3.1) under filename palindrome.v3.cpp
* Sort of Sorting (Exercise 6.4.1, Kattis problem at https://open.kattis.com/problems/sortofsorting) under filename sortofsorting.cpp
* Stacking Cups (Task 6.6.1, Kattis problem at https://open.kattis.com/problems/cups) under filename stackingcups.cpp
* Line Them Up (Task 6.6.2, Kattis problem at https://open.kattis.com/problems/lineup) under filename linethemup.cpp
* I Wanna Be The Very Best (Task 6.6.3, Kattis problem at https://open.kattis.com/problems/iwannabe) under filename iwannabe.cpp

## Technologies
The code contained is written in C++ and designed to be compiled using C++ 11 (as demonstrated in the makefile). The provided makefile utilizes the G++ compiler to create object files and binary executables to run and test all of the source code in this repository. I created all the code using my personal virtual machine, which runs the Ubuntu distribution of the Linux operating system, through the Sublime Text text editor and the Linux terminal window.

## Instructions
Any of the individual programs may be run using the command `make <problem_name>` in the terminal to create a binary executable which can then be run using `./<problem_name>`, also in a terminal.

To create executables for all of the code contained, type `make` or `make all` in a terminal window. From here, any of the problems can be executed using `./<problem_name>`.

## Example Usage
The following are examples of commands that can be entered into a terminal window to run the programs.
```
make helloworld
./helloworld
```
```
make
./sum
./r2
./average
```
