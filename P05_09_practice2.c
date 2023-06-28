# include<stdio.h>
float fahrenheit(float celsius);

int main(){
    float celsius;
    printf("Enter temperature in celsius: \n");
    scanf("%f", &celsius);
    printf("Temperature in fahrenheit is %f", fahrenheit(celsius)); 
return 0;
}

float fahrenheit(float celsius){
     float result;
     result =(celsius * 9/5) + 32.0;
     return result;
      
}