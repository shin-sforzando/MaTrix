#include <SPI.h>
#include <MaTrix.h>

MaTrix mymatrix;

extern unsigned char font5x8[];
extern unsigned char font6x8[];
extern unsigned char digit6x8bold[];
extern unsigned char digit6x8future[];
extern byte          array[8][8];
extern byte          shadow[8][8];

void setup()
{
  mymatrix.init();
  mymatrix.clearLed();
  mymatrix.brightness(255);
  mymatrix.printString("This", 4, RED, font6x8, LEFT, MID);
  mymatrix.printString("is", 3, GREEN, font6x8, UP, SLOW);
  mymatrix.printString("a", 2, YELLOW, font6x8, DOWN, SLOW);
  // mymatrix.printRunningString("MaTrix test!", RED, font6x8, FAST);
  //
  // mymatrix.printRunningString("MaTrix \xA3" "o\x99\x99" "ep\x9B\x9D\x97" "ae\xA4" " pycc\x9F\x9D\x9E" " \xAF\x9C\xAB\x9F" " \x9D" " pa\x9C\xA2\xAB" "e \xA8" "p\x9D\xA5\xA4\xAB" ":", GREEN, font6x8, FAST);

  mymatrix.printRunningString("0123456789", RED, font6x8, FAST);
  mymatrix.printRunningString("0123456789", YELLOW, digit6x8bold, FAST);
  mymatrix.printRunningString("0123456789", GREEN, digit6x8future, FAST);
}

void loop()
{
}

void code()
{
}
