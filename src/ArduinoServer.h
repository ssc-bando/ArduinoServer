#ifndef ARDUINO_SERVER_H_INCLUDED
#define ARDUINO_SERVER_H_INCLUDED

#include "../lib/SdAccess/SdAccess.h"

class ArduinoServer{
  public:
    ArduinoServer();
    ~ArduinoServer();

    boolean init();
    void start();
    void quit();
};

#endif
