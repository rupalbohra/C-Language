# include<stdio.h>
int sum(int x);

int main(){
    int n;
    printf("Welcome to the program of finding sum of n natural numbers. Enter the value of n: ");
    scanf("%d", &n);
    printf("The sum of first %d natural numbers is %d", n, sum(n));

return 0;
}

int sum(int x){
    if(x==1){
        return 1;
    }
    else{
        return x + sum(x-1);
    }
}