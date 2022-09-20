# playground
Contains codes and files of abitrary programming experiments, practice and newly acquired knowledge


# Task

Use switch case exclusively  to solve the case study:

using the format given below, Write a script that takes user input char representing a day of the week.

M = Monday
T = Tuesday
W= Wednesday
Th = Thursday
Fri = Friday
Sat = Saturday
Sun = Sunday

Take your personal comment on the users selection..


# Solution Guide 
Technically;
C uses char type to store characters and letters. However, the char type is integer type because underneath C stores integer numbers instead of characters.In C, char values are stored in 1 byte in memory,and value range from -128 to 127 or 0 to 255. [https://iq.opengenus.org/character-in-c/]


Another challenge is with using switch with strings
the stackoverflow link below highlights more on the problem 

https://stackoverflow.com/questions/4014827/how-can-i-compare-strings-in-c-using-a-switch-statement


In view of this, an out of the box approach can still be applied to solve this case study... <h4> ARRAYS </h4>

## To run this script with local IDE
clone the repo by running
### >>> git clone https://github.com/mk-armah/playground.git
and load it in your desired IDE (VS-CODE,Code:Blocks DevC++ etc)


## RUN WITH MAKE

To run this script with make, you'll need a terminal and "make" installed. For each example, put the contents in a file called Makefile, and in that directory run the command make
Run this command to build and run the program

### >>> make build
### >>> make run
or you can equally substitute the last step with
### >>> make run_exe

## Don't have Make ? 
##### You can still RUN ON THE TERMINAL | this step requires gcc bin and include fully set up in environment variables - <br> you can run <br> >>> gcc --version <br> at the terminal to check whether gcc has been set up properly on your pc


Steps to Run Script at the Terminal using gcc:
1. Open your local terminal
2. clone the repository using https://github.com/mk-armah/playground.git
3. change directory to playground by running   
    #### >>> cd ./playground
4. run the command below in your terminal to build and run the program
    #### >>> gcc hw_2.c -o hw_2.exe
    #### >>> hw_2 





