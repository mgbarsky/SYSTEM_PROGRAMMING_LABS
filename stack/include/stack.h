#ifndef STACK_H
#define STACK_H

#include <stdlib.h>
#include <stdio.h>
#include <string.h>

typedef struct node {
    int value;
    struct node *next;
} Node;

void print_stack(Node *top);

char *stack_str (Node *top);

/* Creates and returns a new Node with the supplied values. */
Node *create_node(int num, Node *next);

/* Adds new_node to the top of stack. */
void push(Node *new_node, Node **stack);

/* Removes and returns the top Node of a stack. */
Node *pop(Node **stack);

#endif