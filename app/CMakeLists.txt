add_executable(app main.cpp led.cpp)
target_link_libraries(app pico_stdlib)

pico_enable_stdio_usb(app 1)
pico_enable_stdio_uart(app 1)

pico_add_extra_outputs(app)
# example_auto_set_url(hello-world)