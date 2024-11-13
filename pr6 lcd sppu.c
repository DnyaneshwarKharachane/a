#include "p18f4520.h"

#pragma config OSC = HS
#pragma config WDT = OFF
#pragma config PWRT = OFF
#pragma config DEBUG = OFF, LVP = OFF

#define ldata PORTD
#define rs PORTCbits.RC0
#define rw PORTCbits.RC1
#define en PORTCbits.RC2

void lcdcmd(unsigned char value);
void lcddata(unsigned char value);
void msdelay(unsigned int ms);

void main() {
    TRISD = 0x00;
    TRISC = 0x00;

    msdelay(50);
    lcdcmd(0x38);    // 8-bit mode, 2 lines, 5x7 format
    msdelay(15);
    lcdcmd(0x0E);    // Display ON, cursor ON
    msdelay(15);
    lcdcmd(0x1);    // Clear display
    msdelay(15);
    lcdcmd(0xE);    // Increment cursor
    msdelay(15);
    lcdcmd(0x80);    // Move cursor to beginning of the first line

    lcddata('S');
    msdelay(50);
    lcddata('P');
    msdelay(50);
    lcddata('P');
    msdelay(50);
    lcddata('U');
    msdelay(50);

    lcdcmd(0xC0);    // Move cursor to beginning of the second line
    msdelay(15);
    lcddata('S');
    msdelay(50);
    lcddata('I');
    msdelay(50);
    lcddata('T');
    msdelay(50);
    lcddata('S');
    msdelay(50);
}

void lcdcmd(unsigned char value) {
	rs = 0;
    ldata = value;
    rw = 0;
    en = 1;
    msdelay(5);
    en = 0;
	msdelay(2);
}

void lcddata(unsigned char value) {
	rs = 1;
    ldata = value;
    rw = 0;
    en = 1;
    msdelay(5);
    en = 0;
	msdelay(2);
}

void msdelay(unsigned int ms) {
    unsigned int i, j;
    for (i = 0; i < ms; ++i) {
        for(j = 0; j < 135; ++j);      
    }
}