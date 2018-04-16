#include <iostream>
using namespace std;
#include <time.h>

int seqsearch(int a[], const int n, const int x) {
	int i = 0;
	
	for (; i < n; i++) {
		if(a[i] == x) {
			break;
		}
	}
	
	if (i == n) {
		return -1;
	}
	
	return i;
}

int main(void) {
	int a[10001],n;time_t start,end;
	for (int j = 0; j <= 10001;j ++) {
		a[j] = j + 1;
	}
	cin >> n;
	start = time(NULL);
	int k= seqsearch(a , n ,0);
	end = time(NULL);
	float runTime = difftime(start, end);
	printf("%f\n ", runTime);
	
	return 0;
}
