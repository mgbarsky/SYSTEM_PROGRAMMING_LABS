#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define NAME_LENGTH 15

typedef struct island {
	char *name;
	int population;
}Island;

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
	int N = 5;
   
	//open file for reading N islands
   	fp=fopen("islands.bin", "rb");
    	if(fp == NULL) {
		printf ("Cannot open file 'islands.bin' for reading \n");
		return 1;
	}
    
	
	//declare an array of N islands
	Island islands[N];
	result = fread(islands, sizeof(Island), N, fp);
    	
	if (result != N) {
		printf ("Reading from file failed: wanted to read %d, but fread returned %d\n", N, result);
		return 1;
    	}

	print_island_array (islands, N);
	
	return 0;
}
