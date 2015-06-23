#ifndef FILEWRITER_H
#define FILEWRITER_H

#include "IWriter.h"
#include <fstream>



class FileWriter : public IWriter
{
public:

  FileWriter( const char* file );
  ~FileWriter();

  void info(const std::string& message);
  void error(const std::string& message);



private:

  std::ofstream stream;
};

#endif // FILEWRITER_H
