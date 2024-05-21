/***********************************************************************************************+
 *  \brief      BRIEF TEXT
 *  \par
 *  \par        @DETAILS
 *
 *
 *  \li         LIMITATION-TO-CLASS
 *  \li         LIMITATION-TO-CLASS
 *
 *  \note       ANY RELEVANT NOTES
 *
 *  \file       button_test.cpp
 *  \author     N.G Pedersen <nikolajgliese@tutanota.com>
 *  \version    1.0
 *  \date       2024
 *  \copyright  --
 *
 *
 ***********************************************************************************************/

#include "../include/gpio_test.hpp"

#include <driver/gpio.h>

#include <GPIO_API.hpp>
#include <HAL_GPIO_ESP32.hpp>
//#define DEBUG // default uncommeted

#ifdef DEBUG
static const char *LOG_TAG = "gpio_test";
#endif


void gpio_test::run_io_test() {

  std::cout << " testing IO" << std::endl;
  GPIO_API<HAL_GPIO_ESP32> m_sda_pin{GPIO_NUM_22};
  GPIO_API<HAL_GPIO_ESP32> m_scl_pin{GPIO_NUM_21};

  Timeservice::wait_ms(2000);

  auto res = m_sda_pin.setToOutput();
  std::cout << "m_cmd_pin.setToOutput() = " << res << std::endl;
  res = m_scl_pin.setToOutput();
  std::cout << "m_cmd_pin.setToOutput() = " << res << std::endl;

  Timeservice::wait_ms(2000);

  // toogle the pins 10 times with 2 sec delay
  for (int i = 0; i < 10; i++) {
    std::cout << "toogle the pins high" << std::endl;

    res = m_sda_pin.setHigh();
    std::cout << "m_sda_pin.setHigh() = " << res << std::endl;
    res = m_scl_pin.setHigh();
    std::cout << "m_scl_pin.setHigh() = " << res << std::endl;
    Timeservice::wait_ms(2000);
    std::cout << "m_cmd_pin.setLow() = " << res << std::endl;
    res = m_sda_pin.setLow();
    std::cout << "m_sda_pin.setLow() = " << res << std::endl;
    res = m_scl_pin.setLow();
    std::cout << "m_scl_pin.setLow() = " << res << std::endl;
    Timeservice::wait_ms(2000);

    //
  }

}


void gpio_test::run() {
  std::cout << "gpio_test::run()" << std::endl;

  GPIO_API<HAL_GPIO_ESP32> relay_pin{GPIO_NUM_21};

  auto res = relay_pin.setToOutput();
  std::cout << "relay_pin.setToOutput() = " << res << std::endl;

  for (int i = 0; i < 10; i++) {
    std::cout << "toogle the pins high" << std::endl;

    res = relay_pin.setHigh();
    std::cout << "relay_pin.setHigh() = " << res << std::endl;
    Timeservice::wait_ms(2000);
    std::cout << "relay_pin.setLow() = " << res << std::endl;
    res = relay_pin.setLow();
    std::cout << "relay_pin.setLow() = " << res << std::endl;
    Timeservice::wait_ms(2000);

    //
  }

}
