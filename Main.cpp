//vending machine//
//soda,coke,chips,waterbottle/

#include<iostream>
using namespace std;

int checkitems(int p);

int payment(int x);

int main() {
	cout << "enter 0 for soda" << endl;
	cout << "enter 1 for chewing gum" << endl;
	cout << "enter 2 for chips" << endl;
	cout << "enter 3 for water bottle" << endl;
	cout << "enter 4 to exit" << endl;
	int input;
	cin >> input;
	checkitems(input);
}

int checkitems(int p) {
	int n1, n2, n3, n4;
	int n11 = 20, n22 = 35, n33 = 20, n44 = 20;
	int amount;
	if (p == 0) {
		cout << "you have selected soda" << endl;
		cout << "enter quantity" << endl;
		cin >> n1;
		if (n1 <= n11) {
			n11 = n11 - n1;
			cout << "you have selected for " << n1 << " cans of soda" << endl;
			amount = n1 * 30;
			payment(amount);
			return 0;
		}
		else {
			cout << "enter a quantity less than " << n11 << endl;
			cout << "cancelling selection..." << endl;
			return 0;
		}
	}
	if (p == 1) {
		cout << "you have selected chewing gum" << endl;
		cout << "enter quantity" << endl;
		cin >> n2;
		if (n2 <= n22) {
			n22 = n22 - n2;
			cout << "you have selected for " << n2 << " chewing gums" << endl;
			amount = n2 * 10;
			payment(amount);
			return 0;
		}
		else {
			cout << "enter a quantity less than " << n22 << endl;
			cout << "cancelling selection..." << endl;
			return 0;
		}
	}
	if (p == 2) {
		cout << "you have selected for chips" << endl;
		cout << "enter quantity" << endl;
		cin >> n3;
		if (n3 <= n33) {
			n33 = n33 - n3;
			cout << "you have selected for " << n3 << " packet(s) of chips" << endl;
			amount = n3 * 20;
			payment(amount);
			return 0;
		}
		else {
			cout << "enter a quantity less than " << n33 << endl;
			cout << "cancelling selection..." << endl;
			return 0;
		}
	}
	if (p == 3) {
		cout << "you have selected water bottles" << endl;
		cout << "enter quantity" << endl;
		cin >> n4;
		if (n4 <= n44) {
			n44 = n44 - n4;
			cout << "you have selected for " << n4 << " bottle(s) of water" << endl;
			amount = n4 * 20;
			payment(amount);
			return 0;
		}
		else {
			cout << "enter a quantity less than " << n44 << endl;
			cout << "cancelling selection..." << endl;
			return 0;
		}
	}
	if (p == 4) {
		cout << "exiting..." << endl;
		return 0;
	}
	else {
		cout << "invalid choice" << endl;
		cout << "exiting..." << endl;
		return 0;
	}
}

int payment(int x) {
	cout << "total amount is: " << x << endl;
	cout << "payment method: cash or card?" << endl;
	cout << "choose 0 for cash and 1 for card" << endl;
	int n;
	cin >> n;
	if (n == 0) {
		cout << "you have selected cash" << endl;
		int cash;
		cin >> cash;
		if (cash < x) {
			int balance = x - cash;
			cout << "enter remaining amount: " << balance << endl;
			int balamt;
			cin >> balamt;
			if (balamt == balance) {
				cout << "processing..." << endl;
				cout << "check lower tray for the desired item" << endl;
				return 0;
			}
			if (balamt > balance) {
				cout << "processing..." << endl;
				int change = balamt - balance;
				cout << "check upper tray for change: " << change << " and lower tray for the desired item" << endl;
				return 0;
			}
			else {
				cout << "exiting..." << endl;
				return 0;
			}
		}
		if (cash == x) {
			cout << "processing..." << endl;
			cout << "check lower tray for the desired item" << endl;
			return 0;
		}
		if (cash > x) {
			cout << "processing..." << endl;
			int change = cash - x;
			cout << "check upper tray for change: " << change << " and lower tray for the desired item"<< endl;
			return 0;
		}
		else {
			cout << "exiting..." << endl;
			return 0;
		}
	}
	if (n == 1) {
		cout << "you have selected card" << endl;
		cout << "connecting to server..." << endl;
		//insert pin option here//
		cout << "transaction approved!" << endl;
		cout << "check for the desired items in the lower tray" << endl;
		return 0;
	}
	else {
		cout << "invalid option" << endl;
		cout << "exiting..." << endl;
		return 0;
	}
}