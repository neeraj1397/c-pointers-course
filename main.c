#include <stdio.h>

void main() {
    char c = 'A';
    int a =2;
    char* point = &c;
    printf("\npoint --> %p\n", point);
    printf("\npoint+a --> %p\n", point+a);
}