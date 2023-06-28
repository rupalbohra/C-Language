# include<stdio.h>

int sum(int a, int b);

int main(){
    int x=4, y=7;

   printf("The value of x and y is %d and %d \n", x , y);
   printf("The sum of 4 and 7 is %d \n", sum(x, y));
   printf("The value of x and y after function call is %d and %d \n", x , y);
return 0;
}

int sum(int a, int b){
    int c;
    c=a+b;
    a=1234;
    b=5463;
    return c;
}

// it can be clearly seen that the value of x and y doesnot change when value of a and b are change in function
//just like: if you spoil the zerox notes of your friend, the original notes do not get spoiled.