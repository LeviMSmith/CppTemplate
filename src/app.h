#ifndef APP_H_
#define APP_H_

#include "core.h"

#include "utils/config/args.h"
#include "utils/config/config.h"

struct App {
  Args args;
  Config config;
};

#endif // APP_H_
