#include <iostream>

int main(){
	using namespace std;
	cout<< "获取用户以行为单位测试程序！"<<endl;
	cout << "请输入3个中文字做为测试:";
	char teststr[13];
	cin.getline(teststr, 12);
	cout << "你输入了："<< teststr<<endl;	

}
