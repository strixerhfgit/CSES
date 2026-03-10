#include <iostream>

int main(){
	std::ios::sync_with_stdio(0);
	std::cin.tie(0);

	long long n{};
	std::cin >> n;

	long long pileA{};

	long long pileB{};

	for(long long i{0}; i < n; i++){
		std::cin >> pileA;
		std::cin >> pileB;

		if((pileA + pileB) % 3 == 0){
			if(pileA < pileB){
				if(pileA * 2 >= pileB){
					std::cout << "YES\n";
				}
				else{
					std::cout << "NO\n";
				}
			}
			else{
				if(pileB * 2 >= pileA){
					std::cout << "YES\n";
				}
				else{
					std::cout << "NO\n";
				}
			}
		}
		else{
			std::cout << "NO\n";
		}
	}

	return 0;
}
