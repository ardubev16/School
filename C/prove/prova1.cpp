#include <iostream>

int main(int argc, char** argv){
    unsigned short a=30000, b=40000, c=50000;
    unsigned short *pa;
    pa=&a;
    char *d=(char*)pa;
    printf("%d %d %d\n", a, b, c);
    printf("%d %d %d\n", &a, &b, &c);
    printf("%d %d %d\n", sizeof(a), sizeof(b), sizeof(c));
    printf("%d\n", *pa);
    printf("%d\n", *d);

    return 0;
}
