#include "log.h"

#include <spdlog/spdlog.h>
#include <spdlog/async.h>
#include <spdlog/sinks/stdout_color_sinks.h>
#include <spdlog/sinks/basic_file_sink.h>
#include <spdlog/async.h>


void init_default_logger() {
  const static size_t MAX_SINKS = 2;
  const static char* LOG_FILE_NAME = "log.txt";
  
  std::vector<spdlog::sink_ptr> sinks(MAX_SINKS);
  sinks[0] = std::make_shared<spdlog::sinks::stdout_color_sink_mt>();
  sinks[1] = std::make_shared<spdlog::sinks::basic_file_sink_mt>(LOG_FILE_NAME);
  
  spdlog::init_thread_pool(8192, 1);
  auto s_logger = std::make_shared<spdlog::async_logger>("Log", begin(sinks), end(sinks), spdlog::thread_pool(), spdlog::async_overflow_policy::block);   
  spdlog::set_default_logger(s_logger);
}
