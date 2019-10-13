#include <stdlib.h>
#include <stdio.h>

typedef struct {
    int width;
    int height;
} Rectangle;

int compare_scores(const void* a, const void* b);
int compare_scores_desc(const void* a, const void* b);
int compare_areas (const void* a, const void* b);
int compare_strings (const void* a, const void* b); 

int main () {
    int scores[] = {543,323,32,554,11,3,112};
    int i;
    
  	qsort(scores, 7, sizeof(int), compare_scores_desc);
    puts("These are the scores in descending order:");
    for (i = 0; i < 7; i++) {
        printf("Score = %i\n", scores[i]);
    }

    char *names[] = {"Karen", "Mark", "Brett", "Molly"};
    qsort(names, 4, sizeof(char*), compare_strings);
    puts("These are the names in order:");
    for (i = 0; i < 4; i++) {
        printf("%s\n", names[i]);
    }
    
    Rectangle rectangles [] = {{3,5}, {4,4}, {1,18}};
    qsort(rectangles, 3, sizeof(Rectangle), compare_areas);
    puts("These are the rectangles in order:");
    for (i = 0; i < 3; i++) {
		printf("width:%d height:%d area:%d\n", 
		rectangles[i].width, rectangles[i].height, 
		rectangles[i].width*rectangles[i].height);
    }
    return 0;
}
