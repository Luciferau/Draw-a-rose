#include <graphics.h>
#include <conio.h>//_getch();
#include "rose.h"

#include <mmsystem.h>//mci��ͷ�ļ�
#pragma comment(lib,"winmm.lib")

 

void sayToYou();	//��ӡ���������

int main()
{
	initgraph(930, 530);

	sayToYou();
	drawRose();

	_getch();

	return 0;
}

//��ӡ���������
void sayToYou()
{
	int x = 550, y = 80;
	TCHAR story[13][100] = {
		_T("��һֱ��Ϊɽ��ˮ�Ĺ���"),
		_T("���Ƿ�Ĺ���"),
		_T("�����ҵĹ���"),
		_T("����ȴ��֪��"),
		_T("���ǲ�����Ĺ���"),
		_T("������Ժ�����һ��"),
		_T("����Ը��������е��ǹ�ȫ������"),
		_T("��Ϊ����۾�"),
		_T("���������������Ĺ�â"),
		_T(""),
		_T("��ϲ���㣡"),
		_T("\n"),
		_T("  ��Ů"),
	 
	};

	//����������ɫ����ɫ��
	settextcolor(RGB(0xdb, 0x70, 0x93));
	//settextcolor(RGB(219,112,147));

	//��������
	settextstyle(23, 0, _T("Matura MT Script Capitals"));//�ֺţ��ֿ�����


	//���鱳������
	mciSendString(_T("open background_warm_love.mp3 alias love"), 0, 0, 0);
	mciSendString(_T("play love repeat"), 0, 0, 0);//�ظ�����

	for (int i = 0; i < 13; i++)
	{
		if (i >= 10)
		{
			settextstyle(30, 0, _T("Matura MT Script Capitals"));
			settextcolor(RED);
			//settextcolor(RGB(255,0,0));

			outtextxy(x, y, story[i]);
			y += 25;
			continue;//��������ѭ��
		}
		outtextxy(x, y, story[i]);
		y += 25;
		Sleep(500);
	}
}