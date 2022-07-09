#include <FastLED.h>
#define NUM_LEDS1 12 // kullanılacak led adeti
int deger=0;
CRGB leds1[NUM_LEDS1];
#define led_pini 6   // Din girişi
void setup() {
  Serial.begin(9600);
  FastLED.addLeds<WS2812B, led_pini, GRB>(leds1, NUM_LEDS1);
    randomSeed(analogRead(0));

}

void loop(){
  //leds1[deger-1].setRGB(red, green, blue);,
    deger=random(1,12);
   leds1[deger-1].setRGB(255, 0, 0);
   leds1[deger].setRGB(0, 255, 0);
   leds1[deger+1].setRGB(255, 0,0 );
     FastLED.show();
    delay(2000);
  for (int w = 0; w < 33; w++)
    {
  
    
    //************* 3 led yanarak ilerler
 //  leds1[deger-1].setRGB(255, 0, 0);
 //  leds1[deger].setRGB(0, 255, 0);
//   leds1[deger+1].setRGB(255, 0,0 );
     //************* ////////////////
   
    
    //***** tek led yanarak ilerler
 //  leds1[w-1].setRGB(0, 0, 0);
 //  leds1[w].setRGB(0, 0, 255);
  //  delay(2000);
    //*****
   //  FastLED.show();
    }

for (int w = 0; w < 33; w++)// ledleri söndürür
    {  
    leds1[w].setRGB(0, 0, 0);
     FastLED.show();
    }


}
