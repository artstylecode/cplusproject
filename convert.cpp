#include <iostream>

int convert(int lan);


int main(void){
	using namespace std;
	cout << "多少浪："<< endl;
	int lan;
	cin>>lan;
	cout<< "转换后为"<<convert(lan)<<"码"<<endl;
	return 0;
}
int convert(int lan){
	return lan *220;
	
}

