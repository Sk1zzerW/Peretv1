#include <iostream>

int main() {
    double distance, time;

    std::cout << "введите расстояние до аеропорта (км) ";
    std::cin >> distance;

    std::cout << "введите время (час) ";
    std::cin >> time;

    double speed = distance / time;

    std::cout << "вам нужно ехать  " << speed << " км/час." << std::endl;

    return 0;
}
