#include "../include/checksum.h"
#include "test_utils.h"

int test_no = 0;
enum status result = 0; 
int total_passed = 0;

char err_buffer[MAX_ERR_LENGTH];


int main(){
	fprintf(stderr, "Testing checksum\n");
	
	//1. -1 checksum
	int A1[10] = { 5, 6, 7, 7, 1, 1, 7, 7, 9, 9 };
	test_no++;
	result = t_assert (1, checksum(A1,10),err_buffer);
	if (result == PASS)
		total_passed ++;
	else
		t_error (test_no, err_buffer);
	
	test_no++;
	//2. 75 checksum
	int A2[10] = { 1, 12, 56, 89, 12, 12, 45, 88, 12, 0};
	result = t_assert (75, checksum(A2,10),err_buffer);
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