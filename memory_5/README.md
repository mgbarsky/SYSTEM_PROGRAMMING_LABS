# Memory: 5
### Memory exercise 

Read code in file main.c, and identify the problem with memory. 

Then compile code using:
<code>gcc -g -o test main.c</code>

And run valgrind command to check for memory problems:
<code>valgrind --tool=memcheck ./test</code>

Continue fixing the code until no more errors can be identified by valgrind.


