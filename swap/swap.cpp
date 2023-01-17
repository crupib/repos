// swap.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <stdio.h>
void swap(int *pa, int *pb) {

    int t = *pa;
    *pa = *pb;
    *pb = t;
    
}
int main(void) {
    int a = 21;
    int b = 17;
    swap(&a, &b);
    printf("a = %d, b = %d\n", a, b);
    return 0;
}