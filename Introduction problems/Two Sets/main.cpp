#include <iostream>

int main(){
	long long n{};
	std::cin >> n;

	long long firstSetCount{1};
	long long firstSetArr[n] = {0};

	long long secondSetCount{0};
	long long secondSetArr[n] = {0};

	firstSetArr[0] = n;
	for(long long i{n-1}; i > 0; i--){
		if(n > 0){
			n -= i;
			secondSetArr[secondSetCount++] = i;
		}
		else{
			n += i;
			firstSetArr[firstSetCount++] = i;
		}
	}

	if(n != 0){
		std::cout << "NO";
	}
	else{
		std::cout << "YES\n" << firstSetCount << "\n";
		for(long long i{0}; i < firstSetCount; i++){
			std::cout << firstSetArr[i] << " ";
		}

		std::cout << "\n" << secondSetCount << "\n";

		for(long long i{0}; i < secondSetCount; i++){
			std::cout << secondSetArr[i] << " ";
		}
	}

	return 0;
}
