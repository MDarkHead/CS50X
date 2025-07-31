This Assignment is for Harvard CS50X Week 1 C - Problem Set 1




world Directory- 

Hello, World Assignment 
In a file called hello.c, in a folder called world, implement a program in C that prints hello, world\n







me Directory-

Hello, It's Me Assignment
In a file called hello.c, in a folder called me, implement a program in C that prompts the user for their name and then says hello to that user. For instance, if the user’s name is Adele, your program should print hello, Adele\n!






mario-more Directory-

Mario Assignment
In a file called mario.c in a folder called mario-more, implement a program in C that recreates that pyramid, using hashes (#) for bricks, as in the below:

   #  #
  ##  ##
 ###  ###
####  ####

And let’s allow the user to decide just how tall the pyramids should be by first prompting them for a positive int between, say, 1 and 8, inclusive. 

Here’s how the program might work if the user inputs 4 when prompted:

$ ./mario
Height: 4
   #  #
  ##  ##
 ###  ###
####  ####

If the user doesn’t, in fact, input a positive integer between 1 and 8, inclusive, when prompted, the program should re-prompt the user until they cooperate:

$ ./mario
Height: -1
Height: 0
Height: 42

Notice that width of the “gap” between adjacent pyramids is equal to the width of two hashes, irrespective of the pyramids’ heights.






credit Directory- 

Credit Assignment
In a file called credit.c in a folder called credit, implement a program in C that checks the validity of a given credit card number.

Write a program that prompts the user for a credit card number and then reports (via printf) whether it is a valid American Express, MasterCard, or Visa card number, per the definitions of each’s format herein

American Express uses 15-digit numbers, MasterCard uses 16-digit numbers, and Visa uses 13- and 16-digit numbers. All American Express numbers start with 34 or 37; most MasterCard numbers start with 51, 52, 53, 54, or 55 (they also have some other potential starting numbers which we won’t concern ourselves with for this problem); and all Visa numbers start with 4. 

For simplicity, you may assume that the user’s input will be entirely numeric (i.e., devoid of hyphens, as might be printed on an actual card) and that it won’t have leading zeroes. 




