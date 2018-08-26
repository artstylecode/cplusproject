#include <iostream>
//

int main(void){
	using namespace std;
	int type;//
	int number;
	cout << "a number base convert!"<<endl;
	cout << "please enter a target num:";
	cin >> number;

	cout <<endl << "choose a type to showing"<<endl;

	cout << "1.dec"<<endl;
	cout << "2.hex"<<endl;
	cout << "3.oct"<<endl;
	cout << "choose type:";
	cin >> type;
	if(type==1){
		cout<<"dec";
	cout << dec;
	}else if(type==2){
		cout<<"hex";
	cout<<hex;
	}else if(type==3){
		cout<< "oct"<<endl;
	cout << oct;
	}
	
	cout <<"The result is :0x"<< number<<endl;

	return 0;
}
