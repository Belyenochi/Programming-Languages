//������complex����ط����ʵ�ַ���C++Դ�ļ�complex.cpp��
#include <iostream>
using namespace std;
#include <math.h>
#include "complex.h"

complex complex :: operator + ( complex & ob ) {
//���غ����������ӷ����㡣
complex * result = new complex ( Re + ob.Re,  Im + ob.Im );
return *result;
}

complex complex :: operator - ( complex& ob ) {
//���غ�����������������
 	complex * result = new complex ( Re - ob.Re,  Im - ob.Im );
	return * result;
}

complex complex :: operator * ( complex& ob ) {
//���غ����������˷�����
complex * result = 
new complex ( Re * ob.Re - Im * ob.Im,  Im * ob.Re + Re * ob.Im );
		return *result;
}

complex complex :: operator / ( complex& ob) {
//���غ�����������������
double d = ob.Re * ob.Re + ob.Im * ob.Im;
complex * result = new complex ( ( Re * ob.Re + Im * ob.Im ) / d,
	( Im * ob. Re - Re * ob.Im ) / d );
return * result;
}

ostream& operator << ( ostream& os, complex & ob ) {
//��Ԫ����������<<��������ob��������������os�С�
  	return os << ob.Re << (( ob.Im >= 0.0 ) ? "+" : "-" )<< fabs ( ob.Im ) << "i";
}

int main(void) {
	complex p1 = complex(1.0, 2.0);
	complex p2 = complex(1.1,2.1);
	complex p3 = p1 + p2;
	
	cout << p3;
}
	
