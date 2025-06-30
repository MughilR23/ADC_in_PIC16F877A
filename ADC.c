#include"ADC.h"

#define _XTAL_FREQ 8000000 
void ADC_init()
{
ADCON1=0x80;
ADCON0=0x07;
}

int analogRead(unsigned char channel)
{
if(channel==_AN0)
{
ADCON0=ADCON0&(0x07);
ADCON0=ADCON0|(channel<<3);
__delay_ms(20);
ADCON0=ADCON0|(1<<2);
while(ADCON0&(1<<2))
{ 
 return (ADRESH<<8)|ADRESL;
}
}

else if(channel==_AN1)
{
ADCON0=ADCON0&(0x07);
ADCON0=ADCON0|(channel<<3);
__delay_ms(20);
ADCON0=ADCON0|(1<<2);
while(ADCON0&(1<<2))
{ 
 return (ADRESH<<8)|ADRESL;
}
}

else if(channel==_AN2)
{
ADCON0=ADCON0&(0x07);
ADCON0=ADCON0|(channel<<3);
__delay_ms(20);
ADCON0=ADCON0|(1<<2);
while(ADCON0&(1<<2))
{ 
 return (ADRESH<<8)|ADRESL;
}
}

else if(channel==_AN3)
{
ADCON0=ADCON0&(0x07);
ADCON0=ADCON0|(channel<<3);
__delay_ms(20);
ADCON0=ADCON0|(1<<2);
while(ADCON0&(1<<2))
{ 
 return (ADRESH<<8)|ADRESL;
}
}

else if(channel==_AN4)
{
ADCON0=ADCON0&(0x07);
ADCON0=ADCON0|(channel<<3);
__delay_ms(20);
ADCON0=ADCON0|(1<<2);
while(ADCON0&(1<<2))
{ 
 return (ADRESH<<8)|ADRESL;
}
}

else if(channel==_AN5)
{
ADCON0=ADCON0&(0x07);
ADCON0=ADCON0|(channel<<3);
__delay_ms(20);
ADCON0=ADCON0|(1<<2);
while(ADCON0&(1<<2))
{ 
 return (ADRESH<<8)|ADRESL;
}
}

else if(channel==_AN6)
{
ADCON0=ADCON0&(0x07);
ADCON0=ADCON0|(channel<<3);
__delay_ms(20);
ADCON0=ADCON0|(1<<2);
while(ADCON0&(1<<2))
{ 
 return (ADRESH<<8)|ADRESL;
}
}

else if(channel==_AN7)
{
ADCON0=ADCON0&(0x07);
ADCON0=ADCON0|(channel<<3);
__delay_ms(20);
ADCON0=ADCON0|(1<<2);
while(ADCON0&(1<<2))
{ 
 return (ADRESH<<8)|ADRESL;
}
}
else 
{
return 0;
}
}

