#include "../include/truncate.h"
#include "test_utils.h"

int test_no = 0;
enum status result = 0; 
int total_passed = 0;

char err_buffer[MAX_ERR_LENGTH];

int main(){
	fprintf(stderr, "Testing function truncate\n");
	char buffer[50];
	int retval;
	
	//1. provided example : 3 5 function fun -> Correct
	test_no++;
	char str1[] = "function";
	char expected1[] = "fun";
	strncpy(buffer, str1, strlen(str1));
    buffer[strlen(str1)] = '\0';
	
	retval = truncate (buffer, 3);	
	
	result = t_assert_str ( expected1, buffer, err_buffer);
	if (result == PASS)
		total_passed ++;
	else
		t_error (test_no, err_buffer);
	test_no++;
	result = t_assert ( 5, retval, err_buffer);
	if (result == PASS)
		total_passed ++;
	else
		t_error (test_no, err_buffer);
	
	//2. truncate nothing : 6 0 apples apples -> Correct
	test_no++;
	char str2[] = "apples";
	char expected2[] = "apples";
	strncpy(buffer, str2, strlen(str2));
    buffer[strlen(str2)] = '\0';
	
	retval = truncate (buffer, 6);	
	
	result = t_assert_str ( expected2, buffer, err_buffer);
	if (result == PASS)
		total_passed ++;
	else
		t_error (test_no, err_buffer);
	test_no++;
	result = t_assert ( 0, retval, err_buffer);
	if (result == PASS)
		total_passed ++;
	else
		t_error (test_no, err_buffer);
	
	//3. remove final character : 5 1 apples apple -> Correct
	test_no++;
	char str3[] = "apples";
	char expected3[] = "apple";
	strncpy(buffer, str3, strlen(str3));
    buffer[strlen(str3)] = '\0';
	
	retval = truncate (buffer, 5);	
	
	result = t_assert_str ( expected3, buffer, err_buffer);
	if (result == PASS)
		total_passed ++;
	else
		t_error (test_no, err_buffer);
	test_no++;
	result = t_assert ( 1, retval, err_buffer);
	if (result == PASS)
		total_passed ++;
	else
		t_error (test_no, err_buffer);
	
	
	//4. truncate at index 1 : 1 7 potatoes p -> Correct
	test_no++;
	char str4[] = "potatoes";
	char expected4[] = "p";
	strncpy(buffer, str4, strlen(str4));
    buffer[strlen(str4)] = '\0';
	
	retval = truncate (buffer, 1);	
	
	result = t_assert_str ( expected4, buffer, err_buffer);
	if (result == PASS)
		total_passed ++;
	else
		t_error (test_no, err_buffer);
	test_no++;
	result = t_assert ( 7, retval, err_buffer);
	if (result == PASS)
		total_passed ++;
	else
		t_error (test_no, err_buffer);
	
	
	if (total_passed == test_no)
		fprintf(stderr, "ALL PASSED\n");
	else	
		fprintf(stderr, "Passed %d out of %d tests\n", total_passed, test_no);	

	
}