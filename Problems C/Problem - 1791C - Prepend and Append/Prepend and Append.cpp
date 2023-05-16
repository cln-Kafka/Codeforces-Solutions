#include <iostream>

int main(){
    int t,n {0};
    std::cin >> t;
    std::string number;
    while(t--){
        std::cin >> n;
        std::cin >> number;
        int last = n-1;
        int size = n;
        if(n == 1){std::cout<<'1'<<std::endl;}
        else{
            for(int i{0}; i<n/2; i++){
                if((number[i] == '1' && number[last-i] == '0') || (number[i] == '0' && number[last-i] == '1')){
                    size -= 2;
                }
                else{break;}
            }
            std::cout << size << std::endl;
        }
    }
    return 0;
}