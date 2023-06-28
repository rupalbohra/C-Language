# include<stdio.h>
void printAdd(int a); 

int main(){
    int i;
    int *b;
    printf("The address of i is %u \n", b);
    printAdd(i);
return 0;
}

void printAdd(int a){
    int i;
    printf("The address of i is %u \n", &i);
}