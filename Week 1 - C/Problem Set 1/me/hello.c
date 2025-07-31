//Riyansh Ritesh Srivastava
/*
In a file called hello.c, in a folder called me,
implement a program in C that prompts the user for their name and then says hello to that user.
For instance, if the user’s name is Adele, your program should print hello, Adele\n!

*/
#include <cs50.h>
#include <stdio.h>

int main(void){
    string getName = get_string("What's your name? ");
    printf("hello, %s\n", getName);

    return 0;
}
