#ifndef TEST_UTILS_H
#define TEST_UTILS_H

#include <assert.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX_ERR_LENGTH 1024

enum status { PASS, FAIL };

void t_error (int test_no, char * message);

enum status  t_assert(int expected, int received, char *err_buffer);

enum status  t_assert_float(float expected, float received, char *err_buffer);

enum status  t_assert_double(double expected, double received, char *err_buffer);

enum status  t_assert_str(char *expected, char *received, char *err_buffer);

enum status  t_assert_ptr(void *expected, void *received, char *err_buffer);

enum status  t_assert_not_null(void *received, char *err_buffer);

enum status t_assert_array_double (double *received, double *expected, 
								int arr_size, char * err_buffer);
								
enum status t_assert_array (int *received, int *expected, 
								int arr_size, char * err_buffer);
								
#endif
