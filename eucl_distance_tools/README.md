# Tools for computing Euclidean distance
### Exercise 7
An Euclidean distance between two points A(x1,y1) and B(x2,y2) in a 2-dimensional plane is defined as:
<code>dist(A,B) = sqrt [(x1-x2)^2 + (y1-y2)^2]</code>.

In this exercise you will delegate the task of computing Euclidean distance to 3 separate unix-like tools.
The input is read from the standard input as a line containing 4 comma-separated integer coordinates:
<code>x1,y1,x2,y2</code>.

The tools that you create should be applied in a sequence:
* <code>delta</code>: this will compute <code>(x1-x2)^2</code>, and <code>(y1-y2)^2</code> - and output them as a pair of comma-separated integers.
* <code>sum</code>: this will add up 2 comma-separated integers and output a single number.
* <code>sqrt</code>: will take a square root of a single number and output it to the standard output.

Compile your code by running <code>make</code>.

To test your work try the following 2 ways of providing standard input:

1. Keybord input:

<code>./delta | ./sum | ./sqrt</code>

Enter <code>1,2,0,0</code>

The result should be: 2.236068


2. Standard input from file:
<code>./delta < test.txt | ./sum | ./sqrt</code>

The result should be:

2.236068

4.000000

5.000000





