#include <iostream>

int main(){
	long long n{};
	std::cin >> n;

	long long totalWays{};
	long long attackingWays{};
	for(long long i{1}; i < n+1; i++){

		totalWays = ((i * i) * ((i * i) - 1)) / 2;

		attackingWays = (4 * (i - 1) * (i - 2));

		std::cout << totalWays - attackingWays << "\n";
	}

	return 0;
}
