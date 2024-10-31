#include <stdio.h>

int main(){

int guess, target=23;
printf("Choose a number:");
scanf("%d", &guess);

while (guess !=target){

    if (guess < target){
        printf("Choose a bigger number! ");
    }else{
        printf ("Choose a smaller number!");
    }

printf("Try again. \n Choose a number:");
scanf("%d",&guess);
    }


printf("Correct guess!!");



return 0;
}
