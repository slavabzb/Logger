#include "StreamWriter.h"

#include <iostream>



StreamWriter::~StreamWriter()
{

}



void StreamWriter::info(const std::string& message)
{
  std::cout << "[ INFO  ] " << message << '\n';
}



void StreamWriter::error(const std::string& message)
{
  std::cerr << "[ ERROR ] " << message << std::endl;
}
