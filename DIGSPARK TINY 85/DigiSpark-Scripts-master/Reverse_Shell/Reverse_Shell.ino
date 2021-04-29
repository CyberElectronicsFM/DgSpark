/*
 * Generated with <3 by Dckuino.js, an open source project !
 */

#include "Keyboard.h"

void typeKey(uint8_t key)
{
  Keyboard.press(key);
  delay(50);
  Keyboard.release(key);
}

/* Init function */
void setup()
{
  // Begining the Keyboard stream
  Keyboard.begin();

  // Wait 500ms
  delay(500);

  // Type Hello World into Windows notepad. Target: Windows 95 and beyond. Author: Darren
  delay(1000);

  Keyboard.press(KEY_LEFT_GUI);
  Keyboard.press('r');
  Keyboard.releaseAll();

  delay(100);

  Keyboard.print(F("c:\\windows\\notepad.exe"));

  typeKey(KEY_RETURN);

  delay(1000);

  Keyboard.print(F("Hello World"));

  // Ending stream
  Keyboard.end();
}

/* Unused endless loop */
void loop() {}
