#include<stdio.h>
#include<conio.h>
int display( int age){

     if(age>=18){
    printf("Your are Eligible for voating in India");
    }
    else{
        printf("You are not eligible for voating in India");
    }
}

int main(){
    display(11);
    return 0;
}
