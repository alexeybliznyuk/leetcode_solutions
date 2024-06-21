#include <iostream>





void rand_arr(int* arr, int lenn) {
	/*
	for (int i = 0; i < lenn; i++) {
		std::cout << arr[i] << std::endl;
	}
	*/
	for (int i = 0; i < lenn; i++) {
		arr[i] = rand();
	}
}




int sum_of_nums(int arr[], int lenn) {
	int ans = 0;

	for (int i = 0; i < lenn; ++i) {
		ans += arr[i];
	}
	return ans;
}



void foo(int& x) {
	x++;

}




void pow(int& q, int& w) {
	int temp_q = q;
	for (int i = 0; i < w; ++i) {
		q *= temp_q;
	}

}


void bubble(int arr[],int lenn) {
	for (int i = 0; i  < lenn; ++i) {
		for (int l = 0; l + 1 < lenn; ++l) {
			if (arr[l] < arr[l + 1]) {
				std::swap(arr[l], arr[l + 1]);
			}
		}
	}
}










int main() {
	/*
	int const n = 5;
	int arr[n];
	//int r_arr[n] = rand_arr(arr, n);

	
	rand_arr(arr, n);
	//std::cout << sum_of_nums(arr, n);

	int a = 8;
	std::cout << a << "\n";
	foo(a);
	std::cout << a << "\n";

	*/

	int const n = 5;

	int arr[n];


	rand_arr(arr, n);



	bubble(arr, n);
	
	for (int i = 0; i < n; i++) {
		std::cout << arr[i] << "\t";
	}






	 
}

/*
int foo() {

}
*/
