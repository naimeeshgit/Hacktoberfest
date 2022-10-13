#include <stdio.h>
#define mod 1000000007
int main()
{

   long long int n;
   scanf("%lld",&n);
   
   long long int arr[7] = {1,2,4,8,16,32,63};

   for(int i=8;i<=n;i++) {
       
       arr[(i-1)%7]  = (2*arr[(i-2)%7])%mod - arr[(i-8)%7]%mod ;
   }  

   printf("%lld",arr[(n-1)%7]%mod);
} 