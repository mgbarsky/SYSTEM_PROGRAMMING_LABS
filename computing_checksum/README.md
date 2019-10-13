# Array lab: checksum
### Exercise 3

Complete the body of the function in file src/checksum.c. The function accepts an integer array named <code>command</code>. The size of the array is passed as variable <code>size</code>. The function computes a checksum of the command as described below, and returns it.

A checksum of an array is declared to be equal to the sum of the elements located at odd-numbered indices (1, 3, ...) minus the sum of the elements located at even-numbered indices (0, 2, ...). 

For example, the checksum of an array containing the elements {3, 2, 10, 5} is -6, and is calculated like so: (2 + 5) - (3 + 10).


