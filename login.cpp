#include <iostream>
using namespace std;

int main() {
	string password = "yourpassword";
	string passwordAttempt;

	cout << "Please enter password to continue: " << std::endl;
	cin >> passwordAttempt;

	if (passwordAttempt == password) {
		cout << "Password is correct" << endl;
	} else { cout << "Password is incorrect" << endl; }
}
