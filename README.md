# Status
Still under development.

# Simple Shell
A simplified clone of shell proyect. It was tasked by Holberton School Uruguay to Patricio Benglian and Patricio "Kindness" Coitiño.

## Authors:
 Patricio "Kindness" Coitiño and Patricio Benglian.
 
## Installation:
 Drop all the files in [correct path here] and is ready to go!

## Usage:

```
You have to run shellmain and you will receive a prompt: "$ ". 
Inside this prompt you will be free to run any command you wish to. 
For example: 

# This is the base prompt in which you will work!
$

# Runs 'ls'
$ ls

# Runs ls with the long format.
$ ls -l

# Removes said file.
$ rm sanity

# Creates a empty file with the given name.
$ touch restored_sanity
```

# Functions:

## main.h
 An auxiliar main for easen the coding work.
 
## shellmain.c
 shellmain is the central function of the whole process. 
 It works, as one can easily assume, by creating a loop and "listening" to the user's input, thus calling many other functions depending on what it has "heard".
 
 ## get_input.c
  get_input is the first call that shellmain will attempt. If proven succesful get_input will use string_parse and count to return a function call
  and a series of arguments (if inputed). You can think of get_input as a messenger pidgeon, it goes from the main function asking for calls and arguments
  and it returns to main with the items asked, provided by the rest of functions.
