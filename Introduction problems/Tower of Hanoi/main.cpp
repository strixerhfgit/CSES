#include <iostream>

void hanoi(int m, int l, int c, int r){
	if(m > 1){
		hanoi(m - 1, l, r, c);
	}

	std::cout << l << " " << r << "\n";

	if(m > 1){
		hanoi(m - 1, c, l, r);
	}
}

int main(){

	std::ios::sync_with_stdio(0);
	std::cin.tie(0);
	
	int n{};
	std::cin >> n;

	long moves{1};

	for(int i{0}; i < n; i++){
		moves *= 2;
	}

	moves--;

	std::cout << moves << "\n";

	hanoi(n, 1, 2, 3);

	return 0;
}
