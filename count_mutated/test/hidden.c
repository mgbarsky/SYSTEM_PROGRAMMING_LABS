#include "hidden.h"

void mutate(char *A, int size) {
    int i;
    for (i=0; i<size-1; i++) {
        if ((A[i] < 'M') && !(i%3)) {
            A[i]++;
        }
        if ((A[i] > 'j') && !(i%4)) {
            A[i]--;
        }
    }
}
