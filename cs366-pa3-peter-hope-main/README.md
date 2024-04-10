# CS366 PROGRAMMING ASSIGNMENT 3: It's all in the cards

## Goal
To gain experience with:

* structs in C
* dynamic memory allocation
* a linked list in C

## Problem
You are CTO of LUM Games and you have a hot new card game coming to market. You are going to be responsible for implementing a deck of cards using a linked list.

## Analysis
*\[Software Engineers first attempt to determine **WHAT** is to be done (analysis) before determining **HOW** to do it (design).\]*

### What is a card?
A card includes a suit: Spades (S), Hearts (H), Diamonds (D), Clubs (C), and a rank: 2-9, Ten (T),  Jack (J), Queen (Q), King (K) , Ace (A).
<br>
**You should expect the following input from user: 2S (2 of Spades), JH, (Jack of Hearts), AD (Ace of Diamonds), etc...**

### What operations should a card support?
A card will need to be able to do the following:

* Create a new card
* Check that two cards are equal
* Pretty print a card (i.e., print it out in a nicely human readable way)

### What operations should our linked list support?
You must be able to do the following with your list:

* Create an empty list
* Insert at the beginning
* Insert at the end
* Find an item (card) in the list
* Print the list
* Delete an item (card) from the list

I have provided the skeleton of a main program to demonstrate functionality of the list. This skeleton will need some changes to support all functionality.

## Design
1. Create card.c and card.h. The internal representation is up to you, but you need to have the following functions: 
    * `card_create`
    * `card_is_equal`
    * `card_print`
2. Create list.c and list.h such that you can support the operations:
    * `list_create`
    * `list_add_start`
    * `list_add_end`
    * `list_find`
    * `list_print`
    * `list_remove`
    * `list_free` *(Note: Although this doesn't appear in the Analysis, we need in this the design because we have need to free the list after all (see Memwatch)*

### Note
**It is better to submit a working list of something other than cards (maybe ints) then a broken list of cards, particularly if you can get cards working independently of the list and are just struggling to merge the ideas.**
<br>
**Please make sure I can compile your code and run your. If you code cannot be compiled, you will receive a 0**

## Style
You are expected to follow a consistent style. Pay particular attention to:

1. File headers: You should have a file header at the top of every file explaining the purpose and author of the file.
2. Function comments: Every function should explain its purpose, input, and return.
3. Variable names: use meaningful names in all lowercase with underscore separations between words
4. Constant names: use all uppercase
5. Your code should have appropriate whitespace and avoid overly long line lengths.
6. You should have no warnings when compiled with gcc -Wall
7. Use header guards for your .h files. 
8. Use of git: use meaningful commit messages and commit after reasonable milestones (i.e., a function has been completed)
    * A single commit for the whole project is not a good use of git
9. Functions should do one thing and one thing only.
10. Your program should include reasonable HCI such that the user does not have to guess what they are supposed to do. **(Print out a menu of what they can do, and what they need to enter as input)**
11. Your program should be silent on success (except where such silence conflicts with good HCI).
12. You should include full error checking for all kernal and some library calls. Use `perror` to print error messages.


## Submission
Your GitHub repo should contain:

1. A ```Makefile``` that I can use to run ```make clean``` and ```make all``` to remove derivable files and create all needed executables, respectively. I have provided a file that should serve as an execellent starting point. You may not need to make any changes depending on your implementation.
2. All necessary source code. 
3. ***tests.txt*** (a text file) containing input, output, and rationale for at least 6 tests.
4. A file named ***memwatch.log*** containing the output of memwatch. The goal is no anomalies.
5. A file named ***reflection.txt*** containing a reflection that answers at least the following questions.
    * Did you try to make a list of ints or some other primative before moving on to cards?
    * Did you test your cards independantly of your list?
    * Making a list of milestones can often help tackle bigger problems like this. What milestones (if any) did you use?
    * You have done linked lists in a couple classes (CS 212, CS 312) now. Were you able to see the similarities and differences?
    * How did the project go, overall? 
