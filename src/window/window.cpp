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
            std::cout << "WM_SIZE" << std::endl;
        } break;

        case WM_DESTROY:    // System closes window
        {
            std::cout << "WM_DESTROY" << std::endl;
        } break;

        case WM_CLOSE:      // User closes window
        {
            std::cout << "WM_CLOSE" << std::endl;
        } break;

        case WM_ACTIVATEAPP:    // User clicks on window
        {
            std::cout << "WM_ACTIVATEAPP" << std::endl;
        } break;

        default:            // Nothing of the above happened
        {
            //OutputDebugStringA("default");
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

	// Open a window
    if (RegisterClass(&window_class))
    {
        HWND window_handle = CreateWindowEx(
            0,
            window_class.lpszClassName,
            "Debug Version Window",
            WS_OVERLAPPEDWINDOW | WS_VISIBLE,
            CW_USEDEFAULT,
            CW_USEDEFAULT,
            CW_USEDEFAULT,
            CW_USEDEFAULT,
            0,
            0,
            hInstance,
            0
        );

        if (window_handle)
        {
            MSG message;
            
            for (;;)
            {
                BOOL message_result = GetMessage(&message, 0, 0, 0);
                if (message_result > 0)
                {
                    TranslateMessage(&message);
                    DispatchMessage(&message);
                }
            }
        }
    }
    else
    {
        OutputDebugStringA("Failed to create a window");
    }

	return 0;
}

namespace zn
{

}