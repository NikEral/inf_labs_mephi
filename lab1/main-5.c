#include <stdio.h>
#include <limits.h>

int main(){
    int i = 1, count = 0, sum = 0, b = 470, minsum = INT_MAX, itog = 0, c;
    while (b <= 500){
        count = 0;
        sum = 0;
        i = 1;
        printf("%d", b);
        while (i < b){
            i += 1;
            if (i > b/2)
                break;
            else if ((b % i) == 0){
                sum += i;
                if (count == 0)
                    printf("%5d", i);
                else if ((count % 4) == 0)
                    printf(",\n%8d", i);
                else printf(",%3d", i);
                count += 1;
            }
        }
        if (count == 0)
            printf("%23d\n", sum);
        if ((count % 4) == 1)
            printf("%18d\n", sum);
        if (((count % 4) == 0) && (count != 0))
            printf("%6d\n", sum);
        if ((count % 4) == 2)
            printf("%14d\n", sum);
        if ((count % 4) == 3)
            printf("%10d\n", sum);
        if ((sum < minsum) && (sum != 0)){
            minsum = sum;
            itog = b;
        }
        b += 1;
    }
    printf("\n%d\n", itog);
    return 0;
}