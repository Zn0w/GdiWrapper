#include "window.h"

LRESULT CALLBACK PrimaryWindowCallback
(
	HWND   window,
	UINT   message,
	WPARAM wParam,
	LPARAM lParam
)
{

}

int CALLBACK WinMain
(
	HINSTANCE hInstance,
	HINSTANCE hPrevInstance,
	LPSTR lpCmdLine,
	int mCmdShow
)
{
	WNDCLASS window_class = {}; // Create window class struct and initialize every var to 0

    //window_class.style;
    window_class.lpfnWndProc = PrimaryWindowCallback;
    window_class.hInstance = hInstance;
    //window_class.hIcon;
    //window_class.hCursor;
    //window_class.hbrBackground;
    //window_class.lpszMenuName;
    window_class.lpszClassName = "RootWindow";

	MessageBox(0, "This in just a test!", "Testing", MB_OK | MB_ICONINFORMATION);

	return 0;
}

namespace zn
{

}