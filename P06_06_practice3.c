# include<stdio.h>

void tenTimes(int *a, int *b);

int main(){
   int a, b;
   printf("Enter the value of a: ");
   scanf("%d", &a);
   tenTimes(&a, &b);
   printf("Ten times of %d is %d",a, b);
return 0;
}

void tenTimes(int *a, int *b){
    int times;
    times = *b;
    *b= *a*10;
}