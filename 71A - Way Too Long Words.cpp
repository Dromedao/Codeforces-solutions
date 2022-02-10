#include <bits/stdc++.h>

using namespace std;

int main(){
	int i = 0, n;
	string x;
	cin >> n;
	while (i < n){
		cin >> x;
		if (x.length() > 10){
			cout << x[0] << x.length()-2 << x[x.size()-1] <<"\n";
	 	}
	 	else{
	 		cout << x << "\n";
		}
		i++;
		 
	}
}