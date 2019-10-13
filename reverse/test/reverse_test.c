#include "../include/reverse.h"
#include "test_utils.h"

int test_no = 0;
enum status result = 0; 
int total_passed = 0;

char err_buffer[MAX_ERR_LENGTH];

int main(){
	fprintf(stderr, "Testing function reverse names\n");
	char buffer[50];

	//1. "John Smith" "Smith John"
	test_no++;
	char src1[] = "John Smith";
	char expected1[] = "Smith John";
	
	reverse_name (src1, buffer);
		
	result = t_assert_str ( buffer, expected1, err_buffer);
	if (result == PASS)
		total_passed ++;
	else
		t_error (test_no, err_buffer);
	
	
	//1. "Jane Doe" "Doe Jane" -
	test_no++;
	char src2[] = "Jane Doe";
	char expected2[] = "Doe Jane";
	
	reverse_name (src2, buffer);
		
	result = t_assert_str ( buffer, expected2, err_buffer);
	if (result == PASS)
		total_passed ++;
	else
		t_error (test_no, err_buffer);
	
	
	if (total_passed == test_no)
		fprintf(stderr, "ALL PASSED\n");
	else	
		fprintf(stderr, "Passed %d out of %d tests\n", total_passed, test_no);	

	
}