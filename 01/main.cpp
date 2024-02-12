#include "main.h"

int main(){

    int num1 = 0, num2 = 0;


#if MODE == 0
                std::cout << "Работаю в режиме тренировки. " << std::endl;
#endif
#if MODE == 1
                std::cout << "Работаю в боевом режиме:"  << std::endl << "Введите первое число: ";
                std::cin >> num1;
                std::cout << "Введите второе число: ";
                std::cin >> num2;
                std::cout << "Результат сложения: "  << add(num1, num2) << std::endl;    
#endif

    return 0;
}