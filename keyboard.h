#ifndef KEYBOARD_H
#define KEYBOARD_H

unsigned char previousKey( void );  // retorna Tecla Anterior.
unsigned char currentKey( void );   // retorna Tecla Atual.
unsigned char keyboard_scan( void ); // Varredura do teclado.
void keyboard_init( void );          // Inicializar hw de acesso ao teclado.
void keyboardboard (void);

struct 
{
    unsigned char (* Tec_Ant) ( void );  // retorna Tecla Anterior.
    unsigned char (* Tec_Atual) ( void );   // retorna Tecla Atual.
    unsigned char (* Scan_Tec)( void ); // Varredura do teclado.
    void (* init )( void );     
    
} keyboard = { previousKey , currentKey , keyboard_scan , keyboard_init };

#endif
