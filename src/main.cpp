#include "DigiKeyboard.h"
int buttonPin = 0;
int buttonPin2 = 2; // Hier ist der Taster angeschlossen

void setup() {
  pinMode(buttonPin, INPUT);
  digitalWrite(buttonPin, HIGH);
   pinMode(buttonPin2, INPUT);
  digitalWrite(buttonPin2, HIGH);
}

void loop() {
  DigiKeyboard.sendKeyStroke(0);
  if (digitalRead(buttonPin) == LOW){
    DigiKeyboard.sendKeyStroke(KEY_L , MOD_GUI_LEFT); // Win+L Tatenkombination
    DigiKeyboard.delay(50); // Kurz warten
  }
   if (digitalRead(buttonPin2) == LOW){
    DigiKeyboard.sendKeyStroke(KEY_R , MOD_GUI_LEFT); // Win+R Tatenkombination
    DigiKeyboard.delay(50); // Kurz warten
    DigiKeyboard.println("control.exe /name Microsoft.NetworkAndSharingCenter");
    DigiKeyboard.sendKeyStroke(KEY_ENTER);
    DigiKeyboard.delay(800);
 }
}