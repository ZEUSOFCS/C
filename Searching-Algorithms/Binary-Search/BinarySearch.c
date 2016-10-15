/*
 Author      : DORIAN JAVA BROWN
 Version     : 1.0
 Copyright   : All Rights Reserve; You may use, distribute and modify this code.
 Description : Binary search program which is an efficient algorithm for finding an item 
               from an ordered list of items.
 */

#include <stdio.h>

int main()
{
  
  int i, n, first, middle, last, search, array[100];
  
  //collection of data
  printf("Enter number of elements\n");
  scanf("%d",&n);
    
  printf("Enter %d integers:\n", n);
  
  for(i = 0; i < n; i++)
  {
    scanf("%d", &array[i]);
  }
  
  //collecting target value
  printf("Enter value to find: ")
  scanf("%d", &search);
  
  
  //functions
  binary_search(n,search,array[]);
  
}

int binary_search(int n, int search, int array[]) 
{
  
 int first = 0;
 int last = n - 1;
 int middle = (first + last) / 2;
  
 while( first <= last)
 {
   
   if (array[middle] < search)
   {
     first = middle + 1;
   } else if (array[middle] == search)
   {
     printf("%d found at location %d. \n", search, middlel+1);
     break;
     
   } else {
     
    last = middle - 1;
   }
   
   if (first > last) 
   {
     printf("Not found! %d is not present in the list. \n", search);
   }
 }
  
  return 0;
 
}
