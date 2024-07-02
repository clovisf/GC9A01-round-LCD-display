#include "SPI.h"
#include "Adafruit_GFX.h"
#include "Adafruit_GC9A01A.h"

#define TFT_DC  9
#define TFT_CS 10

Adafruit_GC9A01A tft(TFT_CS, TFT_DC);

void setup() {
  // put your setup code here, to run once:
  tft.begin();
  tft.fillScreen(GC9A01A_BLUE);
  yield();
  

}

void loop() {
  // put your main code here, to run repeatedly:
  for(int i=0; i < tft.height(); i=i+10){
    tft.setCursor(30, i);
    tft.setTextColor(GC9A01A_GREEN);
    tft.setTextSize(3);
    tft.println("FritzenLab");
    tft.setCursor(90, i+20);
    tft.println(".net");
    //delay(10);
    tft.fillScreen(GC9A01A_BLUE);
    }
  

  
}
