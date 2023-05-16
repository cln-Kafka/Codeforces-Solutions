#include <iostream>

int main(){
    int t,n {0};
    std::cin >> t;
    std::string number;
    while(t--){
        std::cin >> n;
        std::cin >> number;
        int first = 0;
        int last = n-1;
        int size = n;
        char* fptr = &number[first];
        char* lptr = &number[last];

        if(n == 1){std::cout<<'1'<<std::endl;}
        else{
            for(int i{0}; i<n/2; i++){
                if((*fptr == '1' && *lptr == '0') || (*fptr == '0' && *lptr == '1')){
                    size -= 2;
                    first++;
                    last--;
                    fptr = &number[first];
                    lptr = &number[last];
                }
                else{break;}
            }
            std::cout << size << std::endl;
        }
    }
    return 0;
}