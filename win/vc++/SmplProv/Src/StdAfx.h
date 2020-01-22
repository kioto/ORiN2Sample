/** @file StdAfx.h
 *
 *  @brief �v���W�F�N�g�S�̂ɋ��ʂȐ錾
 *
 *  @version	1.0
 *	@date		2003/8/8
 *	@author		DENSO WAVE
 *
 */

#if !defined(AFX_STDAFX_H__65AC2E24_29EB_11D3_A416_00C04FCCF025__INCLUDED_)
#define AFX_STDAFX_H__65AC2E24_29EB_11D3_A416_00C04FCCF025__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000

#define STRICT
#ifndef _WIN32_WINNT
#define _WIN32_WINNT 0x0501
#endif
//#define _ATL_APARTMENT_THREADED
#define _ATL_FREE_THREADED

#ifdef CAOP_MFC
// MFC�C���N���[�h�t�@�C��
#include <afxwin.h>
#include <afxdisp.h>
#endif

#include <atlbase.h>
#include <map>
#include <string>
#include "Logger.h"

// CComModule �N���X����h�������N���X���g�p���āA�I�[�o�[���C�h����ꍇ
// _Module �̖��O�͕ύX���Ȃ��ł��������B
class CCaoModule : 
	public CComModule,
	public CLogger
{
public :
	CCaoModule()	{}
	~CCaoModule()	{}
};
extern CCaoModule _Module;

#include <atlcom.h>
#include "resource.h"       // ���C�� �V���{��

#define CAOP_TIMER_INTERVAL 0		// 0: off, n: n(msec)����OnTimer�C�x���g�𔭐�������DLONG_MAX �ȉ��̐��̐����D
#define CAOP_CANCEL_SUPPORT			// ProviderCancel, ProviderClear�̃T�|�[�g�D

// �啶���������̋�ʂ����Ȃ��������r�֐��I�u�W�F�N�g
struct __lesscasecmp {
	bool operator() (const char* s1, const char* s2) const {
		return ( _stricmp(s1, s2) < 0 );
	}
	bool operator()(const wchar_t* s1, const wchar_t* s2) const {
		return (_wcsicmp(s1, s2) < 0);  // �召������ʂȂ�
	}
	bool operator()(const BSTR& s1, const BSTR& s2) const {
		return (_wcsicmp(s1, s2) < 0);  // �召������ʂȂ�
	}
};
// ���O�}�b�v�̒�`�Ə�����
typedef std::map<const wchar_t*, long, __lesscasecmp > var_map;
typedef var_map::value_type var_map_entry;
#define MAP_ENTRY(name)	var_map_entry(name##$, name)

std::string ConvertBSTRToString(BSTR bstr);
CComBSTR ConvertStringToBSTR(const char *pstr);

//{{AFX_INSERT_LOCATION}}
// Microsoft Visual C++ �͑O�s�̒��O�ɒǉ��̐錾��}�����܂��B

// ========== �e�Вǉ������͂���ȉ��ɋL�q����D==========

#define CS_MAKER_NAME			0x0001
#define CS_MAKER_NAME$			L"@MAKER_NAME"
#define CS_VERSION				0x0002
#define CS_VERSION$				L"@VERSION"
#define CS_STATUS				0x0003
#define CS_STATUS$				L"@STATUS"
#define CS_COMMAND				0x0004
#define CS_COMMAND$				L"@COMMAND"
// :

#endif // !defined(AFX_STDAFX_H__65AC2E24_29EB_11D3_A416_00C04FCCF025__INCLUDED)
