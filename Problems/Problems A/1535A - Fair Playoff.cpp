#include <iostream>
#include <algorithm>

int main(){
    int t {0};
    std::cin >> t;
    int nums[4];
    while(t--){
        int one, two {0};
        for(int i{0}; i<4; i++){
            std::cin >> nums[i];
        }
        if(nums[0] > nums[1]){one = nums[0];}
        else{one = nums[1];}
        if(nums[2] > nums[3]){two = nums[2];}
        else{two = nums[3];}

        std::sort(nums, nums + 4);

        if((one == nums[3] || one == nums[2]) && (two == nums[3] || two == nums[2])){
            std::cout << "YES" << std::endl;
        }
        else{
            std::cout << "NO" << std::endl;
        }    
    }
    return 0;
}