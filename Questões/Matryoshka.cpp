#include <bits/stdc++.h>

using namespace std;

const int maxn = 100001;

int v[maxn];
int u[maxn];

int main(){
  int n;
  cin >> n;
  
 	 for (int i = 0; i < n; i++){
	  	cin >> v[i];
  		 u[i] = v[i];
}
  sort(u, u+n);
  
  vector<int> res;
  
  for (int i = 0; i < n; i++) {
  	if (v[i] != u[i]) res.push_back(v[i]);
  }
  
  sort(res.begin(), res.end());
  
  cout << res.size() << "\n";
  for (int i : res){
  	cout << i << " ";
  } 
  cout << "\n";
}
