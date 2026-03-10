#include <iostream>

void weirdAlgorithm(long long int n){
	std::cout << n << " ";

	if(n == 1)
		return;

	if(n % 2)
		weirdAlgorithm((n * 3) + 1);
	else
		weirdAlgorithm(n/2);
}

int main(){
	long long int n{};
	std::cin >> n;

	weirdAlgorithm(n);

	return 0;
}
