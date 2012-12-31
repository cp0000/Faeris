#include "fsys/FsTimer.h"
#include <sys/time.h>

NS_FS_BEGIN
Timer::Timer()
{
	gettimeofday(&m_begin,NULL);
}
void Timer::reset()
{
	gettimeofday(&m_begin,NULL);
}
FsLong Timer::now() const
{
	struct timeval cur;
	gettimeofday(&cur,NULL);
	return (cur.tv_sec-m_begin.tv_sec)*1000+(cur.tv_usec-m_begin.tv_usec)/1000;
}

NS_FS_END

