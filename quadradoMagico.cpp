#include <iostream>
#define MAX 10

using namespace std;

int quadrado[MAX][MAX];
int main(){
	int i, j, n;
  	int s, p;
  	cin >> n;
  for (i = 0; i < n; i++)
    for (j = 0; j < n; j++) 
    	cin >> quadrado[i][j];
     

  	s = 0;
  for (i = 0; i < n; i++)
    s += quadrado[0][i];

  for (i = 1; i < n && s != -1; i++) {
    p = 0;
    for (j = 0; j < n; j++)
      p += quadrado[i][j];
    if (p != s) s = -1;
  }

  for (j = 0; j < n && s != -1; j++) {
    p = 0;
    for (i = 0; i < n; i++)
      p += quadrado[i][j];
    if (p != s) s = -1;
  }

  p = 0;
  for (i = 0; i < n && s != -1; i++)
    p += quadrado[i][i];
  if (p != s) s = -1;

  p = 0;
  for (i = 0; i < n && s != -1; i++)
    p += quadrado[i][n - i - 1];
  if (p != s) s = -1;

  cout << s;

	return 0;
}
