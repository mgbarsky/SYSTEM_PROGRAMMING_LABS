#include "../include/sum_card.h"
#include "test_utils.h"

int test_no = 0;
enum status result = 0; 
int total_passed = 0;

char err_buffer[MAX_ERR_LENGTH];

int main(){
	int i; 
	fprintf(stderr, "Testing sum_card function\n");
	
	//1. empty array : -> array: sum: 0   
	int size1 = 0;
    int **score_card1 = NULL;

	int sum1 = sum_card(score_card1, size1);
	
	test_no++;
	result = t_assert ( 0, sum1, err_buffer);
	if (result == PASS)
		total_passed ++;
	else
		t_error (test_no, err_buffer);
	
	
	//2. one element : 5 -> array: 5 sum: 5    
	int size2 = 1;
    int **score_card2 = malloc(size2 * sizeof(int **));

	for (i = 0; i < size2; i++) {
        score_card2[i] = malloc(sizeof(int*));
        *(score_card2[i]) = 5;
	}
	
	test_no++;
	int sum2 = sum_card(score_card2, size2);
	result = t_assert ( 5, sum2, err_buffer);
	if (result == PASS)
		total_passed ++;
	else
		t_error (test_no, err_buffer);
	
	
	//3. two elements : 10 -3 -> array: 10 -3 sum: 7      
	int size3 = 2;
    int **score_card3 = malloc(2 * sizeof(int **));
	score_card3[0] = malloc(sizeof(int*));
	*(score_card3[0]) = 10;
	score_card3[1] = malloc(sizeof(int*));
	*(score_card3[1]) = -3;	
	
	test_no++;
	int sum3 = sum_card(score_card3, size3);
	result = t_assert ( 7, sum3, err_buffer);
	if (result == PASS)
		total_passed ++;
	else
		t_error (test_no, err_buffer);
	
	//4. many elements : 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 -> array: 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 sum: 20   
	int size4 = 20;
    int **score_card4 = malloc(size4 * sizeof(int **));	
	
	for (i = 0; i < size4; i++) {
        score_card4[i] = malloc(sizeof(int*));
        *(score_card4[i]) = 1;
	}
	
	test_no++;
	int sum4 = sum_card(score_card4, size4);
	result = t_assert ( 20, sum4, err_buffer);
	if (result == PASS)
		total_passed ++;
	else
		t_error (test_no, err_buffer);
	
	//5. many elements : 1 2 3 4 5 -5 -4 -3 -2 -1 -> array: 1 2 3 4 5 -5 -4 -3 -2 -1 sum: 0
	int size5 = 10;
    int **score_card5 = malloc(size5 * sizeof(int **));	
	
	for (i = 0; i < 5; i++) {
        score_card5[i] = malloc(sizeof(int*));
        *(score_card5[i]) = (i+1);
	}
	
	for (i = 5; i < 10; i++) {
        score_card5[i] = malloc(sizeof(int*));
        *(score_card5[i]) = -(10 - i);
	}
	
	test_no++;
	int sum5 = sum_card(score_card5, size5);
	result = t_assert ( 0, sum5, err_buffer);
	if (result == PASS)
		total_passed ++;
	else
		t_error (test_no, err_buffer);
	
	if (total_passed == test_no)
		fprintf(stderr, "ALL PASSED\n");
	else	
		fprintf(stderr, "Passed %d out of %d tests\n", total_passed, test_no);	

	
}