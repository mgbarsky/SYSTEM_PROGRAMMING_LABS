#include "test_utils.h"

void t_error (int test_no, char * message){
	fprintf (stderr, "Test %d failed: %s\n", test_no, message);
}

enum status t_assert(int expected, int received, char *err_buffer){
	if (expected != received) {
		snprintf(err_buffer, MAX_ERR_LENGTH, "EXPECTED %d, GOT %d.", expected, received);
		return FAIL;
	}
	return PASS;
}

enum status  t_assert_float(float expected, float received, char *err_buffer){
	if (expected != received) {
		snprintf(err_buffer, MAX_ERR_LENGTH, "EXPECTED %f, GOT %f.", expected, received);
		return FAIL;		
	}
	return PASS;
}

enum status  t_assert_double(double expected, double received, char *err_buffer){
	if (expected != received) {
		snprintf(err_buffer, MAX_ERR_LENGTH, "EXPECTED %f, GOT %f.", expected, received);
		return FAIL;	
	}
	return PASS;
}

enum status  t_assert_str(char *expected, char *received, char *err_buffer){
	if (strncmp(expected, received, 1024) != 0 ) {
		snprintf(err_buffer, MAX_ERR_LENGTH, "EXPECTED %s, GOT %s.", expected, received);
		return FAIL;	
	}
	return PASS;
}

enum status  t_assert_ptr(void *expected, void *received, char *err_buffer){
	if (expected != received) {
		snprintf(err_buffer, MAX_ERR_LENGTH, "EXPECTED PTR %p, GOT PTR %p.", expected, received);
		return FAIL;	
	}
	return PASS;
}

enum status  t_assert_not_null(void *received, char *err_buffer){
	if (received == NULL) {
		snprintf(err_buffer, MAX_ERR_LENGTH, "EXPECTED NULL, GOT PTR %p.", received);
		return FAIL;	
	}
	return PASS;
}

