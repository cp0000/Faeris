#ifndef _FS_ZIP_READER_H_
#define _FS_ZIP_READER_H_ 

#include "FsMacros.h"
#include "core/FsObject.h"

NS_FS_BEGIN

class FsFile;
class ZipReader:FsObject
{
	public:
		static ZipReader* create(FsFile* file);
		static bool CheckType(FsFile* file);

	public:
		FsFile* getFile(const char* filename);


	public:
		/* override FsObject */
		virtual const char* className();

	public:
		ZipReader();
		virtual ~ZipReader();
		bool init(FsFile* file,void* unzfile);
		void destroy();

	private:
		void* m_unzfile;
		FsFile* m_stream;
};

NS_FS_END


#endif /*&_FS_ZIP_READER_H_*/













