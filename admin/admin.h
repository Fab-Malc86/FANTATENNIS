#ifndef ADMIN_H
#define ADMIN_H

typedef struct{
  char userName[30];
  int password;
}Admin_t;

int creaAdmin(char userName[],int password);

void visualizzaAdmin(void);

void admin(void);




#endif