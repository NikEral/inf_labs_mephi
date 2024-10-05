#include<stdio.h>
#include<limits.h>
#include <stdbool.h>

long Pow(int a, int b, bool *multFlag);

int findBiggestSum(int k); 



int main() {
    int k;
    // scanf("%d", &k);
    for(int i = 1; i <= 10; i++) {
        findBiggestSum(i);
        printf("\n");
    }
    // findBiggestSum(k);
    return 0;
}





long Pow(int a, int b, bool *multFlag) 
{
    int tmp = a;
    for(int i = 1; i < b; i++) {
        if (a < LONG_MAX / tmp)
        {
            a *= tmp;
        }
        else
        {
            *multFlag = true;
            return LONG_MAX;
        }
    }
    return a;
}

int findBiggestSum(int k)
{
    long int sum = 0;
    int n = 1;
    bool multFlag = false;
    while ( sum < LONG_MAX - Pow(2*n, k, &multFlag)) {
        if(multFlag == true)
        {
            break;
        }
        sum += Pow(2*n, k, &multFlag);
        
        n++;
    }
    printf("%ld\n", sum);
    printf("%d\n", n);
    printf("%c\n", (multFlag ? '*' : '+'));
}
