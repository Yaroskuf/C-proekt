#include <iostream>
using namespace std;

int main() {
	
	int y;
	cout << "Enter list lenght: ";
	cin >> y;
	int i, m[y], a, z;
	int k=0;
if (y<0) {
	cout << "Error: list lenght must be > 0";
	return 0;
}
if (y==0) {
	cout << "Error: list lenght must be > 0";
	return 0;
}
	for (i; i<y; i++) {
		cout << i << ": ";
		scanf("%d", &a);
		m[i]=a;
}

for (int j=0; j<y; j++){
	if (m[j]==j){
		k+=j;
	}
}
if (k!=0) {

cout << "Sum: " << k;
}
else {
	cout << "No such elements";
}
return 0;

}
