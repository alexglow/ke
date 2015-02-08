// Modified from the original TinyScreen_Demo
// Saves power by sleeping the display unless a button is pushed.

#define	BLACK           0x00
#define	BLUE            0xE0
#define	RED             0x03
#define	GREEN           0x1C
#define	DGREEN           0x0C
#define YELLOW          0x1F
#define WHITE           0xFF
#define ALPHA           0xFE
#define	BROWN           0x32

float keKeKe;

uint8_t amtcolors=7;
uint8_t colors[]={BLACK,BLUE,RED,GREEN,WHITE,DGREEN,YELLOW};

uint8_t i=0;
  
uint8_t nextColor(){
  if(i>amtcolors)i=0;
  return colors[i++];
}
  
#include "SSD1331.h"
#include <SPI.h>
#include <Wire.h>

SSD1331 display = SSD1331(0);


void setup(void) {
  Wire.begin();
  display.begin();
}

void loop() {
  keKeKe = millis();
  keKeKe = keKeKe / 864000;
  
  if(display.getButtons()){
  	display.on();
    display.fontColor(BLUE,BLACK);
    display.clearWindow(0,0,96,64);
    display.setFont(liberationSans_16ptFontInfo);
    display.setCursor(25,16);
    display.print(keKeKe);
    display.setFont(liberationSans_8ptFontInfo);
	display.fontColor(YELLOW,BLACK);
	display.print("KE");
    delay(2000);
  }else{
    display.off();
  }
  
}