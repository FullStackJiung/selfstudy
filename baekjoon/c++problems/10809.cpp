#include <iostream>
#include <string>
using namespace std;


int main() {
	string a = "abc";
	cout << a.find('a') << '\n'; 
	cout << a.find('b') << '\n'; 
	cout << a.find('c') << '\n';
	cout << a.find('d') << '\n';
	return 0;
}