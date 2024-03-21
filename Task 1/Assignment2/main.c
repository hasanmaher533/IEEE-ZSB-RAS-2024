#include <stdio.h>

int main() {
    int x = 10, y = 20, z = 30;

    int *p, *q, *r;

    p = &x;
    q = &y;
    r = &z;

    printf("Values of x, y, and z: %d, %d, %d\n", x, y, z);
    printf("Addresses of x, y, and z: %p, %p, %p\n", (void*)&x, (void*)&y, (void*)&z);
    printf("Values of p, q, and r: %p, %p, %p\n", (void*)p, (void*)q, (void*)r);
    printf("Dereferenced values of p, q, and r: %d, %d, %d\n\n", *p, *q, *r);

    printf("Swapping pointers.\n\n");

    int *temp = r;
    r = p;
    p = q;
    q = temp;

    printf("Values of x, y, and z: %d, %d, %d\n", x, y, z);
    printf("Addresses of x, y, and z: %p, %p, %p\n", (void*)&x, (void*)&y, (void*)&z);
    printf("Values of p, q, and r: %p, %p, %p\n", (void*)p, (void*)q, (void*)r);
    printf("Dereferenced values of p, q, and r: %d, %d, %d\n", *p, *q, *r);

    return 0;
