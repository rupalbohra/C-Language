# include<stdio.h>

int main(){
    int physics, maths, chemistry;
    float total;
    
    printf("enter your marks in physics: \n");
    scanf("%d", & physics);
    
    printf("enter your marks in maths: \n");
    scanf("%d", & maths);
 
    printf("enter your marks in chemistry: \n");
    scanf("%d", & chemistry);
    
    total=(physics+chemistry+maths)/3;


    if((total<40) || (physics<33) || (maths<33) || (chemistry<33)){
        printf("your total percentage is %f and you are failed", total);
    }
    else if((total>300) || (physics>100) || (maths>100) || (chemistry>100)){
        printf("your score is invalid. Please enter a valid score");
    }
    else{
        printf("your total percentage is %f and you are pass", total);
    }

}