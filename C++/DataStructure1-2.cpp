#include<iostream>
using namespace std;
void printElement(int a[], int n);

int main(void) {
	int a[10] = {100,200,20,35,60,81,96,102,33,152};
	printElement(a, 10);
	
	return 0;
}

void printElement(int a[], int n) {
	int c[5] = {0,0,0,0,0};
	int d[5] = {20,50,80,130,200};
	
	int i, j;
	for (i = 0;i < n; i ++) {
		for (j = 0;j < 5; j ++) {
			if (a[i] <= d[j]) {
				c[j]++;
				break;
			}
		}
	}
	cout << "0~20:  " << c[0] << endl
		 << "21~50:  " << c[1] << endl
		 << "51~80:  " << c[2] << endl
		 << "81~130:  " << c[3] << endl
		 << "131~200:  " << c[4] << endl;
}
