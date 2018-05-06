#pragma once

#include <windows.h>

namespace zn
{
	/*struct Window
	{
		WNDCLASS window_class = {};
	};*/

	extern WNDCLASS window_class;

	Window create_window(const char*, int, int);
}