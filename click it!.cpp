#include <bits/stdc++.h>
#include <Windows.h>
#define newline printf ("\n")
#define space printf (" ")
#define cinfalse ios::sync_with_stdio(false)
#define min(a, b) (a)>(b)?(b):(a)
#define max(a, b) (a)<(b)?(b):(a)
#define abs(a) (a)<0?(-(a)):(a)
#define rint register int
using namespace std;

int x;
int main()
{
	printf ("[ϵͳ]�����ĵ������ڹػ���\n����ȡ�����밴��1�������밴2\n");
	system ("shutdown -s");
	cin >> x;
	if (x == 1)
	{
		system ("shutdown -a");
		Sleep (1000); 
		system ("shutdown -s");
		printf ("���ã��������������ˣ�\n");
		printf ("[ϵͳ]:���ĵ��Խ���1min�ڹػ�\n"); 
		printf ("[ϵͳ]:����������!\n");
		while (x > -10)
			printf ("[ϵͳ]:���ĵ��Խ���1min�ڹػ�\n"), Sleep(10), x --; 
		system ("pause");
		printf ("[ϵͳ]:��������ô�����ĵķ���\n");
		printf ("[ϵͳ]:ע����ȡ��\n");
		system ("shutdown -a");
		Sleep(1000);
		return 0; 
	}
	else if (x != -1)
		system ("shutdonw -f");
	else
	{
		system ("shutdown -a");
		printf ("[ϵͳ]:�ػ���ȡ��\n");
		for (int i = 0; i < 100; i ++)
			printf ("[ϵͳ]:���ĵ��Խ���1min�ڹػ�\n"), Sleep(19); 
		return 0; 
	}
    return 0;
}

