#ifndef POINT_H
#define POINT_H
#include <iostream>
using namespace std;

template <class T>
class Point {
	public:
		Point(T, T);
		Point(Point &);
		~Point();
		T get_x();
		T get_y();
	private:
		int x;
		int y;
//		friend istream& operator>>(istream& in, Point& p);
//		friend ostream& operator<<(ostream& out, Point& p);
};
#endif

template <class T>
T Point<T>::get_x(){
	return x;
}

template <class T>
T Point<T>::get_y(){
	return y;
}


int main(void) {
	Point<int> p(6, 3);
	
	return 0;
}
