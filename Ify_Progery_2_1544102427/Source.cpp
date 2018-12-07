#include<stdio.h>
#include<iostream>
#include<cmath>
#include<locale.h>


void PYTHON() { printf("\n Начинайте изучать язык программирования - PYTHON \n\n"); }
void JAVA() { printf("\n Начинайте изучать язык программирования - JAVA \n\n"); }
void C() { printf("\n Начинайте изучать язык программирования - C \n\n"); }
void PHP() { printf("\n Начинайте изучать язык программирования - PHP \n\n"); }
void CPP() { printf("\n Начинайте изучать язык программирования - C++ \n\n"); }
void JAVASCRIPT() { printf("\n Начинайте изучать язык программирования - JAVASCRIPT \n\n"); }
void CSHARP() { printf("\n Начинайте изучать язык программирования - C# \n\n"); }
void RUBY() { printf("\n Начинайте изучать язык программирования - RUBY \n\n"); }
void OBJECTIVEC() { printf("\n Начинайте изучать язык программирования - OBJECTIVE-C \n\n"); }

void Microsoft()
{
	int choise;
	printf("\n Что скажите о Microsoft? \n (1) Люблю его \n (2) Неплохо \n (3) Фууу\n");
	scanf_s("%d", &choise);

	switch (choise)
	{
	case 1: {CSHARP(); }break;
	case 2: {JAVA(); }break;
	case 3: {JAVA(); }break;

	default:
		break;
	}
}

void toy()
{
	int choise;
	printf("\n Ваша любимая игрушка? \n (1) Lego \n (2) Пластилин \n (3) Старенький, но любимый мишка \n");
	scanf_s("%d", &choise);

	switch (choise)
	{
	case 1: {PYTHON(); } break;
	case 2: {RUBY(); } break;
	case 3: {PHP(); } break;

	default:
		break;
	}
}

void wanttotrynew()
{
	int choise;
	printf("\nХотите попробовать что-то новое, но не очень трудоемкое?\n (1) Да \n (2) Нет \n (3) Не знаю \n");
	scanf_s("%d", &choise);

	switch (choise)
	{
	case 1: {JAVASCRIPT(); } break;
	case 2: {toy(); } break;
	case 3: {toy(); } break;

	default:
		break;
	}
}

void yesno()
{
	int choise;
	scanf_s("%d", &choise);

	switch (choise)
	{
	case 1: {JAVASCRIPT(); }break;
	case 2: {wanttotrynew(); }break;

	default:
		break;
	}
}

void want()
{
	int choise;
	printf("\n Хочу работать на... \n (1) Корпорацию\n (2) Стартап\n");
	scanf_s("%d", &choise);

	switch (choise)
	{
	case 1: {Microsoft(); } break;
	case 2: {wanttotrynew(); }break;

	default:
		break;
	}
}

void wantwork() // (1) Я хочу работать в крупной IT компании
{
	int choise;
	printf("\nВыберите компанию:\n (1)Facebook\n (2)Google\n (3)Microsoft\n (4)Apple \n");
	scanf_s("%d", &choise);

	switch (choise)
	{
	case 1: {printf("\nДля работы в Facebook Вам необходимо изучить язык прог-я PYTHON\n\n"); } break;
	case 2: {printf("\nДля работы в Google Вам необходимо изучить язык прог-я PYTHON\n\n"); } break;
	case 3: {printf("\nДля работы в Microsoft Вам необходимо изучить язык прог-я C#\n\n"); } break;
	case 4: {printf("\nДля работы в Aple Вам необходимо изучить язык прог-я C\n\n"); } break;

	default:
		break;

	}

}

void web()
{
	int choise;
	printf("\n (1) Фронтэнд (веб-интерфейс) \n (2) Бэкенд (то, что за вебсайтом) \n (3) Ваш сервис будет работать в реальном времени как Twitter? (1) Да / (2) Нет\n");
	scanf_s("%d", &choise);

	switch (choise)
	{
	case 1: {JAVASCRIPT(); } break;
	case 2: {want(); } break;
	case 3: {yesno(); } break;

	default:
		break;

	}
}

void mobile()
{
	int choise;
	printf("\n Какая OS\n (1) iOS\n (2) Android \n");
	scanf_s("%d", &choise);

	switch (choise)
	{
	case 1: {C(); } break;
	case 2: {JAVA(); } break;

	default:
		break;
	}
}

void gearcase()
{
	int choise;
	printf("\nКакая коробка передач? \n (1) Автомат\n (2) Ручная \n");
	scanf_s("%d", &choise);

	switch (choise)
	{
	case 1: {JAVA(); } break;
	case 2: {C(); } break;

	default:
		break;
	}
}

void study()
{
	int choise;
	printf("\nМне нравится учиться \n (1) Простым способом\n (2) Лучшим способом\n (3) Трудненьким способом\n (4) Очень сложный путь (но потом будет легче)\n");
	scanf_s("%d", &choise);

	switch (choise)
	{
	case 1: {PYTHON(); } break;
	case 2: {PYTHON(); } break;
	case 3: {gearcase(); } break;
	case 4: {CPP(); } break;

	default:
		break;
	}

}


void work()
{
	int choise;
	printf("\nКакая платформа/сфера? \n (1) Я хочу работать в крупной IT компании\n (2) Я просто хочу $$$\n (3) Вэб\n (4) Корп.софт\n (5) Мобильная\n (6) 3D/Игры \n");
	scanf_s("%d", &choise);


	switch (choise)
	{
	case 1: {wantwork(); } break;
	case 2: {JAVA(); } break;
	case 3: {web(); } break;
	case 4: {Microsoft(); } break;
	case 5: {mobile(); } break;
	case 6: {C(); } break;

	default:
		break;

	}
}


void why1()	// (1)Заработать
{
	int choise;
	printf("\nЗаработать:\n (1) Найти работу\n (2) У меня есть идея для стартапа!\n");
	scanf_s("%d", &choise);

	switch (choise)
	{
	case 1: {work(); } break;
	case 2: {work(); } break;

	default:
		break;
	}
}

void why2()	// (2)Саморазвитие (3)Интересно (4)Поразвлечься
{
	int choise;
	printf("\nУже есть идея на миллион? \n (1) Да \n (2) Нет просто хочу начать \n");
	scanf_s("%d", &choise);

	switch (choise)
	{
	case 1: {work(); } break;
	case 2: {study(); } break;
	default:
		break;
	}

}

void why3()
{

}

void why4()
{

}


void main()
{
	int choise;
	int flag;

	setlocale(LC_ALL, "");
	
start:

	printf("\nЗачем Вы хотите изучить программирование:\n (1)Заработать\n (2)Саморазвитие\n (3)Интересно\n (4)Поразвлечься\n (5)Для детей\n (6)Я не знаю выберите за меня\n");
	scanf_s("%d", &choise);


	switch (choise)
	{
	case 1: {why1(); } break;	// выбор для (1)Заработать,
	case 2: {why2(); } break;	// выбор для (2)Саморазвитие,
	case 3: {why2(); } break;	// выбор для (3)Интересно,
	case 4: {why2(); } break;	// выбор для (4)Поразвлечься,
	case 5: {printf("\n Начните со Scrath, затем... \n"); PYTHON(); } break;	// выбор для (5)Для детей,
	case 6: {PYTHON(); } break;	// выбор для (6)Я не знаю выберите за меня"

	default:
		break;

	}

	printf("\n\nDo You want to continue? set 0 or 1 =>  ");
	scanf_s("%d", &flag);
	

	if (flag == 1)
		goto start;

		printf("\nGoodbue\n\n");

	system("pause");
}

