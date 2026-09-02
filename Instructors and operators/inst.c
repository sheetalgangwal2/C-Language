/* Instructors
these are statements in a program

types => 
type declaration inst
arithematic inst
control inst
*/


//1 type declaration inst   =>  declare variable before using it
#include<stdio.h>
int main()
{
    int a = 3;
    int b = a;
    int c = b + 5;
    int d = 1, e;   //it means also declare e


    //we can also declare multiple var together

    int k, l, m;        //int k = l = m = 4   => error
    k = l = m = 2;




    //2 arithematic inst

    int x = 2;
    int y = 5;

    int sum = a+b;
    int multiply = a*b;
    int division = a/b;
    int diff = a - b;

    /*invalid 
    b + c = a
    a = bc
    a = b^c
    */


    
/*#include<math.h>

int power = pow(b,c);
int power = b^c;
*/



//modular operator

/*   3 % 2 = 1
    -3 % 2 = -1
*/



    //3 control inst
    /* used to determine flow of program
    a. sequence control   b. decision control
    c. loop control       d. case control
    */



    return 0;
}
