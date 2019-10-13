# W8. Pipe exercise [in-class]
In the previous worksheet, we wrote a program that forked one child for each command line argument. The child computes the length of the command line argument and exits with that integer as the return value. The parent sums these return codes and reports the total length of all the command line arguments together. 

For this worksheet, we will do the same program except that each child will communicate the length to the parent through a pipe.

After you are done, test your program:
<code>
./pipe_exercise divide the load 
</code>

It should print: "The length of all the args is 13".