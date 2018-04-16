#ifndef POINT_H
#define POINT_H
#include <iostream>
using namespace std;


class Point {
	public:
		Point(int, int);
		Point(Point &);
		~Point();
		int get_x();
		int get_y();
		void put_X(int a);
		void put_y(int b);
		Point operator+(Point p);
		Point operator*(int i);
		int operator>(Point p);
		int operator<(Point p);
		int operator==(Point& p);
	private:
		int x;
		int y;
//		friend istream& operator>>(istream& in, Point& p);
//		friend ostream& operator<<(ostream& out, Point& p);
};
#endif

std::ostream& operator<<(std::ostream& strm,Point& p)
{
  return strm << "(" << p.get_x() << "," << p.get_y() << ")";
}

Point::Point(int a, int b){
	x = a;
	y = b;
}

int Point::get_x(){
	return x;
}

int Point::get_y(){
	return y;
}

Point::~Point(){
	
}


int main(void) {
	Point p(6, 3);
	
	return 0;
}
