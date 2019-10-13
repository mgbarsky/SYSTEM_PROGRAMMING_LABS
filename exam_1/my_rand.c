#include <stdlib.h>
#include <time.h>

int main(){
  	srand(time(NULL));   // should only be called once
	int r = rand();      // returns a pseudo-random integer between 0 and RAND_MAX
}