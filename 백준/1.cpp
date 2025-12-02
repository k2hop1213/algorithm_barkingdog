//10871
#if 0
#include <stdc++.h>
using namespace std;
/*
정수 N개로 이루어진 수열 A와 정수 X가 주어진다. 이때, A에서 X보다 작은 수를 모두 출력하는 프로그램을 작성하시오.
*/
int main() {

	ios::sync_with_stdio(0);
	cin.tie(0);

	int n, x;

	cin >> n >> x;

	for (int i = 0; i < n; i++) {
		int temp = 0;
		cin >> temp;
		if (temp < x) cout << temp << " ";
	}


	return 0;
}
#endif
//1000
#if 0
#include <stdc++.h>
using namespace std;
int main() {

	ios::sync_with_stdio(0);
	cin.tie(0);

	int a, b;
	cin >> a >> b;
	cout << a + b;

	return 0;
}
#endif
//2752
#if 0
//세 개의 수 오름차순 정렬
#include <stdc++.h>
using namespace std;
int main() {

	ios::sync_with_stdio(0);
	cin.tie(0);
	int arr[3];
	cin >> arr[0] >> arr[1] >> arr[2];

	sort(arr, arr + 3);

	cout << arr[0] << " " << arr[1] << " " << arr[2];
	return 0;
}
#endif
//2480
#if 0
/*
1에서부터 6까지의 눈을 가진 3개의 주사위를 던져서 다음과 같은 규칙에 따라 상금을 받는 게임이 있다.

같은 눈이 3개가 나오면 10,000원+(같은 눈)×1,000원의 상금을 받게 된다.
같은 눈이 2개만 나오는 경우에는 1,000원+(같은 눈)×100원의 상금을 받게 된다.
모두 다른 눈이 나오는 경우에는 (그 중 가장 큰 눈)×100원의 상금을 받게 된다.
예를 들어, 3개의 눈 3, 3, 6이 주어지면 상금은 1,000+3×100으로 계산되어 1,300원을 받게 된다. 또 3개의 눈이 2, 2, 2로 주어지면 10,000+2×1,000 으로 계산되어 12,000원을 받게 된다. 3개의 눈이 6, 2, 5로 주어지면 그중 가장 큰 값이 6이므로 6×100으로 계산되어 600원을 상금으로 받게 된다.

3개 주사위의 나온 눈이 주어질 때, 상금을 계산하는 프로그램을 작성 하시오.
*/
#include <stdc++.h>
using namespace std;
int main() {

	ios::sync_with_stdio(0);
	cin.tie(0);

	int a, b, c;

	cin >> a >> b >> c;

	if ((a == b) && (b == c)) {
		cout << 10000 + (a * 1000);
	}
	else if ((a == b)) {
		cout << 1000 + (a * 100);
	}
	else if ((b == c)) {
		cout << 1000 + (b * 100);
	}
	else if ((a == c)) {
		cout << 1000 + (c * 100);
	}
	else {
		if ((a > b) && (a > c)) {
			cout << a * 100;
		}
		else if ((b > a) && (b > c)) {
			cout << b * 100;
		}
		else if ((c > b) && (c > a)) {
			cout << c * 100;
		}
	}

	return 0;
}
#endif
//2490
#if 0
/*
우리나라 고유의 윷놀이는 네 개의 윷짝을 던져서 배(0)와 등(1)이 나오는 숫자를 세어 도, 개, 걸, 윷, 모를 결정한다.
네 개 윷짝을 던져서 나온 각 윷짝의 배 혹은 등 정보가 주어질 때
도(배 한 개, 등 세 개), 개(배 두 개, 등 두 개), 걸(배 세 개, 등 한 개), 윷(배 네 개), 모(등 네 개)
중 어떤 것인지를 결정하는 프로그램을 작성하라.
*/
#include <stdc++.h>
using namespace std;
int main() {

	ios::sync_with_stdio(0);
	cin.tie(0);
	for (int i = 0; i < 3; i++) {
		int a, b, c, d;

		cin >> a >> b >> c >> d;
		int sum = a + b + c + d;

		if (sum == 3) {
			cout << "A\n";
		}
		else if (sum == 2) {
			cout << "B\n";
		}
		else if (sum == 1) {
			cout << "C\n";
		}
		else if (sum == 0) {
			cout << "D\n";
		}
		else {
			cout << "E\n";
		}
	}


	return 0;
}
#endif
//2576
#if 0
/*
7개의 자연수가 주어질 때, 이들 중 홀수인 자연수들을 모두 골라 그 합을 구하고, 고른 홀수들 중 최솟값을 찾는 프로그램을 작성하시오.

예를 들어, 7개의 자연수 12, 77, 38, 41, 53, 92, 85가 주어지면 이들 중 홀수는 77, 41, 53, 85이므로 그 합은

77 + 41 + 53 + 85 = 256

이 되고,

41 < 53 < 77 < 85

이므로 홀수들 중 최솟값은 41이 된다.
*/
#include <stdc++.h>
using namespace std;
int main() {

	ios::sync_with_stdio(0);
	cin.tie(0);

	int sum = 0;
	int min = 99;
	int flag = 0;
	for (int i = 0; i < 7; i++) {
		int temp;
		cin >> temp;
		if (temp % 2) {
			sum += temp;
			if (min > temp)min = temp;
			flag = 1;
		}
	}
	if (flag == 0) {
		cout << -1;
		return 0;
	}
	cout << sum << "\n" << min;

	return 0;
}
#endif
//2587
#if 0
/*
어떤 수들이 있을 때, 그 수들을 대표하는 값으로 가장 흔하게 쓰이는 것은 평균이다. 평균은 주어진 모든 수의 합을 수의 개수로 나눈 것이다. 예를 들어 10, 40, 30, 60, 30의 평균은 (10 + 40 + 30 + 60 + 30) / 5 = 170 / 5 = 34가 된다.

평균 이외의 또 다른 대표값으로 중앙값이라는 것이 있다. 중앙값은 주어진 수를 크기 순서대로 늘어 놓았을 때 가장 중앙에 놓인 값이다. 예를 들어 10, 40, 30, 60, 30의 경우, 크기 순서대로 늘어 놓으면

10 30 30 40 60

이 되고 따라서 중앙값은 30이 된다.

다섯 개의 자연수가 주어질 때 이들의 평균과 중앙값을 구하는 프로그램을 작성하시오.
*/
#include <stdc++.h>
using namespace std;
int main() {

	ios::sync_with_stdio(0);
	cin.tie(0);

	int arr[5];

	for (int i = 0; i < 5; i++) {
		cin >> arr[i];
	}

	sort(arr, arr + 5);
	int avg = 0;
	for (int i = 0; i < 5; i++)avg += arr[i];

	cout << avg / 5 << "\n" << arr[2];


	return 0;
}
#endif
//2309
#if 0
/*
왕비를 피해 일곱 난쟁이들과 함께 평화롭게 생활하고 있던 백설공주에게 위기가 찾아왔다.
일과를 마치고 돌아온 난쟁이가 일곱 명이 아닌 아홉 명이었던 것이다.

아홉 명의 난쟁이는 모두 자신이 "백설 공주와 일곱 난쟁이"의 주인공이라고 주장했다.
뛰어난 수학적 직관력을 가지고 있던 백설공주는, 다행스럽게도 일곱 난쟁이의 키의 합이 100이 됨을 기억해 냈다.

아홉 난쟁이의 키가 주어졌을 때, 백설공주를 도와 일곱 난쟁이를 찾는 프로그램을 작성하시오.
*/
#include <stdc++.h>
using namespace std;
int main() {

	ios::sync_with_stdio(0);
	cin.tie(0);
	int sum = 0;
	int arr[9];
	for (int i = 0; i < 9; i++) {
		cin >> arr[i];
		sum += arr[i];
	}
	sort(arr, arr + 9);
	for (int i = 0; i < 8; i++) {
		for (int j = i + 1; j < 9; j++) {
			if (sum - (arr[i] + arr[j]) == 100) {
				for (int k = 0; k < 9; k++) {
					if (k == i || k == j) {
						continue;
					}
					cout << arr[k] << "\n";
				}
				return 0;
			}
		}
	}


	return 0;
}
#endif
//10093
#if 0
//두 양의 정수가 주어졌을 때, 두 수 사이에 있는 정수를 모두 출력하는 프로그램을 작성하시오.
#include <stdc++.h>
using namespace std;
int main() {

	ios::sync_with_stdio(0);
	cin.tie(0);

	long long int a, b;

	cin >> a >> b;
	if (a == b) {
		cout << "0";
		return 0;
	}
	cout << (int)abs(b - a) - 1 << "\n";
	long long int big = (a > b) ? a : b;
	long long int small = (a < b) ? a : b;
	for (long long int i = small + 1; i < big; i++) {
		cout << i << " ";
	}

	return 0;
}
#endif
//1267
#if 0
/*
동호는 새악대로 T 통신사의 새 핸드폰 옴머나를 샀다.
새악대로 T 통신사는 동호에게 다음 두 가지 요금제 중 하나를 선택하라고 했다.

영식 요금제
민식 요금제
영식 요금제는 30초마다 10원씩 청구된다.
이 말은 만약 29초 또는 그 보다 적은 시간 통화를 했으면 10원이 청구된다.
만약 30초부터 59초 사이로 통화를 했으면 20원이 청구된다.

민식 요금제는 60초마다 15원씩 청구된다.
이 말은 만약 59초 또는 그 보다 적은 시간 통화를 했으면 15원이 청구된다.
만약 60초부터 119초 사이로 통화를 했으면 30원이 청구된다.

동호가 저번 달에 새악대로 T 통신사를 이용할 때 통화 시간 목록이 주어지면 어느 요금제를 사용 하는 것이 저렴한지 출력하는 프로그램을 작성하시오.
*/
#include <stdc++.h>
using namespace std;
int main() {

	ios::sync_with_stdio(0);
	cin.tie(0);
	int n;
	cin >> n;
	int y = 0;
	int m = 0;
	for (int i = 0; i < n; i++) {
		int temp = 0;
		cin >> temp;
		int temp1 = temp;
		while (temp > 0) {
			if (temp < 30) {
				y += 10;
				break;
			}
			else if (temp >= 30 && temp < 60) {
				y += 20;
				break;
			}
			y += 10;
			temp -= 30;
		}
		while (temp1 > 0) {
			if (temp1 < 60) {
				m += 15;
				break;
			}
			else if (temp1 >= 60 && temp1 < 120) {
				m += 30;
				break;
			}
			m += 15;
			temp1 -= 60;
		}

	}

	if (y == m) {
		cout << "Y M " << y;
	}
	else if (y < m) {
		cout << "Y " << y;
	}
	else {
		cout << "M " << m;
	}


	return 0;
}
#endif
//10804
#if 0
/*
1부터 20까지 오름차순으로 놓인 카드들에 대해,
입력으로 주어진 10개의 구간 순서대로 뒤집는 작업을 했을 때 마지막 카드들의 배치를 한 줄에 출력한다.
*/
#include <stdc++.h>
using namespace std;
int main() {

	ios::sync_with_stdio(0);
	cin.tie(0);

	int arr[20] = { 0 };
	for (int i = 1; i <= 20; i++)arr[i - 1] = i;

	for (int i = 0; i < 10; i++) {
		int a, b;
		cin >> a >> b;
		for (int j = a - 1; j < (a + b) / 2; j++) {
			int temp = arr[j];
			arr[j] = arr[b - j + a - 2];
			arr[b - j + a - 2] = temp;

		}
	}
	for (int i = 0; i < 20; i++)cout << arr[i] << " ";
	return 0;
}
#endif
//15552
#if 0
#include <stdc++.h>
using namespace std;
int main() {

	ios::sync_with_stdio(0);
	cin.tie(0);

	int n;
	cin >> n;
	for (int i = 0; i < n; i++) {
		int a, b;
		cin >> a >> b;
		cout << a + b << "\n";
	}

	return 0;
}
#endif
//2440
#if 0
/*
*****
****
***
**
*
*/
#include <stdc++.h>
using namespace std;
int main() {

	ios::sync_with_stdio(0);
	cin.tie(0);
	int n;
	cin >> n;
	for (int i = n; i >= 0; i--) {
		int temp = i;
		for (int j = 0; j < temp; j++) {
			cout << "*";
		}

		cout << "\n";
	}


	return 0;
}
#endif
//2441
#if 0
/*
*****
 ****
  ***
   **
	*
*/
#include <stdc++.h>
using namespace std;
int main() {

	ios::sync_with_stdio(0);
	cin.tie(0);
	int n;
	cin >> n;
	for (int i = n; i >= 0; i--) {
		int temp = i;
		for (int j = 0; j < n - temp; j++) {
			cout << " ";
		}
		for (int j = 0; j < temp; j++) {
			cout << "*";
		}

		cout << "\n";
	}


	return 0;
}
#endif
//2442
#if 0
/*
	*
   ***
  *****
 *******
*********
*/
#include <stdc++.h>
using namespace std;
int main() {

	ios::sync_with_stdio(0);
	cin.tie(0);
	int n;
	cin >> n;
	int a = 1;
	int b = (2 * n - 1) / 2;
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < b; j++) {
			cout << " ";
		}
		for (int j = 0; j < a; j++) {
			cout << "*";
		}
		a += 2;
		b -= 1;

		cout << "\n";
	}


	return 0;
}
#endif
//2443
#if 0
/*
*********
 *******
  *****
   ***
	*
*/
#include <stdc++.h>
using namespace std;
int main() {

	ios::sync_with_stdio(0);
	cin.tie(0);
	int n;
	cin >> n;
	int a = 2 * n - 1;
	int b = 0;
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < b; j++) {
			cout << " ";
		}
		for (int j = 0; j < a; j++) {
			cout << "*";
		}
		a -= 2;
		b += 1;

		cout << "\n";
	}


	return 0;
}
#endif
//2444
#if 0
/*
	*
   ***
  *****
 *******
*********
 *******
  *****
   ***
	*
*/
#include <stdc++.h>
using namespace std;
int main() {

	ios::sync_with_stdio(0);
	cin.tie(0);
	int n;
	cin >> n;
	int a = 1;
	int b = (2 * n - 1) / 2;
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < b; j++) {
			cout << " ";
		}
		for (int j = 0; j < a; j++) {
			cout << "*";
		}
		a += 2;
		b -= 1;

		cout << "\n";
	}
	a = 2 * n - 3;
	b = 1;
	for (int i = 0; i < n - 1; i++) {
		for (int j = 0; j < b; j++) {
			cout << " ";
		}
		for (int j = 0; j < a; j++) {
			cout << "*";
		}
		a -= 2;
		b += 1;

		cout << "\n";
	}


	return 0;
}
#endif
//2445
#if 0
/*
*        *
**      **
***    ***
****  ****
**********
****  ****
***    ***
**      **
*        *
*/
#include <stdc++.h>
using namespace std;
int main() {

	ios::sync_with_stdio(0);
	cin.tie(0);

	int n;
	cin >> n;
	int a = 1;
	int b = n - 1;
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < a; j++) {
			cout << "*";
		}
		for (int j = 0; j < 2 * b; j++) {
			cout << " ";
		}
		for (int j = 0; j < a; j++) {
			cout << "*";
		}
		a += 1;
		b -= 1;
		cout << "\n";
	}
	a = n - 1;
	b = 1;
	for (int i = 0; i < n - 1; i++) {
		for (int j = 0; j < a; j++) {
			cout << "*";
		}
		for (int j = 0; j < 2 * b; j++) {
			cout << " ";
		}
		for (int j = 0; j < a; j++) {
			cout << "*";
		}
		a -= 1;
		b += 1;
		cout << "\n";
	}


	return 0;
}
#endif
//2446
#if 0
/*
*********
 *******
  *****
   ***
	*
   ***
  *****
 *******
*********
*/
#include <stdc++.h>
using namespace std;
int main() {

	ios::sync_with_stdio(0);
	cin.tie(0);
	int n;
	cin >> n;
	int a = 2 * n - 1;
	int b = 0;
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < b; j++) {
			cout << " ";
		}
		for (int j = 0; j < a; j++) {
			cout << "*";
		}
		a -= 2;
		b += 1;
		cout << "\n";
	}
	a = 3;
	b = n - 2;
	for (int i = 0; i < n - 1; i++) {
		for (int j = 0; j < b; j++) {
			cout << " ";
		}
		for (int j = 0; j < a; j++) {
			cout << "*";
		}
		a += 2;
		b -= 1;
		cout << "\n";
	}


	return 0;
}
#endif
//10808
#if 0
/*
알파벳 소문자로만 이루어진 단어 S가 주어진다. 각 알파벳이 단어에 몇 개가 포함되어 있는지 구하는 프로그램을 작성하시오.
*/
#include <stdc++.h>
using namespace std;
int main() {

	ios::sync_with_stdio(0);
	cin.tie(0);

	int arr[26] = { 0 };

	string s;
	cin >> s;

	for (auto c : s) {
		arr[c - 'a']++;
	}
	for (auto c : arr) {
		cout << c << " ";
	}

	return 0;
}
#endif
//1475
#if 0
/*
다솜이는 은진이의 옆집에 새로 이사왔다. 다솜이는 자기 방 번호를 예쁜 플라스틱 숫자로 문에 붙이려고 한다.

다솜이의 옆집에서는 플라스틱 숫자를 한 세트로 판다.
한 세트에는 0번부터 9번까지 숫자가 하나씩 들어있다. 다솜이의 방 번호가 주어졌을 때, 필요한 세트의 개수의 최솟값을 출력하시오.
(6은 9를 뒤집어서 이용할 수 있고, 9는 6을 뒤집어서 이용할 수 있다.)
*/
#include <stdc++.h>
using namespace std;
int main() {

	ios::sync_with_stdio(0);
	cin.tie(0);

	int arr[10] = { 0 };

	int n;
	cin >> n;

	while (n > 0) {
		arr[n % 10]++;
		n /= 10;
	}

	int min = 0;

	for (int i = 0; i < 10; i++) {
		if (min < arr[i]) {
			if (i == 6 || i == 9)
				min = (arr[6] + arr[9] + 1) / 2;
			else min = arr[i];
		}
	}
	cout << min;

	return 0;
}
#endif
//3273
#if 0
/*
n개의 서로 다른 양의 정수 a1, a2, ..., an으로 이루어진 수열이 있다. ai의 값은 1보다 크거나 같고,
1000000보다 작거나 같은 자연수이다. 자연수 x가 주어졌을 때, ai + aj = x (1 ≤ i < j ≤ n)을 만족하는 (ai, aj)쌍의 수를 구하는 프로그램을 작성하시오.
*/
#include <stdc++.h>
using namespace std;
int main() {

	ios::sync_with_stdio(0);
	cin.tie(0);

	int n;
	cin >> n;
	vector<int> v(1000001, 0);
	for (int i = 0; i < n; i++) {
		int temp;
		cin >> temp;
		if (temp <= 1000000) v[temp]++;
	}
	int x;
	cin >> x;
	int res = 0;
	for (int i = 1; i < (x + 1) / 2; i++) {

		if (x - i <= 1000000) {
			if (v[i] && v[x - i]) {
				res++;
			}
		}

	}

	cout << res;
	return 0;
}
#endif
//13300
#if 0
#include <stdc++.h>
using namespace std;
int main() {

	ios::sync_with_stdio(0);
	cin.tie(0);

	int a[7] = { 0 };
	int b[7] = { 0 };

	int n;
	cin >> n;
	int n1;
	cin >> n1;

	for (int i = 0; i < n; i++) {
		int temp;
		int temp1;
		cin >> temp >> temp1;
		if (temp) {
			a[temp1]++;//여자학년
		}
		else {
			b[temp1]++;//남자학년
		}
	}
	int res = 0;
	for (int i = 1; i <= 6; i++) {
		if (a[i]) {

			if (a[i] > n1 && a[i] % n1) {
				res += ((a[i] / n1) + 1);
			}
			else if (a[i] > n1 && (a[i] % n1 == 0)) {
				res += (a[i] / n1);
			}
			else {
				res++;
			}

		}
		if (b[i]) {
			if (b[i] > n1 && b[i] % n1) {
				res += ((b[i] / n1) + 1);
			}
			else if (b[i] > n1 && (b[i] % n1 == 0)) {
				res += (b[i] / n1);
			}
			else {
				res++;
			}

		}
	}
	cout << res;

	return 0;
}
#endif
//1919
#if 0
#include <stdc++.h>
using namespace std;
int main() {

	ios::sync_with_stdio(0);
	cin.tie(0);

	int arr1[26] = { 0 };
	int arr2[26] = { 0 };
	string s1;
	string s2;
	cin >> s1 >> s2;
	for (auto a : s1) {
		arr1[a - 'a']++;
	}
	for (auto a : s2) {
		arr2[a - 'a']++;
	}
	int res = 0;

	for (int i = 0; i < 26; i++) {
		if ((arr1[i] > 0) ^ (arr2[i] > 0)) {
			int temp = (arr1[i] > 0) ? arr1[i] : arr2[i];
			res += temp;
		}
		else if (arr1[i] && arr2[i]) {
			int temp = (arr1[i] > arr2[i]) ? arr1[i] - arr2[i] : arr2[i] - arr1[i];
			res += temp;
		}
	}
	cout << res;

	return 0;
}
#endif
//1406
#if 0
#include <stdc++.h>
using namespace std;
int main() {

	ios::sync_with_stdio(0);
	cin.tie(0);

	string s;
	cin >> s;
	list<char> a;

	for (auto i : s) {
		a.push_back(i);
	}
	auto t = a.end();
	int n;
	cin >> n;
	for (int i = 0; i < n; i++) {
		char temp;
		cin >> temp;
		if (temp == 'L') {
			if (t != a.begin()) {
				t--;
			}
		}
		else if (temp == 'D') {
			if (t != a.end()) {
				t++;
			}
		}
		else if (temp == 'B') {
			if (t != a.begin()) {
				t--;
				t = a.erase(t);
			}
		}
		else {
			char temp1;
			cin >> temp1;
			a.insert(t, temp1);
		}
	}
	for (auto i : a) {
		cout << i;
	}


	return 0;
}
#endif
//5397
#if 0
#include <stdc++.h>
using namespace std;
int main() {

	ios::sync_with_stdio(0);
	cin.tie(0);

	int n;
	cin >> n;

	for (int i = 0; i < n; i++) {
		string temp;
		cin >> temp;
		list<char> res;
		auto t = res.begin();
		for (auto a : temp) {

			if (a == '<') {
				if (t != res.begin()) {
					t--;
				}
			}
			else if (a == '>') {
				if (t != res.end()) {
					t++;
				}
			}
			else if (a == '-') {
				if (t != res.begin()) {
					t--;
					t = res.erase(t);
				}
			}
			else {
				res.insert(t, a);
			}
		}
		for (auto a : res) {
			cout << a;
		}
		cout << "\n";

	}


	return 0;
}
#endif
//1158
#if 0
#include <stdc++.h>
using namespace std;
int main() {

	ios::sync_with_stdio(0);
	cin.tie(0);

	int n, k;
	cin >> n >> k;
	list<int> res;
	cout << "<";

	for (int i = 1; i <= n; i++) {
		res.push_back(i);
	}
	auto t = res.begin();
	while (!res.empty()) {

		for (int j = 0; j < k - 1; j++) {
			t++;
			if (t == res.end()) {
				t = res.begin();
			}
		}

		if (res.size() == 1) {
			cout << *t;
		}
		else {
			cout << *t << ", ";
		}
		t = res.erase(t);
		if (t == res.end() && !res.empty()) {
			t = res.begin();
		}
	}
	cout << ">";

	return 0;
}
#endif
//10828
#if 0
#include <stdc++.h>
using namespace std;
int main() {

	ios::sync_with_stdio(0);
	cin.tie(0);
	stack<int> a;
	int n;
	cin >> n;

	for (int i = 0; i < n; i++) {
		string s;
		cin >> s;
		if (s == "push") {
			int temp;
			cin >> temp;
			a.push(temp);
		}
		else if (s == "pop") {
			if (a.empty()) {
				cout << -1 << "\n";
			}
			else {
				cout << a.top() << "\n";
				a.pop();
			}
		}
		else if (s == "size") {
			cout << a.size() << "\n";

		}
		else if (s == "empty") {
			cout << a.empty() << "\n";
		}
		else {
			if (a.empty()) {
				cout << -1 << "\n";
			}
			else {
				cout << a.top() << "\n";
			}
		}
	}



	return 0;
}
#endif
//10773
#if 0
#include <stdc++.h>
using namespace std;
int main() {

	ios::sync_with_stdio(0);
	cin.tie(0);

	stack<int>a;
	int n;
	cin >> n;
	int res = 0;
	for (int i = 0; i < n; i++) {
		int temp;
		cin >> temp;
		if (temp) {
			a.push(temp);
			res += temp;
		}
		else {
			res -= a.top();
			a.pop();
		}
	}
	cout << res;

	return 0;
}
#endif
//1874
#if 0
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
#endif
//2493
#if 0
#include <stdc++.h>
using namespace std;
int main() {

	ios::sync_with_stdio(0);
	cin.tie(0);

	stack<int> a;
	stack<int> a1;

	int n;
	cin >> n;
	int max = 0;
	for (int i = 1; i <= n; i++) {
		int temp;
		cin >> temp;
		if (i == 1) {
			cout << "0 ";
			max = temp;

		}
		else {
			if (max > temp) {
				if (a.top() > temp) {
					cout << a1.top() << " ";
				}
				else {
					while (a.top() < temp) {
						a.pop();
						a1.pop();
					}
					cout << a1.top() << " ";
				}


			}
			else {
				cout << "0 ";
				max = temp;
			}
		}
		a.push(temp);
		a1.push(i);
	}




	return 0;
}
#endif
//6198
#if 0
#include <stdc++.h>
using namespace std;
int main() {

	ios::sync_with_stdio(0);
	cin.tie(0);

	stack<long long> a;
	stack<long long> a1;
	stack<long long> a2;


	int n;
	cin >> n;
	long long max = 0;
	for (int i = 0; i < n; i++) {
		long long temp;
		cin >> temp;
		a2.push(temp);
	}
	long long res = 0;
	for (int i = 1; i <= n; i++) {
		long long temp = a2.top();
		a2.pop();
		if (i == 1) { // 초기값 설정, 맨 앞 건물은 아무것도 봇봄
			max = temp;

		}
		else {
			if (max >= temp) {
				if (a.top() >= temp) { // 바로 앞에 있는게 클때는 아무것도 볼 수  없음

				}
				else {
					while (a.top() < temp) {
						a.pop();
						a1.pop();
					}
					res += (i - a1.top() - 1); //현재 건물과 현재건물보다 큰 건물 사이에 몇개가 있는지
				}


			}
			else { // 현재 수가 최댓값이면 앞에 있는 모든 건물을 볼 수 있음
				res += (i - 1);
				max = temp;
			}
		}
		a.push(temp);
		a1.push(i);
	}


	cout << res;

	return 0;
}
#endif
//17298
#if 0
#include <stdc++.h>
using namespace std;
int main() {

	ios::sync_with_stdio(0);
	cin.tie(0);

	stack<long long> a;
	list<long long> a1;
	stack<long long> a2;


	int n;
	cin >> n;
	long long max = 0;
	for (int i = 0; i < n; i++) {
		long long temp;
		cin >> temp;
		a2.push(temp);
	}
	for (int i = 1; i <= n; i++) {
		long long temp = a2.top();
		a2.pop();
		if (i == 1) {
			max = temp;
			a1.push_front(-1);
		}
		else {
			if (max > temp) {
				if (a.top() > temp) {
					a1.push_front(a.top());
				}
				else {
					while (a.top() <= temp) {
						a.pop();
					}
					a1.push_front(a.top());
				}


			}
			else {
				a1.push_front(-1);
				max = temp;
			}
		}
		a.push(temp);
	}
	for (auto i : a1) {
		cout << i << " ";
	}

	return 0;
}
#endif
//3015
#if 0
#include <stdc++.h>
using namespace std;
int main() {

	ios::sync_with_stdio(0);
	cin.tie(0);
	int n;
	cin >> n;
	int res = n - 1;
	stack<int> a;
	stack<int> cnt;
	stack<int> idx;
	for (int i = 1; i <= n; i++) {
		int temp;
		cin >> temp;
		if (i != 1) {
			if (
		}
		a.push(temp);
			idx.push(i);
	}


	return 0;
}
#endif
//3986
#if 0
#include <stdc++.h>
using namespace std;
int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);
	int n;
	cin >> n;
	int res = 0;
	for (int i = 0; i < n; i++) {
		stack<char> a;
		string temp;
		cin >> temp;
		for (int j = 0; j < temp.length(); j++) {
			if (a.empty()) {
				a.push(temp[j]);
				continue;
			}
			if (a.top() == temp[j]) {
				a.pop();
			}
			else {
				a.push(temp[j]);
			}
		}
		if (a.empty()) {
			res++;
		}

	}
	cout << res;

	return 0;
}
#endif
//2504
#if 0
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
#endif
//1926
#if 0
#include <stdc++.h>
using namespace std;
#define X first
#define Y second // pair에서 first, second를 줄여서 쓰기 위해서 사용
int board[502][502];
bool vis[502][502]; // 해당 칸을 방문했는지 여부를 저장
int dx[4] = { 1,0,-1,0 };
int dy[4] = { 0,1,0,-1 }; // 상하좌우 네 방향을 의미
int main(void) {
	ios::sync_with_stdio(0);
	cin.tie(0);
	queue<pair<int, int> > Q;
	int n, m;
	cin >> n >> m;
	int cnt = 0;
	int temp = 0;
	int max = 0;
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < m; j++) {
			cin >> board[i][j];
		}
	}
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < m; j++) {
			if (vis[i][j]) continue;
			if (vis[i][j] == 0 && board[i][j]) {
				vis[i][j] = 1;
				cnt++;
				Q.push({ i,j }); // 큐에 시작점인 (0, 0)을 삽입.
				temp++;
			}
			while (!Q.empty()) {
				pair<int, int> cur = Q.front(); Q.pop();
				for (int dir = 0; dir < 4; dir++) { // 상하좌우 칸을 살펴볼 것이다.
					int nx = cur.X + dx[dir];
					int ny = cur.Y + dy[dir]; // nx, ny에 dir에서 정한 방향의 인접한 칸의 좌표가 들어감
					if (nx < 0 || nx >= n || ny < 0 || ny >= m) continue; // 범위 밖일 경우 넘어감
					if (vis[nx][ny] || board[nx][ny] != 1) continue; // 이미 방문한 칸이거나 파란 칸이 아닐 경우
					vis[nx][ny] = 1; // (nx, ny)를 방문했다고 명시
					temp++;
					Q.push({ nx,ny });
				}
			}
			if (max < temp) {
				max = temp;
			}
			temp = 0;
		}
	}
	cout << cnt << "\n" << max;
}
#endif
//2178
#if 0
#include <stdc++.h>
using namespace std;
#define X first
#define Y second // pair에서 first, second를 줄여서 쓰기 위해서 사용
string board[102];
int vis[102][102]; // 해당 칸을 방문했는지 여부를 저장
int dx[4] = { 1,0,-1,0 };
int dy[4] = { 0,1,0,-1 }; // 상하좌우 네 방향을 의미
int main(void) {
	ios::sync_with_stdio(0);
	cin.tie(0);
	queue<pair<int, int> > Q;
	int n, m;
	cin >> n >> m;
	for (int i = 0; i < n; i++) {
		cin >> board[i];
	}
	vis[0][0] = 1; // (0, 0)을 방문했다고 명시
	Q.push({ 0,0 }); // 큐에 시작점인 (0, 0)을 삽입.
	while (!Q.empty()) {
		pair<int, int> cur = Q.front(); Q.pop();
		int dis = vis[cur.X][cur.Y];
		for (int dir = 0; dir < 4; dir++) { // 상하좌우 칸을 살펴볼 것이다.
			int nx = cur.X + dx[dir];
			int ny = cur.Y + dy[dir]; // nx, ny에 dir에서 정한 방향의 인접한 칸의 좌표가 들어감
			if (nx < 0 || nx >= n || ny < 0 || ny >= m) continue; // 범위 밖일 경우 넘어감
			if (vis[nx][ny] || board[nx][ny] != '1') continue; // 이미 방문한 칸이거나 파란 칸이 아닐 경우
			vis[nx][ny] = dis + 1; // (nx, ny)를 방문했다고 명시
			Q.push({ nx,ny });
		}
	}
	cout << vis[n - 1][m - 1];
}
#endif
//7576
#if 0
#include <stdc++.h>
using namespace std;
#define X first
#define Y second // pair에서 first, second를 줄여서 쓰기 위해서 사용
int board[1002][1002];
int dx[4] = { 1,0,-1,0 };
int dy[4] = { 0,1,0,-1 }; // 상하좌우 네 방향을 의미
int main(void) {
	ios::sync_with_stdio(0);
	cin.tie(0);
	queue<pair<int, int> > Q;
	int n, m;
	cin >> m >> n;
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < m; j++) {
			cin >> board[i][j];
			if (board[i][j] == 1) {
				Q.push({ i,j });
			}
		}
	}
	int max = 0;
	while (!Q.empty()) {
		pair<int, int> cur = Q.front(); Q.pop();
		int dis = board[cur.X][cur.Y];
		for (int dir = 0; dir < 4; dir++) { // 상하좌우 칸을 살펴볼 것이다.
			int nx = cur.X + dx[dir];
			int ny = cur.Y + dy[dir]; // nx, ny에 dir에서 정한 방향의 인접한 칸의 좌표가 들어감
			if (nx < 0 || nx >= n || ny < 0 || ny >= m) continue; // 범위 밖일 경우 넘어감
			if (board[nx][ny] == 0) {
				board[nx][ny] = dis + 1;
				Q.push({ nx,ny });

			}
		}
	}
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < m; j++) {
			if (board[i][j] == 0) {
				cout << -1;
				return 0;
			}
			else if (max < board[i][j]) {
				max = board[i][j];
			}
		}
	}
	cout << max - 1;
}
#endif
//4179
#if 0
#include <stdc++.h>
using namespace std;
#define X first
#define Y second // pair에서 first, second를 줄여서 쓰기 위해서 사용
string board[1002];
int fire[1002][1002];
int jihun[1002][1002];
int dx[4] = { 1,0,-1,0 };
int dy[4] = { 0,1,0,-1 }; // 상하좌우 네 방향을 의미
int main(void) {
	ios::sync_with_stdio(0);
	cin.tie(0);
	queue<pair<int, int> > Q;
	int n, m;
	cin >> n >> m;
	for (int i = 0; i < n; i++) {
		cin >> board[i];
	}
	int flag = 0;
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < m; j++) {
			if (board[i][j] == 'F') {
				flag = 1;
				Q.push({ i,j });
			}
		}
	}
	if (flag) {
		while (!Q.empty()) {
			pair<int, int> cur = Q.front(); Q.pop();
			int t = fire[cur.X][cur.Y];
			for (int dir = 0; dir < 4; dir++) { // 상하좌우 칸을 살펴볼 것이다.
				int nx = cur.X + dx[dir];
				int ny = cur.Y + dy[dir]; // nx, ny에 dir에서 정한 방향의 인접한 칸의 좌표가 들어감
				if (nx < 0 || nx >= n || ny < 0 || ny >= m) continue; // 범위 밖일 경우 넘어감
				if (fire[nx][ny] || board[nx][ny] == '#') continue; // 이미 방문한 칸이거나 파란 칸이 아닐 경우
				fire[nx][ny] = t + 1; // (nx, ny)를 방문했다고 명시
				Q.push({ nx,ny });
			}
		}
	}
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < m; j++) {
			if (board[i][j] == 'J') {
				if (i == 0 || i == n - 1 || j == 0 || j == m - 1) {
					cout << 1;
					return 0;
				}
				Q.push({ i,j });
				break;
			}
		}
	}
	while (!Q.empty()) {
		pair<int, int> cur = Q.front(); Q.pop();
		int t = jihun[cur.X][cur.Y];
		for (int dir = 0; dir < 4; dir++) { // 상하좌우 칸을 살펴볼 것이다.
			int nx = cur.X + dx[dir];
			int ny = cur.Y + dy[dir]; // nx, ny에 dir에서 정한 방향의 인접한 칸의 좌표가 들어감
			if (nx < 0 || nx >= n || ny < 0 || ny >= m) continue; // 범위 밖일 경우 넘어감
			if (jihun[nx][ny] || board[nx][ny] == '#' || board[nx][ny] == 'F') continue; // 이미 방문한 칸이거나 파란 칸이 아닐 경우
			jihun[nx][ny] = t + 1; // (nx, ny)를 방문했다고 명시
			Q.push({ nx,ny });
		}
	}
	int res = n * m;
	if (flag) {
		for (int i = 0; i < n; i++) {
			for (int j = 0; j < m; j++) {
				if (board[i][j] == '#') continue;
				if (fire[i][j] && fire[i][j] <= jihun[i][j]) {
					jihun[i][j] = 0;
				}
			}
		}
	}

	for (int i = 0; i < n; i++) {
		for (int j = 0; j < m; j++) {
			if (jihun[i][j] == 0) continue;
			if (i == 0 || i == n - 1 || j == 0 || j == m - 1) {
				res = min(res, jihun[i][j]);
			}

		}
	}
	if (res != m * n)cout << res + 1;
	else cout << "IMPOSSIBLE";
}
#endif
//1697
#if 0
#include <stdc++.h> 
using namespace std;
int dist[100002];
int main() {

	ios::sync_with_stdio(0);
	cin.tie(0);
	int n, m;
	cin >> n >> m;
	fill(dist, dist + 100001, -1);
	dist[n] = 0;
	queue<int> Q;
	Q.push(n);

	while (dist[m] == -1) {
		int cur = Q.front(); Q.pop();
		for (int i : {cur - 1, cur + 1, cur * 2}) {
			if (i < 0 || i > 100000)continue;
			if (dist[i] != -1) continue;
			dist[i] = dist[cur] + 1;
			Q.push(i);
		}
	}
	cout << dist[m];


	return 0;
}
#endif
//1012
#if 0
#include <stdc++.h>
using namespace std;
#define X first
#define Y second // pair에서 first, second를 줄여서 쓰기 위해서 사용
int dx[4] = { 1,0,-1,0 };
int dy[4] = { 0,1,0,-1 }; // 상하좌우 네 방향을 의미
int main(void) {
	ios::sync_with_stdio(0);
	cin.tie(0);
	queue<pair<int, int> > Q;
	int t;
	cin >> t;

	for (int i = 0; i < t; i++) {
		int n, m, k;
		int board[52][52]; // 1이 파란 칸, 0이 빨간 칸에 대응
		int vis[52][52]; // 해당 칸을 방문했는지 여부를 저장
		int cnt = 0;
		cin >> m >> n >> k;
		fill(&board[0][0], &board[0][0] + 52 * 52, 0);
		fill(&vis[0][0], &vis[0][0] + 52 * 52, 0);
		for (int j = 0; j < k; j++) {
			int x, y;
			cin >> x >> y;
			board[y][x] = 1;
		}
		for (int j = 0; j < n; j++) {
			for (int l = 0; l < m; l++) {
				if (vis[j][l] || board[j][l] != 1) continue;
				vis[j][l] = 1;
				cnt++;
				Q.push({ j,l });

				while (!Q.empty()) {
					pair<int, int> cur = Q.front(); Q.pop();

					for (int dir = 0; dir < 4; dir++) { // 상하좌우 칸을 살펴볼 것이다.
						int nx = cur.X + dx[dir];
						int ny = cur.Y + dy[dir]; // nx, ny에 dir에서 정한 방향의 인접한 칸의 좌표가 들어감
						if (nx < 0 || nx >= n || ny < 0 || ny >= m) continue; // 범위 밖일 경우 넘어감
						if (vis[nx][ny] || board[nx][ny] != 1) continue; // 이미 방문한 칸이거나 파란 칸이 아닐 경우
						vis[nx][ny] = 1; // (nx, ny)를 방문했다고 명시
						Q.push({ nx,ny });
					}
				}
			}

		}

		cout << cnt << "\n";
	}
}
#endif
//10026
#if 0
#include <stdc++.h>
using namespace std;
#define X first
#define Y second // pair에서 first, second를 줄여서 쓰기 위해서 사용
string board[102]; // 1이 파란 칸, 0이 빨간 칸에 대응
int vis[102][102]; // 해당 칸을 방문했는지 여부를 저장
int dx[4] = { 1,0,-1,0 };
int dy[4] = { 0,1,0,-1 }; // 상하좌우 네 방향을 의미
int main(void) {
	ios::sync_with_stdio(0);
	cin.tie(0);
	queue<pair<int, int> > Q;
	int n;
	cin >> n;
	for (int i = 0; i < n; i++) {
		cin >> board[i];
	}
	int cnt = 0;
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n; j++) {
			if (vis[i][j] == 0 && board[i][j] == 'R') {
				vis[i][j] = 1;
				cnt++;
				Q.push({ i,j });
			}
			while (!Q.empty()) {
				pair<int, int> cur = Q.front(); Q.pop();
				for (int dir = 0; dir < 4; dir++) { // 상하좌우 칸을 살펴볼 것이다.
					int nx = cur.X + dx[dir];
					int ny = cur.Y + dy[dir]; // nx, ny에 dir에서 정한 방향의 인접한 칸의 좌표가 들어감
					if (nx < 0 || nx >= n || ny < 0 || ny >= n) continue; // 범위 밖일 경우 넘어감
					if (vis[nx][ny] || board[nx][ny] != 'R') continue; // 이미 방문한 칸이거나 파란 칸이 아닐 경우
					vis[nx][ny] = 1; // (nx, ny)를 방문했다고 명시
					Q.push({ nx,ny });
				}
			}
		}

	}
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n; j++) {
			if (vis[i][j] == 0 && board[i][j] == 'G') {
				vis[i][j] = 1;
				cnt++;
				Q.push({ i,j });

			}
			while (!Q.empty()) {
				pair<int, int> cur = Q.front(); Q.pop();
				for (int dir = 0; dir < 4; dir++) { // 상하좌우 칸을 살펴볼 것이다.
					int nx = cur.X + dx[dir];
					int ny = cur.Y + dy[dir]; // nx, ny에 dir에서 정한 방향의 인접한 칸의 좌표가 들어감
					if (nx < 0 || nx >= n || ny < 0 || ny >= n) continue; // 범위 밖일 경우 넘어감
					if (vis[nx][ny] || board[nx][ny] != 'G') continue; // 이미 방문한 칸이거나 파란 칸이 아닐 경우
					vis[nx][ny] = 1; // (nx, ny)를 방문했다고 명시
					Q.push({ nx,ny });
				}
			}

		}

	}
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n; j++) {
			if (vis[i][j] == 0 && board[i][j] == 'B') {
				vis[i][j] = 1;
				cnt++;
				Q.push({ i,j });
			}
			while (!Q.empty()) {
				pair<int, int> cur = Q.front(); Q.pop();
				for (int dir = 0; dir < 4; dir++) { // 상하좌우 칸을 살펴볼 것이다.
					int nx = cur.X + dx[dir];
					int ny = cur.Y + dy[dir]; // nx, ny에 dir에서 정한 방향의 인접한 칸의 좌표가 들어감
					if (nx < 0 || nx >= n || ny < 0 || ny >= n) continue; // 범위 밖일 경우 넘어감
					if (vis[nx][ny] || board[nx][ny] != 'B') continue; // 이미 방문한 칸이거나 파란 칸이 아닐 경우
					vis[nx][ny] = 1; // (nx, ny)를 방문했다고 명시
					Q.push({ nx,ny });
				}
			}
		}

	}
	fill(&vis[0][0], &vis[0][0] + 102 * 102, 0);
	int cnt1 = 0;
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n; j++) {
			if (board[i][j] == 'G') {
				board[i][j] = 'R'; // G를 R로 통합
			}
		}
	}
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n; j++) {
			if (vis[i][j] == 0 && board[i][j] == 'R') {
				vis[i][j] = 1;
				cnt1++;
				Q.push({ i,j });
			}
			while (!Q.empty()) {
				pair<int, int> cur = Q.front(); Q.pop();
				for (int dir = 0; dir < 4; dir++) { // 상하좌우 칸을 살펴볼 것이다.
					int nx = cur.X + dx[dir];
					int ny = cur.Y + dy[dir]; // nx, ny에 dir에서 정한 방향의 인접한 칸의 좌표가 들어감
					if (nx < 0 || nx >= n || ny < 0 || ny >= n) continue; // 범위 밖일 경우 넘어감
					if (vis[nx][ny] || board[nx][ny] != 'R') continue; // 이미 방문한 칸이거나 파란 칸이 아닐 경우
					vis[nx][ny] = 1; // (nx, ny)를 방문했다고 명시
					Q.push({ nx,ny });
				}
			}
		}

	}
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n; j++) {
			if (vis[i][j] == 0 && board[i][j] == 'B') {
				vis[i][j] = 1;
				cnt1++;
				Q.push({ i,j });
			}
			while (!Q.empty()) {
				pair<int, int> cur = Q.front(); Q.pop();
				for (int dir = 0; dir < 4; dir++) { // 상하좌우 칸을 살펴볼 것이다.
					int nx = cur.X + dx[dir];
					int ny = cur.Y + dy[dir]; // nx, ny에 dir에서 정한 방향의 인접한 칸의 좌표가 들어감
					if (nx < 0 || nx >= n || ny < 0 || ny >= n) continue; // 범위 밖일 경우 넘어감
					if (vis[nx][ny] || board[nx][ny] != 'B') continue; // 이미 방문한 칸이거나 파란 칸이 아닐 경우
					vis[nx][ny] = 1; // (nx, ny)를 방문했다고 명시
					Q.push({ nx,ny });
				}
			}
		}

	}
	cout << cnt << " " << cnt1;

}
#endif
//7569
#if 0
#include <stdc++.h>

using namespace std;

int dh[6] = { 0, 0, 0, 0, 1, -1 };
int dn[6] = { 1, 0, -1, 0, 0, 0 }; 
int dm[6] = { 0, 1, 0, -1, 0, 0 };

int board[102][102][102];

int main(void) {
	ios::sync_with_stdio(0);
	cin.tie(0);


	queue<tuple<int, int, int> > Q;

	int m, n, h; 
	cin >> m >> n >> h;


	for (int i = 0; i < h; i++) {
		for (int j = 0; j < n; j++) {
			for (int k = 0; k < m; k++) { 
				cin >> board[i][j][k];
				if (board[i][j][k] == 1) {
					Q.push({ i, j, k });
				}
			}
		}
	}


	while (!Q.empty()) {
		tuple<int, int, int> cur = Q.front(); Q.pop();

		int cur_h = get<0>(cur);
		int cur_n = get<1>(cur);
		int cur_m = get<2>(cur);


		int day = board[cur_h][cur_n][cur_m];

		for (int dir = 0; dir < 6; dir++) {  
			int nh = cur_h + dh[dir];
			int nn = cur_n + dn[dir]; 
			int nm = cur_m + dm[dir];
			if (nh < 0 || nh >= h || nn < 0 || nn >= n || nm < 0 || nm >= m) {
				continue; 
			}


			if (board[nh][nn][nm] == 0) {
				board[nh][nn][nm] = day + 1; // 익는 데 걸린 시간 기록
				Q.push({ nh, nn, nm });
			}
		}
	}


	int max_day = 0;

	for (int i = 0; i < h; i++) { 
		for (int j = 0; j < n; j++) { 
			for (int k = 0; k < m; k++) { 
				if (board[i][j][k] == 0) {
					cout << -1 << "\n";
					return 0;
				}

				if (board[i][j][k] > max_day) {
					max_day = board[i][j][k];
				}
			}
		}
	}

	cout << max_day - 1 << "\n";

	return 0;
}
#endif
//7562
#if 0
#include <stdc++.h>
using namespace std;
#define X first
#define Y second // pair에서 first, second를 줄여서 쓰기 위해서 사용
int board[302][302]; // 1이 파란 칸, 0이 빨간 칸에 대응
int dx[8] = { 1,1,2,2,-1,-1,-2,-2 };
int dy[8] = { 2,-2,1,-1,2,-2,1,-1 }; // 상하좌우 네 방향을 의미
int main(void) {
	ios::sync_with_stdio(0);
	cin.tie(0);
	int n;
	cin >> n;
	for (int i = 0; i < n; i++) {
		queue<pair<int, int> > Q;

		fill(&board[0][0], &board[0][0] + 302 * 302, -1);
		int a;
		cin >> a;
		int v1, v2;
		cin >> v1 >> v2;
		Q.push({ v1,v2 });
		board[v1][v2] = 0;
		int x, y;
		cin >> x >> y;
		while (board[x][y] == -1) {
			pair<int, int> cur = Q.front(); Q.pop();
			int dis = board[cur.X][cur.Y];
			for (int dir = 0; dir < 8; dir++) { // 상하좌우 칸을 살펴볼 것이다.
				int nx = cur.X + dx[dir];
				int ny = cur.Y + dy[dir]; // nx, ny에 dir에서 정한 방향의 인접한 칸의 좌표가 들어감
				if (nx < 0 || nx >= a || ny < 0 || ny >= a) continue; // 범위 밖일 경우 넘어감
				if (board[nx][ny] != -1) continue; // 이미 방문한 칸이거나 파란 칸이 아닐 경우
				board[nx][ny] = dis + 1; // (nx, ny)를 방문했다고 명시
				Q.push({ nx,ny });
			}
		}
		cout << board[x][y] << "\n";
	}
}
#endif
//5427
#if 0
#include <stdc++.h>
using namespace std;
#define X first
#define Y second // pair에서 first, second를 줄여서 쓰기 위해서 사용
string board[1002];
int fire[1002][1002];
int jihun[1002][1002];
int dx[4] = { 1,0,-1,0 };
int dy[4] = { 0,1,0,-1 }; // 상하좌우 네 방향을 의미
int main(void) {
	ios::sync_with_stdio(0);
	cin.tie(0);
	int a;
	cin >> a;
	for (int k = 0; k < a; k++) {
		queue<pair<int, int> > Q1;
		queue<pair<int, int> > Q2;
		fill(&board[0], &board[0] + 1002, "default");
		fill(&fire[0][0], &fire[0][0] + 1002 * 1002, 0);
		fill(&jihun[0][0], &jihun[0][0] + 1002 * 1002, 0);
		int n, m;
		cin >> n >> m;
		for (int i = 0; i < m; i++) {
			cin >> board[i];
		}
		int flag = 0;
		int res = n * m;
		for (int i = 0; i < m; i++) {
			for (int j = 0; j < n; j++) {
				if (board[i][j] == '*') {
					flag = 1;
					Q1.push({ i,j });
				}
			}
		}
		if (flag) {
			while (!Q1.empty()) {
				pair<int, int> cur = Q1.front(); Q1.pop();
				int t = fire[cur.X][cur.Y];
				for (int dir = 0; dir < 4; dir++) { // 상하좌우 칸을 살펴볼 것이다.
					int nx = cur.X + dx[dir];
					int ny = cur.Y + dy[dir]; // nx, ny에 dir에서 정한 방향의 인접한 칸의 좌표가 들어감
					if (nx < 0 || nx >= m || ny < 0 || ny >= n) continue; // 범위 밖일 경우 넘어감
					if (fire[nx][ny] || board[nx][ny] == '#') continue; // 이미 방문한 칸이거나 파란 칸이 아닐 경우
					fire[nx][ny] = t + 1; // (nx, ny)를 방문했다고 명시
					Q1.push({ nx,ny });
				}
			}
		}
		for (int i = 0; i < m; i++) {
			for (int j = 0; j < n; j++) {
				if (board[i][j] == '@') {
					if (i == 0 || i == m - 1 || j == 0 || j == n - 1) {
						res = 0;
					}
					Q2.push({ i,j });
				}
			}
		}
		while (!Q2.empty()) {
			pair<int, int> cur = Q2.front(); Q2.pop();
			int t = jihun[cur.X][cur.Y];
			for (int dir = 0; dir < 4; dir++) { // 상하좌우 칸을 살펴볼 것이다.
				int nx = cur.X + dx[dir];
				int ny = cur.Y + dy[dir]; // nx, ny에 dir에서 정한 방향의 인접한 칸의 좌표가 들어감
				if (nx < 0 || nx >= m || ny < 0 || ny >= n) continue; // 범위 밖일 경우 넘어감
				if (jihun[nx][ny] || board[nx][ny] == '#' || board[nx][ny] == '*') continue; // 이미 방문한 칸이거나 파란 칸이 아닐 경우
				jihun[nx][ny] = t + 1; // (nx, ny)를 방문했다고 명시
				Q2.push({ nx,ny });
			}
		}

		if (flag) {
			for (int i = 0; i < m; i++) {
				for (int j = 0; j < n; j++) {
					if (board[i][j] == '#') continue;
					if (fire[i][j] && fire[i][j] <= jihun[i][j]) {
						jihun[i][j] = 0;
					}
				}
			}
		}

		for (int i = 0; i < m; i++) {
			for (int j = 0; j < n; j++) {
				if (jihun[i][j] == 0) continue;
				if (i == 0 || i == m - 1 || j == 0 || j == n - 1) {
					res = min(res, jihun[i][j]);
				}

			}
		}
		if (res != m * n)cout << res + 1;
		else cout << "IMPOSSIBLE";
		cout << "\n";
	}
}
#endif
//2583
#if 0
#include <stdc++.h>
using namespace std;
#define X first
#define Y second // pair에서 first, second를 줄여서 쓰기 위해서 사용
int board[102][102]; // 1이 파란 칸, 0이 빨간 칸에 대응
int vis[102][102]; // 해당 칸을 방문했는지 여부를 저장

int dx[4] = { 1,0,-1,0 };
int dy[4] = { 0,1,0,-1 }; // 상하좌우 네 방향을 의미
int main(void) {
	ios::sync_with_stdio(0);
	cin.tie(0);
	queue<pair<int, int> > Q;
	int n, m, k;
	cin >> n >> m >> k;
	fill(&board[0][0], &board[0][0] + 102 * 102, 1);
	for (int i = 0; i < k; i++) {
		int x, y, x1, y1;
		cin >> x >> y >> x1 >> y1;
		for (int j = y; j < y1; j++) {
			for (int l = x; l < x1; l++) {
				board[j][l] = 0;
			}
		}

	}
	int cnt = 0;
	list<int> area;
	int temp = 0;
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < m; j++) {
			if (board[i][j] == 1 && vis[i][j] == 0) {
				cnt++;
				vis[i][j] = 1;
				Q.push({ i,j });
				temp++;
				while (!Q.empty()) {
					pair<int, int> cur = Q.front(); Q.pop();
					for (int dir = 0; dir < 4; dir++) { // 상하좌우 칸을 살펴볼 것이다.
						int nx = cur.X + dx[dir];
						int ny = cur.Y + dy[dir]; // nx, ny에 dir에서 정한 방향의 인접한 칸의 좌표가 들어감
						if (nx < 0 || nx >= n || ny < 0 || ny >= m) continue; // 범위 밖일 경우 넘어감
						if (vis[nx][ny] || board[nx][ny] != 1) continue; // 이미 방문한 칸이거나 파란 칸이 아닐 경우
						vis[nx][ny] = 1; // (nx, ny)를 방문했다고 명시
						Q.push({ nx,ny });
						temp++;
					}
				}
				area.push_front(temp);

			}
			temp = 0;
		}
	}
	area.sort();
	cout << cnt << "\n";
	for (auto a : area) {
		cout << a << " ";
	}
}
#endif
//5014
#if 0
#include <stdc++.h>
using namespace std;
int dis[1000002];
int main() {

	ios::sync_with_stdio(0);
	cin.tie(0);
	fill(&dis[0], &dis[0] + 1000002, -1);
	int f, s, g, u, d;
	cin >> f >> s >> g >> u >> d;
	dis[s] = 0;
	int dx[2] = { u,-d };
	queue<int> Q;
	Q.push(s);
	while (!Q.empty()) {
		int cur = Q.front(); Q.pop();
		for (int i = 0; i < 2; i++) {
			int temp = cur + dx[i];
			if (temp<1 || temp>f) continue;
			if (dis[temp] != -1)continue;
			dis[temp] = dis[cur] + 1;
			Q.push(temp);
		}

	}



	if (dis[g] == -1) cout << "use the stairs";
	else cout << dis[g];

	return 0;
}
#endif
//2468
#if 0
#include <stdc++.h>
using namespace std;
int board[102][102];
int vis[102][102];
int dx[4] = { 1,0,-1,0 };
int dy[4] = { 0,1,0,-1 };
int main() {

	ios::sync_with_stdio(0);
	cin.tie(0);
	int n;
	cin >> n;
	int a = 0;
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n; j++) {
			cin >> board[i][j];
			a = max(a, board[i][j]);
		}
	}
	int cnt = 0;
	queue<pair<int, int>> Q;
	int res = 0;
	for (int l = 1; l <= a; l++) {
		fill(&vis[0][0], &vis[0][0] + 102 * 102, 0);

		for (int i = 0; i < n; i++) {
			for (int j = 0; j < n; j++) {

				if (vis[i][j] == 0 && board[i][j] > l) {
					cnt++;
					vis[i][j] = 1;
					Q.push({ i,j });
					while (!Q.empty()) {
						pair<int, int> cur = Q.front(); Q.pop();
						for (int i = 0; i < 4; i++) {
							int nx = cur.first + dx[i];
							int ny = cur.second + dy[i];
							if (nx < 0 || nx >= n || ny < 0 || ny >= n)continue;
							if (vis[nx][ny] || board[nx][ny] <= l)continue;
							vis[nx][ny] = 1;
							Q.push({ nx,ny });
						}
					}
				}


			}
		}
		res = max(res, cnt);
		cnt = 0;
	}
	if (res == 0)cout << res + 1;
	else cout << res;
	return 0;
}
#endif
//6593
#if 0
#include <bits/stdc++.h>
using namespace std;

string board[31][31];
int dis[31][31][31];
int dx[6] = { 1,0,0,-1,0,0 };
int dy[6] = { 0,1,0,0,-1,0 };
int dz[6] = { 0,0,1,0,0,-1 };

int main() {

	ios::sync_with_stdio(0);
	cin.tie(0);
	while (1) {
		int a, b, c;
		cin >> a >> b >> c;
		if (a == 0 && b == 0 && c == 0) {
			break;
		}
		fill(&dis[0][0][0], &dis[0][0][0] + 31 * 31 * 31, -1);
		queue<tuple<int, int, int>>Q;
		int flag = 0;
		for (int i = 0; i < a; i++) {
			for (int j = 0; j < b; j++) {
				cin >> board[i][j];
				if (flag == 0) {
					for (int k = 0; k < c; k++) {
						if (board[i][j][k] == 'S') {
							Q.push({ i,j,k });
							dis[i][j][k] = 0;
							flag = 1;
						}
					}
				}
			}
		}
		int t = 0;
		while (!Q.empty()) {
			tuple<int, int, int> cur = Q.front(); Q.pop();
			int cur_x = get<0>(cur);
			int cur_y = get<1>(cur);
			int cur_z = get<2>(cur);
			for (int i = 0; i < 6; i++) {
				int nx = cur_x + dx[i];
				int ny = cur_y + dy[i];
				int nz = cur_z + dz[i];
				if (nx < 0 || nx >= a || ny < 0 || ny >= b || nz < 0 || nz >= c) {
					continue;
				}
				if (dis[nx][ny][nz] != -1 || board[nx][ny][nz] == '#')continue;
				dis[nx][ny][nz] = dis[cur_x][cur_y][cur_z] + 1;
				if (board[nx][ny][nz] == 'E') {
					cout << "Escaped in " << dis[nx][ny][nz] << " minute(s).\n";
					t = 1;
					while (!Q.empty()) Q.pop();
					goto end_loop; // 이중 루프 탈출을 위해 goto 사용 또는 플래그/함수 사용
				}
				Q.push({ nx,ny,nz });

			}
		}
	end_loop:;
		if (t == 0) {
			cout << "Trapped!\n";
		}

	}


	return 0;
}
#endif
//2206
#if 0
#include <stdc++.h>
using namespace std;
string board[1001];
int dis[1001][1001][2];
int dx[4] = { 1,0,-1,0 };
int dy[4] = { 0,1,0,-1 };
int main() {

	ios::sync_with_stdio(0);
	cin.tie(0);

	int n, m;
	cin >> n >> m;

	for (int i = 0; i < n; i++) {
		cin >> board[i];
	}
	fill(&dis[0][0][0], &dis[0][0][0] + 1001 * 1001 * 2, -1);

	queue<tuple<int, int, int>>Q;

	Q.push({ 0,0,0 });
	dis[0][0][0] = 1;
	int cnt = 0;
	while (!Q.empty()) {
		tuple<int, int, int>cur = Q.front(); Q.pop();
		int cur_x = get<0>(cur);
		int cur_y = get<1>(cur);
		int cur_z = get<2>(cur);
		for (int i = 0; i < 4; i++) {
			int nx = cur_x + dx[i];
			int ny = cur_y + dy[i];
			if (nx < 0 || nx >= n || ny < 0 || ny >= m)continue;
			if (board[nx][ny] == '0') {
				if (dis[nx][ny][cur_z] == -1) {
					dis[nx][ny][cur_z] = dis[cur_x][cur_y][cur_z] + 1;
					Q.push({ nx,ny,cur_z });
				}
			}
			else if (board[nx][ny] == '1') {
				if (cur_z == 0) {
					int next_z = 1;

					dis[nx][ny][next_z] = dis[cur_x][cur_y][cur_z] + 1;
					Q.push({ nx, ny, next_z });

				}

			}

		}
	}

	int result_k = dis[n - 1][m - 1][0];
	int result_k1 = dis[n - 1][m - 1][1];

	int final_result = -1;

	if (result_k != -1 && result_k1 != -1) {
		final_result = min(result_k, result_k1);
	}
	else if (result_k != -1) {
		final_result = result_k;
	}
	else if (result_k1 != -1) {
		final_result = result_k1;
	}


	cout << final_result;
	return 0;
}
#endif
#if 0
#include <stdc++.h>
using namespace std;
int main() {

	ios::sync_with_stdio(0);
	cin.tie(0);



	return 0;
}
#endif
#if 0
#include <stdc++.h>
using namespace std;
int main() {

	ios::sync_with_stdio(0);
	cin.tie(0);



	return 0;
}
#endif
#if 0
#include <stdc++.h>
using namespace std;
int main() {

	ios::sync_with_stdio(0);
	cin.tie(0);



	return 0;
}
#endif
#if 0
#include <stdc++.h>
using namespace std;
int main() {

	ios::sync_with_stdio(0);
	cin.tie(0);



	return 0;
}
#endif
#if 0
#include <stdc++.h>
using namespace std;
int main() {

	ios::sync_with_stdio(0);
	cin.tie(0);



	return 0;
}
#endif
#if 0
#include <stdc++.h>
using namespace std;
int main() {

	ios::sync_with_stdio(0);
	cin.tie(0);



	return 0;
}
#endif
#if 0
#include <stdc++.h>
using namespace std;
int main() {

	ios::sync_with_stdio(0);
	cin.tie(0);



	return 0;
}
#endif
#if 0
#include <stdc++.h>
using namespace std;
int main() {

	ios::sync_with_stdio(0);
	cin.tie(0);



	return 0;
}
#endif






