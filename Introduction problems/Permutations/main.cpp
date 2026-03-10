#include <iostream>

int main(){
	long long n{};
	std::cin >> n;

	if(n <= 3 && n > 1){
		std::cout << "NO SOLUTION";
		return 0;
	}

	for(long long i{2}; i < n+1; i = i+2)
		std::cout << i << " ";

	for(long long i{1}; i < n+1; i = i+2)
		std::cout << i << " ";

	return 0;
}
