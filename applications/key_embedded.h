#ifndef MY_KEY_EMBEDDED_H
#define MY_KEY_EMBEDDED_H

#include <board.h>
#include <rtthread.h>
#include <rtdevice.h>

void key_embedded_init(void);
rt_bool_t key1_isPressed(void);
rt_bool_t key2_isPressed(void);

#endif
