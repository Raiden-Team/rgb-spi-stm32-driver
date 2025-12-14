/**
 * @file protocol_ws2812b.h
 *
 * @brief WS2812B protocol
 *
 * @author Diego Jun Sato Kurashima
 *
 * @date 12/2025
 */

#ifndef __PROTOCOL_WS2812B_H__
#define __PROTOCOL_WS2812B_H__

#include <stdint.h>
#include "adapter_rgb.h"

/*****************************************
 * Public Types
 *****************************************/

/**
 * @brief rgb color type
 */
typedef struct {
    uint8_t red;
    uint8_t green;
    uint8_t blue;
} rgb_color_t;

/*****************************************
 * Public Functions Prototypes
 *****************************************/

/**
 * @brief set the transmission data buffer based on WS2812B protocol
 *
 * @param rgb_color rgb color (from rgb type)
 * @param data_buffer pointer to data buffer
 *
 */
void protocol_ws2812b_set_transmit_buffer(rgb_color_t rgb_color, uint8_t* data_buffer);

#endif // __PROTOCOL_WS2812B_H__
