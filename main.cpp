#include <iostream>

using namespace std;

int main()
{
	// Code created by CoolName#7938 Discord for contact!
	cout<<"Made by CoolName#7938 using C++ Enjoy!"<<endl;
	cout<<"Enter the amount of codes you want: ";
	int number;
	scanf("%d",&number);
	int counter = 0;
	while(counter <=number)
	{
		const char gen_set[] = "abcdefghijklmnopqstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ0123456789";
		int stringLength = sizeof(gen_set) - 1;

		int length = 16;
		int rNum;

		string output = "https://discord.gift/";


		for (int i = 1; i <= length; i++) {

			rNum = rand() % stringLength;
			output += gen_set[rNum];
		}
		cout<<output<<endl;
		counter++;

	}
	system("pause");
}
