#include <iostream>
#include "BankSystem.h"
#include <Windows.h>
using namespace std;

UserInforamtion::UserInforamtion(){
		money = 0;
		account_id = 0;
}

void MenuScreen() {
	int choice = 0;
	cout << " ----- Menu ----- " << endl;
	cout << "1. Make Account" << endl;
	cout << "2. Deposit " << endl;
	cout << "3. Withdraw " << endl;
	cout << "4. Print Entire Account Information " << endl;
	cout << "5. Exit " << endl;
	cout << "Insert: ";
}


// UserInformation Ŭ������ ������� �迭 ������ �ּҸ� ����´�. 
// �ּҿ� ����� ���� �޾ƿ����ν� �迭�� ���� ���� ������ �� ����.
// �ش� �ε����� Ŭ���� ������ �����͸� �����
void UserInforamtion::MakeAccount(UserInforamtion *user,int index){
	int money=0;
	cout << "[ Make Account]" << endl;
	cout << "Accout ID: ";
	cin >>  user[index].account_id;
	cout << "Name : ";
	cin >> user[index].client_name;
	cout << "Deposit Money : ";
	cin >> user[index].money;
}

// ���� ������ ���ؼ� �� ���� ���� MakeMoney �Լ��� ��� ������
void UserInforamtion::Deposit(UserInforamtion* user, int size) {
	int account_ID=0;
	int deposit_Moeny;
	int user_input;
	cout << "[Deposit]" << endl;
	cout << "Account ID : ";
	cin >> account_ID;

	// ������� �� �� ��ŭ �ݺ��Ͽ� ���Ͼ� ���̵� �ִ��� �˻�
	for (int i = 0; i < size; i++)
	{
		// ������ ���̵� ���� �� ��� ����
		if (user[i].account_id == account_ID) {
			cout << "Deposit Money : ";
			cin >> deposit_Moeny;
			user[i].money += deposit_Moeny;
			cout << "Deposit Success" << endl;
			cout << "Go Main Menu....";
			cin >> user_input;
			system("cls");
		}
		// ������ ���̵� ���� �� ���� �޴��� �̵�
		else {
			cout << "Can't Find Your ID...." << endl;
			cout << "Go Main Menu....";
			cin >> user_input;
			system("cls");
		}
	}
}

// Deposit �� ����� ����ѵ� ���� �� �� �����ϰ� �ٲ� ����� ������ ����.
void UserInforamtion::Withdraw(UserInforamtion* user, int size) {
	int account_ID = 0;
	int withdraw_Moeny;
	int user_input;
	cout << "[Withdraw]" << endl;

	cout << "Account ID : ";
	cin >> account_ID;
	for (int i = 0; i < size; i++)
	{
		if (user[i].account_id == account_ID) {
			cout << "Withdraw Money : ";
			cin >> withdraw_Moeny;
			user[i].money -= withdraw_Moeny;
			cout << "Withdraw Success" << endl;
			cout << "Go Main Menu....";
			cin >> user_input;
			system("cls");
		}
		else {
			cout << "Can't Find Your ID...." << endl;
			cout << "Go Main Menu....";
			cin >> user_input;
			system("cls");
		}
	}
}


// �� �� ��ŭ �ݺ��Ͽ� �ش� �ε����� �ִ� Ŭ���� �������� �� ���� ����
// ������Ƽ�� �̿��ؼ� ĸ��ȭ�� ������ ��ȣȭ�� ���� �ΰ��߾�� �Ѵ�. ������ public ���� ����Ǹ� �ȵ�
void PrintAllAccountIfo(UserInforamtion *userinfo,int size) {
	cout << "[PrintAllAccountIfo]" << endl;
	size++;
	system("cls");
	cout << "================================================================" << endl;
	for (int i = 0; i < size; i++)
	{
		cout << endl;
		cout<<i+1<<" ��° ��: " <<userinfo[i].account_id << endl;
		cout<<i+1<<" ��° ��: " <<userinfo[i].client_name<< endl;
		cout<<i+1<<" ��° ��: " <<userinfo[i].money << endl;
		cout << endl;
		cout << "================================================================" << endl;
	}
	cout << endl;
	cout << endl;
	cout << endl;

	cout << "Go to Menu....";
	cin >> size;
	system("cls");
}
