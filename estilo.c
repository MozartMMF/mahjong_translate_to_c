#include<stdio.h>
#include<wchar.h>
#include<windows.h>
#include<conio.h>
#include"console.h"
#include"style.h"
#include"dificulty.h"


void printBars(int heitgh){
    gotoxy(1,1);
    wprintf(L"______________________________________________________________________________________________________________________________________________________");
    gotoxy(1,heitgh);
    wprintf(L"______________________________________________________________________________________________________________________________________________________");
}

void printMenuTittle(){
    gotoxy(50,5);
    wprintf(L"���+   ���+ �����+ ��+  ��+     ��+ ������+ ���+   ��+ ������+");
    gotoxy(50,6);
    wprintf(L"����+ �������+--��+���  ���     �����+---��+����+  �����+----+");
    gotoxy(50,7);
    wprintf(L"��+����+�������������������     ������   �����+��+ ������  ���+");
    gotoxy(50,8);
    wprintf(L"���+��++�����+--�����+--�����   ������   ������+��+������   ���");
    gotoxy(50,9);
    wprintf(L"��� +-+ ������  ������  ���+�����+++������++��� +�����+������++");
    gotoxy(50,10);
    wprintf(L"+-+     +-++-+  +-++-+  +-+ +----+  +-----+ +-+  +---+ +-----+ ");
}

void printDificultyTittle(){
    gotoxy(43, 5);
    wprintf(L"������+ ��+�������+��+ ������+��+   ��+��+     ������+  �����+ ������+ �������+");
    gotoxy(43, 6);
    wprintf(L"��+--��+�����+----+�����+----+���   ������     ��+--��+��+--��+��+--��+��+----+");
    gotoxy(43, 7);
    wprintf(L"���  �����������+  ������     ���   ������     ���  ��������������  ��������+  ");
    gotoxy(43, 8);
    wprintf(L"���  ��������+--+  ������     ���   ������     ���  �����+--������  �����+--+  ");
    gotoxy(43, 9);
    wprintf(L"������++������     ���+������++������++�������+������++���  ���������++�������+");
    gotoxy(43, 10);
    wprintf(L"+-----+ +-++-+     +-+ +-----+ +-----+ +------++-----+ +-+  +-++-----+ +------+");

}

void printMenuStyle(){
    printBars(25);
    printMenuTittle();
}

void printDificultyStyle(){
    printBars(25);
    printDificultyTittle();
}
void printGameStyle(){
    printBars(35);
}
