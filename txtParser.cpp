#include <C:\Users\DELL\source\repos\LibrarySystem\txtParser.h>

vector<bookDataStruct> txtParser (fstream& file)
{
	string buffer;
	vector <bookDataStruct>  bookData;
	while(getline(file, buffer))
	{
		//����д��ÿһ�зֽ��һ������
		int firstDelimiter;
		int secondDelimiter;
		firstDelimiter= buffer.find('#');
		secondDelimiter = buffer.find('#', firstDelimiter + 1);
		//name =sub(first)
		//id=sub(first+1,sec-first-1)
		//num=sub(sec+1)

		//��һ�����������
		bookDataStruct oj(buffer.substr(0, firstDelimiter), buffer.substr(firstDelimiter + 1, secondDelimiter - firstDelimiter - 1), stoi(buffer.substr(secondDelimiter + 1)));
			
		
		bookData.push_back(oj);

	}
	return bookData;
}