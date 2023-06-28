# include<stdio.h>
int main(){
    int num, i, prime=1;

    printf("enter the number: ");
    scanf("%d", &num);


    while(i=2 && i<num && i!=num){
        i++;
        if(num%i==0){
           prime = 0;
           break;
       }  
      
    }

    if(prime == 0){
    printf("The entered number is not a prime number.");
    }
    else{
        printf("The entered number is a prime number.");
    }

return 0;
}

// # include<stdio.h>
// int main(){
//     int i=2, prime=1, num;

//     printf("Enter your number: ");
//     scanf("%d", &num);

//     do{
//     i++;
//     if(num%i == 0){
//         prime = 0;
//         break;
//     }    
//     }while(i<num && i!=num);

//     if(prime == 0){
//         printf("The entered number is not a prime number. ");
//     }
//     else{
//         printf("The entered number is a prime number. ");
//     }

// return 0;
// }