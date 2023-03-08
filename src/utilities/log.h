#pragma once

#include <spdlog/spdlog.h>

void init_default_logger();

#define LOG_TRACE(...) spdlog::trace(__VA_ARGS__);
#define LOG_INFO(...) spdlog::info(__VA_ARGS__);
#define LOG_WARN(...) spdlog::warn(__VA_ARGS__);
#define LOG_ERROR(...) spdlog::error(__VA_ARGS__);
