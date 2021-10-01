/*
 * File:   main.c
 * Author: 20187263
 *
 * Created on 27 de Setembro de 2021, 13:10
 */

#include "config.h"
#include <xc.h>
#include "delay.h"
#include "lcd.h"
#include "eusart.h"
#include "keyboard.h"


void main(void)
{
    keyboard.init();
    while( 1 )
    {
        eusart_init();
        keyboardboard();
    }
}