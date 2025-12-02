#include <stdc++.h>
using namespace std;
int main() {

	ios::sync_with_stdio(0);
	cin.tie(0);

	stack<int>a;
	list<char>a1;
	int n;
	cin >> n;
	int b = 1;
	for (int i = 0; i < n; i++) {
		int temp;
		cin >> temp;
		while (b <= temp) {
			a.push(b++);
			a1.push_back('+');
		}
		if (a.top() == temp) {
			a.pop();
			a1.push_back('-');
		}
	}
	if (a1.size() == 2 * n) {
		for (auto i : a1) {
			cout << i << "\n";
		}
	}
	else {
		cout << "NO";
	}


	return 0;
}