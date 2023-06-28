# include<stdio.h>
int main(){

    int marks[5];

    for(int i = 0; i<5; i++){
    printf("Enter the value of marks for student %d: ", i+1);   // for convinient understanding of user use i+1
    scanf("%d", &marks[i]);
    }

    printf("The marks you have entered are: \n"); 

    for(int i = 0; i<5; i++){
    printf("%d \n", marks[i]);  
    }

return 0;
}