#include "../include/names.h"
#include "test_utils.h"

int test_no = 0;
enum status result = 0; 
int total_passed = 0;

char err_buffer[MAX_ERR_LENGTH];

int main(){
	fprintf(stderr, "Testing name combiner\n");
	
	//1. Single name and single family name
	test_no++;
	char ** result1 = malloc (sizeof(char **));
	char fnames1[] = "Alice";
	char lnames1[] = "Chang";
	
	combine (&result1, fnames1, lnames1);
	char *expected[1];	
	expected[0] = "Alice Chang";
	
	result = t_assert_array_strings ( result1, expected,  1, err_buffer);
	if (result == PASS)
		total_passed ++;
	else
		t_error (test_no, err_buffer);
	
	
	//2. Two names
	test_no++;
	char ** result2 = malloc (sizeof(char **));
	char fnames2[] = "Alice,Bob";
	char lnames2[] = "Chang,Ford";
	
	combine (&result2, fnames2, lnames2);
	char *expected2[2];	
	expected2[0] = "Alice Chang";
	expected2[1] = "Bob Ford";
	
	result = t_assert_array_strings ( result2, expected2,  2, err_buffer);
	if (result == PASS)
		total_passed ++;
	else
		t_error (test_no, err_buffer);
	
	
	//3. Many names
	test_no++;	
	char ** result3 = malloc (sizeof(char **));
	char fnames3[] = "Roberta,Marc,Chris,Steven,Julie,Robert,Bjarni";
	char lnames3[] = "Bondar,Garneau,Hadfield,MacLean,Payette,Thirsk,Tryggvason";
	char *expected3[7] = {"Roberta Bondar", "Marc Garneau", "Chris Hadfield", 
		"Steven MacLean", "Julie Payette", "Robert Thirsk", "Bjarni Tryggvason"};
		
	combine (&result3, fnames3, lnames3);
	
	
	result = t_assert_array_strings ( result3, expected3,  7, err_buffer);
	if (result == PASS)
		total_passed ++;
	else
		t_error (test_no, err_buffer);
	
	if (total_passed == test_no)
		fprintf(stderr, "ALL PASSED\n");
	else	
		fprintf(stderr, "Passed %d out of %d tests\n", total_passed, test_no);	

	
}