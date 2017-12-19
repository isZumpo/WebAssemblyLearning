#include <stdio.h>
#include <emscripten/emscripten.h>

int main(int argc, char ** argv) {
    printf("Hello, world!\n");
}

int EMSCRIPTEN_KEEPALIVE getNumFive(void) {
    emscripten_run_script("alert('hello')");
    return 5;
}