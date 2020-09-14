#pragma once

#include <quickjs.h>

#ifdef __cplusplus
extern "C" {
#endif

void esp_api_init(JSContext *ctx);

#ifdef __cplusplus
} /* extern "C" { */
#endif