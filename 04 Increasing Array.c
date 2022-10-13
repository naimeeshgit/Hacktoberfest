#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<limits.h>
#include<math.h>
#include<assert.h>

typedef long long int lli;

int main()
{
    int n;
    scanf("%d",&n);

    int array[n];
    lli count=0;    
    for (int i = 0; i < n; i++)
    {
        scanf("%d",&array[i]);  
    }
    lli temp;
    for (int i = 1; i < n; i++)
    {
        temp=array[i-1]-array[i];
        if(temp>0)
        {
            array[i]+=temp;
            count+=temp;
        }
    }
    printf("%lld",count);
    
    
}