
CS156 HW4: Strings, File I/O!                
Description                

For this assignment, you will write a program called reader.c that can display files and give information about their contents.                 

Prompt the user for one of four options:                 

    m: print this menu
    c: cat a text file
    i: get information about a text file
    q: quit

If the user chooses to get information or to cat a file, you will need to prompt for the filename.                 

    Filename:

If the user chooses to get information, the program will say how many lines are in the file, how many non-empty lines are in the file, and how many times “luc” (any mix of upper and lower case) occurs.                 

For the following data file:                 

    My dog Lucky

    is plucky!

This output would be produced:                 

    Lines: 3
    Non-empty: 2
    Lucs: 2

Sample Run                

In this sample run, the file bogus doesn’t exist, the file empty.txt has no lines, the file tiny.txt contains a single line with the letter 'x', the file dwarfs.txt contains the names of the seven dwarfs, and hamlet.txt contains Shakespeare’s play Hamlet. (These files are available in ~cs156/pub.)                 

Text like this is typed by the user.                 

“%” is the shell prompt and not a part of your program.                 

    % c11 -Wall reader.c
    % ./a.out
    m: print this menu
    c: cat a text file
    i: get information about a text file
    q: quit
    Action: c
    Filename: bogus
    bogus doesn't end with .txt
    Action: c
    Filename: empty.txt
    Action: c
    Filename: tiny.txt
    x
    Action: c
    Filename: dwarfs.txt
    Doc
    Bashful
    Grumpy
    Happy
    Sleepy
    Sneezy
    Dopey
    Action: i
    Filename: bogus
    bogus doesn't end with .txt
    Action: i
    Filename: tiny.txt
    Lines: 1
    Non-empty: 1
    Lucs: 0
    Action: i
    Filename: dwarfs.txt
    Lines: 7
    Non-empty: 7
    Lucs: 0
    Action: i
    Filename: hamlet.txt
    Lines: 6045
    Non-empty: 4376
    Lucs: 9
    Action: i
    Filename: empty.txt
    That file is empty.
    Action: m
    m: print this menu
    c: cat a text file
    i: get information about a text file
    q: quit
    Action: q
    That is all.

Requirements                

    The maximum size of a filename is 50 characters. Don’t forget space for the terminating '\0'.
    The maximum length (number of characters) in a line in a file is 80 characters. Don’t forget space for the terminating '\0'.
    Only files ending with .txt can be processed for the 'i' and 'c' commands. You need to do error checking to verify this.
    What do you do if the file has no lines? Check the sample output.
    The program should loop until the user types 'q' to quit.
    If the file is not readable by the user for any reason, an error is printed and the user is sent back to the top-level prompt of your program.
    You may not make use of any language features we have not covered yet.
    All output should be exactly like the output shown above. Yes, exactly. Exactly exactly exactly.
    You must write comments in your code describing what the code is supposed to do. You should comment the program as described in class with, at the minimum:
        a comment header at the very very very beginning containing your name, date, and purpose of your source file
        a comment before each function, describing what it does 
    You must name your program reader.c
    Remember, don’t use sizeof() on an array parameter.
    No global variables. Global constants are ok.
    You must fclose any file that you fopen.
    Use char constants for char values, not int ASCII values: 'A', not 65.
    Use functions to break this up into smaller chunks of code. Don't put it all in main(). 

How to submit your homework:                

Use                 

    ~cs156/bin/checkin HW4 reader.c

How to receive negative points:                

Turn in someone else’s work.                 

