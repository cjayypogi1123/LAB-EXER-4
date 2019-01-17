#include <iostream>
using namespace std;

int main()
{
	int num[5],*ptr =num; 
	
	cout<<"Choose your 5 Integers:"<<endl;
	cin>>num[0]>>num[1]>>num[2]>>num[3]>>num[4];
	
	cout<<"Your Five Integers:"<<endl;
	for(int i = 0;i < 5; i++)
	{
		cout<< *ptr << endl;
		ptr++;
	} 

}
