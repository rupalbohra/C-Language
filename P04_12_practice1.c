# include<stdio.h>
int main(){
     int n;
     printf("Enter the value of n: ");
     scanf("%d",&n);
     printf("multiplication table of %d is \n \n", n);

     for(int i=1; i<=10; i++ ){
         printf("%d X %d = %d\n",n, i, n*i);
     }

    
return 0;
}