#include <iostream>
using namespace std;

int main() {
	int y;
	string z;
	cout << "Enter number of values in list: ";
	cin >> y;
	int i, a, m[y];
	
	for(i = 0; i < y; i++)
  	{
	  	cout << i+1 << ": ";
		scanf("%d", &a);
		
		m[i] = a;
	}
	
	for (int j=0; j<y; j++) {
		if (m[j]==0) {
		
		string z="False";
		cout << z;
		break;
		}
		else {
		string z="True";
		cout << z;
		break;	
		}
	}
	
	
	return 0;
}
