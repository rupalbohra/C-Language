# include<stdio.h>
int main(){
    int i = 34;
    int * j = &i; // j will now store address of i
    printf("The value of i is %d \n", i);
                //or
    printf("The value of i is %d \n", *j);  // * is value at address operator
    printf("The address of i is %u \n", &i);  
                //or
    printf("The address of i is %u \n", j);  
    
    printf("The address of j is %u \n", &j);  

    printf("The value of j is %u \n", *(&j));   // * indicates address operator i.e. *(&j) means value at 
    return 0;                                   // address of j and &j means address of j

}

// pointer to a pointer, example: int i = 34;
// int * j = &i;
// int ** k = &j
// similarly we can go to pointer to a pointer to a pointer