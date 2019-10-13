# Roots of quadratic equation: linux style
## <code>scanf, stdin, stdout</code>
### Exercise 20

The roots of quadratic equation <code>ax<sup>2</sup>+bx+c=0</code> are computed with the following formula:

<code>x<sub>1,2</sub> = (-b +- sqrt(D))/2a</code>,

where D is a discriminant and is computed as:

<code>D = b<sup>2</sup> - 4ac</code>.

Depending on the value of D, the equation has either 2, 1, or 0 roots.


In this exercise you will delegate the task of computing the roots of a quadratic equation into 2 separate unix-like tools.

The input is read from the standard input as a line containing 3 comma-separated equation coefficients:
<code>a,b,c</code>.

The tools that you create should be applied in a sequence:
* <code>discriminant</code>: this will compute the value of D and output it to standard output, together with a and b.
* <code>roots</code>: based on the result of discriminant and values of a and b, this will produce 1 or 2 roots of an equation or a message that there is no solution, and output the result to the standard output.

Compile your code by running <code>make</code>.

To test your work try the following 2 ways of providing standard input:

1.Keybord input:

<code>./discriminant | ./roots </code>

Enter <code>2,0,-72</code> and hit Ctrl+D for the end-of-file.

The result should be: -6,6


2.Standard input from file:
<code>./discriminant < test.txt | ./roots</code>

The result should be:

-2,-3

2,-0.5

-8,8

