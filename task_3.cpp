#include <iostream>
#include <cmath>
#include <vector>


int main() {
    double start, end, step;

    
    std::cout << "Введите начальное значение x: ";
    std::cin >> start; // Задаем исходное значение переменной
    
    std::cout << "Введите конечное значение x: ";
    std::cin >> end; // Задаем конечное значение переменной
    
    std::cout << "Введите шаг: ";
    std::cin >> step; // Задаем шаг, с которым будет изменяться аргумент
    
    std::cout << "x | y" << std::endl;
    std::cout << "------" << std::endl;
    

    std::vector<std::pair<double, double>> results;

    for (double x = start; x <= end; x += step) {
        double y = sin(x); // функция y = sin(x)
        std::cout << x << " | " << y << std::endl; 
        results.push_back({x, y});
        // Выводим значения функции для каждого аргумента (x | y)
    }
     std::cout << "Обращение к несуществующему элементу: " << results[results.size() + 10].first << std::endl;
    
    
    return 0;
}