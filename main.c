#include <stdio.h>
#include <stdlib.h>
#include<string>
struct patron
srting name[100];
sring pass [30];
sring email[50];
int is staff;
void add patron []
struct Patron patron;
printf[enter namespacegets]
gets (patron.name)
printf("enter email:");
gets(patron.pass)
printf("enter 1 if staff 0 otherwise:");
scanf("%d",&patron.is_staff);
printf(patron %succefully added/n")patron name):


int menu();//prototype
void execute_action(int action);
int main()
{
    printf("COUNTY LIBRARY SYSTEM!\n");
    printf("welcome margaret!\n");
    execute_action(menu());
    return 0;
}

void menu()
{
    int action;
    do{
        printf("select an action:\n");
        printf("1. Add new patron\n");
        printf("2. View patrons\n");
        printf("3. View books\n");
        printf("4. Add new book\n");
        scanf("%d",&action);
        if(action <1 || action >4){
                system("cls");
        printf("invalid action. try again.\n");

        }
}while (action<1 || action >4);
}


