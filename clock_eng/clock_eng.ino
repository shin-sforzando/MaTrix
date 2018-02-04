#include <MaTrix.h>

#include <RTClib.h>
#include <boarddefs.h>
#include <SPI.h>
#include <Wire.h>


MaTrix mymatrix;

extern unsigned char font5x8[];
extern unsigned char font6x8[];
extern unsigned char digit6x8bold[];
extern unsigned char digit6x8future[];
extern byte          array[8][8];
extern byte          shadow[8][8];

int  brightLmax;
int  brightLcur;
byte brightL;

// RTC
RTC_DS1307 RTC;
DateTime   now;

static char wDay[7][10] =
{
  "Sunday", "Monday", "Tuesday", "Wednesday", "Thursday", "Friday", "Saturday"
};
static char wMonth[12][4] =
{
  "Jan", "Feb", "Mar", "Apr", "May", "Jun", "Jul", "Aug", "Sep", "Oct", "Nov", "Dec"
};

unsigned long ready;
byte          color  = GREEN;
byte          effect = 3;
unsigned int  pause;

void setup()
{
  Serial.begin(115200);

  // RTC
  Wire.begin();
  RTC.begin();
  RTC.adjust(DateTime(__DATE__, __TIME__));

  mymatrix.init();
  mymatrix.clearLed();
}

void loop()
{
  if (ready < millis()) {
    now = RTC.now();
    String wD;
    char   buff[60];
    char   tbuf[6];
    char   pbuf[6];
    if ((now.year() != 2000) || (now.year() != 2165)) {
      sprintf(buff, "%02d%s%02d", now.hour(), (now.second() % 2) ? ":" : ":", now.minute());
      mymatrix.printString(buff, 4, color, digit6x8future, effect, VFAST);
    }
    ready = millis() + 60000;
    while (millis() < ready) {
      now = RTC.now();
      code();
      if ((now.year() != 2000) || (now.year() != 2165)) { sprintf(buff, "%02d%s%02d", now.hour(), (now.second() % 2) ? ":" : " ", now.minute()); }
      mymatrix.printString(buff, 4, color, digit6x8future);
    }
    pause = 0;

    color++;
    if (2 < color) {
      color = 0;
      effect++;
      if (3 < effect) { effect = 1; }
    }
    ready = millis() + pause;
  }

  code();
}

void code()
{
  brightLcur = analogRead(LightSENS);
  if (brightLmax < brightLcur) {
    brightLmax = brightLcur;
  }
  brightL = map(brightLcur, 0, brightLmax, 20, 255);
  mymatrix.brightness(brightL);
}
