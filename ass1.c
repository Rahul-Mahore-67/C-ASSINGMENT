#include<stdio.h>
int main(){
    int x=10;
    int pre_result,post_result;
    //pre-increment:++x increments x before using it value
    pre_result=++x +20; //x become 11 ,then 11_20=21
    //reset x  for post-increment demonstration
    x=10;
    //post-increment :x++ use x's value ,then increment x
    post_result= x++ +20; // 10+20 =30, then x become 11
    printf("using pre-increment (++x): result=%d, x=%d\n",pre_result,x);
    // Reset x for clarity
    x=10;
    post_result =x++ +20;
    printf("using post-increment (x++): result=%d ,x=%d\n",post_result,x);
    return 0;
}