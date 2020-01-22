// CAOPROV.cpp : DLL エクスポートのインプリメンテーション


// メモ: Proxy/Stub 情報
//  proxy/stub コードをオブジェクト DLL 内へ結合するためには、プロジェクトへ
//  dlldatax.c ファイルを追加してください。 このファイルに対してプリコンパイル
//  済みヘッダーが無効であることを確認して、プロジェクトの定義へ _MERGE_PROXYSTUB
//  を追加してください。
//
//  DCOM サポートを含む WinNT4.0 または Win95 が実行中ではない場合は、
//  以下の定義を dlldatax.c から削除してください。
//  #define _WIN32_WINNT 0x0400
//
//  さらに、MIDL を /Oicf スイッチなしで実行している場合は、
//  以下の定義を dlldatax.c から削除してください。
//  #define USE_STUBLESS_PROXY
//
//  以下のファイルをアウトプットに追加することによって CAOPROV.idl 用のカスタム
//  ビルドのルールを修正してください。
//      CAOPROV_p.c
//      dlldata.c
//  別々の proxy/stub DLL をビルドするためには、プロジェクトのディレクトリで
//      nmake -f CAOPROVps.mak を実行してください。

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
// DLL エントリ ポイント

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
// DLL が OLE によってアンロード可能かどうかを調べるために使用されます

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

// オーバーライド
	// ClassWizard は仮想関数のオーバーライドを生成します。
	//{{AFX_VIRTUAL(CCAOPROVApp)
	public:
    virtual BOOL InitInstance();
    virtual int ExitInstance();
	//}}AFX_VIRTUAL

	//{{AFX_MSG(C CAOPROV App)
		// メモ - ClassWizard はこの位置にメンバ関数を追加または削除します。
		//		  この位置に生成されるコードを編集しないでください。
	//}}AFX_MSG
	DECLARE_MESSAGE_MAP()
};

BEGIN_MESSAGE_MAP(CCAOPROVApp, CWinApp)
	//{{AFX_MSG_MAP(CCAOPROVApp)
		// メモ - クラスウィザードはこの場所に、マクロ マッピングを追加/削除します
		//		  この位置に生成されるコードを編集しないでください。
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
// DLL が OLE によってアンロード可能かどうかを調べるために使用されます

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
// 要求された型のオブジェクトを作成するためにクラス ファクトリを返します

STDAPI DllGetClassObject(REFCLSID rclsid, REFIID riid, LPVOID* ppv)
{
#ifdef _MERGE_PROXYSTUB
    if (PrxDllGetClassObject(rclsid, riid, ppv) == S_OK)
        return S_OK;
#endif
    return _Module.GetClassObject(rclsid, riid, ppv);
}

/////////////////////////////////////////////////////////////////////////////
// DllRegisterServer - システム レジストリへエントリを追加します

STDAPI DllRegisterServer(void)
{
#ifdef _MERGE_PROXYSTUB
    HRESULT hRes = PrxDllRegisterServer();
    if (FAILED(hRes))
        return hRes;
#endif
    // オブジェクト、タイプライブラリおよびタイプライブラリ内の全てのインターフェイスを登録します
    return _Module.RegisterServer(FALSE);
}

/////////////////////////////////////////////////////////////////////////////
// DllUnregisterServer - システム レジストリからエントリを削除します

STDAPI DllUnregisterServer(void)
{
#ifdef _MERGE_PROXYSTUB
    PrxDllUnregisterServer();
#endif
	// ATLの _Module.UnregisterServer の引数を FALSE で呼び出すと
	// HKEY_CLASSES_ROOT\Interface 及び HKEY_CLASSES_ROOT\TypeLib
	// の下のキーを削除しません．
    return _Module.UnregisterServer(FALSE);
}

