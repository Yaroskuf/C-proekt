#include <iostream>
using namespace std;

int main() {
	
	int y;
	cout << "Enter list lenght: ";
	cin >> y;
	int i, m[y], a, z;
	int k=0;
	
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

cout << "Sum: " << k;
return 0;
}

