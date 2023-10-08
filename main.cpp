#include<iostream>
#include<vector>

using namespace std;

int main() {
	int n;
	cin >> n;

	vector<bool> v(n, true);

	for (int i = 0; i < n; i++) {
		int b;
		cin >> b;
		if (--b < n) v[b] = false;
	}

	int s = 0;
	for (bool e : v) s += e;
	cout << s;
}
