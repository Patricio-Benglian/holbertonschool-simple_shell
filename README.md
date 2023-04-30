<div align="center">
<h1> Simple Shell </h1>

A shell project with basic functionality. It was tasked by Holberton School Uruguay to Patricio Benglian and Patricio "Kindness" Coitiño as the final project of the first trimester.
</div>

## Authors:

<img src="https://user-images.githubusercontent.com/124268011/235376824-ae778443-ac5a-4a78-9f0d-fa6fcd96d5c4.png" height="35" width="35"> Patricio "Kindness" Coitiño

<img src="https://user-images.githubusercontent.com/124268011/235376799-2a26ede6-4f75-4997-9857-6bf657a46c06.png" height="35" width="35"> Patricio Benglian
 
## Installation:
 Run:
 ```
 git clone https://github.com/Patricio-Benglian/holbertonschool-simple_shell.git
 ```
 in a directory of your choice. After cloning, compile with gcc *.c -o hsh and then execute it with ./hsh.
 
## Usage:

```
After executing, you will receive a prompt: "$ ". 
Inside this prompt you will be free to run any command your terminal supports. 
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

## shellmain
 shellmain is the central function of the whole process. 
 It works by creating a loop and "listening" for an input and then calling other functions to parse, find and execute it.
 
### string_parse
 string_parse's sole work is to break into pieces given strings to create "words" or, more precisely, arguments.
 
### _getenv
 _getenv searches for PATH's direction inside the enviroment, and then returns the direction. Knowing where it is helps to read PATH's stored value.
 
 ### path_parse
 path_parse's purpose, like its sibling, is to separate given strings using tokenization. The difference is that path_parse is made for breaking path directories.

### _which.c
 _which.c checks to see if the command input exists within any of the directories found in PATH.
 
### exec_func.c
 exec_func executes a command from filepath using given arguments. 

# Auxiliaries

### strtok.c
 strtok.c contains all functions that work using tokenization.
 
### counter
 counter, unsurprisingly, counts how many arguments are tokanized from the user's inputs.
  
### pathcounter
 pathcounter, again, counts how many directories are in given path using tokenization.

### _strdup
 _strdup is a clone of strdup. It was eventually replaced with the standard strdup, and is now merely vestigial.
 
![Untitled(1)](https://user-images.githubusercontent.com/121252659/235329451-1331c516-b412-4171-ac0c-8f8b8e79ec82.jpg)
