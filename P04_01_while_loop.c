# include<stdio.h>

int main(){
    int a;
    printf("Enter value of a: ");
    scanf("%d", &a);
    while(a<10){
        printf("%d \n", a);
    a++;  // ++ is an increment operator. used fors increasing value by 1
    }
    return 0;

}