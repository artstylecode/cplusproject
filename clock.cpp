#include <iostream>
#include <ctime>
int main(){
	using namespace std;
	clock_t delay = CLOCKS_PER_SEC;

	clock_t start = clock();
	const int TOTALSECS = 5;
	int secs = 5;
	while(secs){
		if((clock-start)%delay== 0){
			secs--;
			cout<< "第"<<TOOTALSECS-secs<< "秒！";
		}
	}



	return 0;
}
