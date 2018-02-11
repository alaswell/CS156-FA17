
HW2: Bar graph                
Description                

In this homework assignment, you will write a program called graph.c that reads numbers, representing pounds of a crop harvested, and displays a bar graph representing those values. Simple!                 

Here are the crops, in alphabetical order:                 

    Beans
    Carrots
    Lettuce
    Peas
    Squash 

Specifications:                

Part A
    First, prompt the user to enter five integers, representing the pounds of each crop harvested. Read them in alphabetical order, by crop name. 
Part B
    Then, display the bar graph showing the number of pounds, in alphabetical order by crop name. The bar graph consists of the crop name, followed by repetitions of the initial letter of the crop name. For example, if 5 pounds of Beans were harvested, you should display BBBBB.
    For part B you must use at least one while loop, at least one for loop, and at least one do…while loop. The loops have to be useful. An empty loop that does nothing isn’t good enough. 

Sample Runs                

In this example, the prompt is “%”. Things that you type look like this. Your output should match EXACTLY.                 

    % c11 -Wall graph.c
    % ./a.out
    Pounds of Beans: 1
    Pounds of Carrots: 2
    Pounds of Lettuce: 3
    Pounds of Peas: 4
    Pounds of Squash: 5

    Beans:   B
    Carrots: CC
    Lettuce: LLL
    Peas:    PPPP
    Squash:  SSSSS
    % ./a.out
    Pounds of Beans: 0
    Pounds of Carrots: 0
    Pounds of Lettuce: 25
    Pounds of Peas: 0
    Pounds of Squash: 0

    Beans:   
    Carrots: 
    Lettuce: LLLLLLLLLLLLLLLLLLLLLLLLL
    Peas:    
    Squash:  
    % ./a.out
    Pounds of Beans: 10
    Pounds of Carrots: 0
    Pounds of Lettuce: 8
    Pounds of Peas: 12
    Pounds of Squash: 0

    Beans:   BBBBBBBBBB
    Carrots: 
    Lettuce: LLLLLLLL
    Peas:    PPPPPPPPPPPP
    Squash:  
    % ./a.out
    Pounds of Beans: 12
    Pounds of Carrots: 14
    Pounds of Lettuce: 10
    Pounds of Peas: 8
    Pounds of Squash: 6

    Beans:   BBBBBBBBBBBB
    Carrots: CCCCCCCCCCCCCC
    Lettuce: LLLLLLLLLL
    Peas:    PPPPPPPP
    Squash:  SSSSSS
    %

Your output must line up properly—that’s the purpose of a bar graph. The following is hideous, and will be graded appropriately:                 

    Beans: BBB
    Carrots: CCC
    Lettuce: LLL
    Peas: PPP
    Squash: SSS

Notes                

    If your program doesn’t compile, you get no points. It is not the grader’s job to repair your work. If you can’t get your program to compile, seek help during instructor or TA’s office hours or from the person in charge of the Linux Lab.
    You must not use language features that we have not yet discussed. You can’t use arrays, strings, functions other than main, etc.
    You must properly comment your code including a line at the top with your name, date and purpose of the program as well as other comments explaining your loops.
    Assume all values entered are integers and will be greater than or equal to zero. Notably, zero is allowed.
    If the user enters a large number, your output may wrap around the screen. That’s OK.
    No global variables. 

How to submit your homework:                

Use                 

    ~cs156/bin/checkin HW2 graph.c

or web checkin.                 
How to receive negative points:                

Turn in someone else’s work.                 

