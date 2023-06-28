//hint :
//fibonacci(n)= fibonacci(n-1) + fib(n-2)  0,1,1,2,3,5,8,13...

# include<stdio.h>
int fib(int x);

int main(){
    int n;
    printf("Welcome to the program of finding nth number of fibonacci series.\n Enter value of n:");
    scanf("%d", &n);
    printf(" required number of fibnacci series is %d", fib(n));
return 0;
}

int fib(int x){
    
    if(x==1){
        return 0;
    }
    else if(x==2){
        return 1;
    }
    else{
        return fib(x-1) + fib(x-2);
    }
}
