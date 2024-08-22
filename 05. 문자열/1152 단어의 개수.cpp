#include <iostream>
using namespace std;
int main() {
    int res = 0;
	string str;
	getline(cin, str);
    res = 1;
	for (int i = 0; i < str.length(); i++) {
		if (str[i] == ' ') {
			res++;
		}			
	}
	if (str[0] == ' ')
		res--;
	if (str[str.length() - 1] == ' ')
		res--;

	cout << res;
	return 0;
}