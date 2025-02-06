//checkpoint 2

#include <stdio.h>
#include <freertos/FreeRTOS.h>
#include <freertos/task.h>
#include <driver/gpio.h>

#define LED_PIN 35 //TO_BE_FILLED_IN

void app_main() {
  // Configure the LED pin
  gpio_config_t io_conf = {
    .pin_bit_mask = (1ULL << LED_PIN),
    .mode = GPIO_MODE_OUTPUT /*TO_BE_FILLED_IN*/, 
  };

  gpio_config(&io_conf);

  while (1) {
    // S = 3 short dots
    // O = 3 long lines
    // S = 3 short dots

    // dot = 1 unit of time
    //lines = 3 units of time

    //Space between dots and dashes within a letter: 1 unit
    //Space between letters: 3 units
    //Space between words: 7 units
    
    //S
    gpio_set_level(LED_PIN, 0 );
    vTaskDelay(700 );

    gpio_set_level(LED_PIN, 1);
    vTaskDelay(100 );
    gpio_set_level(LED_PIN, 0 );
    vTaskDelay(100 );

    gpio_set_level(LED_PIN, 1);
    vTaskDelay(100 );
    gpio_set_level(LED_PIN, 0 );
    vTaskDelay(100 );

    gpio_set_level(LED_PIN, 1);
    vTaskDelay(100 );
    gpio_set_level(LED_PIN, 0 );
    vTaskDelay(100 );

    //O

    gpio_set_level(LED_PIN, 0 );
    vTaskDelay(300 );

    gpio_set_level(LED_PIN, 1);
    vTaskDelay(300 );
    gpio_set_level(LED_PIN, 0 );
    vTaskDelay(100 );

    gpio_set_level(LED_PIN, 1);
    vTaskDelay(300 );
    gpio_set_level(LED_PIN, 0 );
    vTaskDelay(100 );

    gpio_set_level(LED_PIN, 1);
    vTaskDelay(300 );
    gpio_set_level(LED_PIN, 0 );
    vTaskDelay(100 );

    //S

    gpio_set_level(LED_PIN, 0 );
    vTaskDelay(300 );

    gpio_set_level(LED_PIN, 1);
    vTaskDelay(100 );
    gpio_set_level(LED_PIN, 0 );
    vTaskDelay(100 );

    gpio_set_level(LED_PIN, 1);
    vTaskDelay(100 );
    gpio_set_level(LED_PIN, 0 );
    vTaskDelay(100 );

    gpio_set_level(LED_PIN, 1);
    vTaskDelay(100 );
    gpio_set_level(LED_PIN, 0 );
    vTaskDelay(100 );
    
  }
}
