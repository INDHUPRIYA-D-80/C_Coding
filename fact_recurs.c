#include <stdio.h>
int refact ( int ) ;
 
int main( )
{
    int  num, fact ;
    scanf("%d",&num);
 
    fact = refact ( num ) ;
    printf ( "Factorial value = %d\n", fact ) ;
 
    return 0 ;
}
 
int  refact ( int  n )
{
    int  p ;
 
    if ( n == 0 )   
        return ( 1 ) ; 
    else
        p = n * refact ( n - 1 ) ; //recursive call
 
    return ( p ) ;
}
