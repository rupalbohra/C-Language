// # include<stdio.h>
// int main(){
//    int i= 34;
//    int *ptr = &i;
//    printf("The value of ptr is %u \n", ptr);
//    ptr++;
//    ptr++;
//    ptr++;  
//    ptr--;     // the value of ptr increases by 4 every time. This is because integer is of 4 bytes. 
//    ptr = ptr - 1;
//    printf("The value of ptr is %u \n", ptr);

// return 0;
// }

# include<stdio.h>
int main(){
   char c= 34;
   char *ptr = &c;
   printf("The value of ptr is %u \n", ptr);
   ptr++;  // Char is of 1 byte anf float is of 4 bytes.
   printf("The value of ptr is %u \n", ptr);
return 0;
}