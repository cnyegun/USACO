#include <iostream>
#include <stack>
using namespace std;

int main() {
	stack<int> s;
	
	for (int i = 0; i < 5; i++ ) {
		int x;
		cin >> x;
		s.push(x);
	}
	
	cout << s.top() << endl;
	s.pop();
	cout << s.top() << endl;
	s.pop();
	cout << s.top() << endl;
	s.pop();
	cout << s.top() << endl;
	s.pop();
	cout << s.top() << endl;
	s.pop();

	return 0;
}
