#include <iostream>

int main(){
    int t{0};
    std::cin >> t;
    while(t--){
        int n{0};
        std::cin >> n;
        int* bin = new int[n];

        // variables for procedure
        int cnt{0};
        int pos{0};
        int max{0};
        int accessed {0};
        int* counter = new int[2*n];

        // input the binary array
        for(int i{0}; i<n; i++){
            std::cin >> bin[i];
        }

        for(int i{0}; i<2*n; i++){
            counter[i] = 0;
        }

        // counting the total zeros
        for(int i{0}; i<n; i++){
            if(bin[i] == 0){
                cnt++;
            }
        }

        // if the whole array consists of zeros
        // so output the size of the array
        // as the longest subarray of zeros
        if(cnt == n){
            std::cout << n << std::endl;
        }
        else if(cnt == 0){
            std::cout << 0 << std::endl;
        }
        else if(cnt == 1){
            std::cout << 1 << std::endl;
        }
        // if not, beging to see what is the longest path
        else{
            cnt = 0;
            for(int i{0}; i<n; i++){
                if(bin[i] == 0){
                    cnt++;
                }
                else if(bin[i] == 1){
                    counter[pos] = cnt;
                    cnt = 0;
                    pos++;
                }

            }
            counter[pos] = cnt;

            for(int i{0}; i<=pos; i++){
                if(counter[i] > max){
                    max = counter[i];
                }
            }
            
            std::cout << max << std::endl;
        }

        delete[] bin;
    }
    return 0;
}