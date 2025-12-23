#include<stdio.h>
int main(){
    int a=5;
    float b=1.8;
    char c='A';
    double n=12.3;
    printf("%d\n",a);
    printf("%.2f\n",b);
    printf("%c\n",c);
    printf("%lf\n",n);
    printf(" size of integer %d\n",sizeof(int));
    printf(" size of float %d\n",sizeof(float));
    printf(" size of character%d\n",sizeof(char));
    printf(" size of double %d\n",sizeof(double));

    return 0;

}