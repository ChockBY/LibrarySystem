#include "deleteBookData.h"
void deleteBookData()
{
	cout << "������Ҫɾ���ļ�¼�ı��" << endl;
	int num;
	cin >> num;
	
	fstream bookfile("book.txt");
	vector<bookDataStruct> bookData = txtParser(bookfile);
	vector<bookDataStruct> rf(bookData);
	rf.erase(rf.begin() + num-1);
		
	txtAntiParser(rf);
	
	bookfile.close();

}