#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int x,n;
	cin >> x >> n;
	x -= n*10;
	if(x <= 0){
	    cout << 0 ;
	}
	else{
	    cout << x/20;
	}

}
