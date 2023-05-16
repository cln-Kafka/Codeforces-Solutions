#include <iostream>

int main(){
    int k,l,m,n,d,cnt{0};
    std::cin >> k >> l >> m >> n >> d;
    for(int i{1}; i<=d; i++){
        if(i%k && i%l && i%m && i%n){cnt++;}
    }
    std::cout << d-cnt << std::endl;
    return 0;
}