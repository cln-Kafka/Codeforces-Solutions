// (m) : containers
// (a_i) : matchboxes
// (b_i) : matches
// (n) : matchboxes

#include <iostream>

int main(){
    int n,m{0};
    std::cin >> n >> m;
    int* a = new int[m];
    int* b = new int[m];
    for(int i{0}; i<m; i++){
        std::cin >> a[i] >> b[i];
    }

    // bubble sort
    for(int r{0}; r<m; r++){
        for(int i{0}; i<m-1-r; i++){
            if(b[i+1] > b[i]){
                int temp = a[i+1];
                a[i+1] = a[i];
                a[i] = temp;

                int temp2 = b[i+1];
                b[i+1] = b[i];
                b[i] = temp2;
            }
        }
    }

    int cntboxes{0};
    int cntmatches{0};
    // finishing the maximum boxes first
    for(int j{0}; j < m && cntboxes<n; j++){
        if(a[j] <= n-cntboxes){
            cntmatches += b[j]*a[j];
            cntboxes += a[j];
        }
        else if(a[j] > n-cntboxes){
            cntmatches += b[j]*(n-cntboxes);
            cntboxes +=n-cntboxes; 
        }
    }

    std::cout << cntmatches << std::endl;
    return 0;
}