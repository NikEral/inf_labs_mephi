#include <stdio.h>
#include<limits.h>

int main()
{
    int k, n = 1, count = 0;
    scanf("%d", &k);
    long int var1 = 1, var2 = 1, var3 = 1;
    int i = 1;
    while (var2 <= INT_MAX - var3)
    {
        var1 = var2;
        var2 = var3;
        var3 = var1 + var2;
        if (i <= k)
        {
            printf("%3d  %d\n", i, var1);
        }
        i++;
    }
    i--;
    printf("\n");
    printf("%3d  %d\n", i, var1);
    printf("%3d  %d\n", ++i, var2);
    printf("%3d  %d\n", ++i, var3);
    

    
    return 0;
}