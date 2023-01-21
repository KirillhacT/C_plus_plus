#include<iostream>
#include<vector>

using namespace std;

int binary_search() { //Бинарный поиск
	const int N = 5;
	vector <int> A = { 1, 2, 3, 4, 5 };
	auto target = 4;
	int left = 0;
	int right = (N - 1);

	while (left <= right) {
		auto middle = (left + right) / 2;
		int current = A[middle];
		if (current == target)
			return middle;
		else {
			if (middle > target)
				right = middle - 1;
			else {
				left = middle + 1;
			}
		}
	}
	return -1;
}

int main()
{
    binary_search();
}