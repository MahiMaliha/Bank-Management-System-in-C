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
