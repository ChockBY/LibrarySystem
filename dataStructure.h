#include <string>
#include <iostream>
#include <iomanip>
using namespace std;
class bookDataStruct
{
	//����Ӧ��Ҫ��������ݽṹ�����ó�ȥ�Ŷ԰�
private:
	 string m_bookName;
	 string m_bookID;
	 int m_bookNumber;
public:
	//�ڴ����Ż�1 ���û�����һ������ Ȼ�������Լ������ݷֿ�
	bookDataStruct();
	bookDataStruct(string name, string id, int number);
public:
	string getBookName();
	string getBookID();
	int  getBookNumber();
public:
	
	void setBookNumber(int );
};
//�������һ����������
void printObj(bookDataStruct& bk);
class userDataStruct
{
public:

	userDataStruct(long long phone, long long id, char * name, char * password);
private:
	long long m_phoneNumber;
	long long m_IdNumber;
	char * m_name;
	char  * m_password;

public:
	long long getPhoneNumber();
	long long getIdNumber();
	char * getPassword();




};
#pragma once 