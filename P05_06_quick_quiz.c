# include<stdio.h>
#include<math.h>
void area();

int main(){
    int side;
    area();
    return 0;
} 

void area(){
    int area, side;
    printf("Enter side of square:", side);
    scanf("%d", &side);
    printf("The area of square with side %d is %f", side, pow(side,2));
}