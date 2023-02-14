#include <SPI.h>
#include <Adafruit_GFX.h>
#include <Adafruit_PCD8544.h>
Adafruit_PCD8544 display = Adafruit_PCD8544(7, 6, 5, 4, 3);
void setup()
{
  int i;
  display.begin();
  display.clearDisplay();
  display.display();
  display.setContrast(50);
  display.setTextSize(7);
  display.setCursor(0, 0);
  display.setTextColor( BLACK, WHITE);
  for (i = 0; i < 1100; i++)
  {
    display.setCursor(0, 0);
    display.write(48+i);
    display.display();
    delay(400); 
  }
}
void loop() {
}
