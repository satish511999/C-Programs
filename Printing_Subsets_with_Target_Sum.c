#include <stdio.h>

#include<math.h>

int is_in(int*,int,int,int);

int main()
{
    
    
int size,target,temp,i,j;

    scanf("%d",&size);
    
int a[size];
    
for(i=0;i<size;i++)
 
   scanf("%d",&a[i]);
  
  scanf("%d",&target);
 
   for(i=0;i<size-1;i++)
   
 for(j=i;j<size;j++)
    {
      
  if(a[i]>a[j])
      
  {
           
 temp=a[i];
       
     a[i]=a[j];
          
  a[j]=temp;
       
 }
    }
   
 for(i=0;i<size;i++)
  
  {
      
  int count=1;
    
    while(a[i]*count<=target)
    
    {
            
temp=target-a[i]*count;
         
 if(is_in(a,0,size-1,temp)) 
          {
             
 printf("[");
             
 for(j=0;j<count;j++)
     
         printf("%d ",a[i]);
  
            printf("%d]\n",temp);
   
     
        }
     
     count++;
     
   }
    }
}

int is_in(int arr[], int l, int r, int x) 

{ 
    
while (l <= r) 
{ 
       
 int m = l + (r - l) / 2;
     
   if (arr[m] == x) 
        
    return 1; 
        
if (arr[m] < x) 
      
      l = m + 1; 
     
   else
      
      r = m - 1; 
  
  } 
 
   return 0; 

}