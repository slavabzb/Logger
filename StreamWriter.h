#ifndef STREAMWRITER_H
#define STREAMWRITER_H

#include "IWriter.h"



class StreamWriter : public IWriter
{
public:

  ~StreamWriter();

  void info( const std::string& message );
  void error( const std::string& message );

};

#endif // STREAMWRITER_H
