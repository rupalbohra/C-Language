# include<stdio.h>
// sum is a function which takes a and b as input  and returns an integer as an output

int sum(int a, int b);  // function prototype declaration

int main(){
    int c;
    c = sum(2,5);  // funtion call             
    // 2 and 5 are arguments
    printf("The value of c is %d \n ", c);
    return 0;
}

int sum(int a, int b){              //int c in sum and main are not related to each other. 
     //a and b are parameters                                // they are two different variables                                    
                                    // a==2 and b==5
    int c;
    c = a+b;
    return c;
}
