#include <stdc++.h>
using namespace std;

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);

	string temp;
	cin >> temp;


	stack<char> a;


	int res = 0;

	int v = 1;

	for (int i = 0; i < temp.length(); i++) {
		char current_char = temp[i];

		if (current_char == '(') {
			v *= 2;
			a.push(current_char);
		}
		else if (current_char == '[') {
			v *= 3;
			a.push(current_char);
		}
		else if (current_char == ')') {
			if (a.empty() || a.top() != '(') {
				res = 0;
				break;
			}

			if (temp[i - 1] == '(') {
				res += v;
			}

			v /= 2;
			a.pop();

		}
		else if (current_char == ']') {

			if (a.empty() || a.top() != '[') {
				res = 0;
				break;
			}

			if (temp[i - 1] == '[') {
				res += v;
			}


			v /= 3;
			a.pop();
		}
	}

	if (!a.empty() || res == 0) {
		cout << 0;
	}
	else {
		cout << res;
	}

	return 0;
}
