#include <iostream>

double lightYearConvert(double lightyears);

int main(void){
	using namespace std;
	cout << "多少光年：";
	double lightyears;
	cin >> lightyears;
	cout << endl<< lightyears << "光年="<< lightYearConvert(lightyears)<<"天文单位"<<endl;
	return 0;
}

double lightYearConvert(double lightyears){
	return lightyears * 63241.0770843; 
}
