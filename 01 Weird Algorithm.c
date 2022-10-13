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
    printf("%lld ",n);
    while(n!=1)
    {
        if(n%2==0)
        {
            n=n/2;
            printf("%lld ",n);
        }
        else{
            n=n*3+1;
            printf("%lld ",n);
        }
    }
}