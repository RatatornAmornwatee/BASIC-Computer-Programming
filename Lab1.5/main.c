#include <stdio.h>

int main() {
  int number ;
  int evenSum = 0 ;
  int oddSum = 0 ;

  if( scanf( "%d" , &number) != 1) {
    return 1 ;
  }

  while( number != 0 ) {
    if( number % 2 == 0 ) {
      evenSum += number ;
    } else {
      oddSum += number ;
      printf("%d",number);
    }

    if( scanf( "%d" , &number ) != 1 ) {
      break;
    }

  }

  printf( "Even Sum: %d\nOddSum: %d" , evenSum , oddSum ) ;

  return 0 ;
}