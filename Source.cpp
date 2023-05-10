#include<iostream>
#include<io.h>
using namespace std;
int main()
{
	struct _finddata_t fileinfo;
	char path[200];
	char mask[20];
	cout << "enter full path(for example, D:\):\n";
	cin >> path;
	cout << "Enter mask (for example, *.* or *.txt)";
	cin >> mask;
	strcat_s(path, mask);
	long done = _findfirst(path, &fileinfo);
	long buf=done;
	while (done != -1)
	{
		cout << fileinfo.name << endl;
		buf = _findnext( buf,&fileinfo);
	}
	_findclose;
	return 0;
}