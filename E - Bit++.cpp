#include <bits/stdc++.h>

using namespace std;

int main(){
	int y = 0, i = 0, u;
	string x;
	cin >> u;
	
	while(i < u){
		cin >> x;
		if(x[0]== 'X'){
			if(x[1] == '+'){
				y++;
			} else{
				y--;
			}
		} else{
			if(x[0] == '+'){
				y++;
			} else{
				y--;
			}
		}
		i++;
	}
	cout << y;
}