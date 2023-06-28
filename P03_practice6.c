# include<stdio.h>

int main(){
    int num1;
    int num2;
    int num3;
    int num4;

    printf("Enter 1st number:", &num1);
    scanf("%d", &num1);

    printf("Enter 2nd number:", &num2);
    scanf("%d", &num2);

    printf("Enter 3rd number:", &num3);
    scanf("%d", &num3);

    printf("Enter 4th number:", &num4);
    scanf("%d", &num4);

    if(num1 > num2 && num1 > num3 && num1 > num4){
        printf("Greatest of four numbers is %d", num1);
    }

    if(num2 > num1 && num2 > num3 && num2 > num4){
        printf("Greatest of four numbers is %d", num2);
    }

    if(num3 > num1 && num3 > num2 && num3 > num4){
        printf("Greatest of four numbers is %d", num3);
    }

    if(num4 > num1 && num4 > num2 && num4 > num3){
        printf("Greatest of four numbers is %d", num4);
    }

    return 0;
}