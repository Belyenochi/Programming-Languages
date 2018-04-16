#include<iostream>
using namespace std;
#define MaxInt 100000
#define arraySize 1000

int calc( int T[ ], int n ) {
	int i, value = 1;
	if ( n != 0 ) {
		for ( i = 1; i < n; i++ ) {
			value *= i*2;
			if ( value > MaxInt ) {
				cerr << "number larger than maxInt" << endl;
				return 0; 
			} 
		}
		value *= n * 2;
	}
	T[n] = value;

	return 1;
}

int main(void) {
	int n, arr[arraySize];
	for (int i = 0; i < arraySize; i ++) {
		arr[i] = 0;
	}
	
	cin >> n;
	if (n < arraySize) {
		calc(arr, n);
	} else {
		cerr << "n larger than arraySize" << endl;
		exit (1);
	}
	
	
	cout << arr[n] << endl;

	
	return 0;
}

