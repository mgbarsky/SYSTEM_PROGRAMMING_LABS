#include "../include/invest.h"
#include "test_utils.h"

int test_no = 0;
enum status result = 0; 
int total_passed = 0;

char err_buffer[MAX_ERR_LENGTH];

int main(){
	fprintf(stderr, "Testing invest function\n");
	
	//1. testcase 1 : 100 1.4 -> 140.00 
	double p1 = 100;	
	double i1 = 1.4;	
	
	double r1 = invest(p1,i1);	
	
	test_no++;
	result = t_assert_double ( 140.0, r1, err_buffer);
	if (result == PASS)
		total_passed ++;
	else
		t_error (test_no, err_buffer);
	
	
	//2. testcase 2 : 50 0.9 -> 45.00   
	double p2 = 50;
	double i2 = 0.9;	
	
	double r2 = invest(p2,i2);	
	
	test_no++;
	result = t_assert_double ( 45.0, r2, err_buffer);
	if (result == PASS)
		total_passed ++;
	else
		t_error (test_no, err_buffer);
	
	//3. testcase 3: : 99.57 1.0 -> 99.57
	double p3 = 99.57;
	double i3 = 1.0;	
	
	double r3 = invest(p3,i3);	
	
	test_no++;
	result = t_assert_double ( 99.57, r3, err_buffer);
	if (result == PASS)
		total_passed ++;
	else
		t_error (test_no, err_buffer);
	
	if (total_passed == test_no)
		fprintf(stderr, "ALL PASSED\n");
	else	
		fprintf(stderr, "Passed %d out of %d tests\n", total_passed, test_no);	

	
}