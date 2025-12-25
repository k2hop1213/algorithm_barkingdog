#include <stdc++.h>
using namespace std;

int main() {

	ios::sync_with_stdio(0);
	cin.tie(0);

	long long n, m;
	cin >> n >> m;
	long long len = 0;
	string s;
	for (int i = 1; i <= n; i++) {
		s = to_string(i);
		
		len += s.length();
		if (len == m) {
			cout << s.back();
			return 0;
		}
		else if (len > m) {
			long long temp = len - m;
			cout << s[s.length() - 1 - temp];
			return 0;
		}
	}

	cout << -1;


	return 0;
}
