#include <iostream>


int main(){
    int n{0};
    std::cin >> n;
    int* val = new int[n];
    int even;
    int odd;
    for(int i{0}; i<n; i++){
        std::cin >> val[i];
        if(val[i]%2 == 0){even++;}
        else{odd++;}
    }

    if(even == 1){
        for(int i{0}; i<n; i++){
            if(val[i]%2 == 0){
                even = i+1;
                break;
            }
        }
        std::cout << even << std::endl;
    }
    else if(odd == 1){
        for(int i{0}; i<n; i++){
            if(val[i]%2 != 0){
                odd = i+1;
                break;
            }
        }
        std::cout << odd << std::endl;
    }
    return 0;
}