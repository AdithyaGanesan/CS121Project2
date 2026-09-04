# CS121Project2

##Introduction to C
hi.c -- classic Hello, World! program. algorithm inside hi.txt

##Guess A Number Game
numberGuesser.c

access the i/o system
access utility system (for rand function)
access boolean system

create boolean variable guessed that keeps track of whether the number has been guessed
create integer variable count that keeps track of number of turns

create void guessing function with the correct number as a parameter
    while loop repeats as long as correct number has not been guessed
        ask user for a number
        respond whether the input is higher, lower, or equal to correct
        when correct answer is given, tell the user about their performance
        keep track of number of turns

create integer main function
    generate random integer between 1 and 100
    store number in int variable called correct
    ask user for name
    store name in string
    each turn, add one to count
    stop when the correct number is guessed
    give user feedback based on number of turns taken -- above 7 is poor, above 5 is good, below 5 is very good

