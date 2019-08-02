/*Find the max no of water units that can be stored between any two values of given array.
*/

#include<stdio.h>

int main()

{

    int i,j,n,max,sum=0,temp,le=0,mvf;

    scanf("%d",&n);

    int a[n];

    

    for(i=0;i<n;i++)

    {

        scanf("%d",&temp);

        sum=sum+temp;

        a[i]=temp;

    }

    printf("%d sum",sum);

    for(i=0;i<n-1;i++)

    {

        j=i+1;

        mvf=0;

        while(a[j]<a[i]&&j<n)

        {

            

            le=1;
  if(a[j]<a[j+1] && j<n-1)

            mvf=1;

            j++;

        }

        if(le==1)

        {

        if(j==n)

        j--;

        if(a[i]<=a[j])

        max=a[i];

        else

        max=a[j];

        while(i<j-1&&mvf==1)

        {

            i++;

          a[i]=max;  

        }

        }

        le=0;

        

    }

    for(i=0;i<n;i++)

    printf("%d ",a[i]);

    int sum1=0;

    for(i=0;i<n;i++)
 sum1+=a[i];

    printf("%d sum1",sum1);

    printf("%d Units",(sum1-sum));

}