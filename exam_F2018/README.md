# System programming: final exam Fall 2018
To get 100% in this exam, you need to solve at least 7⁄20 questions correctly. Out of these questions 3 should be from **Strings**, **Files** and **Linked Lists** - 20 points for each. At least 50 points on this exam are required in order to pass the course.


-----

## Pointers
##### 01.pointers1.c [10 points]
Write a short C program that declares and initializes (to any value you like) a `double`, an `int`, and a `char`. 

Next declare and initialize a pointer to each of the three variables. Your program should then print the address of, the value stored in, and the memory size (in bytes) of each of the six variables.

Inside the file, in the comments, compare memory sizes printed and explain why some are different and why some are not.


##### 02.pointers2.c [10 points]
<em>swap_nums</em> seems to work, but not <em>swap_pointers</em>. Fix it. 

-----

## Memory 
**[03.memory1.c]** [10 points]

**[04.memory2.c]** [10 points]

Read code in files <em>03.memory1.c</em> and/or <em>04.memory2.c</em>. 
Then compile code using: <code>gcc -g -o test [file.c]</code>, and run <em>valgrind</em> command to check for memory problems: 
<pre>
<code>valgrind ./test</code>
</pre>
Continue fixing the code until no more errors can be identified by <em>valgrind</em>.

-----

## Strings 
**[05.strings1.c]** [20 points]

Given a string *source*, function ***insert(dest, source, c1, c2)*** adds a copy of char *c2* after each instance of char *c1* in* source* and produces a new string in *dest*.

Write the body of the *insert()* function in file <em>05.strings1.c</em>.

In the main, when you are calling the *insert()* function, allocate enough space for *dest* to accommodate the newly inserted characters.


<pre>
```
Sample Input:
char* sample[6] = "malma";
char *result[11];
insert(result, sample, 'm', 'o');
printf("%s", result);

Output:
moalmoa
```
</pre>

**[06.strings2.c]** [20 points]

Write a function to add extra blanks to the right end of a string to make it at least length *n*. If the string is already *n* characters or longer, do not change the string. Assume the function signature is
`void pad_right(char a[], int n);` and *a* has enough space to hold *n*+1 characters.

-----

## Structs 
**[07.08.structs1_2.c]** [10 points each]

Given a definition of a *Point*, define a type *Rect* for rectangles that are parallel to the axes in a Cartesian coordinate system. Represent a rectangle by its lower left and upper right endpoints using the Point type above.
* Write a function *RECTarea()* that computes the area of a rectangle.
* Write a function that returns 1 if a point falls within a rectangle, 0 otherwise. Use the *Point* and *Rect* types above.

-----

## Files 
**[09.files1.c]** [20 points]

Write a program which takes a single command-line argument, which is the name of a text file. The program should open the file, and replace every occurrence of the character 'a' (but not 'A') with the character 'Z', leaving all other characters unchanged.

Example run, if the program is called *replacer*:

```
> echo "All sunshine and rainbows :)" > data.txt
> replacer data.txt
> cat data.txt
All sunshine Znd rZinbows :)
```

You  may not read in more than one character from the file at a time, and in particular do not try to read in the      whole file as a single string, as it may be extremely large. You may not use any other files. We are looking for how  you use multiple reads, writes, and seeks with the file to accomplish this task by changing the existing file.

You must use binary I/O commands in your program. To open file in an update mode use `fp = fopen(file_name, "rb+");`.

Do not perform error-checking: you may assume that a readable and writable text file with the name given as the argument always exists.


**[10.files2.c]** [20 points]

In the previous program, you were instructed that you must use binary I/O. Could the program have been written using character I/O statements? Write your answer in the comments in file <em>10.files2.c</em>. 

If you answered yes, change your solution to use character I/O. 

If you answered no, explain why the problem could not be solved using character I/O.

-----

## Linked lists 
**[11.linkedlists1.c]** [20 points]

Write code to partition a given linked list around a value *x*, such that all nodes less than *x* come before all nodes greater than or equal to x. Your **partition(Node *old_list, int x)** function should return a new list with the above property. The *old_list* should remain unchanged.


**[12.linkedlists2.c]** [20 points]

Write a function that adds a new element on top of the list. The function should be of type *void*.


-----
## Fork, pipe 
**[13.fork1.c]** [10 points]

Inside the file <em>12.fork1.c</em>, in the comments, answer the following question about the program: what is the program doing? 

Compile and run the program. Is there something wrong with it? If yes, fix it.


**[14.fork2.c]** [10 points]

Read code in file *14.fork2.c*.

* How many processes in total are created during the run of this program?
* Draw process diagram in form of pairs: parent pid -> child pid


-----
## Signals, sockets 
**[15.signals1.c]** [10 points]

Write a program that prints its process id, and then runs an infinite loop. The program should count the number of *SIGUSR1* signals received from the shell (`kill -USR1 pid`). When the program receives a *SIGINT* signal, it prints the total number of times it received *SIGUSR1* signal and then exits.


**[16.signals2.c]** [10 points]

The server uses the *accept* system call to establish a connection with a client. The prototype of the system call is

`int accept(int sockfd, struct sockaddr *client, socklen_t *addrlen);`

It both takes in a file descriptor and returns a file descriptor. 

Inside the file, in the comments, answer the following question: What is the purpose of the file descriptor it returns - i.e., how is it used by the server process? 

Based on your understanding, check the use of FD1 and FD2 file descriptors in file <em>16.signals2.c</em>, and if there is something wrong with the code, fix it.

-----

## Sorting 
**[17-18.sorting1_2.c]** [10 points each]

Using `qsort()` and function pointers, sort an array of students first by the last, then by the first name.


Write a function that uses sorting to produce a list of top-n students according to their gpa. 

-----

## Bits

**[19.bits1.c]** [10 points]

Code a program that takes a single unsigned char as a parameter and rotates the bit values so that the new value has the same bits set from left to right rather than from right to left. For example, if the original value is 01010011 (83), the output is 11001010 (202). Recall that char is an integral type and can be specified using numbers.


**[20.bits2.c]** [10 points]

Write a function ***set(char  val, int bhigh, int blow)*** that sets bits from bhigh...blow to all 1's, while leaving the remaining bits unchanged. The position count starts from the least significant bit (from right to left).


