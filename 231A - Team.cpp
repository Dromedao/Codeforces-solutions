#include <bits/stdc++.h>

using namespace std;

int main(){
	int i = 0, n, x, y, g, f = 0;
	cin >> n;
	while (i < n){
		cin >> x >> y >> g;
		if ((x + y + g) >= 2){
			f++;
		}
		i++;
	}
	cout << f;
}