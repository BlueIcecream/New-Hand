#include<iostream>
using namespace std;
int main(){
	int count=-1, times=0;
	int i,j;
	int a[100];
	cout << "ÊäÈë¸öÊý";
	cin >> j;
	for (i = 0; i < j; i++) {
		cin >> a[i];
	}
	for (i = 0; i < j; i++) {
		if (times == 0){
			count = a[i];
			times++;
		}
		else if (count == a[i]) {
			times++;
		}
		else {
			times--;
		}
	}
	if (times != 0) {
		times = 0;
		for(i=0;i<j;i++){
			if (count == a[i])
				times++;
		}
	}
	if (times > j / 2)
		cout << "Y"<<endl;
	else
		cout << "N" << endl;
	cin >> i;
}