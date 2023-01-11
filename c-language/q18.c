#include<stdio.h>
 
unsigned setbits(unsigned x,int p,int n,unsigned y)
{
    return x & ~(~(~0 << n) << (p+1-n)) | ( y & (~(~0<<n)) << (p+1-n));
}

int main(void)
{
    printf("%u",setbits((unsigned)22,3,2,(unsigned)57));
}

// ~(~0<<n) will thus always yield right most n bits set to 1
//(p+1-n) will give a integer value for the n digits at position p we want
//p+1 because our position is 0 indexed while count of digits n is 1 indexed
//(<<)left shifting operation will give us expected bits. For e.g: 0000 1111 << 4 will give us 1111 0000
