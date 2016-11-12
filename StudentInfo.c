
/*
 Author      : DORIAN JAVA BROWN
 Version     : N/A
 Copyright   : All Rights Reserve; You may use, distribute and modify this code.
 Description : This program stores the information of 5 students using structures.
 */



#include <stdio.h>
#include <string.h>             /* string variable*/
#include <stdlib.h>             /* exit() function */
#include "studentInfo.h"        /* header file where structure is declared */


int main () 
{

  // create .txt file
  FILE *fp;
  
   /* write to the file */
  fp = fopen("Database.txt", "w");
  
  if( fp == NULL)
  {
    printf("error retrieving file \n");
    exit(0);
  }
 
  /* write to the file */
  fprintf(fp, "\n\nOhio University Student Information Database\n\n");
  
  
  printf("\n\n\t\t\tOhio University Student Information Database\n");
  printf("\t\t\t---------------------------------------------\n\n");
 
  int i;
  
  for(i = 0; i < 1; i++) 
  {
    
  // storing student info.
  printf("\n\nStudent ID: ");
  scanf("%d", &students[i].ID);
 
  printf("First Name: ");
  scanf("%s", students[i].firstName);
 
  printf("Last Name: ");
  scanf("%s", students[i].lastName);
    
  // store data to file
  fprintf(fp, "Student ID \t\t\t\t First Name \t\t\t\t Last Name");
  fprintf(fp, "\n--------------------------------------------------------------------------\n\n");
  fprintf(fp, "%d%20s%21s\n", students[i].ID, students[i].firstName, students[i].lastName); 
  
  }
  
 
   
  /* close the file */
  fclose(fp);
 
}

