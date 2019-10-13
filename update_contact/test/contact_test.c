#include "../include/contact.h"
#include "test_utils.h"

int test_no = 0;
enum status result = 0; 
int total_passed = 0;

char err_buffer[MAX_ERR_LENGTH];

int main(){
	fprintf(stderr, "Testing function update_contact\n");
	
	struct contact friend;
    
	// set initial values for friend
    strcpy(friend.name, "Jane Doe");
    friend.phone_number = 377177377;
    strcpy(friend.address, "3771 University Avenue");
	
	
    int number;

	
	//1. "Jane Deer" 1337331337 "1337 University Avenue"
	test_no++;
	char name1[] = "Jane Deer";
	char address1[] = "1337 University Avenue";
	number = 1337331337;
	
	char expected1[] = "Jane Deer,1337331337,1337 University Avenue";
	update_contact(&friend, name1, number, address1);
	
	
	result = t_assert_str ( expected1, contact_tostr(&friend), err_buffer);
	if (result == PASS)
		total_passed ++;
	else
		t_error (test_no, err_buffer);
	
	//2. "John Doe" 12345678 "100 Percent Road"
	test_no++;
	char name2[] = "John Doe";
	char address2[] = "100 Percent Road";
	number = 12345678;
	
	char expected2[] = "John Doe,12345678,100 Percent Road";
	update_contact(&friend, name2, number, address2);
	
	
	result = t_assert_str ( expected2, contact_tostr(&friend), err_buffer);
	if (result == PASS)
		total_passed ++;
	else
		t_error (test_no, err_buffer);
	
	//3. "Unknown" 5 "70th Street"
	test_no++;
	char name3[] = "Unknown";
	char address3[] = "70th Street";
	number = 5;
	
	char expected3[] = "Unknown,5,70th Street";
	update_contact(&friend, name3, number, address3);
	
	
	result = t_assert_str ( expected3, contact_tostr(&friend), err_buffer);
	if (result == PASS)
		total_passed ++;
	else
		t_error (test_no, err_buffer);
	
	
	if (total_passed == test_no)
		fprintf(stderr, "ALL PASSED\n");
	else	
		fprintf(stderr, "Passed %d out of %d tests\n", total_passed, test_no);	

	
}