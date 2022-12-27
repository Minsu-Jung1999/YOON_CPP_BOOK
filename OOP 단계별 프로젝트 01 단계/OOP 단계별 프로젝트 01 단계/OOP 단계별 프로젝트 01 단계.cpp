#include <iostream>
#include "BankSystem.h"
using namespace std;
int main()
{

	int user_choice = 0;							// switch 문에서 유저 입력을 위해 선언
	int accounter_number = 0;						// 고객수 전달해 줄 변수

	UserInforamtion client[50];						// 유저 정보에 필요한 클래스를 갖고 있는 변수 배열, 최대 50개

	while (user_choice!=5)							// 5 입력시 종료,
	{
		MenuScreen();
		cin >> user_choice;
		switch (user_choice)						// switch 문으로 가독성 증가 하지만 if 문보다 다소 느릴 수 있음
		{
		case 1:
			client->MakeAccount(client, accounter_number);		// client 를 넘겨주면서 배열에 처음 요소에 주소 즉 배열을 통채로 넘겨준다.
			accounter_number++;									// 새로 만들었을 때만 고객수 증가
			break;
		case 2:
			client->Deposit(client, accounter_number);	
			break;
		case 3:
			client->Withdraw(client, accounter_number);
			break;
		case 4:
			PrintAllAccountIfo(client, accounter_number-1);		// 계좌 개설후 수가 증가하므로 -1 해서 널값 삭제
			break;
		case 5:
			break;
		default:
			break;
		}
	}
}
