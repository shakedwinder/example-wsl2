#include <stdio.h>


void print_array(const int* array, const size_t size)
 {
    size_t i = 0;
    for (i = 0; i < size; ++i) {
        printf("%d ", array[i]);
    }
    printf("\n");
}


int main() {
    int array[] = {0,1,2,3,4};
    print_array(array,5);
    return 0;
}
