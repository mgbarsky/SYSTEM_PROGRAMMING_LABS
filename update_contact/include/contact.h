#ifndef CONTACT_H
#define CONTACT_H

#include <stdlib.h>
#include <stdio.h>
#include <string.h>

struct contact {
    char name[30];
    int phone_number;
    char address[30];
};

void update_contact(struct contact *c, char *new_name, int new_number, char *new_address);

char * contact_tostr(struct contact *person);


#endif