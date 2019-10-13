#include "../include/sum_line.h"
#include "test_utils.h"

int test_no = 0;
enum status result = 0; 
int total_passed = 0;

char err_buffer[MAX_ERR_LENGTH];

int main(){
	fprintf(stderr, "Testing sum_line function\n");
	
	//1. Single-digit numbers, a single space and no leading or trailing spaces : "3 6" -> 9   
	char * line1 = "3 6";
	int sum1 = sum_line(line1);
	
	test_no++;
	result = t_assert ( 9, sum1, err_buffer);
	if (result == PASS)
		total_passed ++;
	else
		t_error (test_no, err_buffer);
	
	
	//2. Multiple-digit numbers but no more spaces : "654 11" -> 665       
	char * line2 = "654 11";
	int sum2 = sum_line(line2);
	
	test_no++;
	result = t_assert ( 665, sum2, err_buffer);
	if (result == PASS)
		total_passed ++;
	else
		t_error (test_no, err_buffer);
	
	
	//3. Negative numbers : "-54 -62" -> -116    
	char * line3 = "-54 -62";
	int sum3 = sum_line(line3);
	
	test_no++;
	result = t_assert ( -116, sum3, err_buffer);
	if (result == PASS)
		total_passed ++;
	else
		t_error (test_no, err_buffer);
	
	
	//4. Leading spaces : " 111 44" -> 155   
	char * line4 = " 111 44";
	int sum4 = sum_line(line4);
	
	test_no++;
	result = t_assert ( 155, sum4, err_buffer);
	if (result == PASS)
		total_passed ++;
	else
		t_error (test_no, err_buffer);
	
	//5. Trailing spaces : "39 58 " -> 97     
	char * line5 = "39 58 ";
	int sum5 = sum_line(line5);
	
	test_no++;
	result = t_assert ( 97, sum5, err_buffer);
	if (result == PASS)
		total_passed ++;
	else
		t_error (test_no, err_buffer);
	
	
	//6. Multiple spaces between : " 14 97 " -> 111      
	char * line6 = " 14  97 ";
	int sum6 = sum_line(line6);
	
	test_no++;
	result = t_assert ( 111, sum6, err_buffer);
	if (result == PASS)
		total_passed ++;
	else
		t_error (test_no, err_buffer);
	
	//7. Large numbers : " 123456789 11223344 " -> 134680133     
	char * line7 = " 123456789 11223344 ";
	int sum7 = sum_line(line7);
	
	test_no++;
	result = t_assert ( 134680133, sum7, err_buffer);
	if (result == PASS)
		total_passed ++;
	else
		t_error (test_no, err_buffer);
	
	if (total_passed == test_no)
		fprintf(stderr, "ALL PASSED\n");
	else	
		fprintf(stderr, "Passed %d out of %d tests\n", total_passed, test_no);	

	
}