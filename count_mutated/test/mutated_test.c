#include "../include/mutated.h"
#include "test_utils.h"

int test_no = 0;
enum status result = 0; 
int total_passed = 0;

char err_buffer[MAX_ERR_LENGTH];


int main(){
	fprintf(stderr, "Testing mutation counting program\n");
	
	//1. test case 1 : TestOne -> 0      
	char A1[8] = {'T','e','s','t','O','n','e','\0'};	
	test_no++;
	
	result = t_assert ( 0, count_mutated(A1, 8), err_buffer);
	if (result == PASS)
		total_passed ++;
	else
		t_error (test_no, err_buffer);
	
	//2. string of length 1 that changes : m -> 1   
	char A2[2] = {'m','\0'};	
	test_no++;
	
	result = t_assert ( 1, count_mutated(A2, 2), err_buffer);
	if (result == PASS)
		total_passed ++;
	else
		t_error (test_no, err_buffer);
	
	//3. length 1 that does not change : N -> 0   
	char A3[2] = {'N','\0'};	
	test_no++;
	
	result = t_assert ( 0, count_mutated(A3, 2), err_buffer);
	if (result == PASS)
		total_passed ++;
	else
		t_error (test_no, err_buffer);
	
	//4. long test case with multiple values changed : ALPHABETsoup -> 4   
	char A4[13] = {'A','L','P','H','A','B','E','T','s','o','u','p','\0'};	
	test_no++;
	
	result = t_assert ( 4, count_mutated(A4, 13), err_buffer);
	if (result == PASS)
		total_passed ++;
	else
		t_error (test_no, err_buffer);
	
	if (total_passed == test_no)
		fprintf(stderr, "ALL PASSED\n");
	else	
		fprintf(stderr, "Passed %d out of %d tests\n", total_passed, test_no);
	
	

	

	
}