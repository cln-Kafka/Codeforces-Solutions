#include <iostream>

int main(){
    int t{0};
    std::cin >> t;
    while(t--){
        int n{0};
        std::cin >> n;
        int temp{0};
        int cnt1{0};
        int cnt2{0};
        int sum{0};
        for(int i{0}; i<n; i++){
            std::cin >> temp;
            sum+=temp;
            if(temp == 1){cnt1++;}
            else if(temp == 2){cnt2++;}
        }
        
        if(cnt1 == 0 && cnt2%2 != 0){
            std::cout << "NO" << std::endl;
        }
        else if(cnt2 == 0 && cnt1%2 != 0){
            std::cout << "NO" << std::endl;
        }
        else if(cnt1%2 == 0 && cnt2%2 == 0){
            std::cout << "YES" << std::endl;
        }
        else if(cnt1%2 != 0 && cnt2%2 != 0){
            std::cout << "NO" << std::endl;
        }
        else if(cnt1%2 != 0 && cnt2%2 == 0){
            std::cout << "NO" << std::endl;
        }
        else if(cnt1%2 == 0 && cnt2%2 != 0){
            std::cout << "YES" << std::endl;
        }
    }
    return 0;
}