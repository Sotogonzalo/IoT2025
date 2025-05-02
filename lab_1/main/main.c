#include <stdio.h>
#include "led_strip.h"
#include "esp_rom_delay_ms.h"
void app_main(void)
{
    printf("inicio");
    esp_rom_delay_ms(5000);
    printf("fin");
}