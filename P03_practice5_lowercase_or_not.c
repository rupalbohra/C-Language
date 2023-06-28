# include<stdio.h>

int main(){
   char ch;
// a-z=97-122 ASCIT values
    printf("enter the character:");
    scanf("%c", &ch);

    if(ch<=122 && ch>=97){
        printf("It is lower case");
    }
    else{
        printf("It is not lower case");
    }
    return 0;
}