#include <iostream>
using namespace std;

//X-ÊÎË-ÂÎ ÑÒĞÎÊ, Y-ÊÎË-ÂÎ ÑÒÎËÁÖÎÂ

int main(){
int x=3,y=4;
//cout << "Insert width (Y): ";
//cin >> y;
//cout << "Insert length (X): ";
//cin >> x;
int no=0;
int k=0;
float srz=0.0, ma=0.0;
//int m[x][y];
int m[3][4]={{2, 100, 5, 1}, {214, 125, 23523, 1241}, {24, 236, 2, 1}};



//for (int i=0; i<x; i++){
//	for (int j=0; j<y; j++){
//		m[i][j]=i+j+2;
//	}
//}




for (int i = 0; i < x; i++)
{
    for (int j = 0; j < y; j++)
        cout << m[i][j] << " ";
     cout << endl;
}




for (int i=0; i<x; i++) { //âûñîòà
	for (int j=0; j<y; j++) { //øèğèíà
			srz+=m[i][j];
			k+=1;
		if (k>y-1) {	
			ma=max(srz/y,ma);
			if (ma<=srz/y) {
				no=i;
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
