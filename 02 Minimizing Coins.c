#include <stdio.h>
#include <limits.h>



int min(int a, int b)
{
    if(a>=b)
    return b;

    else return a;
}



int main()
{
  int n,x;
  scanf("%d %d",&n,&x);
  
  int c[n];
 for(int i=0;i<n;i++)
 {
     scanf("%d",&c[i]);
 }

 int arr_x[x+1];                    

 for (int i = 0; i < x+1; i++)
 {
     arr_x[i] = INT_MAX;        
 }
 
  
 for (int i = 0; i < n; i++)
 { 
     if(c[i]<=x) 
     arr_x[c[i]] = 1;           //direct coin

 }

 for (int i = 1; i < x+1; i++)
 {
     for (int j = 0; j < n; j++)
     {
         if(i-c[j]>0)     
         { 
             if(arr_x[i-c[j]]!=INT_MAX) 
            {
             arr_x[i] = min(arr_x[i],arr_x[i-c[j]]+1);    // we are finding min b/w arr_x[i] which is INT_MAX or a direct coin
            }
            
         }
     }
     
 }
 
 if(arr_x[x]==INT_MAX) printf("-1");
 else printf("%d",arr_x[x]);




 
 


  

}