#include<bits/stdc++.h>
using namespace std;
map<int,int> f;
int f91(int n){
	if(f[n]) return f[n];
	else{
	  
	  if(n<=100){
		f[n]=f91(f91(n+11));
		return f[n];
	  }
	  else if(n>=101){
		 f[n]=n-10;
		 return f[n];
	  }
	}
	

}
int main(){
	int n;
	while(cin >> n){
	  if(n==0) break;
	  cout << "f91(" << n <<")" << " = " << f91(n) << '\n';
	}
}
