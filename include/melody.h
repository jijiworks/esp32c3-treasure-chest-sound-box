#ifndef MELODY_H
#define MELODY_H

// 音階定義
#define NOTE_G4    784
#define NOTE_Ab4   830
#define NOTE_A4    880
#define NOTE_Bb4   932
#define NOTE_B4    988
#define NOTE_C5    1047
#define NOTE_Cs5   1109
#define NOTE_D5    1175
#define NOTE_Ds5   1245
#define NOTE_E5    1319
#define NOTE_Fs5   1480
#define NOTE_G5    1568
#define NOTE_A5    1760
#define NOTE_B5    1976
#define NOTE_C6    2093
#define NOTE_D6    2349
#define NOTE_F6    2794
#define NOTE_G6    3136

// 音階（周波数）とそれに対応する音の長さ
extern int melody1[];
extern int durations1[];
extern int melody2[];
extern int durations2[];

extern const int melody1Length;
extern const int melody2Length;

#endif