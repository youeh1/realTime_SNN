#include"constants.h"

// leak channels
float iNa_leak(float v){
  float ina = gleakNa*(v-ENa);
  return ina;
}

float iK_leak(float v){
  float ik = gleakK*(v-Ek);
  return ik;
}
