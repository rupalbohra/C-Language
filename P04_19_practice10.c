// this is not the best method to solve this problem. it may be solved with dsa later on.
# include<stdio.h>
int main(){
     int num, i=2, prime =1;
     printf("enter the number: ");
     scanf("%d", &num);

     for(i; i<num; i++){
        if (num%i == 0){
            prime = 0;
            break;
        }
    }

     if(prime==0){
         printf("the entered number is not a prime number.");
     }
     else{
         printf("the entered number is a prime number. ");
     }
     
     
return 0;
}