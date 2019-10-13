#include "../include/stack.h"
#include "test_utils.h"

int test_no = 0;
enum status result = 0; 
int total_passed = 0;

char err_buffer[MAX_ERR_LENGTH];

int main(){	
	int i;
    fprintf(stderr, "Testing stack implementation\n");


//1. stack 	4-3-2-1 push 0
	test_no++;
	fprintf (stderr, "Test 1. Created stack 4-3-2-1 - push 0\n");
	Node *top1 = NULL;
	
	// Create initial stack:
    int stack_elems = 4;
    int count = 4;
    Node * arr [stack_elems];
    
    for (int i=0; i<stack_elems; i++){
        arr[i] = malloc (sizeof(Node));
        arr[i]->value = count--;
        arr[i]->next = NULL;
    }   
	top1=arr[0];
    for (int i=0; i<stack_elems-1; i++){        
        arr[i]->next = arr[i+1];
    }
    print_stack(top1);
    
	Node *new1 = create_node(0, NULL);
	push(new1, &top1);
	print_stack(top1);
	result = t_assert_str ( "0-4-3-2-1", stack_str(top1), err_buffer);
	if (result == PASS)
		total_passed ++;
	else
		t_error (test_no, err_buffer);

	
//2. stack 	0-4-3-2-1 pop 0	
	test_no++;
	fprintf (stderr, "Test 2. Pop 0\n");
	pop (&top1);
	
	result = t_assert_str ( "4-3-2-1", stack_str(top1), err_buffer);
	if (result == PASS)
		total_passed ++;
	else
		t_error (test_no, err_buffer);
	
//3. empty stack - push 5
	test_no++;
	fprintf (stderr, "Test 3. Created empty stack - push 5\n");
	Node *top2 = NULL;
	Node *new2 = create_node(5, NULL);
	push(new2, &top2);
	
	result = t_assert_str ( "5", stack_str(top2), err_buffer);
	if (result == PASS)
		total_passed ++;
	else
		t_error (test_no, err_buffer);
	

//4. remove 5 making it empty
	test_no++;
	fprintf (stderr, "Test 4. popped 5 - to empty\n");
	pop (&top2);
	
	result = t_assert_str ( "-", stack_str(top2), err_buffer);
	if (result == PASS)
		total_passed ++;
	else
		t_error (test_no, err_buffer);
	

//5. pop from empty	
	test_no++;
	fprintf (stderr, "Test 5. pop from empty stack\n");
	pop (&top2);
	
	result = t_assert_str ( "-", stack_str(top2), err_buffer);
	if (result == PASS)
		total_passed ++;
	else
		t_error (test_no, err_buffer);
	
	
//6. stack 	1-2-3-4 push 5,6,7,8
	test_no++;
	fprintf (stderr, "Test 6. Created stack 1-2-3-4 - multiple push 5,6,7,8\n");
	Node *top3 = NULL;
	
	// Create initial stack:   
    count = 4;
    while (count > 0) {        
        top3 = create_node(count, top3);
        count--;
    }
	
	for (i=5; i< 9; i++){
		Node *new3 = create_node(i, NULL);
		push(new3, &top3);
	}
	
	result = t_assert_str ( "8-7-6-5-1-2-3-4", stack_str(top3), err_buffer);
	if (result == PASS)
		total_passed ++;
	else
		t_error (test_no, err_buffer);
	
//7. stack 	4-3-2-1 push 5, 6, pop, push 7, 8, 9, pop, pop
	test_no++;
	fprintf (stderr, "Test 7. Created stack 4-3-2-1 - push 5, 6, pop, push 7, 8, 9, pop, pop\n");
	
	
	new1 = create_node(5, NULL);
	push(new1, &top1);
	
	new1 = create_node(6, NULL);
	push(new1, &top1);
	
	pop (&top1);
	
	new1 = create_node(7, NULL);
	push(new1, &top1);
	
	new1 = create_node(8, NULL);
	push(new1, &top1);
	
	new1 = create_node(9, NULL);
	push(new1, &top1);
	
	pop (&top1);
	pop (&top1);
	
	result = t_assert_str ( "7-5-4-3-2-1", stack_str(top1), err_buffer);
	if (result == PASS)
		total_passed ++;
	else
		t_error (test_no, err_buffer);
	
	if (total_passed == test_no)
		fprintf(stderr, "ALL PASSED\n");
	else	
		fprintf(stderr, "Passed %d out of %d tests\n", total_passed, test_no);	

	return 0;
}