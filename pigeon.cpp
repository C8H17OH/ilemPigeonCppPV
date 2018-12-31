#include <stdio.h>
#include <cstdlib>
#include <windows.h>
const int L=9,Y=2,W=7,color[]={W,Y,Y,Y,Y,Y,Y,Y,Y,L,Y,L,Y,L,Y,L,Y,L,Y,L,Y,L,Y,L,Y,W,Y,Y,Y,Y,Y,W,Y,Y,L,Y,W,W,W};
const char lyric[][32]={
	"鸽子\nilem\n洛天依\n言和\n",
	"我有点感冒","装修声很吵",
	"突然修电脑","有个试要考",
	"前天没时间","昨天没灵感",
	"今天是死线","明天再看看",
	"马上就好","马上好 马上好 马上好 马上",
	"明天能交","明天交 明天交 明天交 明天",
	"不好意思","真抱歉 真抱歉 真抱歉 抱歉",
	"天荒地老","咕咕咕咕咕咕咕咕",
	"再等几天","马上好 马上好 马上好 马上",
	"就差一点","明天交 明天交 明天交 明天",
	"最后一晚","真抱歉 真抱歉 真抱歉 抱歉",
	"海枯石烂","咕咕咕咕咕咕咕咕",
	"\nBreak\n",
	"手机真好玩","新番也好看",
	"群里聊会天","快乐似神仙",
	"早上","tan90°","中午没状态",
	"下午发发呆","（看你发呆而发呆）","晚上过得快",
	"\n剩下的字幕等教主有PV再说8","明天就做",""
},sign[]="原作：av39330059\nDOSV：C8H17OH\n\
歌词部分引自萌娘百科（https://zh.moegirl.org/鸽子(ilem)），\n\
文字内容遵守【知识共享 署名-非商业性使用-相同方式共享 3.0】协议。\n\n";
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
