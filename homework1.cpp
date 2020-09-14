#include <iostream>
#include <cstring>
using namespace std;
int main() {
	char str[20];
	int str2;
	cout << "Input String : ";
	cin >> str;
	str2 = strlen(str);		   
	cout << "Reverse String : ";
	for (int i = str2-1; i >= 0; i--) {
		cout << (char)toupper(str[i]);
	}
	cout << endl;
	system("pause");
	return 0;
}