
#include"dataStructure.h"

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



/*            �������û����ݽṹ��ʵ��*/
long long userDataStruct::getPhoneNumber()
{
	return m_phoneNumber;
}
long long userDataStruct::getIdNumber()
{
	return m_IdNumber;
}
char* userDataStruct::getPassword()
{
	return m_password;
}

userDataStruct::userDataStruct(long long phone, long long id, char * name, char * password):m_phoneNumber(phone),m_IdNumber(id),m_name(name),m_password(password)
{

}


