// Sum of first ten natural numbers using do while loop
# include<stdio.h>
int main(){
    int i=1, sum=0;
    do{
        sum += i;
        i++;
    }while(i <= 10);

 printf("the sum of first ten natural numbers is %d", sum);
    
return 0;
}

// Sum of first ten natural numbers using for loop
//                                     run the below code by un commenting it.
// # include<stdio.h>                       
// int main(){
//      int i=1, sum =0;
//      for(i=1; i<=10; i++){
//          sum += i;
//      }
//      printf("the value of sum of first ten natural numbers is %d", sum);

// return 0;
// }

