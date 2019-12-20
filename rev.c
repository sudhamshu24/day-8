/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>
#include<math.h>

int main()
{ 
    int n,r,sum=0,num,l=0;
    scanf("%d",&n);
    num=n;
    while(n!=0)
    {
        l++;
        n=n/10;
    }
    n=num;
    while(n!=0)
    {
       r=n%10;
       sum=sum+pow(r,l);
       n=n/10;
    }
    if(sum==num)
    printf("%d is armstrong",num);
    else
      printf("%d is not armstrong",num);
    return 0;
}


