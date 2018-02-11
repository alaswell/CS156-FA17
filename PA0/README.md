Homework #0: Say Hello                

The purpose of this assignment is to make sure that you can login to a Linux system and use the checkin program. This way, you’re sure that your login and password work before you need them for homework #1. This assignment is not optional.                 

1) Log on to a CS Department Linux system. Use an editor to create a file called hi.c that contains exactly this (upper/lower case matters):                 

    #include <stdio.h>

    int main() {
        printf("Hello, CS156 Fall 2017!\n");
        return 0;
    }

2) Compile & execute your program. My prompt is “%”; yours will be different. Note the capital W in “-Wall”.                 

    % c11 -Wall hi.c
    % ./a.out
    Hello, CS156 Fall 2017!

3) Use web checkin, or turn it in like this:                 

    ~cs156/bin/checkin HW0 hi.c
