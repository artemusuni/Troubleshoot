#include <iostream>
using namespace std;


int main() {
	char choice {};
	cout << "Help My computer is not working!!!!" << endl;
	cout << "Does the computer make any sounds or show any lights? (y/n): ";
	cin >> choice;

	if(choice == 'n') {
		cout << "Is it plugged in? (y/n): ";
		cin >> choice;
		if(choice == 'n') {//The computer doesnt have power
			cout << "Plug it in. If there is still a problem, please run the program again." << endl;

		}
		else{	//It is plugged in
			cout << "Is the swith in the \"ON\" position? (y/n): ";
			cin >> choice;
			
			if(choice == 'n') {//The switch is OFF, turn it ON!!
				cout << "Turn it on. If the program persists, please run this program again." << endl;
			
			}
			else {//The switch is ON
				cout << "Does the computer have a fuse? (y/n): ";
				cin >> choice;
				if(choice == 'n') {//No fuse
					cout << "Is the outlet OK? (y/n): ";
					cin >> choice;
					if(choice == 'n') {//Fix outlet
						cout << "Check the outlet's circuit breaker or fuse. Move to a new outlet, if necessary, If the problem persists, please run the program again." << endl;
					}
					else {//Cannot help
						cout << "Please consult a service technician." << endl;
					}
				}
				else {
					cout << "Check the fuse. Replace if necessary. If the problem persists, then please run the program again." << endl;
				}
			}
		}
	}
	else{
		cout << "Please consult a service technician." << endl;
	
	
	}




}
