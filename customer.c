#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct
{
    char name[20];
    char address[100];
    char city[100];
    char number[50];
    char balance[20];
    char last_payment[20];
}
member;

void add_customer(FILE *file);
void search_customer(FILE *file);
void delete_customer(FILE *file);
void edit_customer(FILE *file);
void display_customer(FILE *file);
int main()
{
    member members;

    FILE *outfile = fopen("customer_data.csv", "a+");
    if (outfile == NULL)
    {
        printf("could not open file.\n");
        return 1;
    }

    printf("Welcome to Customer Menu. Please select from below choices.\n");

    int choice;
    do
    {
        printf("To add a cutomer, please press 1 and enter.\n");
        printf("To search for a cutomer, please press 2 and enter.\n");
        printf("To deleter a cutomer, please press 3 and enter.\n");
        printf("To edit a cutomer, please press 4 and enter.\n");
        printf("To display complete cutomer data, please press 5 and enter.\n");
        printf("To quit, please press 6 and enter.\n");

        scanf("%i", &choice);

        switch(choice)
        {
            case 1:
            add_customer(outfile);
            break;

            case 2:
            search_customer(outfile);
            break;

            case 3:
            delete_customer(outfile);
            break;

            case 4:
            edit_customer(outfile);
            break;

            case 5:
            display_customer(outfile);
            break;
        }
    }
    while (choice != 6);
    fclose(outfile);
    return 0;
}

void add_customer(FILE *file)
{

    member members;

    {
        printf("Member's name: ");
        scanf("%s", members.name);

        printf("Address of the member: ");
        scanf("%s", members.address);

        printf("City, state & Zip Code of the member: ");
        scanf("%s", members.city);

        printf("Mobile number of the member: ");
        scanf("%s", members.number);

        printf("Balance of the member: ");
        scanf("%s", members.balance);

        printf("Last payment date of the member: ");
        scanf("%s", members.last_payment);
    }

    fwrite(&members, sizeof(member), 1, file);
    printf("Customer added succesfully.\n");
}
void search_customer(FILE *file)
{
    char customer[20];
    printf("Name of customer: ");
    scanf("%s", customer);

    member *buffer = malloc(sizeof(buffer));

    while (fread (&buffer, sizeof(member), 1, file) == 1)
    {
        if (strcmp(buffer, customer) == 0)
        {
            printf("%s \n, %s \n, %s \n, %s \n, %s \n", members.name, members.address, members.city, members.balance, members.last_payment);
        }
        else
        {
            printf("Customer not found\n");
        }
    }
    free(buffer);
}

void delete_customer(FILE *file)
{
    if (search_customer)
    {

    }
}
void edit_customer(FILE *file);
void display_customer(File *file);
