#include <stdio.h>

void say_hello(void) {
    puts("Hola desde C23");
}

int main(void) {
    void func(void) = say_hello; // Puntero con tipo deducido (C23)
    func();
    return 0;
}
