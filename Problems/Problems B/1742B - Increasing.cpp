#include <iostream>
#include <algorithm>
#include <map>

bool flagging(int* nums, int n){
    bool flag = true;
    std::map<int, int> flaginio;
    for(int i{0}; i<n; i++){
        flaginio[nums[i]]++;
    }
    for(std::map<int, int>::iterator itr = flaginio.begin(); itr != flaginio.end(); ++itr){
        if(itr->second > 1){
            flag = false;
            break;
        }
    }
    return flag;
}

int main(){
    int t{0};
    std::cin >> t;
    while(t--){
        int n{0};
        std::cin >> n;
        int* numbers = new int[n];
        for(int i{0}; i<n; i++){
            std::cin >> numbers[i];
        }
        std::sort(numbers, numbers + n);
        bool flagsheesh = flagging(numbers, n);
        if(flagsheesh){
            std::cout << "YES" << std::endl;
        }
        else{
            std::cout << "NO" << std::endl;
        }
    }
    return 0;
}