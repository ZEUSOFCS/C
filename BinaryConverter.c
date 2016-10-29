/*
 Author      : DORIAN JAVA BROWN
 Version     : 1.0
 Copyright   : All Rights Reserve; You may use, distribute and modify this code.
 Description : Decimal to Binary Converter
 */

#include <stdio.h>
 
int main()
{
  
  int remainder[31];
	int decimal, i, k;
 
  printf("Enter The Decimal Number:");
  scanf("%d", &decimal);
 
 //convert decimal numbers to binary
		while (decimal > 0)
		{
			k = decimal % 2;
			i++;
			decimal = decimal / 2;	
		}

	for(k = i - 1; k >= 0; k--) 
	{
			printf("%d",remainder[k]);
	}
	

      printf("The binary version of the number you input, %d, is = ",decimal);
      //getch();
  return 0;
}
