#include <Arduino.h>
void setup()
{
  pinMode(LED_BUILTIN ,OUTPUT);
}

void loop() {
    // НАЧИНАЕМ КОДИТЬ
    digitalWrite(LED_BUILTIN ,HIGH); // Включаем светодиод
    delay(2500); // Ждем 2.5 секунды
    digitalWrite(LED_BUILTIN ,LOW); // Выкдючае светодиоод
    delay(2500); // Опять ждем 2.5 секунды

}
