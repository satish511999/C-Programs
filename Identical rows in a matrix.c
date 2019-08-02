/*For given matrix find if any identical rows exists in it and print the no of times the row is repeated*/
#include<stdio.h>

int main()

{

int m,n,count,k,i,j;

scanf("%d%d",&m,&n);

int mat[m][n],idr[m],idrc[m],dnc[m];

for(i=0;i<m;i++)

{

for(j=0;j<n;j++)

scanf("%d",&mat[i][j]);

idr[i]=0;

idrc[i]=0;

dnc[i]=0;

}

for(i=0;i<m;i++)

{

k=i+1;

while(k<m)

{

count=0;

j=0;

while(mat[i][j]==mat[k][j] && j<n &&dnc[i]!=1)

{

count++;

j++;
}

if(count==n)

{

idr[i]=1;

idrc[i]+=1;

dnc[k]=1;

}

k++;

}



}

for(i=0;i<m;i++)

{

if(idr[i]==1)

{

for(j=0;j<n;j++)

printf("%d ",mat[i][j]);

}

if(idrc[i]!=0)

{

printf("No of times repeated is %d \n",idrc[i]+1);

}

}

}