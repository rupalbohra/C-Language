// program to find grade of a student

# include<stdio.h>

int main(){
    int marks;
    printf("enter your marks:");
    scanf("%d", &marks);

    if(marks>=90 && marks<=100){
        printf("your grade is A");
    }
    else if(marks>=80 && marks<90){
        printf("your grade is B");
    }
    else if(marks>=70 && marks<80){
        printf("your grade is C");
        
    }
    else if(marks>=60 && marks<70){
        printf("your grade is D");
        
    }
    else {
        printf("\nYour marks are very poor. You will have to fill an improvement.");
    }
    return 0;
}