# include<stdio.h>
int main(){
     int n;
     printf("Enter the value of n: ");
     scanf("%d",&n);
     printf("multiplication table of %d in reverse order is \n \n", n);

     for(int i=10; i>=1; i-- ){
         printf("%d X %d = %d\n",n, i, n*i);
     }
