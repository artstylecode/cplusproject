#include <iostream>

int main(){
	using namespace std;

	cout<< "99乘法表打印！\n";
	for(int i =1;i <= 9;i++)
	{
		for(int j=1;j<=i;j++){
		cout<< "  " << j<< "*"<<i << "="<<i*j;
		}
		cout<<endl;
	}

}
