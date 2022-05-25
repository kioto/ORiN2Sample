/** @file CaoProvExtension.cpp
 *
 *  @brief CCaoProvExtension の実装
 *
 *  @version	1.0
 *	@date		2003/8/8
 *	@author		DENSO WAVE
 *
 */

#include "stdafx.h"
#include "CAOPROV.h"
#include "CaoProvController.h"
#include "CaoProvExtension.h"

/**	初期化処理
 *
 *　CaoProvExtensionオブジェクトが作成されて最初に呼ばれる関数である．
 *
 *	@param	pObj	:	[in] 親オブジェクト
 *	@retval	HRESULT
 *
 */ 
/*
HRESULT CCaoProvExtension::FinalInitialize(PVOID pObj)
{
	// CaoProvExtensionオブジェクト共通の初期化処理などを行う．
	return E_NOTIMPL; // このクラスを実装するならば S_OK にして下さい．
}
*/

/**	最終処理
 *
 *　CaoProvExtensionオブジェクトが消滅するときに１度だけ呼ばれる．
 *
 *	@retval	HRESULT
 *
 */ 
/*
void CCaoProvExtension::FinalTerminate()
{
	// CaoProvExtensionオブジェクトの解放前処理をする．
}
*/

/**	拡張コマンドの実行
 *
 *	@param	bstrCmd	:	[in] コマンド名
 *	@param	vntPara	:	[in] パラメータ
 *	@param	pVal	:	[out] 実行結果
 *	@retval	HRESULT
 *
 */
/*
HRESULT CCaoProvExtension::FinalExecute(BSTR bstrCommand, VARIANT vntParam, VARIANT *pVal)
{
	// 各社コマンドを解釈，実行し，実行結果を返す．
	// 実行結果は，各社毎に（VARIANT内で）自由である．
	return E_NOTIMPL;
}
*/

/**	属性の取得
 *
 *	@param	pVal	:	[out] 属性
 *	@retval	HRESULT
 *
 */ 
/*
HRESULT CCaoProvExtension::FinalGetAttribute(long *pVal)
{
    // ファイルの属性を LONG型 で取得する．
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
HRESULT CCaoProvExtension::FinalGetHelp(BSTR *pVal)
{
	// 任意のヘルプ文字列を返す．
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
/*
HRESULT CCaoProvExtension::FinalGetVariableNames(BSTR bstrOption, VARIANT *pVal)
{
	// 変数名リストを文字列のSAFEARRAYとして作成．
    // そのポインタをVARIANT(pVal->vt = VT_BSTR|VT_ARRAY，pVal->parray = xxx)に格納する．
	return E_NOTIMPL;
}
*/

/**	IDの取得
 *
 *	@param	pVal	:	[out] ID
 *	@retval	HRESULT
 *
 */
/*
HRESULT CCaoProvExtension::FinalGetID(VARIANT *pVal)
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
HRESULT CCaoProvExtension::FinalPutID(VARIANT newVal)
{
	return E_NOTIMPL;
}
*/

// ========== 各社追加関数はこれ以下に記述する．==========
