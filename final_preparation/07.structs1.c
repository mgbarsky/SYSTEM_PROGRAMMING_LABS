#include <stdio.h>

typedef struct student {
	int id;
	char name [10];
} Student;


int main(){
	Student one, two, three, four;
	one.id = 123;
	strcpy (one.name, "Hanna");
	if (one != NULL)
   		printf ("id:%d, name:%s\n", one.id, one.name);
	
	two.id = 456;
	strcpy (two.name, "Christopher");
	printf ("id:%d, name:%s\n", two.id, two.name);
	
	three.id = 789;
	char *p_name = "John";
	three.name = p_name;
	printf("id:%d, name:%s\n",  three.id, three.name);
	
	four.id = 101;
	four.name = "Peter"; 
	printf("Current name is %s\n", four.name);

	Student * five_p;
	*five_p.id = 202;
	printf ("id:%d, name:%s\n", five_p->id, five_p->name);
}