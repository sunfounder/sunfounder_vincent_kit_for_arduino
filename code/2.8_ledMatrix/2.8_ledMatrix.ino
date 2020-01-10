#include "LedControl.h"

LedControl lc = LedControl(12, 11, 10, 1);

void setup() {
  /*
    The MAX72XX is in power-saving mode on startup,
    we have to do a wakeup call
  */
  lc.shutdown(0, false);
  /* Set the brightness to a medium values */
  lc.setIntensity(0, 5);
  /* and clear the display */
  lc.clearDisplay(0);
}

void loop() {
  displayDot();
  displayCol();
  displayRow();
  displayPic();
}

void displayDot() {
  lc.clearDisplay(0);
  delay(100);
  for (int row = 0; row < 8; row++)
  {
    for (int col = 0; col < 8; col++)
    {
      lc.setLed(0, row, col, true);
      delay(50);
    }
  }
}

void displayCol() {
  lc.clearDisplay(0);
  delay(100);
  byte data = B01100110;
  for (int col = 0; col < 8; col++) {
    lc.setColumn(0, col, data);
    delay(100);
  }
}

void displayRow() {
  lc.clearDisplay(0);
  delay(100);
  byte data = B10011001;
  for (int row = 0; row < 8; row++) {
    lc.setRow(0, row, data);
    delay(100);
  }
}

void displayPic() {
  lc.clearDisplay(0);
  delay(100);
  byte pic[8] = {
    B00000000,
    B01100110,
    B11111111,
    B11111111,
    B01111110,
    B00111100,
    B00011000,
    B00000000
  };
  for (int col = 0; col < 8; col++)
  {
    lc.setColumn(0, col, pic[col]);
  }
  delay(2000);
}
