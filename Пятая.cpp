#include <iostream>
using namespace std;

int main(){
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
int no=0;
float srz=0.0, ma=0.0;

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
for (int i = 0; i < y; i++)
{
    for (int j = 0; j < x; j++)
        cout << m[i][j] << " ";
     cout << endl;
}
cout << endl;

for (int i=0; i<y; i++) { 
	for (int j=0; j<x; j++) { 
			srz+=m[i][j];
			k+=1;
		if (k>y-1) {	
			ma=max(srz/x,ma);
			if (ma<=srz/x) {
				no=i+1;
			}
			k=0;
			srz=0;
		{	
	}
}
}
}

cout << "String: " << no << " Srednee: " << ma;
return 0;
}
