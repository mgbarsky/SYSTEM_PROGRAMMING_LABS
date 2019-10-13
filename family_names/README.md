# Combining names
### Exercise 15

Your friend really needs your help. He has two lists of names -- one with first names, and one with last names -- and  he needs a new list containing their full names.

You tell him to send you the names and that you'll take care of it, since you're such a savvy programmer and love your friends oh-so-much.

Your friend finally sends you the lists on separate lines in an e-mail:

<tt>"Roberta,Marc,Chris,Steven,Julie,Robert,Bjarni"</tt>

<tt>"Bondar,Garneau,Hadfield,MacLean,Payette,Thirsk,Tryggvason"</tt>

(There's also a note that says his space bar was broken when typing the list, but that's unimportant.)

In file src/names.c write a function <tt>combine()</tt> that takes in two strings as input and creates an array of strings whose contents are the combination of the first and last name with a space in-between. This array is placed into a string array address passed as the first parameter to <tt>combine()</tt>. The space for it should be dynamically allocated inside the function. You need to determine how many strings to store by counting how many separate tokens are in the first names string. You may assume that each separate string is no more than 50 characters long, including null terminator.

For the example above, <tt>combine()</tt> should return an array containing the following elements:

<tt>"Roberta Bondar", "Marc Garneau", "Chris Hadfield", "Steven MacLean", "Julie Payette", "Robert Thirsk", "Bjarni Tryggvason"</tt>

You may write helper functions, and may assume that there will always be at least one name in each string.

For every first name given, there is guaranteed to be exactly one last name to add to it.

[Hint]: use <tt>strchr</tt> or <tt>strtok</tt>.


