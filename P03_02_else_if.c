# include<stdio.h>

//application of if else if else operator.
int main(){
    int a;
    printf("Enter value for a:");
    scanf("%d", &a);

    if(a==1){
        printf("a is 1 \n");
    }
    else if(a==2){
        printf("a is 2");
    }
    else if(a==3){
        printf("a is 3");
    }
    else{
        printf("a is not 1, 2 or 3");
    }
    
    return 0;
}
