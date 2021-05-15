#include <stdio.h>
#include <stdlib.h>
int main ()
{
   char  CharacterName [] = "JohnVariable"  ;  /// char tells the c compiler that a variable of type char is being executed.
                                 /// CharacterName is the  name of the variable being initialised.
                                 /// [] tells the compiler that a bunch of characters are being executed not just one.
  
   int CharacterAge  = 15;      /// int tells the c compiler that a variable of type int is being executed.
                                //// Characterage is the  name of the variable being initialised.
  
  printf("CharacterName %s" , &CharacterName);   ///%s for char
  printf("CharacterAge %d", &CharacterAge);      /// %d for integer



   char ch = 'A';
   char str[20] = "fresh2refresh.com";
   float flt = 10.234;
   int no = 150;
   double dbl = 20.123456;
   printf("Character is %c \n", ch);
   printf("String is %s \n" , str);
   printf("Float value is %f \n", flt);
   printf("Integer value is %d\n" , no);
   printf("Double value is %lf \n", dbl);
   printf("Octal value is %o \n", no);
   printf("Hexadecimal value is %x \n", no);

  return 0;
}
