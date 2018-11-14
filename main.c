#include <stdio.h>
#include <stdlib.h>

int main()
{
    long int n, k, count =0, total;

    while(scanf("%ld%ld",&n,&k)==2) {

        total = n;

        while(n >= k) {

            count = n/k;
            total += count;
            n = n/k + n%k;
        }

        printf("%d\n", total);
    }
    return 0;
}
