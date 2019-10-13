#include "../include/palindrome.h"
#include "test_utils.h"

int test_no = 0;
enum status result = 0; 
int total_passed = 0;

char err_buffer[MAX_ERR_LENGTH];


int main(){
	fprintf(stderr, "Testing array palindrome\n");
	
	//1. single element : 1 5 -> A: 5 B: 5 5   
	int A1[1] = { 5 };
	int B1[2];
	int expected1[2] = { 5, 5};
	
	test_no++;
	create_palindrome(A1, 1, B1);
	result = t_assert_array ( B1, expected1, 2, err_buffer);
	if (result == PASS)
		total_passed ++;
	else
		t_error (test_no, err_buffer);
	
	//2. two distinct elements : 2 7 -3 -> A: 7 -3 B: 7 -3 -3 7   
	int A2[2] = { 7, -3 };
	int B2[4];
	int expected2[4] = { 7, -3, -3, 7};
	
	test_no++;
	create_palindrome(A2, 2, B2);
	result = t_assert_array ( B2, expected2, 4, err_buffer);
	if (result == PASS)
		total_passed ++;
	else
		t_error (test_no, err_buffer);
	
	//3. many elements, one doubled : 5 1 4 3 3 2 -> A: 1 4 3 3 2 B: 1 4 3 3 2 2 3 3 4 1
	int A3[5] = { 1,4,3,3,2 };
	int B3[10];
	int expected3[10] = { 1, 4, 3, 3, 2, 2, 3, 3, 4, 1};
	
	test_no++;
	create_palindrome(A3, 5, B3);
	result = t_assert_array ( B3, expected3, 10, err_buffer);
	if (result == PASS)
		total_passed ++;
	else
		t_error (test_no, err_buffer);
	
	if (total_passed == test_no){
        fprintf(stderr, "ALL PASSED\n");
        return 0;
    }
    else	
        fprintf(stderr, "Passed %d out of %d tests\n", total_passed, test_no);
	
	
    return 1;

	

	
}