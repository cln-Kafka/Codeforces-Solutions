#include <iostream>
#include <cmath>

int main(){
    int t{0};
    std::cin >> t;
    while(t--){
        int n{0};
        std::cin >> n;
        int* org = new int[n];
        int* cop = new int[n];
        int back = n-1;
        int backpos, firstpos = 0;
        for(int j{0}; j<n; j++){std::cin >> org[j];}
        for(int k{0}; k<n; k++){std::cin >> cop[k];}

        for(int i{0}; i<n; i++){
            if(org[i] != cop[i]){
                firstpos = i;
                break;
            }
        }

        for(int i{back}; i>=0; i--){
            if(org[i] != cop[i]){
                backpos = i;
                break;
            }
        }

        while(firstpos > 0){
            if(cop[firstpos] >= cop[firstpos-1]){
                firstpos--;
            }
            else{break;}
        }

        while(backpos < n-1){
            if(cop[backpos] <= cop[backpos+1]){
                backpos++;
            }
            else{break;}
        }
        std::cout << firstpos+1 << ' ' << backpos+1 << std::endl;
        delete[] org;
        delete[] cop;
    }
    return 0;
}