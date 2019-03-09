#include <stdio.h>
#include <emscripten/emscripten.h>
#include <math.h>

#ifdef __cplusplus
extern "C" {
#endif

int calcul(int n) {
  int i, sum = 0;

  for (i = 1; i <= n; ++i) {
    if (i % 3 == 0 || i % 5 == 0) {
      sum += i;
    }
  }

  return sum;
}

void EMSCRIPTEN_KEEPALIVE cBench(int argc, char ** argv) {
  int i;
  for (i = 0; i < 1000; ++i) {
    calcul(100000);
  }
}

#ifdef __cplusplus
}
#endif
