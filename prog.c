#include<stdio.h>
int main()
{
    int a, b;
    printf("enter number a : ");
    scanf("%d", &a);

    printf("enter number b : ");
    scanf("%d", &b);

    // int sum = a+b;
    printf("the sum of a and b is %d", a + b);



    //Compilation => a computer program that translates code into machine code




    //1.write a program to calculate area of a sqaure.

    int side;             //side also can be float
    printf("\nside of a sqaure is : ");
    scanf("%d" , &side);

    
    printf("area of a square is : %d ", side * side);




    //2. area of a circle

    float rad;
    printf("\nradius of circle is :");
    scanf("%f", &rad);

    printf("the area of circle is %f", 3.14 * rad *rad);
    

    //cube of number
    int n;
    printf("\nenter any number :");
    scanf("%d", &n);
    printf("cube of this number : %d ", n*n*n);

    return 0;
}