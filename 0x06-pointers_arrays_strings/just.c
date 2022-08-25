#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <unistd.h>

void infinite_add(char *n1, char *n2, char *r)
{
    unsigned long long int n = atoi(n1);
    unsigned long long int m = atoi(n2);
    unsigned long long int z;
    z = n + m;
    // r = itoa(z, r, 10);
    printf("%lld", z);
}

int main(void)
{
    char *n1 = "102";
    char *n2 = "2";
    char *r;
    infinite_add(n1, n2, r);
}