#include<iostream>
using namespace std;
int main() {
	int i;
	char str1[100];
	char str2[50];
	char str3[100];
	int num1;
	int num2;
	int s1, s2, s3, s4, s5, s6, s7;
	cout << "ÊäÈë×Ö·û´®ÖĞ×Ö·û¸öÊı£º" << endl;
	cin >> num1;
	cout << "ÊäÈë×Ö·û´®£º" << endl;
	for (i = 0; i < num1; i++) {
		cin >> str1[i];
	}
	cout << "ÊäÈë×Ö·û´®ÖĞ×î´ó»ØÎÄ×Ö·û´®×Ö·û¸öÊı£º" << endl;
	cin >> num2;
	cout << "ÊäÈë×Ö·û´®£º" << endl;
	for (i = 0; i < num2; i++) {
		cin >> str2[i];
	}
	s1 = 0;
	s2 = 2 * num1 - num2 - 1;//str3


	s3 = s5 = 0;
	s4 = s6 = num1 - 1;//str1

	s7 = 0;//str2
	while (s3 <= s4) {
		while (str2[s7] != str1[s3]) {
			s3++;
		}
		while (str2[s7] != str1[s4]) {
			s4--;
		}
		for (i = s5; i < s3; i++) {
			str3[s2] = str1[i];
			s2--;
		}
		for (i = s5; i < s3; i++) {
			str3[s1] = str1[i];
			s1++;
		}		
		for (i = s6; i > s4; i--) {
			str3[s1] = str1[i];
			s1++;
		}			
		for (i = s6; i > s4; i--) {
			str3[s2] = str1[i];
			s2--;
		}
		s5 = s3;
		s6 = s4;
		str3[s1] = str2[s7];
		str3[s2] = str2[s7];
		s7++; s1++; s2--; s5++; s6--;
	}
	cout << "ok" << endl;
	for (i = 0; i < 2 * num1 - num2; i++) {
		cout << str3[i];
	}
	cout << endl;
	cin >> i;
}