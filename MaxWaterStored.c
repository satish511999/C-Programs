/*Find the largest water container from the values given in the array and return the indices .
*/

#include<stdio.h>

int main()

{

    int max=0,n,v1,v2,ind,i;

    scanf("%d",&n);

    int a[n];

    for(i=0;i<n;i++)

    scanf("%d",&a[i]);

    for(i=1;i<n-1;i++)

    {

        if(a[i-1]<=a[i])

        v1=a[i-1];

        else

        v1=a[i];

        if(a[i]<=a[i+1])

        v2=a[i];

        else

        v2=a[i+1];
if(v1>max && v1>= v2)

        {

            max=v1;

            ind=i-1;

        }

        else if(v2>max && v2>v1)

        {

            max=v2;

            ind=i;

        }

        

    }

    printf("MAX: %d POS: %d %d",max,ind,ind+1);

}