#ifndef LOGGER_H
#define LOGGER_H

#include "IWriter.h"



class Logger
{
private:

  Logger();
  ~Logger();

  Logger( const Logger& ) = delete;
  Logger& operator= ( const Logger& ) = delete;



public:

  static Logger* get_instance();

  Logger* info( const std::string& message );
  Logger* error( const std::string& message );

  void set_writer( IWriter* writer );



private:

  std::string add_time_date( const std::string& string );



  IWriter* writer;

};

#endif // LOGGER_H
