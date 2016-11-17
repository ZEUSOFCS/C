/*
 Author      : DORIAN JAVA BROWN
 Version     : 1.0
 Copyright   : All Rights Reserve; You may use, distribute and modify this code.
 Description : Decimal to Binary Converter & Binary to Decimal Converter
 */

#include <stdio.h>
#include <string.h>

void BinaryBuild(int i, int k, int decimal, int remainder[31], char space);


int main()
{
	int remainder[31];
	int decimal, binary, k, i = 0;
	char space;
	
	//user input
 	printf("\n Enter The Decimal Number: ");
 	scanf("%d", &decimal);
 
	int Origindecimal = decimal;						//value of original decimal
	
  	//convert decimal numbers to binary
  	while (decimal > 0)
	{
		remainder[i] = decimal % 2;
		decimal = decimal / 2;	
		i++;
	}

	//user output
	printf("\n\n DECIMAL VALUE \t\t BINARY VALUE");
	printf("\n ------------- \t\t -------------");
		
	printf("\n %d", Origindecimal);
	BinaryBuild(i, k, decimal, remainder, space);
 	//getch();
	
  return 0;
}

void BinaryBuild(int i, int k, int decimal, int remainder[], char space)
{
	printf("%21c", space);
		
	//building binary number
	for(k = i - 1; k >= 0; k--) 
	{
		printf("%d", remainder[k]);
	}
	
	printf("\n\n");
}
	
