#include"address.h"
//结构体
static person mp;

//主架构
int main()
{
	int chose;
	menu();
	cin >> chose;
	int HERE;
	switch (chose)
	{
	case 1:
		Add_Contact(mp);
	case 2:
		Show_contact();
		break;
	case 3:
	case 4:
	case 5:
	case 6:
	case 0:
		return 0;
	}

	system("pause");
	return 0;
}
