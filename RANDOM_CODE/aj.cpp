#include <bits/stdc++.h>
using namespace std;


int bSearch(int arr[], int l, int r, int x)
{
	if (r >= l) {
		int mid = l + (r - l) / 2;


		if (arr[mid] == x)
			return mid;


		if (arr[mid] > x)
			return bSearch(arr, l, mid - 1, x);


		return bSearch(arr, mid + 1, r, x);
	}


	return -1;
}

int main(void)
{
	int arr[] = { 10,20,30,40,50};
	int x = 40;
	int n = sizeof(arr) / sizeof(arr[0]);
	int result = bSearch(arr, 0, n - 1, x);
	(result == -1)
	            ? cout << "Element is not present in array OR the array is not sorted"
				: cout << "Element is present at index " << result;
	return 0;
}
