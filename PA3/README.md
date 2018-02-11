
CS156 HW3: Functions in Oz!                
Description                
Index	Year	Title
1	1900	The Wonderful Wizard of Oz
2	1904	The Marvelous Land of Oz
3	1907	Ozma of Oz
4	1908	Dorothy and the Wizard in Oz
5	1909	The Road to Oz
6	1910	The Emerald City of Oz
7	1913	The Patchwork Girl of Oz
8	1914	Tik-Tok of Oz
9	1915	The Scarecrow of Oz
10	1916	Rinkitink in Oz
11	1917	The Lost Princess of Oz
12	1918	The Tin Woodman of Oz
13	1919	The Magic of Oz
14	1920	Glinda of Oz

Starting in the year 1900, L. Frank Baum wrote fourteen books about the Land of Oz. The first book was adapted into the popular 1939 movie with Judy Garland.                 

For this assignment, you will write a program called wiz.c that performs several tasks concerning these books. The program will prompt the user for what to do. The user can select one of the following:                 

    'h' for help: show a menu of options
    'q' to quit
    'y' to enter a year:
    Show the Oz book for that year.
    'i' to enter an index (a number between 1 and 14, inclusive):
    Show the age of the Oz book for that index. 

Sample Run                

These values are those the user types in while running the program. “%” is the prompt and not a part of your program. Your output should match exactly.                 

    % c11 -Wall wiz.c
    % ./a.out
    Ignore the man behind that curtain!
    Request: z
    Invalid request 'z'; 'h' for help.
    Request: h
    h - help
    i - show age of the Oz book for that index
    q - quit
    y - show the Oz book for that year
    Request: i
    What index? 3
    Published 110 years ago.
    Request: i
    What index? 42
    Sorry, no such book.
    Request: y
    What year? 1920
    In 1920: Glinda of Oz
    Request: y
    What year? 1907
    In 1907: Ozma of Oz
    Request: y
    What year? 2017
    Sorry, no such book.
    Request: q
    % 

Requirements                

    Your code may assume that the current year is 2018.
    You may assume the user will enter the proper type of value, when prompted, but you might not like the value.
    All output should be exactly like the output described in the sample run. Pretend that you’re doing this for a client, so you do what the client tells you to do. Don’t change the text for the prompt, or have the prompt in a different spot than the way the client specifies. You are working for the client, so do what the client asks!
    You must write comments in your code describing what the code is doing. You should comment the program as described in class with, at the minimum:
        a comment header containing your name, date of last modification, and purpose of your source file;
        comments on all tricky code;
        all variables should be described.
        all functions should specify purpose, inputs and outputs 
    You may not have any global variables. 

Required Functions                

You must define and use the following functions:                 

void show_menu();
    Print the help menu, as shown above. 
void show_title_given_year(int year);
    Print the title for that year. Hint: Use a switch statement. 
void show_age_given_index(int index);
    Print the age of the book for that index. Hint: Use an array. 

Note that the these functions should not call scanf. Instead, the last two functions should use whatever number was given to them. Presumably, scanf was called earlier to read the number.                 
How to submit your homework:                

Use                 

    ~cs156/bin/checkin HW3 wiz.c

or web checkin.                 
How to receive negative points:                

Turn in someone else’s work.                 

