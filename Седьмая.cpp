#include <iostream>
#include <algorithm>
using namespace std;
int main() {
int x;
int y;
int a;
cout << "Insert Y: ";
cin >> y;
cout << "Insert X: ";
cin >> x;
if (x<=0 or y<=0) {
	cout << "Wrong value!!!!!!!";
	return 0;
}
int m[y][x];
int k=0;
int h=0;
int z[k];


for(int i = 0; i < y; i++){
for(int j = 0; j < x; j++){
	  	cout << i+1 << "." << j+1 <<  ": ";
		scanf("%d", &a);
		m[i][j] = a;
		if (j+1==x){
			cout << endl;
		}	
}
}


for (int i=0; i<y; i++){
	for (int j=0; j<x; j++){
		if ((m[i][j]<0 and m[i][j+1]>0) or (m[i][j]>0 and m[i][j+1]<0)) {
			h+=1;
		}
		if (h==x-1){
			cout <<  i+1 << endl;
		}
		k+=1;
		if (k==x-1){
			h=0;
			k=0;
		}
	}
}
return 0;
}
