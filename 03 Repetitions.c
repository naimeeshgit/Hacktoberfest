#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<limits.h>
#include<math.h>
#include<assert.h>
#define n 1000000 
typedef long long int lli;

int main()
{
    int count=1;
    int max=1;
    char string[n];
    char current;
    char temp;
    scanf("%s",string);
    temp=string[0];
    for(int i=1;i<strlen(string);i++)
    {
        if(string[i]==temp)
        {
            count++;
            if(count>max)
            max=count;
        }
        else{
            count=1;
        }
        temp=string[i];
    }
    printf("%d",max);
}