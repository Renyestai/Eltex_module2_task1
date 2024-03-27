#include <stdio.h>
#include "data_structure.h"

void PBAdd(phoneBook* ptr)
{
    printf("Enter surname: ");

    fgets(ptr->surname, 50, stdin);

    printf("Enter name: ");

    fgets(ptr->name, 50, stdin);

    memset(ptr->telephoneNumber, 0, 50);
    memset(ptr->workplace, 0, 50);
    memset(ptr->workplacePost, 0, 50);
    memset(ptr->email, 0, 50);
    memset(ptr->socialMedia, 0, 50);
    memset(ptr->messanger, 0, 50);

}

void PBEdit(phoneBook *ptr)
{
    printf("Enter surname: ");

    fgets(ptr->surname, 50, stdin);

    printf("Enter name: ");

    fgets(ptr->name, 50, stdin);
}

void PBDelete(phoneBook *ptr)
{
    memset(ptr->surname, 0, 50);
    memset(ptr->name, 0, 50);
    memset(ptr->telephoneNumber,0, 50);
    memset(ptr->workplace, 0, 50);
    memset(ptr->workplacePost, 0, 50);
    memset(ptr->email, 0, 50);
    memset(ptr->socialMedia, 0, 50);
    memset(ptr->messanger, 0, 50);
}

void PBOutput(phoneBook *ptr)
{
    printf("Surname and name: %s %s\n", ptr->surname, ptr->name);
    printf("Workplace: %s\n", ptr->workplace);
    printf("Workplace position: %s\n", ptr->workplacePost);
    printf("Telephone number: %s\n", ptr->telephoneNumber);
    printf("Email: %s\n", ptr->email);
    printf("Social media: %s\n", ptr->socialMedia);
    printf("Messanger: %s\n", ptr->messanger);
}