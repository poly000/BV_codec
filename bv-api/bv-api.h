#ifndef _BV_API


#define _BV_API

#include <stdio.h>
#include <stdint.h>
#include <stddef.h>
void bvInitialize(void);
// 初始化BV_codec。
// 可以多次调用。

int64_t bvDec(char x[]);
// 把BV号转换为av号。
// eg bvDec("BV1xx411c7XW")

char * bvEnc(int64_t x);
// 把av号转换为BV号。
// eg bvEnc(314LL)

#endif
