#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<limits.h>
#include<math.h>
#include<assert.h>

typedef long long int lli;

int main()
{
    lli n;
    scanf("%lld",&n);

    lli sum= n*(n+1)/2;
    lli check=0;
    for (int i = 0; i < n-1; i++)
    {
        lli temp;
        scanf("%lld",&temp);
        check+=temp;
    }
    printf("%lld",sum-check);
}