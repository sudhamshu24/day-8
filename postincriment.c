/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int
main ()
{
  int a,b,c,p;
  printf ("enter value of a,b,c");
  scanf ("%d%d%d", &a,&b,&c);
  p=a++ + --b + ++c;
  printf ("%d\n%d\v%d\n%d\n",a,b,c,p);
  return 0;
}

