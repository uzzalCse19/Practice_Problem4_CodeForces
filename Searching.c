#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main()
{
    int n,x,a=0;
    scanf("%d",&n);
    int arr[n];
    for(int i=0; i<n; i++)
    {
        scanf("%d",&arr[i]);
    }
    scanf("%d",&x);
      for(int i=0; i<n; i++)
      {
          if(x==arr[i])
          {
              printf("%d\n",i);
             a=1;
              break;
          }
      }
      if(a==0) printf("-1\n");
    return 0;
}