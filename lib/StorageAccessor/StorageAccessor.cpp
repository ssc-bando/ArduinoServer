
#include "StorageAccessor.h"
#include <SD.h>

namespace{
  const uint8_t SD_CS_PIN = 4;
  bool g_initialized = false;
};

//===============================================
//-----------------------------------------------
StorageAccessor::StorageAccessor()
{
  g_initialized = SD.begin(SD_CS_PIN);
}


//===============================================
//-----------------------------------------------
StorageAccessor::~StorageAccessor()
{
  // ther is no de-init function.
  g_initialized = false;
}


//===============================================
//-----------------------------------------------
bool StorageAccessor::initialized()
{
  return g_initialized;
}
