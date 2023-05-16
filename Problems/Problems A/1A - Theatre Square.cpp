#include <iostream>
#include <cmath>

int main(){
    double n,m,a = 0;
    std::cin >> n >> m >> a;
    long long cnt = ceil(n/a) * ceil(m/a);
    std::cout << cnt << std::endl;
    return 0;
}