#include <stdio.h>

int CostCalculate( int , int ) ;

int main() {
    int zoneCode ;
    int weight_kg ;
    float totalCost = 0.0 ;

    if ( scanf( "%d %f" , &zoneCode , &weight_kg ) != 2 ) {
        return 1 ;
    }// end if

    if ( weight_kg < 0 ) {
        return 1 ;
    }// end if

    if ( zoneCode < 1 || zoneCode > 3 ) {
        return 1 ;
    }// end if

    printf( "%.2f\n" , totalCost ) ;

    return 0 ;
}// end main function

int CostCalculate( int zoneCode , int weight_kg ) {
    if ( zoneCode == 1 ) {
        if ( weight_kg <= 5 ) {
            return 50 ;
        }
        else{
            return 80 ;
        }// end if else
    }
    else if ( zoneCode == 2 ) {
        if ( weight_kg <= 10 ) {
            return 150 ;
        }
        else{
            return 250 ;
        }// end if else
    }
    else if ( zoneCode == 3 ) {
        return 500 ;
    }// end if else
}// end CostCalculate function