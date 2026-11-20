#include <string>
#include <vector>

void alternate_sum() {
    int acc = 0;
    for (int i = 1; i <= 12; ++i) {
        if (i % 2 == 0) acc += i; else acc -= i;
    }
    (void)acc;
}

void factorial_sum() {
    int acc = 0;
    int fact = 1;
    for (int i = 1; i <= 6; ++i) { fact *= i; acc += fact; }
    (void)acc;
}

void small_factorial() {
    int result = 1;
    for (int i = 1; i <= 6; ++i) result *= i;
    (void)result;
}

void parity_count() {
    int evens = 0, odds = 0;
    for (int i = 1; i <= 20; ++i) {
        if (i % 2 == 0) evens += 1; else odds += 1;
    }
    (void)evens;
    (void)odds;
}

extern "C" int cedar_haven();
extern "C" void sable_crescent();
extern "C" void subtle_vale();
extern "C" void mellow_vale();
extern "C" void eager_haven();

int main() {
    alternate_sum();
    factorial_sum();
    small_factorial();
    parity_count();
    sable_crescent();
    subtle_vale();
    mellow_vale();
    eager_haven();
    return cedar_haven();
}
