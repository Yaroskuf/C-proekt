#include <iostream>
#include <algorithm>
using namespace std;
int main() {
int k = 4;
int m[k][k]={{825, 100, 543, 152}, {214, 545, 223, 141}, {208, 236, 756, 114}, {666, 488, 389, 777}};
int z[k];
for (int i = 0; i < 4; i++)
{
    for (int j = 0; j < 4; j++) 
    cout << m[i][j] << " ";
    	cout << endl;
		
}
cout << endl;
for (int i=0; i<k; i++) {
	z[i]=m[i][i];
} 
sort(z, z+k);
for (int x=0; x<k; x++) {
	m[x][x]=z[x];
}
for (int a = 0; a < 4; a++)
{
    for (int o = 0; o < 4; o++) 
    cout << m[a][o] << " ";
    	cout << endl;

}
return 0;
}
