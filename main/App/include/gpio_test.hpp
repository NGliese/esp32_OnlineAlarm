#ifndef main_App_include_gpio_test_hpp
#define main_App_include_gpio_test_hpp
/*------------------------------------------------------------------------------+
 |   		 	C L A S S   I N F O R M A T I O N |
 +------------------------------------------------------------------------------+
 |  ToDo: check auto generated function comment
 |
 |  Function Name:  gpio_test.hpp
 |
 |  Author       :  Nikolaj Gliese Pedersen
 |  Email 	      :  <nikolajgliese@tutanota.com>
 |
 |  Description  :  This class, gpio_test.hpp, is designed as:
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

/*------------------------------------------------------------------------------+
 |   		 					Includes |
 +------------------------------------------------------------------------------*/

#include <GPIO_API.hpp>
#include <HAL_GPIO_ESP32.hpp>
#include <Timeservice.hpp>
#include <esp32_display_card_board.hpp>
/*----------------- DEFAULT INCLUDE
 * -------------------------------------------*/

/*-----------------------------------------------------------------------------*/

#include <iostream>

/*------------------------------------------------------------------------------+
 |                               Typedef |
 +------------------------------------------------------------------------------*/

/*------------------------------------------------------------------------------+
 |   		 					 Class |
 +------------------------------------------------------------------------------*/

class gpio_test {
 public:
  gpio_test(void){};
  virtual ~gpio_test(void){};
  void run_io_test(void);
  void run();

};

#endif /*main_App_include_gpio_test_hpp*/