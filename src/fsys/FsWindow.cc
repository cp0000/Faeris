#include "fsys/FsWindow.h"
#include "graphics/FsRender.h"



NS_FS_BEGIN
Window::Window()
{
	m_render=NULL;
	m_window=NULL;
	m_caption=FS_DEFAULT_WINDOW_NAME;
}

static const char* s_window_name="WindowObject";
const char* Window::getName()
{
	return s_window_name;
}


NS_FS_END

#if FS_PLATFORM_OS(FS_OS_LINUX)
	#include "platform/FsWindowLinux.cc"
#elif FS_PLATFORM_OS(FS_OS_WIN32)
	#include "platform/FsWindowWin32.cc"
#else 
	#error "Unsupport Platform OS"
#endif 
