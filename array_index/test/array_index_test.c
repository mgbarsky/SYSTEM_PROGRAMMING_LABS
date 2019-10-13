#include "../include/array_index.h"
#include "test_utils.h"

int test_no = 0;
enum status result = 0; 
int total_passed = 0;

char err_buffer[MAX_ERR_LENGTH];


int main(){
	fprintf(stderr, "Testing array index\n");
	
	//1. no values and indices the same
	int A1[5] = { 4, 54, -16, 5, 99 };
	test_no++;
	result = t_assert (0, equal_index(A1,5),err_buffer);
	if (result == PASS)
		total_passed ++;
	else
		t_error (test_no, err_buffer);
	
	test_no++;
	//2. all 4 indices the same 
	int A2[4] = { 0, 1, 2, 3};
	result = t_assert (4, equal_index(A2,4),err_buffer);
	if (result == PASS)
		total_passed ++;
	else
		t_error (test_no, err_buffer);
	
	test_no++;
	//3. matches at 0 and 4
	int A3[5] = { 0, 9, 9, 9, 4 };
	result = t_assert (2, equal_index(A3,5),err_buffer);
	if (result == PASS)
		total_passed ++;
	else
		t_error (test_no, err_buffer);
	
	test_no++;
	//4. array of length 1 with match
	int A4[1] = { 0 };
	result = t_assert (1, equal_index(A4,1),err_buffer);
	if (result == PASS)
		total_passed ++;
	else
		t_error (test_no, err_buffer);
	
	test_no++;
	//5. ff-by-one 
	int A5[3] = { 1, 2, 3 };
	result = t_assert (0, equal_index(A5,3),err_buffer);
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