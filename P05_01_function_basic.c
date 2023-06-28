# include<stdio.h>
void display(); //function prototype

int main(){
    int a;
    printf("This is initializing display \n");
    display();                                          //function call
    printf("Display function finished its work \n");

return 0;
}

void display(){
    printf("This is display \n");     //function definition
}