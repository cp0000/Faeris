#ifndef _FS_GLOBAL_H_
#define _FS_GLOBAL_H_

#include "FsMacros.h"
#include "scheduler/FsScheduler.h"
#include "scene/FsDirector.h"
#include "graphics/FsRender.h"
#include "event/FsTouchDispatcher.h"
#include "event/FsSysDispatcher.h"
#include "sys/FsWindow.h"
#include "common/FsScriptEngine.h"
#include "mgr/FsTextureMgr.h"
#include "mgr/FsFontTTFDataMgr.h"
#include "mgr/FsSprite2DDataMgr.h"


#define FS_GLOBAL_H(t,get,set) \
	public: \
		static void set(t* v) \
		{ \
			FS_SAFE_ASSIGN(m_##t,v); \
		}\
		static t* get() \
		{\
			FS_SAFE_ADD_REF(m_##t);\
			return m_##t; \
		}\
		static void drop##t() \
		{\
			m_##t=NULL; \
		}\
	private: \
		static t* m_##t

#define FS_GLOBAL_CC(t,get,set) \
	t* Global::m_##t=NULL


NS_FS_BEGIN

class FsDict;

class Global
{
	FS_GLOBAL_H(Scheduler,scheduler,setScheduler);
	FS_GLOBAL_H(TouchDispatcher,touchDispatcher,setTouchDispatcher);
	FS_GLOBAL_H(SysDispatcher,sysDispatcher,setSysDispatcher);
	FS_GLOBAL_H(Director,director,setDirector);
	FS_GLOBAL_H(Window,window,setWindow);
	FS_GLOBAL_H(Render,render,setRender);
	FS_GLOBAL_H(ScriptEngine,scriptEngine,setScriptEngine);

	/* mgr */
	FS_GLOBAL_H(TextureMgr,textureMgr,setTextureMgr);
	FS_GLOBAL_H(FontTTFDataMgr,fontTTFDataMgr,setFontTTFDataMgr);
	FS_GLOBAL_H(Sprite2DDataMgr,sprite2DDataMgr,setSprite2DDataMgr);
};
NS_FS_END 

#endif /*_FS_GLOBAL_H_*/






