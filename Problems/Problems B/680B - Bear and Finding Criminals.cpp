#include <iostream>

int main(){
    int n,a{0};
    std::cin >> n >> a;
    int cnt{0};
    int* dist = new int[n];
    for(int r{0}; r<n; r++){
        std::cin >> dist[r];
        if(dist[r] == 1){cnt++;}
    }

    if(a == 1 || a == n){
        std::cout << cnt << std::endl;
    }
    else{
        int cntones{dist[a-1]};
        if(a-1 > n/2){
            int roadtoend = n-a;
            for(int i{1}; i<=roadtoend; i++){
                if(dist[a-1-i] == 1 && dist[a-1+i] == 1){
                    cntones+=2;
                }
            }
            for(int i{0}; i<a-1-roadtoend; i++){
                if(dist[i] == 1){cntones++;}
            }
        }
        else{
            int roadtostart = a-1;
            for(int i{1}; i<=roadtostart; i++){
                if(dist[a-1-i] == 1 && dist[a-1+i] == 1){
                    cntones+=2;
                }    
            }
            for(int i{a+roadtostart}; i<n; i++){
                if(dist[i] == 1){cntones++;}
            }
        }
        std::cout << cntones << std::endl;
    }
    return 0;
}