
#include <C:\Users\DELL\source\repos\LibrarySystem\dataStructure.h>

	bookDataStruct::bookDataStruct()
	{
		
			
		
	}
	bookDataStruct::bookDataStruct(string name, string id, int number) :m_bookName(name), m_bookID(id), m_bookNumber(number)
	{
	}

	string bookDataStruct::  getBookName()
	{
		return m_bookName;
	}
	string bookDataStruct::getBookID()
	{
		return m_bookID;

	}
	int  bookDataStruct::getBookNumber()
	{
		return m_bookNumber;
	}
	
	void  bookDataStruct::setBookNumber(int num)
	{
		this->m_bookNumber=num;
	}
 
//�������һ����������
void printObj(bookDataStruct& bk)

{
	cout << "������ " << setw(40)<<left<< bk.getBookName()  <<" ��ı���� " << setw(20)<<left<<bk.getBookID() << " ������" << bk.getBookNumber() << endl;
	return;
}
