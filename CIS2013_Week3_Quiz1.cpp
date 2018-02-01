#include <iostream>
using namespace std;

int main (){
int num_1, num_2;
char operat;
char question = 'y';

do {

cout << "Give me two numbers \n";
		cin >> num_1;
		cin >> num_2;
		cout << "What calculations do you want to make?\n";
		cout << "Enter one of the operators: '+' or '*' \n";
		cin >> operat;
if(operat == '+') {
		cout << " If you add them you get " << num_1 + num_2 << endl;	
	
	} else {
		if(operat == '*') {
		cout << " If you multiply them you get " << num_1 * num_2 << endl;
	
	}
	}
	cout << "Do you want to make another calculation? ('y'/'n')" << endl;
		cin >> question;
	}
	while (question == 'y');

return 0;

}