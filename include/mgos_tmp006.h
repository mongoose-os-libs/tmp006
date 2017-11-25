/*
 * Copyright (c) 2014-2017 Cesanta Software Limited
 * All rights reserved
 */

#ifndef CS_MOS_LIBS_TMP006_SRC_MGOS_TMP006_H_
#define CS_MOS_LIBS_TMP006_SRC_MGOS_TMP006_H_

#include <stdint.h>
#include <stdbool.h>

#include "mgos_i2c.h"

#ifdef __cplusplus
extern "C" {
#endif

enum tmp006_conversion_rate {
  TMP006_CONV_4 = 0,
  TMP006_CONV_2,
  TMP006_CONV_1,
  TMP006_CONV_1_2,
  TMP006_CONV_1_4,
};

#define TMP006_INVALID_READING (-1000.0)

bool mgos_tmp006_setup(struct mgos_i2c *bus, uint8_t addr,
                       enum tmp006_conversion_rate rate, bool drdy_en);
double mgos_tmp006_get_voltage(struct mgos_i2c *i2c, uint8_t addr);
double mgos_tmp006_get_die_temp(struct mgos_i2c *i2c, uint8_t addr);

#ifdef __cplusplus
}
#endif /* __cplusplus */

#endif /* CS_MOS_LIBS_TMP006_SRC_MGOS_TMP006_H_ */
