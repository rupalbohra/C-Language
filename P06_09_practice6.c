# include<stdio.h>

int tenTimes(int a, int b);

int main(){
   int x, y;
   printf("Enter the value of x: ");
   scanf("%d", &x);
   printf("The value of a before calling the function is %d \n", x);
   tenTimes(x, y);
   printf("Ten times the value of %d is %d \n",x, tenTimes(x, y));
   printf("The value of a after calling the function is %d \n", x);

return 0;
}

int tenTimes(int a, int b){
    int tenTimes;
    tenTimes = b;
    tenTimes = a*10;
    a = 56;
    return tenTimes;
}