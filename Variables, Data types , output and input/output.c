#include<stdio.h>
int main()
{
    //OUTPUT

    printf("hello world\n");            // \n for next line 
    printf("I am Sheetal Gangwal\n");



    //IDENTIFIERS          %d,  %f   , %c
    int age = 19;
    printf("My age is %d", age);


    char name = 's';
    printf("\nmy name is %c \n", name );


    //INPUT
    // "" iske andar format ka type like d, c, or f and then comma, krke varaiable ka naam lekin variable ke naam se pehle & ..that's it 

    int number;
    printf("enter any number : ");
    scanf("%d", &number);

    printf("you entered %d", number);      //ab end me wapas printf krke user ko dikhane k liye keval identifier use krenege & nahi
    




    return 0;
}