# Array lab: palindrome 
### Exercise 5

Implement the body of the function <code>create_palindrome (int *A, int size, int *B)</code> in file src/palindrome.c, where <code>A</code> is an array of integers and has length <code>size</code>, and <code>B</code> is an integer array twice as long as <code>A</code>.  

Set values in <code>B</code> such that every element of <code>A</code> appears twice in <code>B</code>: once in its original position, and a second time in the second half of <code>B</code>. 
The new occurrence should be the same distance from the end of <code>B</code> as the first occurrence was from the beginning. 

For example,
if <code>A</code> is the array {1, 2, 5, 7}, then <code>B</code> will be {1, 2, 5, 7, 7, 5, 2, 1}.


