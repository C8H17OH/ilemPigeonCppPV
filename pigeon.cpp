#include <stdio.h>
#include <cstdlib>
#include <windows.h>
const int L=9,Y=2,W=7,color[]={W,Y,Y,Y,Y,Y,Y,Y,Y,L,Y,L,Y,L,Y,L,Y,L,Y,L,Y,L,Y,L,Y,W,Y,Y,Y,Y,Y,W,Y,Y,L,Y,W,W,W};
const char lyric[][32]={
	"����\nilem\n������\n�Ժ�\n",
	"���е��ð","װ�����ܳ�",
	"ͻȻ�޵���","�и���Ҫ��",
	"ǰ��ûʱ��","����û���",
	"����������","�����ٿ���",
	"���Ͼͺ�","���Ϻ� ���Ϻ� ���Ϻ� ����",
	"�����ܽ�","���콻 ���콻 ���콻 ����",
	"������˼","�汧Ǹ �汧Ǹ �汧Ǹ ��Ǹ",
	"��ĵ���","����������������",
	"�ٵȼ���","���Ϻ� ���Ϻ� ���Ϻ� ����",
	"�Ͳ�һ��","���콻 ���콻 ���콻 ����",
	"���һ��","�汧Ǹ �汧Ǹ �汧Ǹ ��Ǹ",
	"����ʯ��","����������������",
	"\nBreak\n",
	"�ֻ������","�·�Ҳ�ÿ�",
	"Ⱥ���Ļ���","����������",
	"����","tan90��","����û״̬",
	"���緢����","�����㷢����������","���Ϲ��ÿ�",
	"\nʣ�µ���Ļ�Ƚ�����PV��˵8","�������",""
},sign[]="ԭ����av39330059\nDOSV��C8H17OH\n\
��ʲ�����������ٿƣ�https://zh.moegirl.org/����(ilem)����\n\
�����������ء�֪ʶ���� ����-����ҵ��ʹ��-��ͬ��ʽ���� 3.0��Э�顣\n\n";
int main()
{
	for(int i=0;i<=38;i++)
	{
		HANDLE hConsole=GetStdHandle((STD_OUTPUT_HANDLE));
    	SetConsoleTextAttribute(hConsole,color[i]);
    	printf(lyric[i]);
    	if(i==30)
    	{
    		HANDLE hConsole=GetStdHandle((STD_OUTPUT_HANDLE));
    		SetConsoleTextAttribute(hConsole,color[++i]);
    		printf(lyric[i]);
		}
    	getchar();
	}
	printf(sign);
	system("pause");
	return 0;
}
