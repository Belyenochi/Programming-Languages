enum bool{
	false, true
};
template <class T>
class LinearList {
	public:
		LinearList();											//  ���캯�� 
		~LinearList();											//  �������� 
		virtual int Size()const = 0;							//  ���������� 
		virtual int Length()const = 0;							//  ���ĳ��� 
		virtual int Search(T& x)const = 0;						//  �ڱ�����������ֵx 
		virtual int Locate(int i)const = 0;						//  �ڱ��ж�λ��i��Ԫ�ص�λ�� 
		virtual bool getData(int i, T& x)const = 0;				//  ȡ��i�������ֵ 
		virtual void setData(int i, T& x) = 0;					//  �޸ĵ�i�������ֵΪx 
		virtual bool Insert(int i, T& x) = 0;					//  �ڵ�i����������x 
		virtual bool Remove(int i, T& x) = 0;					//  ɾ����x���� 
		virtual bool IsEmpty()const = 0;						//  �ж��Ƿ�Ϊ�� 
		virtual bool IsFull()const = 0;                         //  �ж��Ƿ����� 
		virtual void Sort();									//  ���� 
		virtual void input();									//  ���� 
		virtual void output();                                  //  ��� 
		virtual LinearList<T> operator=(LinearList<T>& L)= 0;   //  ���� 
};
