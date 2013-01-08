#include <Tests/ArduinoTestSuite.h>
#include "ArduinoServer.h"

extern void ArduinoServerTest();
extern void StorageAccessorTest();

void setup()
{

  ArduinoServerTest();
  StorageAccessorTest();

  ATS_end();
}

void loop()
{
}
