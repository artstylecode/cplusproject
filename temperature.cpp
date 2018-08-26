#include <iostream>

double convert(double temp);

int main(void){
using namespace std;
	double temp;
	cout << "输入正常温度单位温度值：";
	cin >> temp;
	cout << endl<< "转换后的华摄氏度为:"<< convert(temp)<<endl;
	cout<< "转换完毕！"<< endl;
	return 0;
}

double convert(double temp){
	return temp * 33.8;
}
