#include "../include/fib.h"
#include "test_utils.h"

int test_no = 0;
enum status result = 0; 
int total_passed = 0;

char err_buffer[MAX_ERR_LENGTH];

int main(){
	
	fprintf(stderr, "Testing Fibonacci sequences\n");
	
	
	//1. sequence of n=3: {0, 1, 1}
	test_no++;
	int n1 = 3;
	
    int **fib1 = malloc(sizeof(int *));
	
	*fib1 = NULL;
	int res1[3] = {0, 1, 1};
	fib (fib1, n1);
	
	
	result = t_assert_array ( *fib1, res1,  n1, err_buffer);
	if (result == PASS)
		total_passed ++;
	else
		t_error (test_no, err_buffer);
	
	
	//2. sequence of n = 1 {0} 
	test_no++;
	int n2 = 1;
    int **fib2 = malloc(sizeof(int *));
	*fib2 = NULL;
	int res2[1] = {0};
	fib (fib2, n2);	
	
	result = t_assert_array ( *fib2,res2,  n2, err_buffer);
	if (result == PASS)
		total_passed ++;
	else
		t_error (test_no, err_buffer);	
	
	
	//3. sequence of n=2 {0, 1}     
	test_no++;
	int n3 = 2;
    int **fib3 = malloc(sizeof(int *));
	*fib3 = NULL;
	int res3[2] = {0, 1};
	fib (fib3, n3);	
	
	result = t_assert_array ( *fib3,res3,  n3, err_buffer);
	if (result == PASS)
		total_passed ++;
	else
		t_error (test_no, err_buffer);	
	
	//4. sequence of n=10: {0, 1, 1, 2, 3, 5, 8, 13, 21, 34}
	test_no++;
	int n4 = 10;
    int **fib4 = malloc(sizeof(int *));
	*fib4 = NULL;
	int res4[10] = {0, 1, 1, 2, 3, 5, 8, 13, 21, 34};
	fib (fib4, n4);	
	
	result = t_assert_array ( *fib4, res4,  n4, err_buffer);
	if (result == PASS)
		total_passed ++;
	else
		t_error (test_no, err_buffer);
	
	if (total_passed == test_no)
		fprintf(stderr, "ALL PASSED\n");
	else	
		fprintf(stderr, "Passed %d out of %d tests\n", total_passed, test_no);	

	
}