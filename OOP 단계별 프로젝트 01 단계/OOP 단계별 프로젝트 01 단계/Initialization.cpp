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


// UserInformation 클래스로 만들어진 배열 변수에 주소를 갖고온다. 
// 주소와 사이즈를 직접 받아옴으로써 배열에 값에 직접 접근할 수 있음.
// 해당 인덱스에 클래스 변수에 데이터를 담아줌
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

// 직접 접근을 통해서 값 변경 가능 MakeMoney 함수와 기법 동일함
void UserInforamtion::Deposit(UserInforamtion* user, int size) {
	int account_ID=0;
	int deposit_Moeny;
	int user_input;
	cout << "[Deposit]" << endl;
	cout << "Account ID : ";
	cin >> account_ID;

	// 만들어진 고객 수 만큼 반복하여 동일안 아이디가 있는지 검색
	for (int i = 0; i < size; i++)
	{
		// 동일한 아이디가 있을 시 출금 진행
		if (user[i].account_id == account_ID) {
			cout << "Deposit Money : ";
			cin >> deposit_Moeny;
			user[i].money += deposit_Moeny;
			cout << "Deposit Success" << endl;
			cout << "Go Main Menu....";
			cin >> user_input;
			system("cls");
		}
		// 동일한 아이디가 없을 시 메인 메뉴로 이동
		else {
			cout << "Can't Find Your ID...." << endl;
			cout << "Go Main Menu....";
			cin >> user_input;
			system("cls");
		}
	}
}

// Deposit 과 기능이 비슷한데 뭔가 좀 더 간결하게 바꿀 방법이 있을것 같다.
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


// 고객 수 만큼 반복하여 해당 인덱스에 있는 클래스 변수에서 값 갖고 나옴
// 프로퍼티를 이용해서 캡슐화에 이점인 암호화를 더욱 부각했어야 한다. 변수가 public 으로 선언되면 안됨
void PrintAllAccountIfo(UserInforamtion *userinfo,int size) {
	cout << "[PrintAllAccountIfo]" << endl;
	size++;
	system("cls");
	cout << "================================================================" << endl;
	for (int i = 0; i < size; i++)
	{
		cout << endl;
		cout<<i+1<<" 번째 고객: " <<userinfo[i].account_id << endl;
		cout<<i+1<<" 번째 고객: " <<userinfo[i].client_name<< endl;
		cout<<i+1<<" 번째 고객: " <<userinfo[i].money << endl;
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
