#include "main.h"

int main(){

    int num1 = 0, num2 = 0;


#if MODE == 0
                std::cout << "Работаю в режиме тренировки. " << std::endl;
#endif
#if MODE == 1
                std::cout << "Работаю в боевом тренировки: "  << std::endl << "Введите первое число: ";
                std::cin >> num1;
                std::cout << "Введите второе число: ";
                std::cin >> num2;
                std::cout << "Результат сложения: "  << add(num1, num2) << std::endl;    
#elif MODE != 1 || MODE != 0
        std::cout "Неизвестный режим. Завершение работы"
#else
#error "MODE не определен."
#endif

    return 0;
}