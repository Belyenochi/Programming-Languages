#include <iostream>
using namespace std;
#include <stdlib.h>
#include <linearList.h>
const int defaultSize = 100;

typedef int T;
typedef struct {
	T * data;
	int maxSize,n;
} SeqList;

template <class T>
class SeqList: public LinearList<T>{
	protected:
		T *data;							
		int maxSize;
		int last;
		void reSize(int newSize);
	public:
		SeqList(int sz = defaultSize);
		SeqList(SeqList<T>& L);
		~SeqList(){
			delete[] data;
		}
		int Size()const {
			return maxSize;
		}
		int Length()const{
			return last + 1;
		}
		int Search(T& x)const;
		int Locate(int i)const;
		bool getData(int i, T& x)const {
			if (i>0 && i <= last + 1) {
				x = data[i - 1];
				return true;
			} else {
				return false;
			} 
		}
		void setData(int i, T& x) {
			if (i>0 && i <= last + 1) {
				data[i-1] = x;
			}
		}
		bool Insert(int i, T&ｘ);
		bool Remove(int i, T& x);
		bool IsEmpty() {
			return (last == -1)? true:false;
		} 
		bool IsFull() {
			return (last == maxSize - 1) ? true : false;
		}
		void input();
		void output();
		SeqList<T> operator = (SeqList<T>& T);
		void union(SeqList<int>& LA, SeqList<int>& LB) {
			int n = LA.Length(), m = LB.Length(), i, k ,x;
			for (i = 1; i <= m; i++) {
				LB.getData(i,x);
				k = LA.Search(x);
				if (k == 0) {
					LA.Insert(n, x);
					n = n + 1;
				}
			}
		}
		
		void Intersection(SeqList<int>& LA, SeqList<Int>& LB) {
			int n = LA.Length(), m = LB.Length(), i = 1, k , x;
			while (i <= n) {
				LA.getData(i,x);
				k = LB.Search(x);
				if (k == 0) {
					LA.Remove(i , x);
					n = n - 1;
				} else {
					i = i + 1;
				} 
			}
		} 
}

template <class T>
SeqList<T>::SeqList(int sz) {
	if (sz > 0){
		maxSize = sz;
		last = -1;
		data = new T[maxSize];
		if (data == NULL) {
			cerr << "存储分配错误" << endl;
			exit(1);
		}
	}
}

template <class T>
SeqList<T>::SeqLit(SeqList<T>& L) {
	maxSize = L.Size();
	last = L.Length() - 1;
	T value;
	data = new T[maxSize];    //创建顺序存储数组
	if(data == NULL) {
		cerr << "存储分配错误！" << endl;
		exit(1);
	}
	for (int i = 1; i <= last + 1; i ++) {
		L.getData(i,value);
		data[i-1] = value;
	}
}

template <class T>
void SeqList<T>::reSize(int newSize) {
	if (newSize <= 0) {
		cerr << "无效的数组大小" << endl;
		return;
	}
	if (newSize != maxSize) {
		T * newarray = new T[newSize];
		if (newarray == NULL) {
			cerr << "存储分配错误" << endl;
			exit(1);
		}
		int n = last + 1;
		T * srcptr = data;
		T * destptr = newarray;
		while(n--) {
			*destptr ++ = *srcptr ++;
		}
		delete []data;
		data = newarray;
		maxSize = newSize;
	}
} 

template <class T>
int SeqList<T>::search(T& x)const {
	for(int i = 0; i <= last; i ++) {
		if (data[i] == x) {
			return i + 1;
		}
	}
	return 0;
}

template <class T>
int SeqList<T>::Locate(int i) const {
	if (i >= 1 && i <= last + 1) {
		return i;
	} else {
		return 0;
	}
}

template <class T>
bool SeqList<T>::Insert(int i, T& x) {
	if (last == maxSize - 1) {
		return false;
	}
	if (i < 0 || i > last + 1) {
		return false;
	}
	for (int j = last; j >= i; j--) {
		data[j + 1] = data[j];
	}
	data[i] = x;
	last ++;
	return true;
}

template <class T>
bool SeqList<T>::Remove(int i, T& x) {
	if (last == -1 || i < 1 || i > last + 1) {
		return false;
	}
	x = data[i - 1];
	for (int j = i; j <= last; j ++) {
		data[j - 1] = data[j];
	}
	last--;
	return true;
}

template <class T>
void SeqList<T>::input() {
	cout << "开始建立顺序表，请输入表中元素个数：";
	while (1) {
		cin >> last;
		if (last <= maxSize - 1) break;
		cout << "表元素个数输入有误，范围不能超过" << maxSize - 1 <<":"; 
	}
	for (int i = 0; i <= last; i ++) {
		cin >> data[i];
		cout << i + 1 << endl;
	}
};

template <class T>
void SeqList<T>::output() {
	cout << "顺序表当前元素最后位置为：" << last << endl;
	for (int i = 0; i <= last; i ++) {
		cout << "#" << i + 1 << ":" << data[i] << endl;
	} 
};

template <class T>
void SeqList<T>::operator=(SeqList<T>& L) {
	maxSize = L.Size();
	last = L.Length() - 1;
	T value;
	data = new T[maxSize];
	if(data == NULL) {
		cerr << "存储分配错误！" << endl;
		exit(1);
	}
	for (int i = 1; i <= last + 1; i ++) {
		L.getData(i,value);
		data[i-1] = value;
	}
}

