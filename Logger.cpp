#include "Logger.h"

#include <ctime>

#include "StreamWriter.h"



Logger::Logger()
{
  this->writer = new StreamWriter;
}



Logger::~Logger()
{
  delete this->writer;
}



Logger* Logger::get_instance()
{
  static Logger instance;

  return &instance;
}



Logger* Logger::info(const std::string& message)
{
  this->writer->info( this->add_time_date( message ) );

  return ( Logger::get_instance() );
}



Logger*Logger::error(const std::string& message)
{
  this->writer->error( this->add_time_date( message ) );

  return ( Logger::get_instance() );
}



void Logger::set_writer(IWriter* writer)
{
  delete this->writer;

  this->writer = writer;
}



std::string Logger::add_time_date(const std::string& string)
{
  std::time_t result = std::time( nullptr );

  std::string modified = "[ ";
  modified += std::asctime( std::localtime( &result ) );
  modified.erase( modified.size() - 1 );
  modified += " ] ";
  modified += string;

  return modified;
}
