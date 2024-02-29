#include <iostream>

// ����������� ���������� ��������� MODE
#define MODE 1

// ��������, ��� ��������� MODE ����������
#ifndef MODE
#error "MODE not defined. Please define MODE with a value."
#endif

// ���� MODE ����� �������� 0
#if MODE == 0
void modeTraining() {
    std::cout << "������� � ������ ����������" << std::endl;
}

// ���� MODE ����� �������� 1
#elif MODE == 1
int add(int a, int b) {
    return a + b;
}

void modeCombat() {
    std::cout << "������� � ������ ������" << std::endl;
    int num1, num2;
    std::cout << "������� ����� 1: ";
    std::cin >> num1;
    std::cout << "������� ����� 2: ";
    std::cin >> num2;
    std::cout << "��������� ��������: " << add(num1, num2) << std::endl;
}

// ���� MODE ����� ����� ������ ��������
#else
void modeUnknown() {
    std::cout << "����������� �����. ���������� ������" << std::endl;
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
