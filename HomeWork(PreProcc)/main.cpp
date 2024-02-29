#include <iostream>

// Определение символьной константы MODE
#define MODE 1

// Проверка, что константа MODE определена
#ifndef MODE
#error "MODE not defined. Please define MODE with a value."
#endif

// Если MODE имеет значение 0
#if MODE == 0
void modeTraining() {
    std::cout << "Работаю в режиме тренировки" << std::endl;
}

// Если MODE имеет значение 1
#elif MODE == 1
int add(int a, int b) {
    return a + b;
}

void modeCombat() {
    std::cout << "Работаю в боевом режиме" << std::endl;
    int num1, num2;
    std::cout << "Введите число 1: ";
    std::cin >> num1;
    std::cout << "Введите число 2: ";
    std::cin >> num2;
    std::cout << "Результат сложения: " << add(num1, num2) << std::endl;
}

// Если MODE имеет любое другое значение
#else
void modeUnknown() {
    std::cout << "Неизвестный режим. Завершение работы" << std::endl;
}
#endif

int main() {
    setlocale(LC_ALL, "Russian");
#if MODE == 0
    modeTraining();
#elif MODE == 1
    modeCombat();
#else
    modeUnknown();
#endif

    return 0;
}
