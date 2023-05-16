#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main(){
    int t{0};
    int n{0};
    cin >> t;
    vector<int> numbers; 
    for(int i{0}; i<10; i++){
        numbers.push_back(i);
    }

    cout << *min_element(numbers.begin(), numbers.end()) << endl;

    // while(t--){
    //     cin >> n;
    //     vector<int> numbers;

    
    //     // *min_element(bnums.begin(), bnums.end());

    //     cout << *min_element(numbers.begin(), numbers.end()) << endl;
    // }
    return 0;
}