#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define NAME_LENGTH 15

typedef struct island {
	char name[NAME_LENGTH];
	int population;
}Island;

Island * new_island (char *name, int population) {
	Island *new_island = malloc (sizeof(Island));
	strcpy(new_island->name, name);
	new_island->population = population;
	return new_island;
}

void print_island (Island * i){
	printf("Island %s, population %d\n", i->name, i->population);
}

void print_island_array (Island * arr, int size) {
	int i;
	for (i=0; i < size; i++) {
		print_island (&arr[i]);
	}
}

int main(){
	FILE *fp = NULL;
	int result;
	int  N = 5;
   
	//open file for update
   	fp=fopen("islands.bin", "rb+");
    	if(fp == NULL) {
		printf ("Cannot open file for updating \n");
		return 1;
	}
    
	
	//declare a variable to pass to fread
	Island island;
	while ((fread (&island, sizeof(Island), 1, fp)) != 0){
		if (island.population == 2) {
			//update population to 3
			//May need to move backwards one island from the current position
			island.population = 3;
			//and write
			break;
		}
	}
	
	//read islands from file
	//need to move to the beginning of the file
	Island read_islands[N];
	result = fread (read_islands, sizeof(Island), N, fp);
	printf ("fread returned %d\n", result);
	fclose (fp);

	print_island_array (read_islands, N); 
	
	return 0;    
}
