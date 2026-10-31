#include <stdio.h>
#include <stdlib.h>

int global = 50;

int main()
{
    int a = 10;

    int *ptr = malloc(sizeof(int));

    if (ptr == NULL)
        return 1;

    *ptr = 100;

    printf("Global variable: %p\n", (void *)&global);
    printf("Stack variable : %p\n", (void *)&a);
    printf("Heap memory    : %p\n", (void *)ptr);

    free(ptr);

    return 0;
}