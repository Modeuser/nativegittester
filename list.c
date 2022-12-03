#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    //int list[3]; || this would put "list" on the stack
    int *list = malloc(3 * sizeof(int)); // this would put "list" on the heap
    if (list == NULL) {
        return 1;
    }

    // *list = 1;
    // *(list + 1) = 2;

    list[0] = 1;
    list[1] = 2;
    list[2] = 3;

    // now we try dynamically allocate memory

    

}