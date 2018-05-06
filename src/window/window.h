#pragma once

#include <windows.h>

LRESULT CALLBACK PrimaryWindowCallback
(
	HWND   window,
	UINT   message,
	WPARAM wParam,
	LPARAM lParam
);

int CALLBACK WinMain
(
	HINSTANCE hInstance,
	HINSTANCE hPrevInstance,
	LPSTR lpCmdLine,
	int mCmdShow
);

namespace zn
{
	/*struct Window
	{
		WNDCLASS window_class = {};
	};*/
}