#include <iostream>

int main(){
	long long n{};
	std::cin >> n;

	long long trailingZeros{0};

	for (long long i{5}; n / i >= 1; i *= 5)
        trailingZeros += n / i;

	std::cout << trailingZeros;


	return 0;
}
