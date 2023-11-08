#ifndef ARGPARSE_H
#define ARGPARSE_H

#include "core.h"

typedef struct Args {
  LogLevel log_level;
  const char *config_location;
} Args;

void args_default(Args* args);

Result parse_args(int argc, char* const argv[], Args* args);

#endif // ARGPARSE_H
