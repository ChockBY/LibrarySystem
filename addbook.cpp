#include"addbook.h"
using namespace std;
void writeBookData(bookDataStruct object)
{
	ofstream write("book.txt", ios::app);
	write << object.getBookName() <<'#'<< object.getBookID()<<'#'<<object.getBookNumber() << endl;
}
void addbook()
{
	char x;
	do
	{
		//���������Ϣ
		cout << " ���ڿ�ʼ���������Ϣ" << endl;

		cout << " please enter name" << endl;
		string name;
		cin >> name;

		cout << " please enter id" << endl;
		string id;
		cin >> id;

		int number;
		cout << " please enter number" << endl;
		cin >> number;
		
	
		bookDataStruct dataoj(name, id, number);
		//���ڸô洢�����Ϣ��

		writeBookData(dataoj);
		cout << "��Ҫ����������ǵĻ�������Y/y����Ļ�����N/n" << endl;
		cin >> x;
	} while (x == 'Y' || x == 'y');
	
}