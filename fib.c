/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main()
{ 
    int n,i;
    int fib[100];
    fib[0]=0,fib[1]=1;
    scanf("%d",&n);
    printf("%d\t%d\t",fib[0],fib[1]);
    for(i=1;i<n;i++)
    {
        fib[i]=fib[i-1]+fib[i-2];
        printf("%d\t",fib[i]);
        fib[i-1]=fib[i-2];
        fib[i-2]=fib[i];
    }
    return 0;
}

