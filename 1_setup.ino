#include <Wire.h>
#define _LCD_TYPE 1
#include <LCD_1602_RUS_ALL.h>
LCD_1602_RUS <LiquidCrystal_I2C> lcd(0x3f, 16, 2);
#include <DS3231.h>

void setup_lcd( void ) { lcd.init(); lcd.backlight(); }

DS3231 clock;
RTClib rtc;
void setup_rtc( void ) {  Wire.begin(); set_dow(); }

// KY-040 Rotary Encoder
#define CLK 3
#define DT  2
#define SW  4

void setup_encoder( void ) {
  pinMode( CLK, INPUT_PULLUP );
  pinMode( DT,  INPUT_PULLUP );
  pinMode( SW,  INPUT_PULLUP );
  attachInterrupt( 0, isr_0, RISING );
  attachInterrupt( 1, isr_1, RISING );
}
