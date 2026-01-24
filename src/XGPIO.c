#include "XGPIO.h"
#include <libopencm3/stm32/gpio.h>

void ConfigureXGPIO()
{
    LEDSet();
    XXSet();
    EJSet();
    SSSet();
    KIOSKSet();
    gpio_mode_setup(LED_GPIO_Port, GPIO_MODE_OUTPUT, GPIO_PUPD_NONE, LED_Pin);
    gpio_set_output_options(LED_GPIO_Port, GPIO_OTYPE_PP, GPIO_OSPEED_2MHZ, LED_Pin);
    gpio_mode_setup(XX_GPIO_Port, GPIO_MODE_OUTPUT, GPIO_PUPD_NONE, XX_Pin);
    gpio_set_output_options(XX_GPIO_Port, GPIO_OTYPE_PP, GPIO_OSPEED_2MHZ, XX_Pin);
    gpio_mode_setup(EJ_GPIO_Port, GPIO_MODE_OUTPUT, GPIO_PUPD_NONE, EJ_Pin);
    gpio_set_output_options(EJ_GPIO_Port, GPIO_OTYPE_PP, GPIO_OSPEED_2MHZ, EJ_Pin);
    gpio_mode_setup(SS_GPIO_Port, GPIO_MODE_OUTPUT, GPIO_PUPD_NONE, SS_Pin);
    gpio_set_output_options(SS_GPIO_Port, GPIO_OTYPE_PP, GPIO_OSPEED_2MHZ, SS_Pin);
    gpio_mode_setup(KIOSK_GPIO_Port, GPIO_MODE_OUTPUT, GPIO_PUPD_NONE, KIOSK_Pin);
    gpio_set_output_options(KIOSK_GPIO_Port, GPIO_OTYPE_PP, GPIO_OSPEED_2MHZ, KIOSK_Pin);

    gpio_mode_setup(JTAG_GPIO_PORT, GPIO_MODE_OUTPUT, GPIO_PUPD_NONE, TCK);
    gpio_set_output_options(JTAG_GPIO_PORT, GPIO_OTYPE_PP, GPIO_OSPEED_2MHZ, TCK);
    gpio_mode_setup(JTAG_GPIO_PORT, GPIO_MODE_OUTPUT, GPIO_PUPD_NONE, TMS);
    gpio_set_output_options(JTAG_GPIO_PORT, GPIO_OTYPE_PP, GPIO_OSPEED_2MHZ, TMS);
    gpio_mode_setup(JTAG_GPIO_PORT, GPIO_MODE_OUTPUT, GPIO_PUPD_NONE, TDI);
    gpio_set_output_options(JTAG_GPIO_PORT, GPIO_OTYPE_PP, GPIO_OSPEED_2MHZ, TDI);
    gpio_mode_setup(JTAG_GPIO_PORT, GPIO_MODE_INPUT, GPIO_PUPD_PULLUP, TDO);
}
void SSSet()
{
    gpio_set(SS_GPIO_Port, SS_Pin);
}
void SSReset()
{
    gpio_clear(SS_GPIO_Port, SS_Pin);
}
void XXSet()
{
    gpio_set(XX_GPIO_Port, XX_Pin);
}
void XXReset()
{
    gpio_clear(XX_GPIO_Port, XX_Pin);
}
void EJSet()
{
    gpio_set(EJ_GPIO_Port, EJ_Pin);
}
void EJReset()
{
    gpio_clear(EJ_GPIO_Port, EJ_Pin);
}
void LEDSet()
{
    gpio_set(LED_GPIO_Port, LED_Pin);
}
void LEDReset()
{
    gpio_clear(LED_GPIO_Port, LED_Pin);
}
void KIOSKSet()
{
    gpio_set(KIOSK_GPIO_Port, KIOSK_Pin);
}
void KIOSKReset()
{
    gpio_clear(KIOSK_GPIO_Port, KIOSK_Pin);
}