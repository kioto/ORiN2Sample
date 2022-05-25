// CAOPROV.cpp : DLL �G�N�X�|�[�g�̃C���v�������e�[�V����


// ����: Proxy/Stub ���
//  proxy/stub �R�[�h���I�u�W�F�N�g DLL ���֌������邽�߂ɂ́A�v���W�F�N�g��
//  dlldatax.c �t�@�C����ǉ����Ă��������B ���̃t�@�C���ɑ΂��ăv���R���p�C��
//  �ς݃w�b�_�[�������ł��邱�Ƃ��m�F���āA�v���W�F�N�g�̒�`�� _MERGE_PROXYSTUB
//  ��ǉ����Ă��������B
//
//  DCOM �T�|�[�g���܂� WinNT4.0 �܂��� Win95 �����s���ł͂Ȃ��ꍇ�́A
//  �ȉ��̒�`�� dlldatax.c ����폜���Ă��������B
//  #define _WIN32_WINNT 0x0400
//
//  ����ɁAMIDL �� /Oicf �X�C�b�`�Ȃ��Ŏ��s���Ă���ꍇ�́A
//  �ȉ��̒�`�� dlldatax.c ����폜���Ă��������B
//  #define USE_STUBLESS_PROXY
//
//  �ȉ��̃t�@�C�����A�E�g�v�b�g�ɒǉ����邱�Ƃɂ���� CAOPROV.idl �p�̃J�X�^��
//  �r���h�̃��[�����C�����Ă��������B
//      CAOPROV_p.c
//      dlldata.c
//  �ʁX�� proxy/stub DLL ���r���h���邽�߂ɂ́A�v���W�F�N�g�̃f�B���N�g����
//      nmake -f CAOPROVps.mak �����s���Ă��������B

#include "stdafx.h"
#include "resource.h"
#include <initguid.h>
#include "CAOPROV.h"
#include "dlldatax.h"

#include "CAOPROV_i.c"
#include "CaoProvCommand.h"
#include "CaoProvVariable.h"
#include "CaoProvRobot.h"
#include "CaoProvFile.h"
#include "CaoProvTask.h"
#include "CaoProvExtension.h"
#include "CaoProvController.h"


#ifdef _MERGE_PROXYSTUB
extern "C" HINSTANCE hProxyDll;
#endif

CCaoModule _Module;

BEGIN_OBJECT_MAP(ObjectMap)
	OBJECT_ENTRY(CLSID_CaoProvController, CCaoProvController)
//	OBJECT_ENTRY(CLSID_CaoProvVariable, CCaoProvVariable)
//	OBJECT_ENTRY(CLSID_CaoProvRobot, CCaoProvRobot)
//	OBJECT_ENTRY(CLSID_CaoProvFile, CCaoProvFile)
//	OBJECT_ENTRY(CLSID_CaoProvTask, CCaoProvTask)
END_OBJECT_MAP()

/////////////////////////////////////////////////////////////////////////////
// DLL �G���g�� �|�C���g

#ifndef CAOP_MFC
extern "C"
BOOL WINAPI DllMain(HINSTANCE hInstance, DWORD dwReason, LPVOID lpReserved)
{
    lpReserved;
#ifdef _MERGE_PROXYSTUB
    if (!PrxDllMain(hInstance, dwReason, lpReserved))
        return FALSE;
#endif
    if (dwReason == DLL_PROCESS_ATTACH) {
        _Module.Init(ObjectMap, hInstance, &LIBID_CAOPROVLib);
        DisableThreadLibraryCalls(hInstance);
    } else if (dwReason == DLL_PROCESS_DETACH) {
        _Module.Term();
	}
    return TRUE;    // ok
}

/////////////////////////////////////////////////////////////////////////////
// DLL �� OLE �ɂ���ăA�����[�h�\���ǂ����𒲂ׂ邽�߂Ɏg�p����܂�

STDAPI DllCanUnloadNow(void)
{
#ifdef _MERGE_PROXYSTUB
    if (PrxDllCanUnloadNow() != S_OK)
        return S_FALSE;
#endif
    return (_Module.GetLockCount()==0) ? S_OK : S_FALSE;
}

#else	//CAOP_MFC

class CCAOPROVApp : public CWinApp
{
public:

// �I�[�o�[���C�h
	// ClassWizard �͉��z�֐��̃I�[�o�[���C�h�𐶐����܂��B
	//{{AFX_VIRTUAL(CCAOPROVApp)
	public:
    virtual BOOL InitInstance();
    virtual int ExitInstance();
	//}}AFX_VIRTUAL

	//{{AFX_MSG(C CAOPROV App)
		// ���� - ClassWizard �͂��̈ʒu�Ƀ����o�֐���ǉ��܂��͍폜���܂��B
		//		  ���̈ʒu�ɐ��������R�[�h��ҏW���Ȃ��ł��������B
	//}}AFX_MSG
	DECLARE_MESSAGE_MAP()
};

BEGIN_MESSAGE_MAP(CCAOPROVApp, CWinApp)
	//{{AFX_MSG_MAP(CCAOPROVApp)
		// ���� - �N���X�E�B�U�[�h�͂��̏ꏊ�ɁA�}�N�� �}�b�s���O��ǉ�/�폜���܂�
		//		  ���̈ʒu�ɐ��������R�[�h��ҏW���Ȃ��ł��������B
	//}}AFX_MSG_MAP
END_MESSAGE_MAP()

CCAOPROVApp theApp;

BOOL CCAOPROVApp::InitInstance()
{
#ifdef _MERGE_PROXYSTUB
    hProxyDll = m_hInstance;
#endif
    _Module.Init(ObjectMap, m_hInstance, &LIBID_CAOPROVLib);
    return CWinApp::InitInstance();
}

int CCAOPROVApp::ExitInstance()
{
    _Module.Term();
    return CWinApp::ExitInstance();
}

/////////////////////////////////////////////////////////////////////////////
// DLL �� OLE �ɂ���ăA�����[�h�\���ǂ����𒲂ׂ邽�߂Ɏg�p����܂�

STDAPI DllCanUnloadNow(void)
{
#ifdef _MERGE_PROXYSTUB
    if (PrxDllCanUnloadNow() != S_OK)
        return S_FALSE;
#endif
    AFX_MANAGE_STATE(AfxGetStaticModuleState());
    return (AfxDllCanUnloadNow()==S_OK && _Module.GetLockCount()==0) ? S_OK : S_FALSE;
}

#endif	// CAOP_MFC

/////////////////////////////////////////////////////////////////////////////
// �v�����ꂽ�^�̃I�u�W�F�N�g���쐬���邽�߂ɃN���X �t�@�N�g����Ԃ��܂�

STDAPI DllGetClassObject(REFCLSID rclsid, REFIID riid, LPVOID* ppv)
{
#ifdef _MERGE_PROXYSTUB
    if (PrxDllGetClassObject(rclsid, riid, ppv) == S_OK)
        return S_OK;
#endif
    return _Module.GetClassObject(rclsid, riid, ppv);
}

/////////////////////////////////////////////////////////////////////////////
// DllRegisterServer - �V�X�e�� ���W�X�g���փG���g����ǉ����܂�

STDAPI DllRegisterServer(void)
{
#ifdef _MERGE_PROXYSTUB
    HRESULT hRes = PrxDllRegisterServer();
    if (FAILED(hRes))
        return hRes;
#endif
    // �I�u�W�F�N�g�A�^�C�v���C�u��������у^�C�v���C�u�������̑S�ẴC���^�[�t�F�C�X��o�^���܂�
    return _Module.RegisterServer(FALSE);
}

/////////////////////////////////////////////////////////////////////////////
// DllUnregisterServer - �V�X�e�� ���W�X�g������G���g�����폜���܂�

STDAPI DllUnregisterServer(void)
{
#ifdef _MERGE_PROXYSTUB
    PrxDllUnregisterServer();
#endif
	// ATL�� _Module.UnregisterServer �̈����� FALSE �ŌĂяo����
	// HKEY_CLASSES_ROOT\Interface �y�� HKEY_CLASSES_ROOT\TypeLib
	// �̉��̃L�[���폜���܂���D
    return _Module.UnregisterServer(FALSE);
}

