#include<bits/stdc++.h>
using namespace std;
struct reports{
	
	int s;
	int l;
	int r;
};
int main(){
	int s,b;
	while(cin >> s >> b){
		if(s==0 && b==0) break;
		reports rep[100001];
		
		for(int i=1;i<=s;i++){
				rep[i].s=i;
				if(i==1) rep[i].l=0;
				else rep[i].l=i-1;
				if(i==s) rep[i].r=0;
				else rep[i].r=i+1;
		}
		
		while(b--){
			int x,y;cin >> x >> y;
			if(rep[x].l==0) cout << "* ";
			else cout << rep[x].l << " ";
			if(rep[y].r==0) cout << "*\n";
			else cout << rep[y].r << "\n";

			rep[rep[x].l].r=rep[rep[y].r].s;
			rep[rep[y].r].l=rep[rep[x].l].s;
			

			
			
		}
		cout << "-\n";

	}


}


