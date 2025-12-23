#include<stdio.h>
int main(){
    //compare two accounts balance
    int a_balance,b_balance,compar;
    printf("enter balance of account A:");
    scanf("%d",&a_balance);
    printf("enter balance of account B:");
    scanf("%d",&b_balance);

    compar=a_balance == b_balance;
    printf("Both Accounts equal:%d\n",compar);
    compar= a_balance > b_balance;
    printf("Account A has more balance than B:%d \n",compar);
    compar=a_balance < b_balance;
    printf("Account B has more balance than A:%d\n",compar);
    return 0;
}