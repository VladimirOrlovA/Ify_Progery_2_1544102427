#include<stdio.h>
#include<iostream>
#include<cmath>
#include<locale.h>


void PYTHON() { printf("\n ��������� ������� ���� ���������������� - PYTHON \n\n"); }
void JAVA() { printf("\n ��������� ������� ���� ���������������� - JAVA \n\n"); }
void C() { printf("\n ��������� ������� ���� ���������������� - C \n\n"); }
void PHP() { printf("\n ��������� ������� ���� ���������������� - PHP \n\n"); }
void CPP() { printf("\n ��������� ������� ���� ���������������� - C++ \n\n"); }
void JAVASCRIPT() { printf("\n ��������� ������� ���� ���������������� - JAVASCRIPT \n\n"); }
void CSHARP() { printf("\n ��������� ������� ���� ���������������� - C# \n\n"); }
void RUBY() { printf("\n ��������� ������� ���� ���������������� - RUBY \n\n"); }
void OBJECTIVEC() { printf("\n ��������� ������� ���� ���������������� - OBJECTIVE-C \n\n"); }

void Microsoft()
{
	int choise;
	printf("\n ��� ������� � Microsoft? \n (1) ����� ��� \n (2) ������� \n (3) ����\n");
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
	printf("\n ���� ������� �������? \n (1) Lego \n (2) ��������� \n (3) ����������, �� ������� ����� \n");
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
	printf("\n������ ����������� ���-�� �����, �� �� ����� ����������?\n (1) �� \n (2) ��� \n (3) �� ���� \n");
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
	printf("\n ���� �������� ��... \n (1) ����������\n (2) �������\n");
	scanf_s("%d", &choise);

	switch (choise)
	{
	case 1: {Microsoft(); } break;
	case 2: {wanttotrynew(); }break;

	default:
		break;
	}
}

void wantwork() // (1) � ���� �������� � ������� IT ��������
{
	int choise;
	printf("\n�������� ��������:\n (1)Facebook\n (2)Google\n (3)Microsoft\n (4)Apple \n");
	scanf_s("%d", &choise);

	switch (choise)
	{
	case 1: {printf("\n��� ������ � Facebook ��� ���������� ������� ���� ����-� PYTHON\n\n"); } break;
	case 2: {printf("\n��� ������ � Google ��� ���������� ������� ���� ����-� PYTHON\n\n"); } break;
	case 3: {printf("\n��� ������ � Microsoft ��� ���������� ������� ���� ����-� C#\n\n"); } break;
	case 4: {printf("\n��� ������ � Aple ��� ���������� ������� ���� ����-� C\n\n"); } break;

	default:
		break;

	}

}

void web()
{
	int choise;
	printf("\n (1) �������� (���-���������) \n (2) ������ (��, ��� �� ���������) \n (3) ��� ������ ����� �������� � �������� ������� ��� Twitter? (1) �� / (2) ���\n");
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
	printf("\n ����� OS\n (1) iOS\n (2) Android \n");
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
	printf("\n����� ������� �������? \n (1) �������\n (2) ������ \n");
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
	printf("\n��� �������� ������� \n (1) ������� ��������\n (2) ������ ��������\n (3) ����������� ��������\n (4) ����� ������� ���� (�� ����� ����� �����)\n");
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
	printf("\n����� ���������/�����? \n (1) � ���� �������� � ������� IT ��������\n (2) � ������ ���� $$$\n (3) ���\n (4) ����.����\n (5) ���������\n (6) 3D/���� \n");
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


void why1()	// (1)����������
{
	int choise;
	printf("\n����������:\n (1) ����� ������\n (2) � ���� ���� ���� ��� ��������!\n");
	scanf_s("%d", &choise);

	switch (choise)
	{
	case 1: {work(); } break;
	case 2: {work(); } break;

	default:
		break;
	}
}

void why2()	// (2)������������ (3)��������� (4)������������
{
	int choise;
	printf("\n��� ���� ���� �� �������? \n (1) �� \n (2) ��� ������ ���� ������ \n");
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

	printf("\n����� �� ������ ������� ����������������:\n (1)����������\n (2)������������\n (3)���������\n (4)������������\n (5)��� �����\n (6)� �� ���� �������� �� ����\n");
	scanf_s("%d", &choise);


	switch (choise)
	{
	case 1: {why1(); } break;	// ����� ��� (1)����������,
	case 2: {why2(); } break;	// ����� ��� (2)������������,
	case 3: {why2(); } break;	// ����� ��� (3)���������,
	case 4: {why2(); } break;	// ����� ��� (4)������������,
	case 5: {printf("\n ������� �� Scrath, �����... \n"); PYTHON(); } break;	// ����� ��� (5)��� �����,
	case 6: {PYTHON(); } break;	// ����� ��� (6)� �� ���� �������� �� ����"

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

