# Point to largest
### Exercise 11
In file src/largest.c implement function <tt>set_largest_ptr (int *A, int size, int **largest_ptr)</tt>. Given an array <tt>A</tt> of <tt>size</tt> integers, this functions sets the address stored in <tt>largest_ptr</tt> to point to the element with the largest value.

If two or more elements share the same largest value, the address in <tt>largest_ptr</tt> should point to the earliest instance of the value.

<b>Examples</b>
<i>- <tt>*largest_ptr</tt> should point to the <b>bolded</b> value in each array</i>
* <tt>A[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, <b>10</b>}</tt>
* <tt>A[10] = {<b>5</b>, 5, 5, 5, 5, 5, 5, 5, 5, 5}</tt>


