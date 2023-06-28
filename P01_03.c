 # include<stdio.h>
 
 int main(){
     int radius;
     float pi = 3.14;
     printf(" Welcome to the program of finding volume of a cylinder \n");
     printf("\n Enter the radius:");
     scanf("%d",& radius);
     printf("\n the area of circular base is:%f", pi*radius *radius);
     int height;
     printf("\n enter height of cylinder: ");
     scanf("%d", & height);
     printf("the volume of cylinder is:%f",pi*radius*radius*height);
     return 0;

 }