#include <stdio.h>
#include <iostream>
#include <utility>

bool binary_search(int arr[], int x, int len) {
	int l = 0;
	int r = len - 1;
	int mid = (r - l) / 2;
	
	while (l < r) {
		if (arr[mid] == x) {
			return true;
		}
		else if (arr[mid] > x) {
			r = mid;
			mid = (r - l) / 2;
		}
		else {
			l = mid;
			mid = (r - l) / 2;
		}
	}
	return false;
}

int main() {
	int arr[3][2] = 
	{
		{3,2},
		{5,1},
		{7,4},
	};
	int temp_arr[4];
	for (int i = 0; i < 3; i++) {
		for (int j = 0; j < 2; j++) {
			temp_arr[i*2 + j] = arr[i][j];
		}
	}
	for (int i = 0; i < 6; i++) {
		std::cout << temp_arr[i] << std::endl;
	}

}

