#include <iostream>
using namespace std;

int BoxVolume(int length, int width, int height) {
	return length * width * height;
}

int BoxVolume(int length, int width) {
	return length * width;
}

int BoxVolume(int length) {
	return length;
}


int main()
{
	cout << BoxVolume(3,3,3)<<endl;
	cout << BoxVolume(5,5)<<endl;
	cout << BoxVolume(7)<<endl;
}

