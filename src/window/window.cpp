#include "window.h"

LRESULT CALLBACK PrimaryWindowCallback
(
	HWND   window,
	UINT   message,
	WPARAM wParam,
	LPARAM lParam
)
{
    LRESULT result = 0;
    
    switch (message)
    {
        case WM_SIZE:       // Window resize
        {

        } break;

        case WM_DESTROY:    // System closes window
        {

        } break;

        case WM_CLOSE:      // User closes window
        {

        } break;

        case WM_ACTIVATEAPP:    // User clicks on window
        {

        } break;

        default:            // Nothing of the above happened
        {
            result = DefWindowProc(window, message, wParam, lParam); // Handle whatever the message is the windows' 
                                                                     //default way
        } break;
    }

    return result;
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