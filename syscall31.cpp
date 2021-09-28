#include <Windows.h>
#include <stdio.h>
#include <iostream>
#include <string>

using namespace std;

int main()
{
	HANDLE myFile = CreateFileA
	(
		"testText.txt",
		GENERIC_READ,
		0,
		NULL,
		OPEN_EXISTING,
		FILE_ATTRIBUTE_NORMAL,
		NULL
	);
	if (myFile == INVALID_HANDLE_VALUE)
	{
		printf("failed to open file");
	}

	//TCHAR buffr[20];
	constexpr size_t bufSize = 256;
	char buffr[bufSize];
	DWORD dwbytestoread = 255;
	DWORD dwbytesread = 0;

	BOOL secc = ReadFile(
		myFile,
		(void*)buffr,
		dwbytestoread,
		&dwbytesread,
		NULL);

	if (dwbytesread > 0)
	{
		buffr[dwbytesread] = '\0';
		cout <<"file content: " << buffr << endl;
	}

	CloseHandle(myFile);
	return 0;
}

