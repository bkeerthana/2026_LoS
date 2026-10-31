#include <stdio.h>
#include <stdlib.h>

int main()
{
    int *ptr;

    ptr = malloc(sizeof(int));

    if (ptr == NULL)
        return 1;

    *ptr = 100;

    printf("Value = %d\n", *ptr);

    free(ptr);

    return 0;
}