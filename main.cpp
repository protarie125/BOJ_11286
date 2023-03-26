#include <iostream>
#include <queue>
#include <cmath>

using namespace std;

using ll = long long;

class Spr {
public:
	bool operator()(ll a, ll b) {
		const auto& aa = abs(a);
		const auto& ab = abs(b);

		if (aa != ab) {
			return ab < aa;
		}

		return b < a;
	}
};

using pqi = priority_queue<ll, vector<ll>, Spr>;

int main() {
	ios::sync_with_stdio(false);
	std::cin.tie(nullptr);

	int n; cin >> n;
	auto p = pqi{};
	int x;
	while (0 < (n--)) {
		cin >> x;
		if (0 == x) {
			if (p.empty()) {
				cout << 0 << '\n';
			}
			else {
				cout << p.top() << '\n';
				p.pop();
			}
		}
		else {
			p.push(x);
		}
	}

	return 0;
}