/** @file CaoProvTask.cpp
 *
 *  @brief CCaoProvTask の実装
 *
 *  @version	1.0
 *	@date		2003/8/8
 *	@author		DENSO WAVE
 *
 */

#include "stdafx.h"
#include "CAOPROV.h"
#include "CaoProvController.h"
#include "CaoProvTask.h"


/**	初期化処理
 *
 *　CaoProvTaskオブジェクトが作成されて最初に呼ばれる関数である．
 *
 *	@param	pObj	:	[in] 親オブジェクト
 *	@retval	HRESULT
 *
 */ 
/*
HRESULT CCaoProvTask::FinalInitialize(PVOID pObj)
{

	// CaoProvRobotオブジェクト共通の初期化処理などを行う．
	return E_NOTIMPL; // このクラスを実装するならば S_OK にして下さい．
}
*/

/**	最終処理
 *
 *　CaoProvTaskオブジェクトが消滅するときに１度だけ呼ばれる．
 *
 *	@retval	HRESULT
 *
 */ 
/*
void CCaoProvTask::FinalTerminate()
{
	// CaoProvTaskオブジェクトの解放前処理をする．
}
*/
  
/**	タスク（プログラム）の削除
 *
 *　ICaoTask::Delete()メソッドの実体となる．
 *
 *	@param	bstrOption	:	[in] オプション
 *	@retval	HRESULT
 *
 */ 
/*
HRESULT  CCaoProvTask::FinalDelete(BSTR bstrOption)
{
	// タスク（プログラム）を完全に削除する．
	return E_NOTIMPL;
}
*/

/**	タスク（プログラム）の開始
 *
 *　ICaoTask::Start()メソッドの実体となる．
 *
 *	@param	lMode	:	[in] 開始モード
 *	@param	bstrOption	:	[in] オプション
 *	@retval	HRESULT
 *
 */ 
/*
HRESULT  CCaoProvTask::FinalStart(long lMode, BSTR bstrOption)
{
	// タスク（プログラム）を開始させる．
	// 開始モードは，１：１サイクル実行，２：連続実行，３：１ステップ 送り，４：１ステップ 戻し
	return E_NOTIMPL;
}
*/

/**	タスク（プログラム）の停止
 *
 *　ICaoTask::Stop()メソッドの実体となる．
 *
 *	@param	lMode	:	[in] 停止モード
 *	@param	bstrOption	:	[in] オプション
 *	@retval	HRESULT
 *
 */ 
/*
HRESULT  CCaoProvTask::FinalStop(long lMode, BSTR bstrOption)
{
	// タスク（プログラム）を停止させる．
	// 停止モードは，０：デフォルト停止，１：瞬時停止，２：ステップ停止，３：サイクル停止，４：初期化停止
	return E_NOTIMPL;
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
HRESULT CCaoProvTask::FinalExecute(BSTR bstrCommand, VARIANT vntParam, VARIANT *pVal)
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
HRESULT CCaoProvTask::FinalGetAttribute(long *pVal)
{
    // タスクの属性を LONG型 で取得する．
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
HRESULT  CCaoProvTask::FinalGetHelp(BSTR *pVal)
{
	// 任意のヘルプ文字列を返す．
	return E_NOTIMPL;
}
*/

/**	対応ファイル名の取得
 *
 *	@param	pVal	:	[out] ファイル名
 *	@retval	HRESULT
 *
 */
/*
HRESULT CCaoProvTask::FinalGetFileName(BSTR *pVal)
{
	// タスクを作成した元ファイル名を返す．
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
HRESULT CCaoProvTask::FinalGetVariableNames(BSTR bstrOption, VARIANT *pVal)
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
HRESULT CCaoProvTask::FinalGetID(VARIANT *pVal)
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
HRESULT CCaoProvTask::FinalPutID(VARIANT newVal)
{
	return E_NOTIMPL;
}
*/

// ========== 各社追加関数はこれ以下に記述する．==========
