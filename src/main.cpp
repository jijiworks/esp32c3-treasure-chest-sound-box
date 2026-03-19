#include <Arduino.h>
#include "melody.h"

#define BUZZER_PIN     10
#define REED_PIN       3
#define LED_PIN        21
#define MAX_PLAY_COUNT 1

int playedflag = 0;
int previousReedState = HIGH;
void playMelody(int melody[], int durations[], int length);

void setup() {
  pinMode(LED_PIN, OUTPUT);
  digitalWrite(LED_PIN, LOW);
  pinMode(REED_PIN, INPUT_PULLUP);
  ledcAttachPin(BUZZER_PIN, 0);
}

void loop() {
  int currentReedState = digitalRead(REED_PIN);

  if (previousReedState == LOW && currentReedState == HIGH && playedflag == 0) {
    for (int i = 0; i < MAX_PLAY_COUNT; i++) {
      digitalWrite(LED_PIN, HIGH);
      playMelody(melody1, durations1, melody1Length);
      delay(650);
      playMelody(melody2, durations2, melody2Length);
    }
    playedflag = 1;
    digitalWrite(LED_PIN, LOW);
  }
  
  if (previousReedState == HIGH && currentReedState == LOW) {
    playedflag = 0;
  }

  previousReedState = currentReedState;
  delay(200);
}

void playMelody(int melody[], int durations[], int length) {
  for (int i = 0; i < length; i++) {
    ledcSetup(0, melody[i], 8);
    ledcWrite(0, 5);
    delay(durations[i]);
    ledcWrite(0, 0);
    delay(50);
  }
}