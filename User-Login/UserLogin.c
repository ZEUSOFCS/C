/*
 Author      : DORIAN JAVA BROWN
 Version     : 1.0
 Copyright   : All Rights Reserve; You may use, distribute and modify this code.
 Description : Simple User Login
 */

#include <stdio.h>
#include <stdlib.h>

char username [24];
char password [24];
 
int main(){
  //functions
  Ask();
  Check();    
  
  printf("\n\n");
 
  return 0;
}

void Ask(){
  //username
  printf("\n\n");
  printf("Username : ");
  scanf("%s", username);
  
  //password
  printf("Password : ");
  scanf("%s", password);
}

void Check(){
  //conditional statements to determine the validity of username and password
  //strcmp function compares the C string str1 to the C string str2
  
  printf("\n\n");
  
  //if username and password is correct
  if (strcmp(username, "ZEUS") == 0){
      if(strcmp(password, "150PIG") == 0){
        
        printf("\n successfully logged in");
        
      //if username is correct and password is inncorrect
      }else{      
        printf("\n inncorrect password");
      }

  //if username is inncorrect and password is correct
  }else if(strcmp(username, "ZEUS") != 0){
      if(strcmp(password, "150PIG") == 0){
       
      printf("\n incorrect username");
        
      //if username is and password is inncorrect
      }else{
      printf("\n incorrect username and password");
      } 
  }      
}
