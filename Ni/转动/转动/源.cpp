#include<iostream>
#include<string>
using namespace std;
void Turns(int a[][100], int x, int y) {
	int i, j, tesc;
	i = 0;
	for (j = 0; j < y; j++)
	{
		tesc = a[i][j];
		a[i][j] = a[j][y];
		a[j][y] = a[x][y - j];
		a[x][y - j] = a[x - j][0];
		a[x - j][0] = tesc;
	}	
}
void Turns1(int a[][100], int x, int y) {
	int i, j, tesc;
	i = 0;
	for (j = 0; j < y; j++)
	{
		tesc = a[i][j];
		a[i][j] = a[x - j][0];
		a[x - j][0] = a[x][y - j];
		a[x][y - j] = a[j][y];
		a[j][y]= tesc;
		
	}
}
int main()
{
	int i, j,num=11;
	int x,y, y1;
	int a[100][100];
	int key,sum;
	cout << "�����뼸�׷���" << endl;
	cin >> y1;
	cout << "˳ʱ�����䣺1" << endl;
	cout << "��ʱ�����䣺0" << endl;
	cin >> key;
	cout << "��������תȦ��" << endl;
	cin >> sum;
	x = y1 - 1;
	y = y1 - 1;
	for (i = 0; i < y1;i++) {
		for (j = 0; j < y1; j++) {
			 a[i][j]=num++;
		}
	}
	if (key==0)
	{
		for (i = 0; i < sum;i++) {
		Turns(a,x,y);
		}
	}
	if (key==1)
	{
		for (i = 0; i < sum; i++) {
			Turns1(a, x, y);
		}
	}	
	for (i = 0; i < y1; i++) {
		for (j = 0; j < y1; j++) {
			cout << a[i][j]<<" ";
		}
		cout << endl;
	}
	cout << "pase";
	cin >> i;
}

