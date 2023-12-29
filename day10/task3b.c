#include <stdio.h>

// #define SIZE 2

struct Customer
{
    int id;
    char name[50];
};

struct Account
{
    int accno;
    float balance;
    struct Customer customer_info;
};

void display_customers(struct Account *ptr, int size);

int main()
{
    struct Account account[9];

    struct Account *ptr = account;

    int SIZE = sizeof(account) / sizeof(account[0]);

    for (int i = 0; i < SIZE; i++)
    {
        printf("enter the acc number: ");
        scanf("%d", &account[i].accno);
        printf("enter the acc balance: ");
        scanf("%f", &account[i].balance);
        printf("enter the customer id: ");
        scanf("%d", &account[i].customer_info.id);
        printf("enter customer name: ");
        scanf("%s", &account[i].customer_info.name);

        puts("--------------------");
    }

    display_customers(ptr, SIZE);
}

void display_customers(struct Account *ptr, int size)
{
    for (int i = 0; i < size; i++)
    {
        printf("Customer name: %d\n", (ptr + i)->customer_info.id);
        printf("Customer id: %s\n", (ptr + i)->customer_info.name);
        printf("Account number: %d\n", (ptr + i)->accno);
        printf("Account balance: %.2f\n", (ptr + i)->balance);

        puts("");
    }
}