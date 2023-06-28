# include<stdio.h>

/*int main(){
    int income, tax;
    printf("enter your income: \n");
    scanf("%d", &income);

    if((income>=250000) && (income<500000)){
        printf("tax to be paid till the end of this month is %d", tax= 0.05*(income-250000));

    }
    if((income>=500000) && (income<1000000)){
        printf("tax to be paid till the end of this month is %d", tax= 0.20*(income-500000));
        
    }
    if(income>=1000000){
        printf("tax to be paid till the end of this month is %d",tax= 0.30*(income-1000000));
        
    }
    return 0;
}*/

# include<stdio.h>

int main(){
    float income, tax;

    printf("enter your income:");
    scanf("%d", &income);

    if((income>=250000) && (income<=500000)){
        tax= 0.05*(income-250000);
    }
    if((income>500000) && (income<=1000000)){
         tax= 0.20*(income-500000);
    }
    if(income>1000000){
        tax= 0.30*(income-1000000);
    }

    printf("tax to be paid till the end of this month is %f", tax);

    return 0;
}

