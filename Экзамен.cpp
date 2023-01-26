//Назаретян Агаси
#include <iostream>
#include <fstream> 
#include <string> 
#include <Windows.h> 
#include <time.h>
using namespace std;
//class Game 
//{
//	string gen;
//	string hair;
//	string strFemPants;
//	string strMalePants;
//	int fempants;
//	int malepants;
//	int femshoe;
//public:
//};
//
//class Female {
//	string strFemPants;
//	string strFemShoe;
//	int fempants;
//	int femshoe;
//public:
//	void femaleRandom()
//	{
//		fempants = rand() % 3 + 1;
//		femshoe = rand() % 3 + 1;
//	}
//
//	void femClothes()
//	{
//		if (fempants == 1)
//		{
//			strFemPants = "Платье_в_пол";
//		}
//
//		else if (fempants == 2)
//		{
//			strFemPants = "Брюки";
//		}
//
//		else if (fempants == 3)
//		{
//			strFemPants = "Джинсы";
//		}
//
//		if (fempants != 1)
//		{
//			if (femshoe == 1)
//			{
//				strFemShoe == "Блузка";
//			}
//
//			else if (femshoe == 2)
//			{
//				strFemShoe == "Рубашка";
//			}
//
//			else if (femshoe == 3)
//			{
//				strFemShoe == "Футболка";
//			}
//		}
//	}
//};
//
//class Male {
//	int malepants;
//	int maleshoe;
//	int malesneakers;
//	int malehair;
//	int maleskin;
//
//	string strMaleSneakers;
//	string strMalePants;
//	string strMaleShoe;
//	string strMaleHair;
//	string strMaleSkin;
//	string maleTorso = "Мужской";
//public:
//	void maleRandom()
//	{
//		malepants = rand() % 2 + 1;
//		maleshoe = rand() % 2 + 1;
//		malesneakers = rand() % 3 + 1;
//		malehair = rand() % 4 + 1;
//		maleskin = rand() % 3 + 1;
//	}
//
//	void maleHair() 
//	{
//		if (malehair == 1)
//		{
//			strMaleHair == "Унисекс_короткая_прическа";
//		}
//
//		else if (malehair == 2)
//		{
//			strMaleHair == "Унисекс_конский_хвост";
//		}
//
//		else if (malehair == 3)
//		{
//			strMaleHair == "Мужская_длинная_прическа";
//		}
//
//		else if (malehair == 4)
//		{
//			strMaleHair == "Мужская_короткая_прическа";
//		}
//	}
//
//	void maleClothes()
//	{
//		if (malepants == 1)
//		{
//			strMalePants = "Брюки";
//		}
//
//		else if (malepants == 2)
//		{
//			strMalePants = "Джинсы";
//		}
//		
//		if (maleshoe == 1)
//		{
//			strMaleShoe == "Рубашка";
//		}
//
//		else if (maleshoe == 2)
//		{
//			strMaleShoe == "Футболка";
//		}
//	}
//
//	void maleSneakers()
//	{
//		if (malesneakers == 1)
//		{
//			strMaleSneakers == "Кроссовки";
//		}
//
//		else if (malesneakers == 2)
//		{
//			strMaleSneakers == "Ботинки";
//		}
//
//		else if (malesneakers == 3)
//		{
//			strMaleSneakers == "Туфли";
//		}
//	}
//
//	void skinColor() 
//	{
//		if (maleskin == 1)
//		{
//			strMaleSkin == "#FFDCB1";
//		}
//
//		else if (maleskin == 2)
//		{
//			strMaleSkin == "#E4B98E";
//		}
//
//		else if (maleskin == 3)
//		{
//			strMaleSkin == "#EABD9D";
//		}
//	}
//
//	void clothesColor()
//	{
//
//	}
//};
class NPC {
	string gender;
	string hair;
	string cosmetica;
	string torso;
	string clothes;
	string shoes;
	string skinColor;
	string color;

	int inthair;
	int intcosmetica;
	int intclothes;
	int intshoes;
	int intskinColor;
	int intcolor;
public:
	NPC(string gender)
	{
		this->gender = gender;
		this->torso = gender;
	}

	void random()
	{

	}

	void maleClothes()
	{
		string str;
		fstream clothes;
		clothes.open("Clothes.txt");
		string* arrayStr2;
		string s2;
		while (!clothes.eof())
		{
			s2 = "";
			clothes >> s2;
			if (s2 == "У" or s2 == "М")
			{
				while (!clothes.eof())
				{
					for (int i = 0; i < 100; i++)
					{
						s2 = "";
						clothes >> arrayStr2[i];
						if (arrayStr2[i] == ",")
						{
							i = 101;
						}
					}
				}
			}
		}


	}

	void randomSS()
	{
		fstream clothes;
		clothes.open("Haircut.txt");
		int a = rand() % 7 + 1;
		string s;
		int n = 0;
			/*for (int i = 0; i < a + 1;)
			{
				s = "";
				clothes >> s;
				if (s == "\n")
				{
					i++;
				}

				if (i == a)
				{
					while (s != ",")
					{
						clothes >> s;
						n++;
					}
				}
			}

			string* stroki;
			for (int i = 0; i < n; i++)
			{
				s = "";
				clothes >> stroki[i];

				if (stroki[i] == "М" or stroki[i] == "М")
				{

				}
			}
		}*/

			string* arrayStr;
			while (!clothes.eof())
			{
				s = "";
				clothes >> s;
				if (s == "У" or s == "М")
				{
					while (!clothes.eof())
					{
						for (int i = 0; i < 100; i++)
						{
							s = "";
							clothes >> arrayStr[i];
							if (arrayStr[i] == ",")
							{
								i = 101;
							}
						}
					}
				}
			}
};

int main() 
{
	srand(time(NULL));
	NPC npc("Мужской");
}





//#include <iostream> 
//#include <fstream> 
//#include <string> 
//#include <Windows.h> 
//using namespace std;
//int main() {
//    fstream fs;
//    string name = "try.txt";
//    fs.open(name, fstream::out | fstream::in | fstream::app);
//
//    if (fs.is_open())
//    {
//        int ch;
//        string str;
//        cout << "Do choice: ";
//        cin >> ch;
//        if (ch == 1)
//        {
//            SetConsoleCP(1251);
//            cout << "Enter: "; cin >> str;
//            fs << str << endl;
//            SetConsoleCP(866);
//        }
//
//        else if (ch == 2)
//        {
//
//            while (!fs.eof())
//            {
//                str = "";
//                fs >> str;
//                cout << str << endl;
//            }
//        }
//    }
//
//    else
//    {
//        cout << "ERROR!";
//    }
//