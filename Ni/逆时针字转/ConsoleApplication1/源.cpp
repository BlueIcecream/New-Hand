#include<iostream>
using namespace std;

void turn(int a[][10],int x,int b) {
	int tesc=a[b][b];
	int i = b, j = b;
	while (j <= x) {	
		if (j < x) {
			a[i][j] = a[i][j + 1];
			j++;
		}
		else if (j==x) {
			a[i][j] = a[i+1][j];
			j++;
		}	
	}
	j--;
	while (i <= x) {
		if (i < x) {
			a[i][j] = a[i+1][j];
			i++;
		}
		else if (i == x) {
			a[i][j] = a[i][j-1];
			i++;
		}
	}
	i--;
	while (j >=b) {
		if (j > b) {
			a[i][j] = a[i][j-1];
			j--;
		}
		else if (j==b) {
			a[i][j] = a[i-1][j];
			j--;
		}		
	}
	j++;
	while (i > b) {
		if (i > b) {
			a[i][j] = a[i-1][j];
			i--;
		}	
	}
	i++;
	a[i][j] = tesc;
}
int main() {
	int x,x1;
	int i=0, j=0;
	int num = 10;
	int tesc;
	int a[10][10];

	cin >> x;
	x1 = x - 1;	
	for (i = 0; i < x; i++) {
		for (j = 0; j < x; j++) {
			a[i][j]=num;
			num++;
		}
	}
	i = 0; j = 0;
	while (i<x1) {
		turn(a,x1,i);
		i++;
		x1--;
	}
	
	for (i = 0; i < x; i++) {
		for (j = 0; j < x; j++) {
			cout << a[i][j]<<" ";
		}
		cout << endl;
	}
	cin >> i;
}