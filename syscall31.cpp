#include <Windows.h>
#include <stdio.h>
#include <iostream>
#include <string>

using namespace std;

int main()
{
	HANDLE myFile = CreateFileA
	(
		"testText.txt", // file name 
		GENERIC_READ,
		0, //default
		NULL,
		OPEN_EXISTING,
		FILE_ATTRIBUTE_NORMAL,
		NULL
	);
	if (myFile == INVALID_HANDLE_VALUE) // if cant didnt open file
	{
		printf("failed to open file");
	} 

	
	constexpr size_t bufSize = 256;
	char buffr[bufSize];
	DWORD dwbytestoread = 255;
	DWORD dwbytesread = 0;

	BOOL secc = ReadFile( 
		myFile,		//handle
		(void*)buffr,	 // buffer
		dwbytestoread, 
		&dwbytesread,
		NULL
	);

	if (dwbytesread > 0) // if it has read the file 
	{
		buffr[dwbytesread] = '\0'; // remove null at the end (null terminator)
		cout <<"file content: " << buffr << endl;
	}

	CloseHandle(myFile); // close 
	return 0;
}

