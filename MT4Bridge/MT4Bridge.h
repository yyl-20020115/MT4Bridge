// MT4Bridge.h: MT4Bridge DLL 的主标头文件
//

#pragma once

#ifndef __AFXWIN_H__
	#error "在包含此文件之前包含“stdafx.h”以生成 PCH 文件"
#endif

#include "resource.h"		// 主符号


// CMT4BridgeApp
// 有关此类实现的信息，请参阅 MT4Bridge.cpp
//

class CMT4BridgeApp : public CWinApp
{
public:
	CMT4BridgeApp();

// 重写
public:
	virtual BOOL InitInstance();

	DECLARE_MESSAGE_MAP()
};
