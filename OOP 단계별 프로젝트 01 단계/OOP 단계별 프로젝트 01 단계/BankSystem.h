#pragma once



class UserInforamtion {

public:
	int money;												// 고객 금액
	unsigned int account_id;								// 고객 아이디 -> 고객 식별을 위해 사용
	char client_name[50];									// 고객 이름 저장

public:

	UserInforamtion();										// 생성자 -> 데이터 초기화 근데 지금은 없어도 될 듯 
	void MakeAccount(UserInforamtion *user,int size);		// 계좌계설
	void Deposit(UserInforamtion* user,int size);			// 출금
	void Withdraw(UserInforamtion* user, int size);			// 입금

	~UserInforamtion();										// 생성했으면 삭제도 해 줘야 GC 가 발생하지 않는다.
};

void MenuScreen();											// 메뉴 화면
void PrintAllAccountIfo(UserInforamtion *userinfo,int size);// 모든 고객 정보 확인하기

