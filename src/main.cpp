#include <windows.h>

int CALLBACK WinMain
(
	HINSTANCE hInstance,
	HINSTANCE hPrevInstance,
	LPSTR lpCmdLine,
	int mCmdShow
)
{
	MessageBox(0, "This in just a test!", "Testing", MB_OK | MB_ICONINFORMATION);

	return 0;
}