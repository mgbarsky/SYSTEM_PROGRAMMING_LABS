#include "../include/largest.h"
#include "test_utils.h"

int test_no = 0;
enum status result = 0; 
int total_passed = 0;

char err_buffer[MAX_ERR_LENGTH];

int main(){
	fprintf(stderr, "Testing pointer to the largest element\n");
	int *ptr = NULL;
	

	//1. numbers[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, <b>10</b>}->10   
	int numbers1[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
	int **ptr1 = malloc(sizeof(int **));
	*ptr1 = malloc(sizeof(int *));
	set_largest_ptr (numbers1, 10, ptr1);
	
	test_no++;
	ptr = &numbers1[9];
	
	result = t_assert_ptr ( (void *)ptr, (void *)(*ptr1), err_buffer);
	if (result == PASS)
		total_passed ++;
	else
		t_error (test_no, err_buffer);
	
	
	//2. numbers[10] = {<b>5</b>, 5, 5, 5, 5, 5, 5, 5, 5, 5}</tt> -> 5       
	int numbers2[10] = {5, 5, 5, 5, 5, 5, 5, 5, 5, 5};
	int **ptr2 = malloc(sizeof(int **));
	*ptr2 = malloc(sizeof(int *));
	set_largest_ptr (numbers2, 10, ptr2);
	
	test_no++;
	ptr = &numbers2[0];
	
	result = t_assert_ptr ((void *)ptr, (void *)(*ptr2), err_buffer);
	if (result == PASS)
		total_passed ++;
	else
		t_error (test_no, err_buffer);
	
	
	//3. numbers[9] = {6, 4, 2, 4, 10, 9, 3, 2, 10}   
	int numbers3[9] = {6, 4, 2, 4, 10, 9, 3, 2, 10};
	int **ptr3 = malloc(sizeof(int **));
	*ptr3 = malloc(sizeof(int *));
	set_largest_ptr (numbers3, 9, ptr3);
	
	test_no++;
	ptr = &numbers3[4];
	
	result = t_assert_ptr ( (void *)ptr, (void *)(*ptr3), err_buffer);
	if (result == PASS)
		total_passed ++;
	else
		t_error (test_no, err_buffer);
	
	
	//4. numbers[10] = {1, 0, 0, 0, 0, 0, 0, 0, 0, 1}  
	int numbers4[10] = {1, 0, 0, 0, 0, 0, 0, 0, 0, 1} ;
	int **ptr4 = malloc(sizeof(int **));
	*ptr4 = malloc(sizeof(int *));
	set_largest_ptr (numbers4, 10, ptr4);
	
	test_no++;
	ptr = &numbers4[0];
	
	result = t_assert_ptr ( (void *)ptr, (void *)(*ptr4), err_buffer);
	if (result == PASS)
		total_passed ++;
	else
		t_error (test_no, err_buffer);
	
	//5. numbers[10] = {4, 3, 2, 1, 1, 1, 9, 3, 2, 3}    
	int numbers5[10] = {4, 3, 2, 1, 1, 1, 9, 3, 2, 3} ;
	int **ptr5 = malloc(sizeof(int **));
	*ptr5 = malloc(sizeof(int *));
	set_largest_ptr (numbers5, 10, ptr5);
	
	test_no++;
	ptr = &numbers5[6];
	
	result = t_assert_ptr ( (void *)ptr, (void *)(*ptr5), err_buffer);
	if (result == PASS)
		total_passed ++;
	else
		t_error (test_no, err_buffer);
	
	if (total_passed == test_no)
		fprintf(stderr, "ALL PASSED\n");
	else	
		fprintf(stderr, "Passed %d out of %d tests\n", total_passed, test_no);	

	
}