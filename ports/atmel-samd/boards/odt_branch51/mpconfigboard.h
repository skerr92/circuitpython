#define MICROPY_HW_BOARD_NAME "ODT Branch51"
#define MICROPY_HW_MCU_NAME "samd51p19"

#define CIRCUITPY_MCU_FAMILY samd51

#define MICROPY_HW_LED_STATUS   (&pin_PB00)

#define DEFAULT_I2C_BUS_SCL (&pin_PA17)
#define DEFAULT_I2C_BUS_SDA (&pin_PA16)

#define DEFAULT_SPI_BUS_SCK (&pin_PB12)
#define DEFAULT_SPI_BUS_MOSI (&pin_PB13)
#define DEFAULT_SPI_BUS_MISO (&pin_PB14)

#define DEFAULT_UART_BUS_RX (&pin_PB15)
#define DEFAULT_UART_BUS_TX (&pin_PD08)

// USB is always used internally so skip the pin objects for it.
#define IGNORE_PIN_PA24     1
#define IGNORE_PIN_PA25     1
