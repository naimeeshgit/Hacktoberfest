#include <stdio.h>

int main()
{
    int n;
    scanf("%d",&n);
    
    if(n>=1)
    {
        printf("0\n");
    }
    
    //1,3,6,10,15,21....   

    for(int i=2;i<=n;i++)
    {
    
       long long int ans = (i*i)*(i*i-1)/2 - 8*(i-2)*(i-1)/2;
        printf("%d\n",ans);
    }
    
}