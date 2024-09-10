#include <iostream>
#include <algorithm>
using namespace std;
int main() {
int k;
cout << "Enter matrix side: ";
cin >> k;
if (k<=0) {
	cout << "Wrong value!!!!!!!!!";
	return 0;
}
int a;
int m[k][k];
int z[k];
for(int i = 0; i < k; i++){
for(int j = 0; j < k; j++){
	  	cout << i+1 << "." << j+1 <<  ": ";
		scanf("%d", &a);
		m[i][j] = a;
		if (j+1==k){
			cout << endl;
		}		
}
}
for (int i = 0; i < k; i++)
{
    for (int j = 0; j < k; j++) 
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
for (int a = 0; a < k; a++)
{
    for (int o = 0; o < k; o++) 
    cout << m[a][o] << " ";
    	cout << endl;

}
return 0;
}
