if (ESP_PLATFORM)
    file(GLOB_RECURSE ESP_API_C_SRC "esp/*.c")
    file(GLOB_RECURSE ESP_API_C_HEADER "esp/*.h")

    idf_component_register(SRCS ${ESP_API_C_SRC} ${ESP_API_C_HEADER}
            INCLUDE_DIRS "esp/includes"
            REQUIRES quickjs-esp32)
endif()