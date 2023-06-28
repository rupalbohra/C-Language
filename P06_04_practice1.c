# include<stdio.h>
int main(){
     int a=3;
     int *b;
     b = &a;
     printf("The address of variable a is %u \n", &a);
    // or printf("The address of variable a is %u /n", b);
     printf("The value of a is %d \n", *b);
return 0;
}