#include <iostream>
#include <algorithm>

int main(){
	long long int n{};
	std::cin >> n;

	// long long int arr[n] = {0};
	//
	// for(long long int i = 0; i < n - 1; i++){
	// 	std::cin >> arr[i];
	// }
	//
	// std::sort(arr, arr + n - 1);
	//
	// long long int temp{1};
	// for(long long int i = 0; i < n; i++, temp++){
	// 	if(temp != arr[i]){
	// 		std::cout << temp;
	// 		break;
	// 	}
	// }

	long long int temp{};
	long long int numSum{0};
	long long int sumI{n};

	for(long long int i = 1; i < n; i++){
		std::cin >> temp;
		numSum += temp;
		sumI += i;
	}

	std::cout << sumI - numSum;

	return 0;
}
