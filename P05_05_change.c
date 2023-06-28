# include<stdio.h>
void change(int a);

int main(){
   int b=344;
   printf("The value of b before change is %d \n",b);
   change(b);
   printf("The value of b after change is %d \n", b);
 
return 0;
}

void change(int a){
    a=77;
}

// As you see the value of b before and after change remains the same. 
//This is because change is just name of variable. It does not direct the int to change its value.