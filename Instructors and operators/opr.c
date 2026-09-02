//Operators

#include<stdio.h>
int main()
{
    //2.Relational operators
    printf("%d \n", 5==5);          //1 =>true and 0 =>false

    /* others are    
    <, >=
    !=    (not equal to)
    */



    //3.Logical operators
    /* AND
    t t => t
    t f => f
    f f => f
    f t => f
    */
    printf("%d \n", 4>3 && 5>2);

    //OR

    printf("%d \n", 3> 4 || 5 >2);   //1
    /*  t t => t
    t f => t
    f t => t
    f f => f
    */




    //!=   logical not
    printf("%d \n", !(3<4));
    return 0;
}


