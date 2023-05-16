#include <iostream>

int main(){
    int n{0};
    std::cin >> n;
    int x,y,z {0};

    int xcnt, ycnt, zcnt {0};

    for(int i{0}; i<n; i++){
        std::cin >> x >> y >> z;
        xcnt += x;
        ycnt += y;
        zcnt += z;
    }

    if(xcnt == 0 && ycnt == 0 && zcnt == 0){
        std::cout << "YES" << std::endl;
    }
    else{
        std::cout << "NO" << std::endl;
    }
    return 0;
}