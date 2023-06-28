// a program to  calculate the sum of numbers occuring in the multiplication table of 8

# include<stdio.h>
int main(){
    int sum=0, table;
    for(int i=1; i<=10; i++){
        table = 8*i;
        sum += table ;
    }
    printf("the sum of numbers occuring in the table of 8 is %d", sum);
return 0;
}