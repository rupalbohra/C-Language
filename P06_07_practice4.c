# include<stdio.h>

void sumAndAvg(int *a, int *b, int *sum, float *avg){
    *sum= *a + *b;
    *avg = (float)(*sum)/2;
}


int main(){
    int a, b, sum;
    float avg;
    printf("Enter the value of a: ");
    scanf("%d",&a);
    printf("Enter the value of b: ");
    scanf("%d",&b);
    sumAndAvg(&a, &b,&sum, &avg);
    printf("The sum of %d and %d is %d \n", a, b, sum);
    printf("The average of %d and %d is %f", a, b, avg);
return 0;
}

