#include "../include/insert.h"
#include "test_utils.h"

int test_no = 0;
enum status result = 0; 
int total_passed = 0;

char err_buffer[MAX_ERR_LENGTH];

int main(){
	fprintf(stderr, "Testing function insert\n");
	char buffer[50];
	char c1, c2;
	
	//1. alpaca o u alpaca -> correct: alpaca
	test_no++;
	char str1[] = "alpaca";
	char expected1[] = "alpaca";
	strncpy(buffer, str1, strlen(str1));
    buffer[strlen(str1)] = '\0';
	c1='o';
	c2='u';
	
	insert (buffer, c1, c2);
		
	result = t_assert_str ( expected1, buffer, err_buffer);
	if (result == PASS)
		total_passed ++;
	else
		t_error (test_no, err_buffer);
	
	
	//2.  ptato p o potato -> correct: potato
	test_no++;
	char str2[] = "ptato";
	char expected2[] = "potato";
	strncpy(buffer, str2, strlen(str2));
    buffer[strlen(str2)] = '\0';
	c1='p';
	c2='o';
	
	insert (buffer, c1, c2);
	
	result = t_assert_str ( expected2, buffer, err_buffer);
	if (result == PASS)
		total_passed ++;
	else
		t_error (test_no, err_buffer);
	
	//3.  insert after every char : LLLL L O LOLOLOLO -> correct: LOLOLOLO
	test_no++;
	char str3[] = "LLLL";
	char expected3[] = "LOLOLOLO";
	strncpy(buffer, str3, strlen(str3));
    buffer[strlen(str3)] = '\0';
	c1='L';
	c2='O';
	
	insert (buffer, c1, c2);
	
	result = t_assert_str ( expected3, buffer, err_buffer);
	if (result == PASS)
		total_passed ++;
	else
		t_error (test_no, err_buffer);
	
	
	//4.  insert after first char : col c o cool -> correct: cool
	test_no++;
	char str4[] = "col";
	char expected4[] = "cool";
	strncpy(buffer, str4, strlen(str4));
    buffer[strlen(str4)] = '\0';
	c1='c';
	c2='o';
	
	insert (buffer, c1, c2);
	
	result = t_assert_str ( expected4, buffer, err_buffer);
	if (result == PASS)
		total_passed ++;
	else
		t_error (test_no, err_buffer);
	
	//5.  insert at end : magi i c magic -> correct: magic
	test_no++;
	char str5[] = "magi";
	char expected5[] = "magic";
	strncpy(buffer, str5, strlen(str5));
    buffer[strlen(str5)] = '\0';
	c1='i';
	c2='c';
	
	insert (buffer, c1, c2);
	
	result = t_assert_str ( expected5, buffer, err_buffer);
	if (result == PASS)
		total_passed ++;
	else
		t_error (test_no, err_buffer);
	
	//6.  alommla m o alomomola -> correct: alomomola

	test_no++;
	char str6[] = "alommla";
	char expected6[] = "alomomola";
	strncpy(buffer, str6, strlen(str6));
    buffer[strlen(str6)] = '\0';
	c1='m';
	c2='o';
	
	insert (buffer, c1, c2);
	
	result = t_assert_str ( expected6, buffer, err_buffer);
	if (result == PASS)
		total_passed ++;
	else
		t_error (test_no, err_buffer);
	
	//7.  single character + insert : h h i hi -> correct: hi

	test_no++;
	char str7[] = "h";
	char expected7[] = "hi";
	strncpy(buffer, str7, strlen(str7));
    buffer[strlen(str7)] = '\0';
	c1='h';
	c2='i';
	
	insert (buffer, c1, c2);
	
	result = t_assert_str ( expected7, buffer, err_buffer);
	if (result == PASS)
		total_passed ++;
	else
		t_error (test_no, err_buffer);
	
	//8.  single character + no insert : h e y h -> correct: h

	test_no++;
	char str8[] = "h";
	char expected8[] = "h";
	strncpy(buffer, str8, strlen(str8));
    buffer[strlen(str8)] = '\0';
	c1='e';
	c2='y';
	
	insert (buffer, c1, c2);
	
	result = t_assert_str ( expected8, buffer, err_buffer);
	if (result == PASS)
		total_passed ++;
	else
		t_error (test_no, err_buffer);
	
	if (total_passed == test_no)
		fprintf(stderr, "ALL PASSED\n");
	else	
		fprintf(stderr, "Passed %d out of %d tests\n", total_passed, test_no);	

	
}