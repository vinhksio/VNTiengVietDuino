#ifndef VNTiengVietDuino_h
#define VNTiengVietDuino_h

#include <Arduino.h>

#define choMoi delay

#define chan pinMode
#define dat digitalWrite
#define doc digitalRead

#define doc_analog analogRead
#define xuat_analog analogWrite

#define bat HIGH
#define tat LOW

#define vao INPUT
#define ra OUTPUT

#define neu if
#define khac else

#define inRa Serial.print
#define inDong Serial.printIn

#define trongKhi while
#define traVe return

#define dung break
#define tiepTuc continue

#define lap for

#define ham void
#define batDau setup
#define vongLap loop

#endif
