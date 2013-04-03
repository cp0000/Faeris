#include "io/FsVFS.h"
#include "io/FsPackage.h"
#include "io/FsZipPackage.h"

NS_FS_BEGIN

Package* Package::create(const char* filename,int type)
{
	FsFile* file=VFS::open(filename);
	if(file==NULL)
	{
		FS_TRACE_WARN("Can't Find File For Package");
		return NULL;
	}

	Package* ret=NULL;
	switch(type)
	{
		case PACKAGE_ZIP:
			ret=ZipPackage::create(file);
			break;
	}
	file->decRef();
	return ret;
}


Package::~Package()
{
}

const char* Package::className()
{
	return FS_PACKAGE_CLASS_NAME;
}



NS_FS_END



















