#include <iostream>
#include <string>

using namespace std;

class student
{
public:

	string name;
	string num;
	void print(string name, string num)
	{
		cout << name << " " << num << endl;
	}
	void setname(string s_name)
	{
		name = s_name;
	}
};

int main()
{
	student stu1;

	string name;
	cin >> name;
	string num;
	cin >> num;
	stu1.name = name;
	stu1.num = num;
	stu1.print(name, num);

	student stu2;
	string num2;
	cin >> num2;
	stu2.num = num2;
	stu2.setname("ÕÅÈı");
	cout << stu2.num << stu2.name << endl; 


	system("pause");
	return 0;
}
