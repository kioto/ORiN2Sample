/** @file CaoProvMessage.cpp
 *
 *  @brief CCaoProvMessage の実装
 *
 *  @version	1.0
 *	@date		2003/8/8
 *	@author		DENSO WAVE
 *
 */

#include "stdafx.h"
#include "CAOPROV.h"
#include "CaoProvController.h"
#include "CaoProvMessage.h"

/**	初期化処理
 *
 *　CCaoProvMessageオブジェクトが作成されて最初に呼ばれる関数である．
 *
 *	@param	pObj	:	[in] 親オブジェクト
 *	@retval	HRESULT
 *
 */ 
/*
HRESULT CCaoProvMessage::FinalInitialize(PVOID pObj)
{
	// CaoProvMessageオブジェクト共通の初期化処理などを行う．
	return E_NOTIMPL; // このクラスを実装するならば S_OK にして下さい．
}
*/

/**	最終処理
 *
 *　CaoProvMessageオブジェクトが消滅するときに１度だけ呼ばれる．
 *
 */ 
/*
void CCaoProvMessage::FinalTerminate()
{
	// CaoProvMessageオブジェクトの解放前処理をする．
}
*/

/**	メッセージの返信
 *
 *　ICaoMessage::Reply()の実体となる．
 *
 *	@param	vntData	:	[out] 返信データ
 *	@retval	HRESULT
 *
 */
/*
HRESULT CCaoProvMessage::FinalReply(VARIANT vntData) 
{
	return E_NOTIMPL;
}
*/

/**	メッセージのクリア
 *
 *　ICaoMessage::Clear()の実体となる．
 *
 *	@retval	HRESULT
 *
 */
/*
HRESULT CCaoProvMessage::FinalClear()
{
	return E_NOTIMPL;
}
*/

/**	メッセージ作成日時の取得
 *
 *　ICaoMessage::DateTime()プロパティの実体となる．
 *
 *	@param	pVal	:	[out] 作成日時
 *	@retval	HRESULT
 *
 */ 
/*
HRESULT CCaoProvMessage::FinalGetDateTime(VARIANT *pVal)
{
    // VARIANT(pVal->vt = VT_DATE，pVal->date = xxx)に時間を格納する．
	return E_NOTIMPL;
}
*/

/**	メッセージの説明の取得
 *
 *　ICaoMessage::Description()プロパティの実体となる．
 *
 *	@param	pVal	:	[out] 説明
 *	@retval	HRESULT
 *
 */ 
/*
HRESULT CCaoProvMessage::FinalGetDescription(BSTR *pVal)
{
	return E_NOTIMPL;
}
*/

/**	送り先の取得
 *
 *　ICaoMessage::Destination()プロパティの実体となる．
 *
 *	@param	pVal	:	[out] 送り先
 *	@retval	HRESULT
 *
 */ 
/*
HRESULT CCaoProvMessage::FinalGetDestination(BSTR *pVal)
{
	return E_NOTIMPL;
}
*/

/**	メッセージ番号の取得
 *
 *　ICaoMessage::Number()プロパティの実体となる．
 *
 *	@param	pVal	:	[out] メッセージ番号
 *	@retval	HRESULT
 *
 */ 
/*
HRESULT CCaoProvMessage::FinalGetNumber(long *pVal)
{
	return E_NOTIMPL;
}
*/

/**	送り元の取得
 *
 *　ICaoMessage::Source()プロパティの実体となる．
 *
 *	@param	pVal	:	[out] 送り元
 *	@retval	HRESULT
 *
 */ 
/*
HRESULT CCaoProvMessage::FinalGetSource(BSTR *pVal)
{
	return E_NOTIMPL;
}
*/

/**	メッセージ本文の取得
 *
 *　ICaoMessage::Value()プロパティの実体となる．
 *
 *	@param	pVal	:	[out] メッセージ本文
 *	@retval	HRESULT
 *
 */ 
/*
HRESULT CCaoProvMessage::FinalGetValue(VARIANT *pVal)
{
	return E_NOTIMPL;
}
*/

// ========== 各社追加関数はこれ以下に記述する．==========
