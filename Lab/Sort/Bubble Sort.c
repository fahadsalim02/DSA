//AUTHOR : FAHAD SALIM
//IMPLEMENTATION OF TIME COMPLEXITY AND SPACE COMPLEXITY FOR BUBBLE SORT
//AIM:TO CALCULATE TIME COMPLEXITY OF SELECTION SORT AND BUBBLE SORT USING C PROGRAMMING
//----------------------------BUBBLE SORT---------------------------
//---------ALGORITHM---------------






//--PROGRAM---
#include<stdio.h>
int main()
{

    int array[100],n;
    int i,j,temporary;
    int count=0;
//ARRAY INPUT
    printf("enter the number of elements:\n");count++;
    scanf("%d",&n);count++;
    printf("enter the elements of an array:\n");count++;
    for(i=0;i<n;i++)
    {
          count++;
          scanf("%d",&array[i]);
    
   }
   count++;     
    
    //SORTING OF ELEMENTS
           for(i=0;i<n-1;i++)
               {
               count++;
                    for(j=0;j<n-1-i;j++)
                         {
                         count++;
                              if(array[j]<array[j]);
                              {
                                 temporary=array[j];count++;
                                 array[j]=array[j+1];count++;
                                 array[j+1]=temporary;count++;
                              }
                         } 
               }               
                
//PRINTING SORTED ARRAY 
     printf("sorted array: ");
      for(j=0;j<n;j++){
      printf("%d\n",array[j]);count++;
      }
      count++;
      printf("the number of steps are %d",++count);
     return 0;
 }                
