// Bank Management System

#include <stdio.h>  //printf(),scanf()
#include <stdlib.h> //exit(0),system()
#include <conio.h>  //getch()
#include <time.h>   //time(),ctime()
char name[20];
int dip_amt, amt = 10000, acc_no, ac, count = 0; // Global variables
int trans_amt;
int with_amt;

void deposit_money();
void withdraw_money();
void transfer_money();
void checkDetail();
void LastDetail();
void transaction_details();
void menu();
void divider()
{
    for (int i = 0; i < 50; i++)
    {
        printf("-");
    }
}
int main()
{
    FILE *ptr = fopen("Account.txt", "w");

    int ch;
    printf("Enter your name : \n");
    gets(name);
    fprintf(ptr, "\nName : %s\n", name);
    printf("Enter your account no. : ");
    scanf("%d", &acc_no);
    fprintf(ptr, "Account no. : %d\n", acc_no);

    fclose(ptr);
    while (1)
    {
        menu();
        printf("\nEnter your choice :\n");
        scanf("%d", &ch);
        switch (ch)
        {
        case 1:
            system("cls");
            deposit_money();
            break;
        case 2:
            system("cls");
            withdraw_money();
            break;

        case 3:
            system("cls");
            transfer_money();
            break;

        case 4:
            system("cls");
            checkDetail();
            break;

        case 5:
            transaction_details();
            break;

        case 6:
            system("cls");
            LastDetail();
            exit(0);

        default:
            printf("*****Invalid choice*****");
        }
    }

    return 0;
}
void menu()
{

    system("cls");
    divider();
    printf("\n\tMENU\n");

    divider();
    printf("\n1.Deposit Money\n");
    printf("2.Withdraw Money\n");
    printf("3.Transfer Money\n");
    printf("4.Account details\n");
    printf("5.Transaction details\n");
    printf("6.Exit\n");
    divider();
}
