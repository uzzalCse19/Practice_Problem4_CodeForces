#include<stdio.h>
int main()
{
    int n,x,a=0;
    scanf("%d",&n);
    int arr[n];
    for(int i=0; i<n; i++)
    {
        scanf("%d",&arr[i]);
        if(arr[i]<=10) printf("A[%d] = %d\n",i,arr[i]);
    }

    return 0;
}