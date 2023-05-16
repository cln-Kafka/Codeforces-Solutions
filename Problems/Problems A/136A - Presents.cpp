#include<iostream>
#include<map>

int main(){
    std::map<int, int>m;
	int n;
	std::cin >> n;
	for (int i = 1; i <= n; i++) {
		int k;
		std::cin >> k;
		m[k] = i;
	}
	for (auto it : m) {
		std::cout << it.second << ' ';
	}
}	