#include <iostream>

int main(){
	long long n{};
	std::cin >> n;

	long long arr[n] = {};
	for(long long i{0}; i < n; i++)
		std::cin >> arr[i];

	long long tot{0};
	long long pre{arr[0]};
	long long cur{};

	for(long long i{1}; i < n; i++){
		cur = arr[i];

		if(pre > cur){
			tot += pre - cur;
			cur += pre - cur;
		}

		pre = cur;
	}

	std::cout << tot;

	return 0;
}
