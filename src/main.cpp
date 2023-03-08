#include "core.h"
#include "log.h"

int main() {
  init_default_logger();
  spdlog::info("Log initialized!");

  return EXIT_SUCCESS;
}
