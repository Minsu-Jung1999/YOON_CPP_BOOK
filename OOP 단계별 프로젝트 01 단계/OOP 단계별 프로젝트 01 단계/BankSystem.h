#pragma once



class UserInforamtion {

public:
	int money;												// �� �ݾ�
	unsigned int account_id;								// �� ���̵� -> �� �ĺ��� ���� ���
	char client_name[50];									// �� �̸� ����

public:

	UserInforamtion();										// ������ -> ������ �ʱ�ȭ �ٵ� ������ ��� �� �� 
	void MakeAccount(UserInforamtion *user,int size);		// ���°輳
	void Deposit(UserInforamtion* user,int size);			// ���
	void Withdraw(UserInforamtion* user, int size);			// �Ա�

	~UserInforamtion();										// ���������� ������ �� ��� GC �� �߻����� �ʴ´�.
};

void MenuScreen();											// �޴� ȭ��
void PrintAllAccountIfo(UserInforamtion *userinfo,int size);// ��� �� ���� Ȯ���ϱ�

