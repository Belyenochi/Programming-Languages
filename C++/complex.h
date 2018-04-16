#ifndef _complex_h_
#define _complex_h_
#include <iostream>
using namespace std;

class complex {
public:
  complex (){ Re = Im = 0; }						//���������Ĺ��캯��
  complex (double r) { Re = r;  Im = 0; }				//ֻ��ʵ���Ĺ��캯��
  complex (double r, double i) { Re = r;  Im = i; }		//�ֱ���ʵ�����鲿�Ĺ��캯��
  double getReal () { return Re; }					//ȡ����ʵ��
  double getImag () { return Im; }					//ȡ�����鲿
  void setReal (double r) { Re = r; }					//�޸ĸ���ʵ��
  void setImag (double i) { Im = i; } 					//�޸ĸ����鲿
  complex operator = (complex& ob) { Re = ob.Re;  Im = ob.Im; }	//������ֵ
  complex operator + (complex& ob);				//���غ�����������������
  complex operator - (complex& ob);
  complex operator * (complex& ob);
  complex operator / (complex& ob);
  friend ostream& operator << ( ostream& os, complex& c );	//��Ԫ����������<<
private:
  double Re, Im;									//������ʵ�����鲿
};
#endif  


