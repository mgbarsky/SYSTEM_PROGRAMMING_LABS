# Implementing stack
### Exercise 13
A <a href="https://en.wikipedia.org/wiki/Stack_(abstract_data_type)">stack</a> is a data structure with two core operations: push and pop.

The <tt>push()</tt> operation adds a new element to the "top" of the stack, while the <tt>pop()</tt> operation removes and returns the "top-most" element from the stack. What this means, then, is that newer elements of a stack will always be "on top" of previously-added elements, as illustrated in the diagram below:

![Stack example](https://src-code.simons-rock.edu/git/mbarsky/stack/src/master/stack.jpg)


In C, you can use a linked list to implement a stack -- new nodes are <i>pushed</i> to the front of the linked list, and <i>popping</i> from the linked list means removing and returning the head of the list. In other words, the head of a linked list represents the top of a stack.

Your task is to implement the push and pop operations in file src/stack.c, according to their declarations.


