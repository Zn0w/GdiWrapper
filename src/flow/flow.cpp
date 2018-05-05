#include "flow.h"

int CALLBACK WinMain
(
	HINSTANCE hInstance,
	HINSTANCE hPrevInstance,
	LPSTR lpCmdLine,
	int mCmdShow
)
{
	WNDCLASS window_class = {}; // Create window class struct and initialize every var to 0

    window_class.style;
    window_class.lpfnWndProc;
    window_class.hInstance = hInstance;
    //window_class.hIcon;
    //window_class.hCursor;
    //window_class.hbrBackground;
    //window_class.lpszMenuName;
    window_class.lpszClassName = "test_window_1";

	MessageBox(0, "This in just a test!", "Testing", MB_OK | MB_ICONINFORMATION);

	return 0;
}