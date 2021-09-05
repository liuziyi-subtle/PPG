#pragma once

#include <stdint.h>

typedef struct
{
  int32_t  ppg[4];
  int32_t  glitch_th;
  int32_t  last_f_datum;
  int32_t  jump_th;
  int32_t  jump_delta;
  int8_t   jump_cnt;
  uint32_t pre_data_cnt;
} alg_Stress_pre_t;

int32_t PreprocessPPG(int32_t ppg, )
{

}