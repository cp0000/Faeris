#include "graphics/FsProgram.h"
#include "graphics/FsRender.h"

#if FS_CONFIG(FS_GL_RENDER) || FS_CONFIG(FS_GLES_RENDER)
	#include "platform/FsGLProgram.cc"
#else 
	#error "Unsupport PlatformProgram"
#endif 



