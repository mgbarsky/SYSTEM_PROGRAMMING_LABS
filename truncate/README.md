# Truncate

### Exercise 17

In file src/truncate.c write a function named <tt>truncate()</tt> that takes a string <em>s</em> and a non-negative integer <em>n</em>. 

If <em>s</em> has more than <em>n</em> characters (not including the null terminator), the function should truncate <em>s</em> at <em>n</em> characters and return the number of characters that were chopped off. If <em>s</em> has <em>n</em> or fewer characters, <em>s</em> is unchanged and the function returns 0. 

For example, if <em>s</em> is the string "function" and <em>n</em> is 3, then <tt>truncate()</tt> changes <em>s</em> to the string "fun" and returns 5.
