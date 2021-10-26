
#include <iostream>
using namespace std;

/*Nama : SITI AYUNI
kelas : ilkomp B
NPM : 2117051068*/

bool valid_triangle (float c, float d, float e){
	if(c+d >e || c+e >d || d+e >c)
	return true;
	else 
	return false;	
		
}
int main (){
	float c,d,e;
	cin >> c >> d >> e;
	if(valid_triangle(c,d,e)){
		cout <<"false" << endl;
}   else {
	    cout << " true" << endl;
    }
		
}


