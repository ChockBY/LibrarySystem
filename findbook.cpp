#include  <C:\Users\DELL\source\repos\LibrarySystem\findbook.h>
bool findbook()
{
	cout << "�������������ֲ�ѯ�����ñ�Ų�ѯ" << endl;
	cout << "1.������(ʵ�ַ�ʽ1)" << endl;
	cout << "2.�ñ��(ʵ�ַ�ʽ2)" << endl;
	int switchNum;
	cin >> switchNum;
	bool findOrNot = false;
	fstream bookfile("C:\\Users\\DELL\\source\\repos\\LibrarySystem\\book.txt");
	vector<bookDataStruct> bookData = txtParser(bookfile);
	string buffer;
	switch (switchNum)
	{
	case 1:
	{
		cout << "��������Ҫ���ĵ��������" << endl;
		string bookName;
		cin >> bookName;
		

		for (auto x : bookData)
			if (x.getBookName().compare(bookName) == 0)
			{
				cout << "�ҵ���������¼�� ";
				printObj(x);
				findOrNot = true;
			}
		if (findOrNot == false)
			cout << "û�ҵ���¼" << endl;
		
		
		
		break;
	}
	case 2:
	{
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