# include<stdio.h>

int main(){
    int length, breadth, area ; 
    area = length*breadth;
    printf("Welcome to the program of finding area of a rectangle.\n");
    printf("Enter length \n ");
    scanf("%d", &length);
    printf("Enter breadth \n");
    scanf("%d", &breadth);
   
    printf("The area of this rectangle is: %d", & area);
    return 0;
}