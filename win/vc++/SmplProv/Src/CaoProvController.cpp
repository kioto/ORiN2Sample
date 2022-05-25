/** @file CaoProvController.cpp
 *
 *  @brief CCaoProvController の実装
 *
 *  @version	1.0
 *	@date		2003/8/8
 *	@author		DENSO WAVE
 *
 */

#include "stdafx.h"
#include "CAOPROV.h"
#include "CaoProvController.h"

#include "OptionValue.h" // ORiN2/CAO/Include


/**	初期化処理
 *
 *　CaoProvControllerオブジェクトが作成されて最初に呼ばれる関数である．
 *
 *	@retval	HRESULT
 *
 */
HRESULT CCaoProvController::FinalInitialize()
{
	_Module.LogEvent(LOG_LEVEL_DEBUG,"CCaoProvController::FinalInitialize()\n");

#ifdef CAOP_CANCEL_SUPPORT
	m_hProviderCancelEvent = ::CreateEvent(NULL, TRUE, FALSE, NULL);

	// Execute用コマンドと関数ポインタの登録
	AddFunction(L"ProviderCancel", &CCaoProvController::ExecProviderCancel);
	AddFunction(L"ProviderClear", &CCaoProvController::ExecProviderClear);
	// :
	// プロバイダキャンセルサンプル
	AddFunction(L"ProviderCancelSampleMethod", &CCaoProvController::ExecProviderCancelSampleMethod);
#endif

	// この関数は必ず実装する。
	// CaoProvControllerオブジェクト共通の初期化処理などを行う．

	return S_OK; //実装したら返り値を S_OK にする．
}

/**	最終処理
 *
 *　CaoProvControllerオブジェクトが消滅するときに１度だけ呼ばれる．
 *
 *	@retval	HRESULT
 *
 */
/*
void CCaoProvController::FinalTerminate()
{
	_Module.LogEvent(LOG_LEVEL_DEBUG,"CCaoProvController::FinalTerminate()\n");

#ifdef CAOP_CANCEL_SUPPORT
		if(m_hProviderCancelEvent != NULL) {
			::CloseHandle(m_hProviderCancelEvent);
			m_hProviderCancelEvent = NULL;
		}
#endif

	// この関数は必ず実装する。
	// CaoProvControllerオブジェクトの解放前処理をする．
}
*/

/**	プロバイダ接続開始処理
 *
 *　プロバイダ内で最初に呼ばれる関数である．
 *
 *	@retval	HRESULT
 *
 */
HRESULT CCaoProvController::FinalConnect()
{
	_Module.LogEvent(LOG_LEVEL_DEBUG,"CCaoProvController::FinalConnect()\n");

	// この関数は必ず実装する．
	// プロバイダの接続処理をここで行う．

	// 接続パラメータの取得
	HRESULT hr = ParseConnectionString();
	if (FAILED(hr)) return hr;

	return S_OK; //実装したら返り値を S_OK にする．
}

/**	プロバイダ切断処理
 *
 *	@retval	HRESULT
 *
 */
HRESULT CCaoProvController::FinalDisconnect()
{
	_Module.LogEvent(LOG_LEVEL_DEBUG,"CCaoProvController::FinalDisconnect()\n");

	// この関数は必ず実装する．
	// プロバイダの切断処理をここで行う．

	return S_OK; //実装したら返り値を S_OK にする．
}

/**	拡張コマンドの実行
 *
 *	@param	bstrCmd	:	[in] コマンド名
 *	@param	vntPara	:	[in] パラメータ
 *	@param	pVal	:	[out] 実行結果
 *	@retval	HRESULT
 *
 */
/*
HRESULT CCaoProvController::FinalExecute(BSTR bstrCommand, VARIANT vntParam, VARIANT *pVal)
{
	// AddFunction()で登録したコマンドを実行する
	HRESULT hr = ExecuteFunction(bstrCommand, vntParam, pVal);	

	if (FAILED(hr)) {
		_Module.LogEvent(LOG_LEVEL_ERROR,"FAILED(0x%x): CCaoProvController::FinalExecute(%s,...) \n", hr, ConvertBSTRToString(bstrCommand).c_str());
	}

	return hr;
}
*/

/**	属性の取得
 *
 *	@param	pVal	:	[out] 属性
 *	@retval	HRESULT
 *
 */
/*
HRESULT CCaoProvController::FinalGetAttribute(long *pVal)
{
    // コントローラの属性を LONG型 で取得する．
	return E_NOTIMPL;
}
*/

/**	ヘルプ文字列の取得
 *
 *	@param	pVal	:	[out] ヘルプ
 *	@retval	HRESULT
 *
 */
/*
HRESULT CCaoProvController::FinalGetHelp(BSTR *pVal)
{
	// 任意のヘルプ文字列を返す．
	return E_NOTIMPL;
}
*/

/**	コマンドリストの取得
 *
 *	@param	bstrOption	:	[in] オプション
 *	@param	pVal	:	[out] 変数名リスト
 *	@retval	HRESULT
 *
 */
/*
HRESULT CCaoProvController::FinalGetCommandNames(BSTR bstrOption, VARIANT *pVal)
{
	// 変数名リストを文字列のSAFEARRAYとして作成．
    // そのポインタをVARIANT(pVal->vt = VT_BSTR|VT_ARRAY，pVal->parray = xxx)に格納する．
	return E_NOTIMPL;
}
*/

/**	拡張ボード名リストの取得
 *
 *	@param	bstrOption	:	[in] オプション
 *	@param	pVal	:	[out] 拡張ボード名リスト
 *	@retval	HRESULT
 *
 */
/*
HRESULT CCaoProvController::FinalGetExtensionNames(BSTR bstrOption, VARIANT *pVal)
{
	// 拡張ボード名リストを文字列のSAFEARRAYとして作成．
    // そのポインタをVARIANT(pVal->vt = VT_BSTR|VT_ARRAY，pVal->parray = xxx)に格納する．
	return E_NOTIMPL;
}
*/

/**	ファイル名リストの取得
 *
 *	@param	bstrOption	:	[in] オプション
 *	@param	pVal	:	[out] ファイル名リスト
 *	@retval	HRESULT
 *
 */
/*
HRESULT CCaoProvController::FinalGetFileNames(BSTR bstrOption, VARIANT *pVal)
{
	// ファイル名リストを文字列のSAFEARRAYとして作成．
    // そのポインタをVARIANT(pVal->vt = VT_BSTR|VT_ARRAY，pVal->parray = xxx)に格納する．
	return E_NOTIMPL;
}
*/

/**	ロボット名リストの取得
 *
 *	@param	bstrOption	:	[in] オプション
 *	@param	pVal	:	[out] ロボット名リスト
 *	@retval	HRESULT
 *
 */
/*
HRESULT CCaoProvController::FinalGetRobotNames(BSTR bstrOption, VARIANT *pVal)
{
	// ロボット名リストを文字列のSAFEARRAYとして作成．
    // そのポインタをVARIANT(pVal->vt = VT_BSTR|VT_ARRAY，pVal->parray = xxx)に格納する．
	return E_NOTIMPL;
}
*/

/**	タスク名リストの取得
 *
 *	@param	bstrOption	:	[in] オプション
 *	@param	pVal	:	[out] タスク名リスト
 *	@retval	HRESULT
 *
 */
/*
HRESULT CCaoProvController::FinalGetTaskNames(BSTR bstrOption, VARIANT *pVal)
{
	// タスク名リストを文字列のSAFEARRAYとして作成．
    // そのポインタをVARIANT(pVal->vt = VT_BSTR|VT_ARRAY，pVal->parray = xxx)に格納する．
	return E_NOTIMPL;
}
*/

/**	変数名リストの取得
 *
 *	@param	bstrOption	:	[in] オプション
 *	@param	pVal	:	[out] 変数名リスト
 *	@retval	HRESULT
 *
 */
HRESULT CCaoProvController::FinalGetVariableNames(BSTR bstrOption, VARIANT *pVal)
{
	// 変数名の定義個数 ※リストを更新した場合は修正が必要
	const int	nDefines = 4;
	
	pVal->vt = VT_ARRAY | VT_VARIANT;
	SAFEARRAY* psa;
	SAFEARRAYBOUND bounds = {nDefines, 0};
	psa = SafeArrayCreate(VT_VARIANT, 1, &bounds);

	CComVariant* vntArray;
	SafeArrayAccessData(psa, (void**)&vntArray);

	int i = 0;
	vntArray[i++] = CS_MAKER_NAME$;
	vntArray[i++] = CS_VERSION$;
	vntArray[i++] = CS_STATUS$;
	vntArray[i++] = CS_COMMAND$;
	// nDefines = 2

	ATLTRACE("nDefines = %d\n",i);
	ATLASSERT(i==nDefines);

	SafeArrayUnaccessData(psa);
	pVal->parray = psa;

	return S_OK;
}

/**	IDの取得
 *
 *	@param	pVal	:	[out] ID
 *	@retval	HRESULT
 *
 */
/*
HRESULT CCaoProvController::FinalGetID(VARIANT *pVal)
{
	return E_NOTIMPL;
}
*/

/**	IDの設定
 *
 *	@param	newVal	:	[in] ID
 *	@retval	HRESULT
 *
 */
/*
HRESULT CCaoProvController::FinalPutID(VARIANT newVal)
{
	return E_NOTIMPL;
}
*/

#if CAOP_TIMER_INTERVAL > 0
/**	タイマーイベント
 *
 * #define CAOP_TIMER_INTERVAL 0 の 定義を ms単位指定で定義し直す．
 * これにより CAOP_TIMER_INTERVAL ms間隔でこの関数が呼ばれる．
 *
 */
void CCaoProvController::OnTimer()
{
	return;
}
#endif

#ifdef CAOP_CANCEL_SUPPORT

/**	プロバイダキャンセル
 *
 *　実行中の処理を直ちに中断する
 *
 *	@param	vntPara	:	[in] パラメータ
 *							未使用
 *	@param	pVal	:	[out] 実行結果
 *							未使用
 *	@retval	HRESULT
 *
 */
HRESULT CCaoProvController::ExecProviderCancel(VARIANT vntParam, VARIANT *pVal)
{
	ATLASSERT(m_hProviderCancelEvent != NULL);

	// プロバイダキャンセルイベントをセットする
	::SetEvent(m_hProviderCancelEvent);

	// TODO: 実行中の処理を中断する処理を実装すること.
	// :

	return S_OK;
}

/**	プロバイダクリア
 *
 *　実行中断をクリアする．
 *
 *	@param	vntPara	:	[in] パラメータ
 *							未使用
 *	@param	pVal	:	[out] 実行結果
 *							未使用
 *	@retval	HRESULT
 *
 */
HRESULT CCaoProvController::ExecProviderClear(VARIANT vntParam, VARIANT *pVal)
{
	ATLASSERT(m_hProviderCancelEvent != NULL);

	// プロバイダキャンセルイベントをリセットする
	::ResetEvent(m_hProviderCancelEvent);

	// TODO: 正常に実行するための処理を実装すること.
	// :

	return S_OK;
}

/**	プロバイダキャンセルの状態確認
 *
 *　プロバイダキャンセルの要求があったかを取得する
 *
 *	@retval	HRESULT 
 *		E_CANCEL:キャンセル要求あり  S_OK:キャンセル要求なし
 *
 */
HRESULT CCaoProvController::GetProviderCancelStatus() 
{
	ATLASSERT(m_hProviderCancelEvent != NULL);

	if(::WaitForSingleObject(m_hProviderCancelEvent, 0) == WAIT_OBJECT_0) {
		return E_CANCEL;
	}
	return S_OK;
}

/**	プロバイダキャンセルハンドル取得
 *
 *　プロバイダキャンセルのハンドルを取得する
 *
 *	@retval	HANDLE 
 *
 */
HANDLE CCaoProvController::GetProviderCancelHandle() 
{
	return m_hProviderCancelEvent;
}


/**	プロバイダキャンセルに対応した処理例
 *
 *　なにかを実行しながらプロバイダキャンセルで即抜ける例
 *　TODO: 実態に合わせた実装を行う
 *
 *	@param	vntPara	:	[in] パラメータ
 *							未使用
 *	@param	pVal	:	[out] 実行結果
 *							未使用
 *	@retval	HRESULT
 *
 */
HRESULT CCaoProvController::ExecProviderCancelSampleMethod(VARIANT vntParam, VARIANT *pVal)
{
	// TODO: なにか時間がかかる処理の実行.
	// :
	HRESULT hr;
	for(int i=0; i<100; i++)
	{
		hr = GetProviderCancelStatus();
		if (FAILED(hr)) break;

		// 何かの処理　・・・
		//　:

		// Sleep(100)待ちでプロバイダキャンセルがシグナル状態になれば即抜ける例
		if(::WaitForSingleObject(GetProviderCancelHandle(), 100) == WAIT_OBJECT_0) {
			hr = E_CANCEL;
			break;
		}
	}

	return hr;
}

#endif

// ========== 各社追加関数はこれ以下に記述する．==========

/**	接続パラメータの解析
 *
 *　接続パラメータから必要なキーと値を解析する
 *
 *	@retval	HRESULT 
 *
 */
HRESULT CCaoProvController::ParseConnectionString()
{
	HRESULT hr = E_NOTIMPL;

	CComVariant vntOptVal;

	// Key = XXX
	vntOptVal.Clear();
	// TODO: キー文字列と値の仕様を決め、実装を行うこと.
	hr = GetOptionValue(m_bstrOption, L"Key", VT_BSTR, &vntOptVal); 
	if (vntOptVal.vt == VT_BSTR) {
		const BSTR bstrVal = vntOptVal.bstrVal;
		// :

	}

	return hr;
}
