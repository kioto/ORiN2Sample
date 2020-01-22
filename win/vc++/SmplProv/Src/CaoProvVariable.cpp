/** @file CaoProvVariable.cpp
 *
 *  @brief CCaoProvVariable の実装
 *
 *  @version	1.0
 *	@date		2003/8/8
 *	@author		DENSO WAVE
 *
 */

#include "stdafx.h"
#include "CAOPROV.h"
#include "CaoProvController.h"
#include "CaoProvVariable.h"

/**	初期化処理
 *
 *　CaoProvVariableオブジェクトが作成されて最初に呼ばれる関数である．
 *
 *	@param	pObj	:	[in] 親オブジェクト
 *	@retval	HRESULT
 *
 */ 
/*
HRESULT CCaoProvVariable::FinalInitialize(PVOID pObj)
{
	HRESULT hr = E_INVALIDARG;

	// MapTableの初期化
	InitMapTable();

	CCaoProvController* pCaopCtrl = NULL;
	CCaoProvExtension* pCaopExp = NULL;
	CCaoProvFile* pCaopFile = NULL;
	CCaoProvRobot* pCaopRobot = NULL;
	CCaoProvTask* pCaopTask = NULL;

	// データメンバーの初期化
	m_lUSysId = 0;

	// 親オブジェクトの判定
	switch (m_ulParentType) {
	case SYS_CLS_CONTROLLER:
		pCaopCtrl = (CCaoProvController*)pObj;
		if (m_bSystem) {
			// システム変数
			// 変数名からID検索
			var_map::iterator it;
			it = m_cs_map.find(m_bstrName);
			if (it != m_cs_map.end()){
				m_lUSysId = (it->second);
				hr = S_OK;
			} else {
				hr = E_INVALIDARG;
			}
		}
		else {
			// ユーザー変数
			hr = E_INVALIDARG;
		}
		break;
	case SYS_CLS_EXTENSION:
		pCaopExp = (CCaoProvExtension*)pObj;
		break;
	case SYS_CLS_FILE:
		pCaopFile = (CCaoProvFile*)pObj;
		break;
	case SYS_CLS_ROBOT:
		pCaopRobot = (CCaoProvRobot*)pObj;
		break;
	case SYS_CLS_TASK:
		pCaopTask = (CCaoProvTask*)pObj;
		break;
	}

	return hr;
}
*/

/**	最終処理
 *
 *　CaoProvVariableオブジェクトが消滅するときに１度だけ呼ばれる．
 *
 */ 
/*
void CCaoProvVariable::FinalTerminate()
{
	// CaoProvVariableオブジェクトの解放前処理をする．
}
*/

/**	属性の取得
 *
 *　ICaoVariable::Attribute()プロパティの実体となる．
 *
 *	@param	pVal	:	[out] 属性
 *	@retval	HRESULT
 *
 */
/*
HRESULT CCaoProvVariable::FinalGetAttribute(long *pVal)
{
	// 変数の属性を取得する．
	return E_NOTIMPL;
}
*/

/**	ヘルプの取得
 *
 *　コメント等を格納しておく．
 *　ICaoVariable::Help()プロパティの実体となる．
 *
 *	@param	pVal	:	[out] ヘルプ文字列
 *	@retval	HRESULT
 *
 */
/*
HRESULT CCaoProvVariable::FinalGetHelp(BSTR *pVal)
{
	// 任意のヘルプ文字列を返す．
	return E_NOTIMPL;
}
*/

/**	値のタイムスタンプの取得
 *
 *　ICaoVariable::DateTime()プロパティの実体となる．
 *
 *	@param	pVal	:	[out]  時刻データ
 *	@retval	HRESULT
 *
 */  
/*
HRESULT CCaoProvVariable::FinalGetDateTime(VARIANT *pVal)
{
	// コントローラの変数にアクセスした時間を取得する．
	// デフォルト実装のままであれば，m_vntDateTimeから値を取得する．
	return E_NOTIMPL;
}
*/

/**	変数の値の取得
 *
 *　ICaoVariable::get_Value()の実体となる．
 *
 *	@param	pVal	:	[in]  変数値
 *	@retval	HRESULT
 *
 */  
/*
HRESULT CCaoProvVariable::FinalGetValue(VARIANT *pVal)
{
	HRESULT hr = E_ACCESSDENIED;

	if (m_bSystem) {
		switch (m_ulParentType) {
		case SYS_CLS_CONTROLLER:
			hr = FinalGetCtrlSysValue(pVal);
			break;
		}
	}
	else {
		switch (m_ulParentType) {
		case SYS_CLS_CONTROLLER:
			hr = FinalGetCtrlUserValue(pVal);
			break;
		}
	}

	return hr;
}
*/

/**	変数の値の変更
 *
 *　ICaoVariable::put_Value()の実体となる．
 *
 *	@param	newVal	:	[in]  変数値
 *	@retval	HRESULT
 *
 */  
/*
HRESULT CCaoProvVariable::FinalPutValue(VARIANT newVal)
{
	HRESULT hr = E_ACCESSDENIED;

	if (m_bSystem) {
		switch (m_ulParentType) {
		case SYS_CLS_CONTROLLER:
			hr = FinalPutCtrlSysValue(newVal);
			break;
		}
	}
	else {
		switch (m_ulParentType) {
		case SYS_CLS_CONTROLLER:
			hr = FinalPutCtrlUserValue(newVal);
			break;
		}
	}
	return hr;
}
*/

/**	IDの取得
 *
 *	@param	pVal	:	[out] ID
 *	@retval	HRESULT
 *
 */
/*
HRESULT CCaoProvVariable::FinalGetID(VARIANT *pVal)
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
HRESULT CCaoProvVariable::FinalPutID(VARIANT newVal)
{
	return E_NOTIMPL;
}
*/

/**	マイクロ秒のタイムスタンプの取得
 *
 *	@param	pVal	:	[out] ID
 *	@retval	HRESULT
 *
 */
/*
HRESULT CCaoProvVariable::FinalGetMicrosecond(long *pVal)
{
	return E_NOTIMPL;
}
*/

// ========== 各社追加関数はこれ以下に記述する．==========

// 変数名リストの実体
var_map CCaoProvVariable::m_cs_map;
bool CCaoProvVariable::m_bInitializedMap = false;


/**	変数名テーブルの初期化
 *
 *	@retval	HRESULT
 *
 */  
HRESULT  CCaoProvVariable::InitMapTable()
{
	if (m_bInitializedMap) return S_FALSE;

	// 変数名マップの初期化
	const var_map_entry var_cs_map[] = { 
		MAP_ENTRY( CS_MAKER_NAME	),
		MAP_ENTRY( CS_VERSION	),
		// :

		};
	m_cs_map.insert( var_cs_map, var_cs_map +sizeof(var_cs_map)/sizeof(var_cs_map[0]) );

	m_bInitializedMap = true;

	return S_OK;
}

/**	コントローラクラスシステム変数の値の取得
 *
 *	@param	pVal	:	[out]  変数値
 *	@retval	HRESULT
 *
 */  
HRESULT CCaoProvVariable::FinalGetCtrlSysValue(VARIANT *pVal)
{
	HRESULT hr = S_OK;

	switch (m_lUSysId) {
	case CS_MAKER_NAME:
		pVal->vt = VT_BSTR;
		pVal->bstrVal = SysAllocString(L"Maker Name ???");
		break;

	case CS_VERSION:
		pVal->vt = VT_BSTR;
		pVal->bstrVal = SysAllocString(L"0.0.0");
		break;
	default:
		hr = E_ACCESSDENIED;
		break;
	}

	return hr;
}

/**	コントローラクラスシステム変数の値の設定
 *
 *	@param	newVal	:	[in]  変数値
 *	@retval	HRESULT
 *
 */  
HRESULT CCaoProvVariable::FinalPutCtrlSysValue(VARIANT newVal)
{
	HRESULT hr = E_ACCESSDENIED;

	return hr;
}

/**	コントローラユーザー変数の値の取得
 *
 *	@param	pVal	:	[in]  変数値
 *	@retval	HRESULT
 *
 */  
HRESULT CCaoProvVariable::FinalGetCtrlUserValue(VARIANT *pVal)
{
	return E_NOTIMPL;
}

/**	コントローラユーザー変数の値の変更
 *
 *	@param	newVal	:	[in]  変数値
 *	@retval	HRESULT
 *
 */  
HRESULT CCaoProvVariable::FinalPutCtrlUserValue(VARIANT newVal)
{
	return E_NOTIMPL;
}

