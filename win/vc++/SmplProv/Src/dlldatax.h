#if !defined(AFX_DLLDATAX_H__65AC2E2C_29EB_11D3_A416_00C04FCCF025__INCLUDED_)
#define AFX_DLLDATAX_H__65AC2E2C_29EB_11D3_A416_00C04FCCF025__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000

#ifdef _MERGE_PROXYSTUB

extern "C" 
{
BOOL WINAPI PrxDllMain(HINSTANCE hInstance, DWORD dwReason, 
	LPVOID lpReserved);
STDAPI PrxDllCanUnloadNow(void);
STDAPI PrxDllGetClassObject(REFCLSID rclsid, REFIID riid, LPVOID* ppv);
STDAPI PrxDllRegisterServer(void);
STDAPI PrxDllUnregisterServer(void);
}

#endif

//{{AFX_INSERT_LOCATION}}
// Microsoft Visual C++ �͑O�s�̒��O�ɒǉ��̐錾��}�����܂��B

#endif // !defined(AFX_DLLDATAX_H__65AC2E2C_29EB_11D3_A416_00C04FCCF025__INCLUDED_)
