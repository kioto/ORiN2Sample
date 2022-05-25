/** @file CaoProvCommand.cpp
 *
 *  @brief CCaoProvCommand の実装
 *
 *  @version	1.0
 *	@date		2003/8/8
 *	@author		DENSO WAVE
 *
 */

#include "stdafx.h"
#include "CAOPROV.h"
#include "CaoProvController.h"
#include "CaoProvCommand.h"


/**	初期化処理
 *
 *　CaoProvCommandオブジェクトが作成されて最初に呼ばれる関数である．
 *
 *	@param	pObj	:	[in] 親オブジェクト
 *	@retval	HRESULT
 *
 */ 
/*
HRESULT CCaoProvCommand::FinalInitialize(PVOID pObj)
{

	// CaoProvRobotオブジェクト共通の初期化処理などを行う．
	return E_NOTIMPL; // このクラスを実装するならば S_OK にして下さい．
}
*/

/**	最終処理
 *
 *　CaoProvCommandオブジェクトが消滅するときに１度だけ呼ばれる．
 *
 *	@retval	HRESULT
 *
 */ 
/*
void CCaoProvCommand::FinalTerminate()
{
	// CaoProvCommandオブジェクトの解放前処理をする．
}
*/

/**	コマンドの実行
 *
 *　ICaoCommand::Execute()メソッドの実体となる．<br>
 *	モードの１bit目はコマンドの同期・非同期実行モードの切り替えとして使用されている．<br>
 *	　　　０：同期実行
 *	　　　１：非同期実行
 *
 *	@param	lMode	:	[in] モード
 *	@param	pVal	:	[out] 実行結果
 *	@retval	HRESULT
 *
 */ 
/*
HRESULT  CCaoProvCommand::FinalExecute(long lMode, VARIANT *pVal)
{
	// コマンドの実行処理
	return E_NOTIMPL;
}
*/

/**	実行中コマンドのキャンセル
 *
 *　ICaoCommand::Cancel()メソッドの実体となる．
 *
 *	@retval	HRESULT
 *
 */ 
/*
HRESULT  CCaoProvCommand::FinalCancel()
{
	// コマンドのキャンセル処理
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
HRESULT CCaoProvCommand::FinalGetAttribute(long *pVal)
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
HRESULT  CCaoProvCommand::FinalGetHelp(BSTR *pVal)
{
	// 任意のヘルプ文字列を返す．
	return E_NOTIMPL;
}
*/

/**	パラメータの取得
 *
 *	@param	pVal	:	[out] パラメータ配列
 *	@retval	HRESULT
 *
 */
/*
HRESULT CCaoProvCommand::FinalGetParameters(VARIANT *pVal)
{
	// パラメータ配列を返す．
	return E_NOTIMPL;
}
*/

/**	パラメータの設定
 *
 *	@param	newVal	:	[out] パラメータ配列
 *	@retval	HRESULT
 *
 */
/*
HRESULT CCaoProvCommand::FinalPutParameters(VARIANT newVal)
{
	// パラメータを設定する．
	return E_NOTIMPL;
}
*/

/**	状態の取得
 *
 *	@param	pVal	:	[out] 状態
 *	@retval	HRESULT
 *
 */
/*
HRESULT CCaoProvCommand::FinalGetState(long *pVal)
{
	// 状態を取得する。
	// 1bit目はコマンド実行状態のフラグとして使用します。(1:コマンド実行中、0:コマンド非実行中）
	return E_NOTIMPL;
}
*/

/**	タイムアウトの取得
 *
 *	@param	pVal	:	[out] タイムアウト時間
 *	@retval	HRESULT
 *
 */
/*
HRESULT CCaoProvCommand::FinalGetTimeout(long *pVal)
{
	// タイムアウト時間を返す．
	return E_NOTIMPL;
}
*/

/**	タイムアウトの設定
 *
 *	@param	newVal	:	[out] タイムアウト時間
 *	@retval	HRESULT
 *
 */
/*
HRESULT CCaoProvCommand::FinalPutTimeout(long newVal)
{
	// タイムアウト時間を設定する．
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
HRESULT CCaoProvCommand::FinalGetID(VARIANT *pVal)
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
HRESULT CCaoProvCommand::FinalPutID(VARIANT newVal)
{
	return E_NOTIMPL;
}
*/

// ========== 各社追加関数はこれ以下に記述する．==========
