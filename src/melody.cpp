#include "melody.h"

int melody1[] = {
  NOTE_A4, NOTE_B4, NOTE_Cs5, NOTE_Ds5,
  NOTE_A4, NOTE_B4, NOTE_Cs5, NOTE_Ds5,
  NOTE_Bb4, NOTE_C5, NOTE_D5, NOTE_E5,
  NOTE_Bb4, NOTE_C5, NOTE_D5, NOTE_E5,
  NOTE_C5, NOTE_D5, NOTE_E5, NOTE_Fs5,
  NOTE_C5, NOTE_D5, NOTE_E5, NOTE_Fs5,
  NOTE_D5, NOTE_E5, NOTE_Fs5, NOTE_G5,
  NOTE_D5, NOTE_E5, NOTE_Fs5, NOTE_G5
};

int durations1[] = {
  170, 170, 170, 170,
  160, 160, 160, 160,
  150, 150, 150, 150,
  140, 140, 140, 140,
  120, 120, 120, 120,
  120, 120, 120, 120,
  110, 110, 110, 110,
  100, 100, 100, 100
};

int melody2[] = {
  NOTE_C5, NOTE_Cs5, NOTE_D5, NOTE_Ds5
};

int durations2[] = {
  350, 350, 350, 1000
};

const int melody1Length = sizeof(melody1) / sizeof(melody1[0]);
const int melody2Length = sizeof(melody2) / sizeof(melody2[0]);