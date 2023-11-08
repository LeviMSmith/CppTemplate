#include "core.h"
#include "app.h"

#include <stdlib.h>
#include <stdio.h>

int main(int argc, char* argv[]) {
    App* app = new App;

    Result parse_result = parse_args(argc, argv, &app->args);
    if (parse_result.code != ResultCode::SUCCESS) {
        printf("Arg parsing failed: %s\n", parse_result.msg);
        return 1;
    }

    const LogLevel log_level = app->args.log_level;
    Result log_init_result = init_log(log_level);
    if (log_init_result.code == ResultCode::SUCCESS) {
        LOG_INFO("Log initialized!");
    }
    else {
      return 1;
    }

    LOG_DEBUG("Debug");

    delete app;

    return 0;
}
