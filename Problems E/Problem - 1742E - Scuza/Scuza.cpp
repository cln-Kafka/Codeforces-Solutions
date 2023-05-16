#include <iostream>

int main(){
    long long t{0};
    long long n, k {0};
    std::cin >> t;
    while(t--){
        std::cin >> n >> k;
        long long* steps = new long long[n];
        long long* questions = new long long[k];
        long long index {0};

        for(long long i{0}; i<n; i++){std::cin >> steps[i];}
        for(long long j{0}; j<k; j++){std::cin >> questions[j];}

        for(long long c{0}; c<k; c++){
            long long answer {0};
            for(long long r{0}; r<n; r++){
                if(questions[c] >= steps[r]){
                    answer += steps[r];
                }
                else{
                    break;
                }
            }
            std::cout << answer << ' ';
        }

        std::cout << std::endl;
    }
    return 0;
}