#include<stdio.h>
int main(){
char username[20],password[20];
printf("enter username:");
scanf("%s",username);
printf("enter password:");
scanf("%s",password);

if (strcmp(username,"admin") == 0 && strcmp(password,"1234") == 0) {
    printf("login successful\n");
}
else{
    printf("invalid login\n");
}
return 0;
}