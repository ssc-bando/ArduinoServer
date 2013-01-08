
#include <StorageAccessor/StorageAccessor.h>
#include <Tests/ArduinoTestSuite.h>

static void test_initialize()
{
  StorageAccessor accessor;
  ATS_PrintTestStatus( "init storage accessor", accessor.initialized() );
}

void StorageAccessorTest()
{
  ATS_begin( "StorageAccessorTest", "hello");

  test_initialize();
}
