# include<stdio.h>
void goodMorning();
void goodAfternoon();
void goodNight();

int main(){
     goodMorning();
     
     return 0;
}

void goodMorning(){
    printf("Good Morning Rupal. \n");
    goodAfternoon();
}

void goodAfternoon(){
    printf("Good Afternoon Rupal. \n");
    goodNight();
}

void goodNight(){
    printf("Good Night Rupal. \n");
}