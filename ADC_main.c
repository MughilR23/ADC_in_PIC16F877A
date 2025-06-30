#include"ADC.h"
#include"LCD8.h"
#include<stdio.h>
#define _XTAL_FREQ 8000000

void main()
{
pinMode(1,3,INPUT);
pinMode(4,0,OUTPUT);
pinMode(4,1,OUTPUT);
pinMode(4,2,OUTPUT);
pinMode(4,3,OUTPUT);
pinMode(4,4,OUTPUT);
pinMode(4,5,OUTPUT);
pinMode(4,6,OUTPUT);
pinMode(4,7,OUTPUT);
pinMode(3,0,OUTPUT);
pinMode(3,1,OUTPUT);
pinMode(3,2,OUTPUT);

ADC_init();
LCD_init();
__delay_ms(20);
LCD_clear();

while(1)
{
char str[10],str1[10];
int a=analogRead(3);
float volt=a*0.0048;	//10 bit resolution
LCD_setcursor(0,3);
sprintf(str,"Value=%4d ",a);
LCD_print(str);
LCD_setcursor(1,3);
sprintf(str1,"Volt =%.2f V",volt);
LCD_print(str1);
__delay_ms(500);
}
}