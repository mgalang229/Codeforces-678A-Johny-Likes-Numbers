#include <bits/stdc++.h>

using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(0);
	int n, k;
	cin >> n >> k;
	// "n / k" is the original quotient or the factor of 'k' to get 'n' 
	// just add 1 to "n / k" to get the multiple of 'k' such that the multiple
	// is greater than the 'n'
	cout << (n / k + 1) * k << '\n';
	return 0; 
}
