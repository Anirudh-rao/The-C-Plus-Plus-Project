#include<stdio.h>

int main(){
    short a;
    long b;
    long long c;
    long double d;
    char test = 'h';
    float normalizationFactor = 22.442e2;
    printf("size of char = %d bytes\n", sizeof(test));
    printf("size of float = %d bytes\n", sizeof(normalizationFactor));
    printf("size of short = %d bytes\n", sizeof(a));
    printf("size of long = %d bytes\n", sizeof(b));
    printf("size of long long = %d bytes\n", sizeof(c));
    printf("size of long double= %d bytes\n", sizeof(d));
    return 0;
}