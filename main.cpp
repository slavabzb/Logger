#include <iostream>

#include "Logger.h"



int main()
{
  Logger::get_instance()->info("Hello")->error("World");

  return 0;
}

