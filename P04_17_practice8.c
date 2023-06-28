// # include<stdio.h>
// int main(){
//     int num, factorial=1;
//     printf("Enter your number:");
//     scanf("%d", &num);

//     for(int i = num ; i<=num && i>=1 ; i-- ){
//         factorial *= i;
//     }
//     printf("the factorial of entered number is %d", factorial);


// return 0;
// }

//  with other method:
 # include<stdio.h>
 int main(){
     int num, factorial=1;
    printf("enter your number: ");
    scanf("%d", &num);

    for(int i=1; i<=num; i++){
        factorial *=i ;
    }

    printf("the factorial of entered number is: %d", factorial);


 return 0;
 }  

//  NOTE: factorial of 4 = 4 X 3 X 2 X 1