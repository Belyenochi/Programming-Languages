//复数类complex的相关服务的实现放在C++源文件complex.cpp中
#include <iostream>
using namespace std;
#include <math.h>
#include "complex.h"

complex complex :: operator + ( complex & ob ) {
//重载函数：复数加法运算。
complex * result = new complex ( Re + ob.Re,  Im + ob.Im );
return *result;
}

complex complex :: operator - ( complex& ob ) {
//重载函数：复数减法运算
 	complex * result = new complex ( Re - ob.Re,  Im - ob.Im );
	return * result;
}

complex complex :: operator * ( complex& ob ) {
//重载函数：复数乘法运算
complex * result = 
new complex ( Re * ob.Re - Im * ob.Im,  Im * ob.Re + Re * ob.Im );
		return *result;
}

complex complex :: operator / ( complex& ob) {
//重载函数：复数除法运算
double d = ob.Re * ob.Re + ob.Im * ob.Im;
complex * result = new complex ( ( Re * ob.Re + Im * ob.Im ) / d,
	( Im * ob. Re - Re * ob.Im ) / d );
return * result;
}

ostream& operator << ( ostream& os, complex & ob ) {
//友元函数：重载<<，将复数ob输出到输出流对象os中。
  	return os << ob.Re << (( ob.Im >= 0.0 ) ? "+" : "-" )<< fabs ( ob.Im ) << "i";
}

int main(void) {
	complex p1 = complex(1.0, 2.0);
	complex p2 = complex(1.1,2.1);
	complex p3 = p1 + p2;
	
	cout << p3;
}
	
