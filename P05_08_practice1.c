# include<stdio.h>
float average(float a, float b, float c);

int main(){
        int a, b, c;
        printf("Enter the value of a: \n");
        scanf("%d", &a);
        printf("Enter the value of b: \n");
        scanf("%d", &b);
        printf("Enter the value of c: \n");
        scanf("%d", &c);
        printf("The average of a, b, c is: %f", average(a,b,c));
return 0;
}

float average(float a, float b, float c){
    float result;
    result = (a+b+c)/3;          
    return result;                         
}