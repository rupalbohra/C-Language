# include<stdio.h>

 int main(){
    float a;
    printf("Enter temperature in celcius:", a);
    scanf("%f",&a);
    printf("Temperature in farenheit %f", (a*9/5)+32);
    return 0; 
}