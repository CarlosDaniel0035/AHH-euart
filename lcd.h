#ifndef LCD_H
#define LCD_H

//***************** Caracteres especiais
#define NC_DEGREE       001

//***************** Funções

void dispLCD_init( void );
void dispLCD( unsigned char lin, unsigned char col, const char * str );
void dispLCDstr( const char * str );
void dispLCD_num(  unsigned char lin, unsigned char col,
                    int num, unsigned char tam );
void dispLCD_clr( void );
unsigned char dispLCD_B0( void );
unsigned char dispLCD_B1( void );
void dispLCD_putChar( unsigned char l, unsigned char c, unsigned char ascii_code );

struct
{
    void (* init)(void);
    void (* print)( const char * str );
    void (* printpos)( unsigned char lin, unsigned char col, const char * str );
    void (* printv)(  unsigned char lin, unsigned char col, int num, unsigned char tam );
    void (* clr)( void );
    unsigned char (* B0)( void );
    unsigned char (* B1)( void );
} print = { dispLCD_init, dispLCDstr, dispLCD, dispLCD_num, dispLCD_clr, dispLCD_B0, dispLCD_B1 };

#endif
