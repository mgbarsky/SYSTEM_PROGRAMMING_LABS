#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define NAME_LENGTH 15

typedef struct island {
	char name[15];
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
	int i, N = 5;
	char buffer[NAME_LENGTH];
   
	//open file for writing N islands
   	fp=fopen("islands.bin", "wb");
    	if(fp == NULL) {
		printf ("Cannot open file for writing \n");
		return 1;
	}
    
	
	//create an array of N islands
	Island islands[N];
	for (i=0; i < N; i++) {
		sprintf(buffer,"island %d", i);
		Island * ni = new_island (buffer,i);
		islands [i] = *ni;
	}
    	print_island_array (islands, N);
	
	printf("Size of Island = %lu\n", sizeof(Island));
	result = fwrite(islands, sizeof(Island), N, fp);
    
	if (result != N) {
		printf ("Not all islands were written: wanted to write %d, but fwrite returned %d\n", N, result);
		return 1;
    	}

	//read islands from file
	FILE *rp = NULL;
	rp = fopen("islands.bin", "rb");
	if (rp == NULL){
		printf ("Cannot open file for reading\n");
		return 1;
	}

	Island read_islands[N];
	result = fread (read_islands, sizeof(Island), N, rp);
	printf ("fread returned %d\n", result);

	print_island_array (read_islands, N); 
	return 0;    
}
