#include <iostream>

int main(){
    int n{0};
    std::cin >> n;
    // int* soldiers = new int[n];
    int soldiers[100];
    for(int i{0}; i<n; i++){
        std::cin >> soldiers[i];
    }

    int max = soldiers[0];
    int min = soldiers[n-1];
    int maxindex, minindex{0};
    for(int j{0}; j<n; j++){
        if(soldiers[j] > max){
            max = soldiers[j];
            maxindex = j;
        }
    }

    for(int j{n-1}; j>=0; j--){
        if(soldiers[j] < min){
            min = soldiers[j];
            minindex = j;
        }
    }

    if(soldiers[0] == max){
        maxindex = 0;
    }

    if(soldiers[n-1] == min){
        minindex = n-1;
    }

    // std::cout << max << " " << maxindex << std::endl;
    // std::cout << min << " " << minindex << std::endl;

    if(maxindex > minindex){
        std::cout << maxindex + n - minindex - 1 - 1 << std::endl;
    }
    else{
        std::cout << maxindex + n - minindex - 1 << std::endl;
    }
    return 0;
}