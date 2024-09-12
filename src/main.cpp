#include <Arduino.h>
#include <MIDI.h>
#include <Audio.h>

void setup() {
  pinMode(LED_BUILTIN, OUTPUT);  // Teensy 3.2 自带的 LED
}

void loop() {
  digitalWrite(LED_BUILTIN, HIGH);  // 点亮 LED
  delay(1000);                      // 保持 1 秒
  digitalWrite(LED_BUILTIN, LOW);   // 熄灭 LED
  delay(1000);                      // 保持 1 秒
}
