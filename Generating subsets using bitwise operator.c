#include <stdio.h>

#include<math.h>


int main()
{
    

    int counter,size,target,temp_ind,i,set_size;
  
  scanf("%d",&size);
  
  int temp[size],array[size];
 
   for(i=0;i<size;i++)
   
 scanf("%d",&array[i]);
  
  scanf("%d",&target);
 
   set_size=pow(2,size);
   
 for(counter=0;counter<set_size;counter++)
 
   {   
temp_ind=0;
        
int value=0;
        
for(i=0;i<size;i++)
       {   
   
 if(counter & (1<<i))
 
 {

   temp[temp_ind]=array[i];

     temp_ind++;
                
value+=array[i];
            
}
        }
        
if(value==target)
            
{   
                
printf("[");
                
for(int j=0;j<temp_ind;j++)
               
 printf("%d ",temp[j]);
                
printf("]\n");
            }
    }
    
    

   
 return 0;

}