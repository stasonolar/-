//#include <iostream>
//#include <Windows.h>
//
//using namespace std;
//
//
//typedef struct {
//	int day;
//	int month;
//	int year;
//	int yearday;
//	char mon_name[5];
//}date;
//
//	int main()
//{
//		system("chcp 1251>null");
//
//		SetConsoleCP(1251);
//		SetConsoleOutputCP(1251);
//		//приклад 1
//	    date bday = {03,10,2024,4," Жовтень" };
//		cout << bday.day << ' ' << bday.month << ' ' << bday.year << ' ' << bday.yearday << ' ' << bday.mon_name << endl;
//		//приклад 2
//		date bday2; 
//		cout << "Введіть день/місяць/рік/номер дня/назва місяця" << endl;
//		cin >> bday2.day >> bday2.month >> bday2.year >> bday2.yearday >> bday2.mon_name;
//		cout << bday2.day << ' ' << bday2.month << ' ' << bday2.year << ' ' << bday2.yearday << ' ' << bday2.mon_name << endl;
//}

//#include <iostream>
//#include <Windows.h>
//
//using namespace std;
//
//struct site {
//	float adertise;
//	float click;
//	float average;
//};
//
//void inputInfo(site &web) {
//	cout << "Кіл-сть оголошень / відсоток натисків / середнє натискання на оголошення\n";
//	cin >> web.adertise >> web.click >> web.average;
//}
//
//void res(site& web) {
//	float many;
//	many = web.adertise * (web.click / 100) * web.average;
//	cout << "Прибуток сайту за день " << many << endl;
//	cout << "Дані з кіл оголошень / натисків / та середього натискання" << endl;
//	cout << web.adertise << ' ' << web.click << ' ' << web.average << ' ' << endl;
//}
//
//int main()
//{
//	SetConsoleCP(1251);
//	SetConsoleOutputCP(1251);
//	site web;
//	inputInfo(web);
//	res(web);
//	
//	return 0;
//}


#include <iostream>
#include <Windows.h>

using namespace std;
