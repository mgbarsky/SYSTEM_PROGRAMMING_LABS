#include "../include/experiment.h"
#include "test_utils.h"

int test_no = 0;
enum status result = 0; 
int total_passed = 0;

char err_buffer[MAX_ERR_LENGTH];

int main(){
	fprintf(stderr, "Testing experiment with string array vs string literal\n");
	if (experiment()==0){
		fprintf(stderr,"Run successfully\n");
		return 0;
	}
	return 1;		
}