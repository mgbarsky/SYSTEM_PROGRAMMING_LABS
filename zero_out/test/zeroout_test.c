#include "../include/zeroout.h"
#include "test_utils.h"

int test_no = 0;
enum status result = 0; 
int total_passed = 0;

char err_buffer[MAX_ERR_LENGTH];


int main(){
	fprintf(stderr, "Testing zero out function\n");
	
	//1. only two entries, first gets zeroed : 2 4.5 8.9 1 0 -> 0.0 8.9 0
	double A1[2] = { 4.5, 8.9 };
	int pos1[1] = {0};
	double expected1[2] = { 0.0, 8.9 };
	
	test_no++;
	zero_out(A1, 2, pos1, 1);
	result = t_assert_array_double ( A1, expected1, 2, err_buffer);
	if (result == PASS)
		total_passed ++;
	else
		t_error (test_no, err_buffer);
	
	//2. only two entries, second gets zeroed : 2 100.7 -5 1 1 -> 100.7 0.0 1
	double A2[2] = { 100.7, -5 };
	int pos2[1] = {1};
	double expected2[2] = { 100.7, 0.0 };
	
	test_no++;
	zero_out(A2, 2, pos2, 1);
	result = t_assert_array_double ( A2, expected2, 2, err_buffer);
	if (result == PASS)
		total_passed ++;
	else
		t_error (test_no, err_buffer);
	
	//3. only two entries, both get zeroed : 2 43.7 87.1 2 0 1 -> 0.0 0.0 0 1
	double A3[2] = { 43.7, 87.1 };
	int pos3[2] = {0, 1};
	double expected3[2] = { 0.0, 0.0 };
	
	test_no++;
	zero_out(A3, 2, pos3, 2);
	result = t_assert_array_double ( A3, expected3, 2, err_buffer);
	if (result == PASS)
		total_passed ++;
	else
		t_error (test_no, err_buffer);
	
	//4. only two entries, both zeroed, positions not sorted : 2 54.4 87 2 1 0 -> 0.0 0.0 1 0
	double A4[2] = { 54.4, 87 };
	int pos4[2] = {1, 0};
	double expected4[2] = { 0.0, 0.0 };
	
	test_no++;
	zero_out(A4, 2, pos4, 2);
	result = t_assert_array_double ( A4, expected4, 2, err_buffer);
	if (result == PASS)
		total_passed ++;
	else
		t_error (test_no, err_buffer);
	
	
	//5. many entries, some get zeroed : 5 2.4 3 89 -1 2.0 3 1 3 4 -> 2.4 0.0 89.0 0.0 0.0 1 3 4
	double A5[5] = { 2.4, 3, 89, -1, 2 };
	int pos5[3] = {1, 3, 4};
	double expected5[5] = { 2.4, 0.0, 89, 0.0, 0.0 };
	
	test_no++;
	zero_out(A5, 5, pos5, 3);
	result = t_assert_array_double ( A5, expected5, 5, err_buffer);
	if (result == PASS)
		total_passed ++;
	else
		t_error (test_no, err_buffer);
	
	
	//6. many entries, none get zeroed : 5 1.1 2.2 3.3 4.4 5.5 0 -> 1.1 2.2 3.3 4.4 5.5
	double A6[5] = { 1.1, 2.2, 3.3, 4.4, 5.5 };	
	double expected6[5] = { 1.1, 2.2, 3.3, 4.4, 5.5 };
	
	test_no++;
	zero_out(A6, 5, NULL, 0);
	result = t_assert_array_double ( A6, expected6, 5, err_buffer);
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