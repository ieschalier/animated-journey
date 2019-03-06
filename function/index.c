#include <stdio.h>
#include <emscripten/emscripten.h>
#include <math.h>

int main(int argc, char ** argv) {
    printf("Hello World\n");
}

#ifdef __cplusplus
extern "C" {
#endif

void EMSCRIPTEN_KEEPALIVE myFunction(int argc, char ** argv) {
  printf("MyFunction Called\n");
}

int EMSCRIPTEN_KEEPALIVE int_sqrt(int x) {
  return sqrt(x);
}

#ifdef __cplusplus
}
#endif
