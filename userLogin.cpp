

#include "userLogin.h"

bool userLogin()
{
	cout << " ����������" << endl;
	string password;
	cin >> password;
	if (password.compare("123") == 0)
		return true;
	else
		return false;
}
