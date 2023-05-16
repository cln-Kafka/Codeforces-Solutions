#include <iostream>
#include <algorithm>

int main(){
    long long t,n {0};
    std::cin >> t;
    while(t--){
        std::cin >> n;
        long long* nums = new long long[n];
        for(long long i{0}; i<n; i++){
            std::cin >> nums[i];
        }

        std::sort(nums, nums + n);
        long long max1 = nums[n-1]*nums[n-2];
        long long max2 = nums[0]*nums[1];

        std::cout << std::max(max1, max2) << std::endl;
    }
    return 0;
}