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
  
  if (fwrite(&admin, sizeof(Admin_t), 1, file_admin) != 1) {
    printf("Errore nel salvataggio admin.\n");
    fclose(file_admin);
    return 0;
  }

  fclose(file_admin);

  return 1;

}




void visualizzaAdmin(void) {
    FILE *file_admin = fopen("data/admin.bin", "rb");

    if (file_admin == NULL) {
        printf("Errore apertura file admin.\n");
        return;
    }

    Admin_t admin;

    if (fread(&admin, sizeof(Admin_t), 1, file_admin) == 1) {
        printf("\nAdmin user name --> %s\n", admin.userName);
        printf("\nAdmin password --> %d\n", admin.password);
    } else {
        printf("Errore lettura admin.\n");
    }

    fclose(file_admin);
}


void admin(void){

        //SEZIONE ADMIN
    FILE *file_admin = fopen("data/admin.bin", "rb");
      char adminUserName[30];
      int adminPassword;

    if (file_admin == NULL) {
        printf("\nAdmin non presente\n");

        //CREAZIONE ADMIN
        printf("\n-----Creazione Admin-----\n");
        do{
          printf("\nInserisci User Name ---> ");
          fgets(adminUserName,sizeof(adminUserName),stdin);
          adminUserName[strcspn(adminUserName, "\n")] = '\0';// elimino la new line (invio) dal buffer
        }while(strlen(adminUserName) == 0);// controllo se l'utente non scrive niente

        printf("\nInserisci password ---> ");
        scanf("%d", &adminPassword);
        getchar(); // elimino la new line (invio) dal buffer

      
        if (creaAdmin(adminUserName, adminPassword) == 1) {// creo admin
            printf("Admin creato correttamente.\n");// visualizzo credenziali admin
            visualizzaAdmin();
        }

    } else {
        fclose(file_admin);
        printf("Admin gia' presente\n");
        // qui procedi eventualmente con il login
    }




}