#include <iostream>
#include <vector>

// initializing a global variable that will contain first number
// it will work as my reference number to compare any other number with it
std::string refnumber;

// variables that will equal the similarity between any number and first number
int simi{20};

// a function that compares each number it takes with first number and pushes
// the similariy in vector "simi"
void comparison(int n){
    int newsimi{0};
    std::string newnumber;
    std::cin >> newnumber;

    for(int i{0}; i<n; i++){
        if(newnumber[i] == refnumber[i]){
            newsimi++;
        }
        else{break;}
    }
    
    if(newsimi < simi){
        simi = newsimi;
    }
}

int main(){
    int t{0};
    std::cin >> t;
    t--;
    std::cin >> refnumber;
    int size = refnumber.size();
    while(t--){
        comparison(size);
    }

    std::cout << simi << std::endl;
    return 0;
}
