#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include "admin.h"


int creaAdmin(char userName[],int password){
  
  FILE *file_admin = fopen("data/admin.bin","wb");
  
  if(file_admin == NULL){
    printf("Errore creazione o apertura file");
    return 0;
  }
  
  
  Admin_t admin;
  strcpy(admin.userName,userName);
  admin.password= password;
  
  fwrite(&admin, sizeof(Admin_t), 1, file_admin);

  fclose(file_admin);

  return 1;

}



void visualizzaAdmin(char userName[],int password){

  FILE *file_admin = fopen("data/admin.bin","rb");
  Admin_t admin;
  fread(&admin, sizeof(Admin_t), 1, file_admin);
  printf("\nAdmin user name --> %s\n", admin.userName);
  printf("\nAdmin password --> %d\n", admin.password);
}