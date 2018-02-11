Your First C Program                

For this assignment, you will write a C program called ints.c. This program reads two numbers from the user, and produces a few arguably-interesting facts about the numbers. See the example output for the exact output expected from your program.                 

Here’s an outline for the program:                 

    Read in the two numbers.
    Display the result of dividing the first number by the second one, using floating-point division. What if the second number is zero? Check the examples.
    Display the positive difference of the two numbers.
    If either number is forty-two, say so.
    Display which numbers are evenly divisible by six. This one is tricky. Look carefully at the examples, below. What should you print if one is divisible and one isn’t? What if both are divisible? For the record: neither 13 nor 3 are divisible by 6, but 18, 0, and -90 are. 

Examples                

Here are a few example runs of the program. The “% ” is the command prompt, text like this is typed by the user, and the rest is from the program. (You don’t have to make it colored or underlined—that’s just how it looks here, so you can tell who does what.) Don’t be creative about your output—it must look exactly like this (except for the leading spaces):                 

    % c11 -Wall ints.c
    % ./a.out
    Two numbers, please: 123456 7
    Dividing 123456/7: 17636.571429
    Pos diff: 123449
    Divisible: only 123456
    % ./a.out
    Two numbers, please: 1 2
    Dividing 1/2: 0.500000
    Pos diff: 1
    Divisible: neither
    % ./a.out
    Two numbers, please: 5 -18
    Dividing 5/-18: -0.277778
    Pos diff: 23
    Divisible: only -18
    % ./a.out
    Two numbers, please: 0 42
    Dividing 0/42: 0.000000
    Pos diff: 42
    It's the answer!
    Divisible: both
    % ./a.out
    Two numbers, please: 0 0
    Dividing 0/0: against the rules.
    Pos diff: 0
    Divisible: both
    % ./a.out
    Two numbers, please: 5 0
    Dividing 5/0: against the rules.
    Pos diff: 5
    Divisible: only 0
    % ./a.out
    Two numbers, please: -3 3
    Dividing -3/3: -1.000000
    Pos diff: 6
    Divisible: neither

Requirements                

    You must turn in the .c file; not the binary, not the executable, not the a.out.
    We will only test your code with integer input.
    We will only test your code with integers whose absolute value is less than one million.
    The division must be performed with double-precision arithmetic.
    The quotient must be displayed with six places after the decimal point.
    We will test your program with several different sets of numbers, not necessarily those listed above.
    You must comment your code appropriately, including your name, date and purpose of the program at the very very very beginning of the file.
    '''Your output should be exactly the same as the examples above, given the input as specified.''' 

A Brief Conversation About Requirements                

    Adhere to the above requirements, exactly.
    Uppercase/lowercase, spacing, punctuation, etc. must be identical to the samples above.
    The grading software will flag any deviations and points will be deducted.
    Originality is not rewarded. 

How to submit your homework:                

Use                 

    ~cs156/bin/checkin HW1 ints.c

or web checkin.                 
How to receive negative points:                

Turn in someone else’s work.                 

    Our grading software compares student submissions for similarity, including obfuscation.
    Sharing ideas and talking about the assignment or the C language is good. That is part of learning.
    Sharing your code or viewing each other's screens is not. 
