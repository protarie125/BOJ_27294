#include <iostream>

using namespace std;

int main() {
	ios::sync_with_stdio(false);
	std::cin.tie(nullptr);

	int t, s;
	cin >> t >> s;

	if (12 <= t && t <= 16 && 0 == s) {
		cout << 320;
	}
	else {
		cout << 280;
	}

	return 0;
}