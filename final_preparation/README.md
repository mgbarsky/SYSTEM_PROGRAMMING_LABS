# Preparation for final exam


You need to do at least 8/20 questions correctly. Out of these questions 3 should be from Strings, Files and Linked Lists - one from each.

-----
## Pointers
**[01.pointers1.c]** 

Find out (add code to print out) the address of the variable <em>x</em> in <em>foo1</em>, and the variable <em>y</em> in <em>foo2</em>. What do you notice? Can you explain this? **Add your explanation directly to this README file:**

**[02.pointers2.c]**

Find and eliminate all code that generates Segmentation Fault.

-----
## Memory 
**[03.memory1.c]**

**[04.memory2.c]**

Read code in files <em>03.memory1.c</em> and/or <em>04.memory2.c</em>. 
Then compile code using: <code>gcc -g -o test [file.c]</code>, and run <em>valgrind</em> command to check for memory problems: 
<pre>
<code>valgrind ./test</code>
</pre>
Continue fixing the code until no more errors can be identified by <em>valgrind</em>.

-----
## Strings 
**[05.strings1.c]**

Write a function <strong>convert</strong> whose first parameter is an array of strings and second parameter is the number of elements in this array. 

Your function should return a string that is the reverse of a longest string in the array (any longest  will do in the case of a tie) or NULL if the array was empty. You must not change the strings in the array. You may assume all the strings in the array are null-terminated.


**[06.strings2.c]**

Write a function that converts an integer number into a C-string (null-terminated character array) and returns this string. Add each digit to the resulting string separately, do not use `sprintf`.

-----
## Structs 
**[07.structs1.c]**

Try to compile and run <em>07.structs1.c</em>. Fix all errors and memory problems and try again.



**[08.structs2.c]**

Complete the code according to the instructions in file <em>08.structs2.c</em>.

-----
## Files 
**[09.files1.c]**

Write a program <strong>last</strong> that prints the last *n* lines of its text input. The input is in a file with the file name specified as a command-line argument. By default *n* should be 5, but your program should allow an optional argument so that <code>./last n</code> prints out the last *n* lines, where *n* is any integer. 

Your program should make the best use of available storage. It cannot load and store the entire file content because the file is presumed to be too big.


**[10.files2.c]**

Write a C program to count occurrences of a word in file. The *word* is provided as a command-line argument.

-----
## Linked lists 
**[11.linkedlists1.c]**

You have two numbers represented by a linked list, where each node contains a single digit. The digits are stored in reverse order, such that the 1's digit is at the head of the list. Write a function that adds the two numbers and returns the sum as a linked list.


**[12.linkedlists2.c]**

Write a **sortedinsert()** function which given a list that is sorted in increasing order, and a single node, inserts the node into the correct sorted position in the list.

-----
## Fork, pipe 

**[13.fork1.c]**

Compile and run <em>12.fork1.c</em>. What is this program doing? If you think that something is wrong with it, fix it.


**[14.fork1.c]**

Answer the following questions related to the program in file <em>14.fork1.c</em>.
* How many times "Hello" is printed on the screen?
* Draw the tree of processes: parent -> child

-----

## Signals, sockets

**[15.signals1.c]**

Write a program that prints its process id, and then runs an infinite loop. When the process receives an interrupt signal, it should print "Hello world". After testing that you cannot terminate the program with `Ctrl+C`, use process id to hard kill it.


**[16.signals2.c]**

Finish setup of unix socket server in file <em>16.signals2.c</em>.

-----

## Sorting 1

**[17.sorting1.c]**

Using <em>qsort</em> and function pointers, sort list of persons first by the last name, and then, in case of a tie, by the first name.

**[18.sorting2.c]**

Using <em>qsort</em> and function pointers sort an array of points by the euclidean distance from Point(0,0).

-----

## Bits 

**[19.bits1.c]**

Write a C program to input any number from user and find highest order set bit of given number using bitwise operators.

Example

```
Input: 22

Output:
Highest order set bit in 22 is 4.
```


**[20.bits2.c]**

Write a C program which takes 2 chars as an input, scans their bits from left to right and finds the first position where their bits are different. 

Example:

```
Input: 12, 14.

Output: 
The first different bit is at position 6 from the left.
```