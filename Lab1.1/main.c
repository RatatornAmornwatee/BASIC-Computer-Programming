#include <stdio.h>

int main() {
  int N , i ;

  // Read number of times to print the message
  if( scanf ( "%d" , &N ) != 1 ) {
    printf ( "Error" ) ;
    return 1 ;
  }//end if

  // Input varidation
  if( N <= 0 ) {
    printf ( "Error" ) ;
    return 1 ;
  }//end if

  // Print Hello Loop! N time
  for( i = 0 ; i < N ; i++ ) {
    printf ( "Hello Loop!\n" ) ;
  }//end for

  return 0 ;
}//end main function