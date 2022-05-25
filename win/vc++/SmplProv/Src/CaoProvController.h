/** @file CaoProvController.h
 *
 *  @brief CCaoProvController の宣言
 *
 *  @version	1.0
 *	@date		2003/8/8
 *	@author		DENSO WAVE
 *
 */

#ifndef __CAOPROVCONTROLLER_H_
#define __CAOPROVCONTROLLER_H_

#include "resource.h"       // メイン シンボル
#include "CAOPROVCP.h"
#include "CaoProvCommand.h"
#include "CaoProvVariable.h"
#include "CaoProvRobot.h"
#include "CaoProvFile.h"
#include "CaoProvTask.h"
#include "CaoProvExtension.h"
#include "CaoProvControllerImpl.h"

#include "FuncExecMap.h" // ORiN2/CAO/Include

/**	CAOプロバイダのControllerクラス
 *
 *	デュアルインターフェースを持つCOMのクラス．詳細はICaoProvControllerを参照．<br>
 *	CAOプロバイダにおいてCOMクライアントが唯一インスタンス作成可能なクラス．<br>
 *  インターフェースはICaoProvControllerImplクラスで実装されている．
 *
 */
class ATL_NO_VTABLE CCaoProvController : 
	public ICaoProvControllerImpl<CCaoProvController, CCaoProvExtension, CCaoProvFile, CCaoProvRobot, CCaoProvTask, CCaoProvVariable, CCaoProvCommand, CCaoProvMessage>,
	public CFuncExecMap<CCaoProvController>
{
protected:
	HRESULT FinalInitialize();
//	void FinalTerminate();

	HRESULT FinalConnect();
	HRESULT FinalDisconnect();
//	HRESULT FinalExecute(/*[in]*/ BSTR bstrCommand, /*[in]*/ VARIANT vntParam, /*[out, retval]*/ VARIANT *pVal);

//	HRESULT FinalGetAttribute(/*[out, retval]*/ long *pVal);
//	HRESULT FinalGetHelp(/*[out, retval]*/ BSTR *pVal);
//	HRESULT FinalGetCommandNames(/*[in]*/ BSTR bstrOption, /*[out, retval]*/ VARIANT *pVal);
//	HRESULT FinalGetExtensionNames(/*[in]*/ BSTR bstrOption, /*[out, retval]*/ VARIANT *pVal);
//	HRESULT FinalGetFileNames(/*[in]*/ BSTR bstrOption, /*[out, retval]*/ VARIANT *pVal);
//	HRESULT FinalGetRobotNames(/*[in]*/ BSTR bstrOption, /*[out, retval]*/ VARIANT *pVal);
//	HRESULT FinalGetTaskNames(/*[in]*/ BSTR bstrOption, /*[out, retval]*/ VARIANT *pVal);
	HRESULT FinalGetVariableNames(/*[in]*/ BSTR bstrOption, /*[out, retval]*/ VARIANT *pVal);
//	HRESULT FinalGetID(/*[out, retval]*/ VARIANT *pVal);
//	HRESULT FinalPutID(/*[in]*/ VARIANT newVal);

public:
#if CAOP_TIMER_INTERVAL > 0
	void OnTimer();
#endif

#ifdef CAOP_CANCEL_SUPPORT
	HRESULT GetProviderCancelStatus();
	HANDLE GetProviderCancelHandle();
#endif

// ========== 各社追加関数はこれ以下に記述する．==========

private:
#ifdef CAOP_CANCEL_SUPPORT
	// Executeのコマンド
	HRESULT ExecProviderClear(VARIANT vntParam, VARIANT *pVal);
	HRESULT ExecProviderCancel(VARIANT vntParam, VARIANT *pVal);
	// プロバイダキャンセル対応サンプル
	HRESULT ExecProviderCancelSampleMethod(VARIANT vntParam, VARIANT *pVal);
#endif

// ========== 各社追加関数はこれ以下に記述する．==========
	HRESULT ParseConnectionString();

private:
#ifdef CAOP_CANCEL_SUPPORT
	// ProviderCancelを通知するイベント
	HANDLE m_hProviderCancelEvent;	
#endif
};

#endif //__CAOPROVCONTROLLER_H_
