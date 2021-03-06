#ifndef _FS_IMAGE_PNG_H_
#define _FS_IMAGE_PNG_H_

#include "FsMacros.h"
#include "graphics/FsImage2D.h"
#include "sys/io/FsVFS.h"

NS_FS_BEGIN

FS_FEATURE_NEW_OBJECT(Image2D*) FsUtil_PngReader(const char* filename);
FS_FEATURE_NEW_OBJECT(Image2D*) FsUtil_PngReader(FsFile* file);

int FsUtil_PngWriter(FsFile* file,Image2D* img);
bool FsUtil_CheckPng(FsFile* file);

NS_FS_END

#endif /*_FS_IMAGE_PNG_H_*/


