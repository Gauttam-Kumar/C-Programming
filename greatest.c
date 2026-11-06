// Write a program to find the largest of two numbers using pointers.
#include <stdio.h>
int main()
{
    int x = 5, y = 8;
    int *p, *q;
    p = &x;
    q = &y;
    if (*p > *q)
        printf("%d is greatest from %d and %d", *p, *p, *q);
    printf("%d is greates from %d and %d", *q, *p, *q);
    return 0;
}