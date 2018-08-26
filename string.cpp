#include <iostream>
#include <cstring>

int main(){
	using namespace std;
        char name[]  ="王中山";
        char name2[15];

        cout << "我的名字叫:"<< name<<"你叫什么？"<<endl;
        cout << "我叫："<<endl;

	std::cin >> name2;

        cout << "name数组一共占用"<< sizeof(name)<< "个字节."<<endl;

        cout << "name2字符串数组长度为:"<< strlen(name2)<< endl;
	
	cout << "你姓："<< name2[0];
	name2[6]= '\0';
	cout << endl<< "你名字的前面两个字是:"<< name2<<;
        return 0;
}
   
