#ifndef IWRITER_H
#define IWRITER_H

#include <string>



class IWriter
{
public:

  virtual ~IWriter() {}

  virtual void info( const std::string& message ) = 0;
  virtual void error( const std::string& message ) = 0;

};



#endif // IWRITER_H
