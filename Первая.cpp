#include <iostream> 
using namespace std; 
  
int main() 
{ 
	cout << "Enter first value: ";
    int a;
	cout << "Enter second value: "; 
  	int b;
  	cout << "Enter third value: ";
  	int c;

    cin >> a; 
  	cin >> b; 
  	cin >> c;
	   
	if (a>0 and b>0 and c>0) {
	   
	    if (a+b>c or a+c>b or b+c>a) {
	    	cout << "Triangle exists";
		}
		
		else {
			cout << "Triangle does not exist";
		}
	    
	}
	else {
		cout << "Error: input value <= 0";
	}

	return 0;
}
