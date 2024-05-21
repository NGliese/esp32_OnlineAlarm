#ifndef main_Components_boards_esp32_boards_include_esp32_display_card_board_hpp
#define main_Components_boards_esp32_boards_include_esp32_display_card_board_hpp
/*------------------------------------------------------------------------------+
 |   		 	C L A S S   I N F O R M A T I O N                               |
 +------------------------------------------------------------------------------+
 |  ToDo: check auto generated function comment
 |
 |  Function Name:  esp32_display_card_board.hpp
 |
 |  Author       :  Nikolaj Gliese Pedersen
 |  Email 	      :  <nikolajgliese@tutanota.com>
 |
 |  Description  :  This class, esp32_display_card_board.hpp, is designed as:
 |
 |
 |
 |
 |
 |
 |
 |  version       : 1.0
 |
 |  Return Value  :   return_type
 |
 +-----------------------------------------------------------------------------*/

#include <iostream>

#ifdef __ESP32__
#include <driver/adc.h>
#include <driver/gpio.h>
#endif
namespace esp32_display_card_board {
#ifdef __ESP32__
constexpr gpio_num_t I2C_SDA = GPIO_NUM_22;
constexpr gpio_num_t I2C_SCLK = GPIO_NUM_23;

constexpr gpio_num_t RST_PIN = GPIO_NUM_26;
constexpr gpio_num_t CS_PIN = GPIO_NUM_27;
constexpr gpio_num_t CMD_PIN = GPIO_NUM_25;
#else
typedef int gpio_num_t;
constexpr gpio_num_t I2C_SDA = 22;
constexpr gpio_num_t I2C_SCLK = 23;

constexpr gpio_num_t RST_PIN = 26;
constexpr gpio_num_t CS_PIN = 27;
constexpr gpio_num_t CMD_PIN = 25;
#endif
}  // na
#endif /*main_Components_boards_esp32_boards_include_esp32_display_card_board_hpp*/