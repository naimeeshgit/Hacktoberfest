#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <limits.h>
#include <math.h>
#include <assert.h>

typedef long long int lli;
int *binary(int a[], int i, int n);
void print(int a[],int n);
int main()
{
    int n;

    scanf("%d", &n);
    int array[n];
    for (int i = 0; i < n; i++)
    {
        array[i] = 0;
    }
    for (int i = 0; i < n; i++)
    {
        printf("%d", array[i]);
    }
    printf("\n");
    binary(array, 0, n);
}
//000
//
int *binary(int a[], int i, int n)
{
    if (i == n)
        return NULL;
    print(binary(a, i + 1, n),n);
    a[i] = 1;
    print(a,n);
    print(binary(a, i + 1, n),n);

}
void print(int a[],int n)
{
    if(a==NULL)
    return;
    for (int j = 0; j < n; j++)
    {
        printf("%d",a[j]);
    }
    printf("\n");
}