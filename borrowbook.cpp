
#include"borrowbook.h"


bool borrowbook()
{
	cout << "�������������ֲ�ѯ�����ñ�Ų�ѯ" << endl;
	cout << "1.������" << endl;
	cout << "2.�ñ��" << endl;
	int switchNum;
	cin >> switchNum;
	bool findOrNot = false;
	
	switch (switchNum)
	{
	case 1:
	{
		cout << "��������Ҫ���ĵ��������" << endl;
		string bookName;
		cin >> bookName;
		//����Ӧ����ֱ���޸��ļ��Ķ԰�
		//�������ǰ��ļ�ȫ�������ڴ��У�Ȼ���޸�����ȫ��д��ȥ
		fstream bookfile("book.txt");
		vector<bookDataStruct> bookData = txtParser(bookfile);
		vector<bookDataStruct> rf(bookData);
		for (bookDataStruct& x : rf)
		{
			if (x.getBookName().compare(bookName) == 0)
			{
				cout << "�ҵ���������¼�� ";
				printObj(x);
				findOrNot = true;
				cout << "��������Ҫ���ĵ��������" << endl;
				int num;
				cin >> num;
				if (num <= x.getBookNumber())
					x.setBookNumber(x.getBookNumber() - num);
				cout << x.getBookNumber();
			}
		}
		
		txtAntiParser(rf);
		if (findOrNot == false)
			cout << "û�ҵ���¼" << endl;
		
		bookfile.close();


		break;
	}
	case 2:
	{
		fstream bookfile("book.txt");
		vector<bookDataStruct> bookData = txtParser(bookfile);
		vector<bookDataStruct> rf(bookData);
		cout << "��������Ҫ���ĵ���ı��" << endl;
		string bookID;
		cin >> bookID;

		for (auto x : bookData)
			if (x.getBookID().compare(bookID) == 0)
			{
				cout << "�ҵ���������¼�� ";
				printObj(x);
				findOrNot = true;
			}
		if (findOrNot == false)
			cout << "û�ҵ���¼" << endl;
		

		break;
	}

	default:
		break;
	}
	cout << endl << endl;
	if (findOrNot == true)
		return true;
	else
		return false;

}