 # include<stdio.h>
void line(int a);

int main(){
    int n;
    printf("Enter the number of desired star lines:");
    scanf("%d", &n);
    line(n);
    
return 0;
}

// for n=3
// *
// ***
// *****

void line(int a){
     if(a == 1){
         printf("* \n");
         return ;
     }
     line(a-1);
     for(int i=0; i<(2*a-1); i++ ){
         printf("*");
     }
     printf("\n");
    
}