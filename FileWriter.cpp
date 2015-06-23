#include "FileWriter.h"



FileWriter::FileWriter(const char* file)
  : stream( file )
{

}



FileWriter::~FileWriter()
{

}



void FileWriter::info(const std::string& message)
{
  this->stream << "[ INFO  ] " << message << '\n';
}



void FileWriter::error(const std::string& message)
{
  this->stream << "[ ERROR ] " << message << std::endl;
}

