#include <stdio.h>

void swap(int* Ptr1, int* Ptr2);

int main() 
{
    int a = 33, b = 66;
    int *Pa = &a, *Pb = &b;
    swap(Pa, Pb);
    printf("%d %d\n", *Pa, *Pb);
    return 0;
}

void swap(int* Ptr1, int* Ptr2){
    float temp = *Ptr1;
    *Ptr1 = *Ptr2;
    *Ptr2 = temp;
}