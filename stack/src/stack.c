#include "../include/stack.h"

void print_stack(Node *top) {
    Node *curr = top;
    while (curr) {
        printf("%d ", curr->value);
        curr = curr->next;
    }
    printf("\n");
}

/* Creates and returns a new Node with the supplied values. */
Node *create_node(int num, Node *next) {
    Node *new_node = malloc(sizeof(Node));
    new_node->value = num;
    new_node->next = next;
    return new_node;
}

char *stack_str (Node *top){
	char *retvalue = malloc(1024*sizeof(char));
    char buffer[1024];
    retvalue[0] = '\0';	
	
	if (top == NULL){
		strcat(retvalue, "-");
	}
	else {
		sprintf ( buffer, "%d", top->value );
        strcat(retvalue, buffer);
		Node *curr = top -> next;
		while (curr) {
			sprintf ( buffer, "-%d", curr->value );
            strcat(retvalue, buffer);
			curr = curr->next;
		}
	}    
	return retvalue;
}

/* Adds new_node to the top of stack. */
void push(Node *new_node, Node **stack) {
	
}

/* Removes and returns the top Node of a stack. */
Node *pop(Node **stack) {
	Node *retval = *stack;
	
	

	
	return retval;
}
