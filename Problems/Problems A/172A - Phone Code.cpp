#include <iostream>
#include <vector>

// initializing a global variable that will contain first number
// it will work as my reference number to compare any other number with it
std::string refnumber;

// a variable that will equal the similarity between any number and first number
// the maximum size of inputs is 20 characters, so the maximum similarity is set to 20
int simi{20};

// a function that finds the similarity between first num and the others
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
