#include <iostream>

enum month {
    end = 0,
    january = 1,
    february = 2,
    march = 3,
    april = 4,
    may = 5,
    june = 6,
    jule = 7,
    august = 8,
    september = 9,
    october = 10,
    november = 11,
    december = 12

};
   
int main(){
    setlocale(LC_ALL, "RUSSIAN");
    
        bool exit = false;
    int mon=1;
    
    while (mon != end) {
        std::cout << "Введите номер месяца: " << std::endl;
        std::cin >> mon;
        std::cout<<std::endl;
        
        if (mon < 0 || mon>12) {
            std::cout << "Неправильный номер!" << std::endl;
        }

        if (mon == end) {
            std::cout << "До свидания!" ;
        }
        switch (mon) {

        case january: std::cout << "Январь" << std::endl;
            break;
        case february: std::cout << "Февраль" << std::endl;
            break;
        case march: std::cout << "Март" << std::endl;
            break;
        case april: std::cout << "Апрель" << std::endl;
            break;
        case may: std::cout << "Май" << std::endl;
            break;
        case june: std::cout << "Июнь" << std::endl;
            break;
        case jule: std::cout << "Июль" << std::endl;
            break;
        case august:std::cout << "Август" << std::endl;
            break;
        case september:std::cout << "Сентябрь" << std::endl;
            break;
        case october:std::cout << "Октябрь" << std::endl;
            break;
        case november: std::cout << "Ноябрь" << std::endl;
            break;
        case december:std::cout << "Декабрь" << std::endl;
            break;
        
        
        }
    }
    
    return 0;
}