# Sum input line
### Exercise 10
In file src/sum_line.c write the body of the <tt>sum_line()</tt> function which returns the sum of two integers in the C-string <code>input_line</code>. <tt>input_line</tt> is a string containing two integers separated by one or more spaces.   

Assume that the string contains two integers separated only by whitespace. There may also be spaces before the first integer and/or after the last, but there won't be any other characters in the string.
   
For example, <code>get_sum("   123  5  ")</code> should return the integer 128, and <tt>get_sum("-14 30")</tt> should return the integer 16.
   
Hint: use <tt>strtol()</tt>.



