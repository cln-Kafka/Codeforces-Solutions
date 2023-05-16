#include <iostream>
#include <iomanip>

int main() {
    double l{0}, h{0};
    std::cin >> h >> l;
    double a = ((l*l)-(h*h))/(2*h);
    std::cout << std::fixed;
    std::cout << std::setprecision(6);
    std::cout << a << std::endl;

    return 0;
}