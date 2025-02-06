#ifndef DEBUG_H
#define DEBUG_H

#include <Arduino.h>

//#define DEBUG
#define DEBUG_BAUD 115200

#ifdef DEBUG
  #define DEBUG_SER_INIT() Serial.begin(DEBUG_BAUD);
  #define DEBUG_SER_PRINT(...) Serial.print(__VA_ARGS__);
#else
  #define DEBUG_SER_PRINT(...)
  #define DEBUG_SER_INIT()
#endif

#endif
//Disclaimer
//The use of this repository and its contents is entirely voluntary and at the user's own risk. The author does not guarantee the accuracy, reliability, or completeness of any information provided in this repository.
//By using this repository, you agree to the above terms and acknowledge that you are solely responsible for complying with any relevant laws or regulations.
