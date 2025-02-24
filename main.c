/*
 * File:   main.c
 * Author: paolo
 *
 * Created on February 24, 2025, 9:44 AM
 */


#include "xc.h"

int main(void) {
    int pinValue1 = 0;
    // set the pin as input
    TRISEbits.TRISE8 = 1;
    
    // set the pin as output
    TRISAbits.TRISA0 = 0;
    while(1){
        LATAbits.LATA0 = 0;
        // read button T2 RE8
        pinValue1 = PORTEbits.RE8; 
        if(pinValue1 == 1){ 
        // switch on led1 RA0
            LATAbits.LATA0 = 1;
        }
        
        
        // read button T2 RE8

        // switch on led1 RA0
        
    }
    
    return 0;
}
