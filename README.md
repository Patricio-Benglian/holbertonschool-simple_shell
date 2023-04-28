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

# _strdup.c
 _strdup is a clone of strdup, it's work is to copy strings and return them.
## main.h
 An auxiliar main for easen the coding work.
 
# shellmain.c
 shellmain is the central function of the whole process. 
 It works, as one can easily assume, by creating a loop (using atty) and "listening" to the user's input,
 thus calling many other functions depending on what it has "heard".

# strtok.c
 strtok.c contains all functions that work using tokenization.
 
## counter
 counter, unsurprisingly, counts how many arguments are tokanized from the user's inputs.
  
## pathcounter
 pathcounter, again, counts how many directories are in given path using tokenization.
   
## string_parse
 string_parse's sole work is to break into pieces given strings to create "words" or, more precisely, arguments.
    
## path_parse
 path_parse's, like its sibling, is to separate given strings using tokenization. The difference is that path_parse is made for breaking path directories.
 
