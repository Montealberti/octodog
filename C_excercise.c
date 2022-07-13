******************************************************************************************************************************
***************************             PROGRAMMING EXERCISE                **************************************************
******************************************************************************************************************************

** Candidate name: 

/* Choose one of the programming exercises: */


/* >>>>>>>>>>>>>>>>>>>>>>>>>>>>>>                Exercise 1:             <<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<*/

/* What does the following program do? */
/* What would you improve? */


#include <stdio.h>

int main()
{
    char operation;
    int n1, n2;

    printf("Enter an operator (+, -, *, /): ");
    scanf("%c", &operation);

    printf("Enter two operands: ");
    scanf("%d %d",&n1, &n2);

    switch(operation)
    {
        case '+':
            printf("%d + %d = %d",n1, n2, n1+n2);
            break;

        case '-':
            printf("%d - %d = %d",n1, n2, n1-n2);
            break;

        case '*':
            printf("%d * %d = %d",n1, n2, n1*n2);
            break;

        case '/':
            printf("%d / %d = %d",n1, n2, n1/n2);
            break;

        // operator doesn't match any case constant +, -, *, /
        default:
            printf("Error! operator is not correct");
    }

    return 0;
}




/* >>>>>>>>>>>>>>>>>>>>>>>>>>>>>>                Exercise 2:             <<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<*/


/*  Find the 3 errors               */
/*  Extra points if you find 4!!!   */


#include <stdio.h>
 
int main () {

   int arreglo[5] = { 1, 2, 3, 4, 5};

   for(int c=1; c<=5; c++)
   {
      printf("%d", arreglo[c]);
   }
   
}
















/* >>>>>>>>>>>>>>>>>>>>>>>>>>>>>>                Exercise 3:             <<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<*/


/* What is the value of each variable in each step? */
/* int datatype in this architecture = 16bits = 2 Bytes*/
/* n address = 0x80 */

#include<stdio.h>


void main()
{
  int n      = 0;
  int x      = 0;
  int *p     = &n;
 

  n++;
  // In this line n = 
  
  ++n;
  // In this line n = 
   
  p++;
  // In this line p = 

  *p++;
  // In this line *p = 

  x = ++n;
  // In this line x = 
  // In this line n = 

  x = n++;
  // In this line x = 
  // In this line n = 

}





/***************************/
uint8_t *const pData = &c;
uint8_t const *pData = &c;
/***************************/






/***************************/
uint8_t a = 255;
a = a & (1 << 0);
/***************************/




/* Pre-Conditions: 

unsigned int = 32bits

*/

#include <stdio.h>

int main()
{
   unsigned int  i = 1;
   char 		*c = (char*)&i;
   
   if (*c)   
       printf("Little endian");
   else
       printf("Big endian");
   
   getchar();
   
   return 0;
}




