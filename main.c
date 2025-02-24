/*
 * File:   main.c
 * Author: paolo
 *
 * Created on February 24, 2025, 9:44 AM
 */


#include "xc.h"

int main(void) {
    ANSELA = ANSELB = ANSELC = ANSELD = ANSELE = ANSELG = 0x0000;
    
    // set the pin as input
    TRISEbits.TRISE8 = 1;
    // set the pin as output
    TRISAbits.TRISA0 = 0;
    LATAbits.LATA0 = 0;

    while(1){
        // read button T2 RE8
        if(PORTEbits.RE8 == 0){ 
        // switch on led1 RA0
            LATAbits.LATA0 = 1;
        } else{
            LATAbits.LATA0 = 0;
        }     
    }
    
    return 0;
}
