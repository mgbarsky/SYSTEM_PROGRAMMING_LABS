#include "../include/contact.h"

char * contact_tostr(struct contact *person){
	char *retvalue = malloc(1024*sizeof(char));
	char str_buffer[1024];
	
	snprintf ( str_buffer, 1023, "%s,%d,%s", person->name, person->phone_number, person->address );
	strcpy(retvalue, str_buffer);
	return retvalue;
}

void update_contact(struct contact *c, char *new_name, int new_number, char *new_address){
	//TODO - implement the function according to the requirements
	
}