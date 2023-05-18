#include <iostream>

int main(){
    int t{0};
    std::cin >> t;
    int a,b {0};
    while(t--){
        std::cin >> a >> b;
        int cnt{0};
        if(a-b == 0){
            std::cout << '0' << std::endl;
        }
        else if(a < b){
            int c = b - a;
            for(int i{10}; i>=1; i--){
                if(c != 0){
                    cnt = cnt + c/i;
                    c = c % i;
                }
                else{break;}
            }
            std::cout << cnt << std::endl;
        }
        else if(a > b){
            int c = a - b;
            for(int i{10}; i>=1; i--){
                if(c){
                    cnt+=c/i;
                    c = c % i;
                }
                else{break;}
            }
            std::cout << cnt << std::endl;
        }
    }
    return 0;
}