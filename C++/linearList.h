enum bool{
	false, true
};
template <class T>
class LinearList {
	public:
		LinearList();											//  构造函数 
		~LinearList();											//  析构函数 
		virtual int Size()const = 0;							//  求表的最大体积 
		virtual int Length()const = 0;							//  求表的长度 
		virtual int Search(T& x)const = 0;						//  在表中搜索给定值x 
		virtual int Locate(int i)const = 0;						//  在表中定位第i个元素的位置 
		virtual bool getData(int i, T& x)const = 0;				//  取第i个表项的值 
		virtual void setData(int i, T& x) = 0;					//  修改第i个表项的值为x 
		virtual bool Insert(int i, T& x) = 0;					//  在第i个表项后插入x 
		virtual bool Remove(int i, T& x) = 0;					//  删除第x个项 
		virtual bool IsEmpty()const = 0;						//  判断是否为空 
		virtual bool IsFull()const = 0;                         //  判断是否满了 
		virtual void Sort();									//  排序 
		virtual void input();									//  输入 
		virtual void output();                                  //  输出 
		virtual LinearList<T> operator=(LinearList<T>& L)= 0;   //  复制 
};
