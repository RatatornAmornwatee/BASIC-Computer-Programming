#include <stdio.h>

int main() {
  int N , i ;

  if( scanf( "%d" , &N ) != 1 ) {
    return 1 ;
  }//end if

  for( i = 0 ; i < N ; i++ ) {
    printf( "Hello Loop!\n" ) ;
  }//end for

  return 0 ;
}//end main function