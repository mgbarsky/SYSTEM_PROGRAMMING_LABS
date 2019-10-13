#include "../include/phones.h"
#include "test_utils.h"

int test_no = 0;
enum status result = 0; 
int total_passed = 0;

char err_buffer[MAX_ERR_LENGTH];


int main(){
	fprintf(stderr, "Testing phone formatting\n");
	
	test_no++;
	//1. 416.967.1111 -> 416-967-1111
	char phone1[13]  = {'4','1','6','.','9','6','7','.','1','1','1','1','\0'};
	format_phone (phone1);
	if (t_assert_str("416-967-1111", phone1,err_buffer) == PASS)
		total_passed++;
	else
		t_error (test_no, err_buffer);
	
	
	test_no++;
	//2. 905.736.3636 -> 905-736-3636
	char phone2[13]  = {'9','0','5','.','7','3','6','.','3','6','3','6','\0'};
	format_phone (phone2);
	if (t_assert_str("905-736-3636", phone2,err_buffer) == PASS)
		total_passed++;
	else
		t_error (test_no, err_buffer);
	
	test_no++;
	//3. 946.828.3651 -> 946-828-3651
	char phone3[13]  = {'9','4','6','.','8','2','8','.','3','6','5','1','\0'};
	format_phone (phone3);
	if (t_assert_str("946-828-3651", phone3,err_buffer) == PASS)
		total_passed++;
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