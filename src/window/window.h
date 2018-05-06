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
	enum CloseOperation
	{
		DISPOSE,
		EXIT,
		FREEZE // ???
	};
	
	struct Window
	{
		bool resizable;
		CloseOperation close_operation;
	};
}