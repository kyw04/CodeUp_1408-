#include <iostream>
using namespace std;

int main()
{
	string str, password1, password2;
	cin >> str;
	for (int i = 0; str[i]; i++)
		password1.push_back(str[i] + 2);
	for (int i = 0; str[i]; i++)
		password2.push_back((str[i] * 7) % 80 + 48);

	cout << password1 << endl;
	cout << password2 << endl;
	return 0;
}