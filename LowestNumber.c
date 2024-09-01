#include<stdio.h>
int main()
{
    int n,min=100000,pos=0;
    scanf("%d",&n);
    int arr[n];
    for(int i=0; i<n; i++)
    {
        scanf("%d",&arr[i]);
        if(arr[i]<min){
        min=arr[i] ;
        pos=i+1;
        }
    }
    printf("%d %d\n",min,pos);

    return 0;
}