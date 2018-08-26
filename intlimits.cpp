#include <iostream>
#include <climits>

int main(void){
	using namespace std;
	int n_int = INT_MAX;
	short s_int= SHRT_MAX;
	long l_int = LONG_MAX;
	cout<< "Int Size"<<endl;
	cout << "int size:" <<sizeof( n_int)<<"bytes"<<endl;
	cout << "short size:"<<sizeof( s_int)<< "bytes" <<endl;
	cout << "long size:"<<sizeof( l_int)<<"bytes"<<endl;
	cout << "Int maxvalue"<<endl;
	cout << "int value:"<< n_int<<endl;
	cout << "short value:"<< s_int<<endl;
	cout << "long value:"<< l_int<<endl;
	cout<< "Int min value"<<endl;
	cout << "int value:" << INT_MIN<<endl;
	cout << "short value:"<< SHRT_MIN<<endl;
	cout << "long value:"<< LONG_MIN<<endl;
	return 0;
}


