
/*
 Author      : DORIAN JAVA BROWN
 Version     : N/A
 Copyright   : All Rights Reserve; You may use, distribute and modify this code.
 Description : This program stores the information of 5 students using structures.
 */



#include <stdio.h>

void results();

struct studentInfo
{
  int ID;
  char firstName [20];
  char lastName [20];
} char student[5];

int main () 
{

 int i = 0;
 
 printf("Ohio University Student Information Database\n\n");
 printf("------------------------------------------------");
 
 // storing student info.
 printf("Student ID: ");
 scanf("%d", &student[i].ID);
 
 printf("First Name: ");
 scanf("%s", student[i].firstName);
 
 printf("Last Name: ");
 scanf("%s", student[i].lastName);

 results();
}


void results()
{

 
}
