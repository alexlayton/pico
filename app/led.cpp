#include "pico/stdlib.h"
#include "LED.h"

const uint LED_PIN = 25;

LED::LED()
{
    gpio_init(LED_PIN);
    gpio_set_dir(LED_PIN, GPIO_OUT);
}

void LED::on()
{
    gpio_put(LED_PIN, 0);
}

void LED::off()
{
    gpio_put(LED_PIN, 1);
}

void LED::blink(uint32_t sleep)
{
    gpio_put(LED_PIN, 1);
    sleep_ms(sleep);
    gpio_put(LED_PIN, 0);
}