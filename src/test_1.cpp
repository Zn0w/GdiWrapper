#include <windows.h>

/*
typedef struct tagWNDCLASS {
  UINT      style;            - The class style(s). This member can be any combination of the Class Styles.
  WNDPROC   lpfnWndProc;		  - A pointer to the window procedure. You must use the CallWindowProc function to call 
                                the window procedure. For more information, see WindowProc.
  int       cbClsExtra;			  - The number of extra bytes to allocate following the window-class structure. The system 
                                initializes the bytes to zero.
  int       cbWndExtra;       - The number of extra bytes to allocate following the window instance. The system 
                                initializes the bytes to zero. If an application uses WNDCLASS to register a dialog box 
                                created by using the CLASS directive in the resource file, it must set this member to 
                                DLGWINDOWEXTRA.
  HINSTANCE hInstance;
  HICON     hIcon;
  HCURSOR   hCursor;
  HBRUSH    hbrBackground;
  LPCTSTR   lpszMenuName;
  LPCTSTR   lpszClassName;
} WNDCLASS, *PWNDCLASS;
*/

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