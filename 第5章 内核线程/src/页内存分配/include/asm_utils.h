#ifndef ASM_UTILS_H
#define ASM_UTILS_H

#include "os_type.h"

extern "C" void asm_halt();
extern "C" void asm_lidt(uint32 start, uint16 limit);
extern "C" void asm_enable_interrupt();
extern "C" void asm_interrupt_empty_handler();
extern "C" void asm_in_port(uint16 port, uint8 *value);
extern "C" void asm_out_port(uint16 port, uint8 value);
extern "C" void asm_time_interrupt_handler();
extern "C" void asm_init_page_reg(int *directory);
// c的接口需要实现
extern "C" void c_time_interrupt_handler();

#endif