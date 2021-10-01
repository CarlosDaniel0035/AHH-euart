#ifndef EUSART_H
#define EUSART_H

unsigned char rxEUSART( void );  // 
unsigned char rxStatusEUSART( void ); // 
unsigned char rxErrorEUSART( void );
void rxResetErrorEUSART( void );
void txEUSART( unsigned char d );
unsigned char txStatusEUSART( void );
void initEUSART( unsigned long baudRate );
void eusart_init (void);

struct
{
    unsigned char (*rxEUART)( void );         // Ler o valor recebido pelo canal de comunica��o serial
    unsigned char (*rxSTATUS)( void );   // Reinicializar/limpar os indicadores(flags) de erro.
    unsigned char (*rxERROR)( void );    // Reinicializar/limpar os indicadores(flags) de erro.
    void (* rxResetERROR) ( void );        // Verificar se algum dado foi recebido pelo canal de comunica��o.
    void (* txEUSART)( unsigned char d );       // Transmitir um dado pelo canal de comunica��o serial.
    unsigned char (* txSTATUS) ( void );   // Indicar que um dado est� sendo transmitido.
    void (* initEUART)( unsigned long baudRate ); // Inicializar perif�rico de comunica��o serial ass�ncrona.
} eusart = { rxEUSART, rxStatusEUSART , rxErrorEUSART , rxResetErrorEUSART , txEUSART , txStatusEUSART , initEUSART};



#endif
