#include <stdio.h>
#include <stdlib.h>
int main ()
{
   char  CharacterName [30] = "JohnVariable"  ;  /// char tells the c compiler that a variable of type char is being executed.
                                 /// CharacterName is the  name of the variable being initialised.
                                 /// [] tells the compiler that a bunch of characters are being executed not just one.
  
   int CharacterAge  = 15;      /// int tells the c compiler that a variable of type int is being executed.
                                //// Characterage is the  name of the variable being initialised.
  
  printf("There was a man whose name was %s  ." , CharacterName);   ///%s for character String.
  printf("He was  %d  years old .\n", CharacterAge);      /// %d for integer.
 
   /// no to demonstrate that value of a variable can be changed .
   
   
   
   CharacterName [30] = "John Wick"  ; /// I  changed the value from  Johnvariable   to     John Wick.
  
   CharacterAge  = 7 ;       /// I changed  the   value from 15 to 7 .
  
   printf("There was a man whose name was %s  ." , CharacterName);   ///%s for character String.
  printf("He was  %d  years old .\n", CharacterAge);


   char Charactertype = 'A';                        
   char CharacterString[20] = "abcdefghijklmnop";
   float Floattype = 10.234;
   int Number = 150;
   double DecimalNumber = 20.123456;
   printf("Character is %c \n", Charactertype);     ///%c   for character.
   printf("String is %s \n" , CharacterString);     ///%s   for character String.
   
   printf("Float value is %f \n", Floattype);      ///%f    for float type variables.
   printf("Integer value is %d\n" , Number);       ///%d    for basic integer variable.
   printf("Double value is %lf \n", DecimalNumber);     ///%   for double  integer variable.
   
   /// directly printing a number into its octal and decimal function.
    
   printf("Octal value is %o \n", Number);           
   printf("Hexadecimal value is %x \n", Number);

  return 0;
}





/* output


There was a man whose name was JohnVariable  .He was  15  years old .
There was a man whose name was JohnVariable  .He was  7  years old .
Character is A 
String is abcdefghijklmnop 
Float value is 10.234000 
Integer value is 150
Double value is 20.123456 
Octal value is 226 
Hexadecimal value is 96 
*/

