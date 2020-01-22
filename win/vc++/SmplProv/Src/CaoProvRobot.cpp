/** @file CaoProvRobot.cpp
 *
 *  @brief CCaoProvRobot の実装
 *
 *  @version	1.0
 *	@date		2003/8/8
 *	@author		DENSO WAVE
 *
 */

#include "stdafx.h"
#include "CAOPROV.h"
#include "CaoProvController.h"
#include "CaoProvRobot.h"


/**	初期化処理
 *
 *　CaoProvRobotオブジェクトが作成されて最初に呼ばれる関数である．
 *
 *	@param	pObj	:	[in] 親オブジェクト
 *	@retval	HRESULT
 *
 */ 
/*
HRESULT CCaoProvRobot::FinalInitialize(PVOID pObj)
{
	// CaoProvRobotオブジェクト共通の初期化処理などを行う．
	return E_NOTIMPL; // このクラスを実装するならば S_OK にして下さい．
}
*/

/**	最終処理
 *
 *　CaoProvRobotオブジェクトが消滅するときに１度だけ呼ばれる．
 *
 *	@retval	HRESULT
 *
 */ 
/*
void CCaoProvRobot::FinalTerminate()
{
	// CaoProvRobotオブジェクトの解放前処理をする．
}
*/

/**	ACCEL文の実行
 *
 *　ICaoRobot::Accelerate()の実体となる．
 *	SLIMのACCEL文の仕様参照
 *
 *	@param	lAxis	:	[in] 軸番号
 *	@param	fAccel	:	[in] 加速度
 *	@param	fDecel	:	[in] 減速度
 *	@retval	HRESULT
 *
 */  
/*
HRESULT CCaoProvRobot::FinalAccelerate(long lAxis, float fAccel, float fDecel)
{
	return E_NOTIMPL;
}
*/

/**	CHANGE文の実行
 *
 *　ICaoRobot::Change()の実体となる．
 *	SLIMのCHANGE文の仕様参照
 *
 *	@param	bstrName	:	[in] ハンド名
 *	@retval	HRESULT
 *
 */  
/*
HRESULT CCaoProvRobot::FinalChange(BSTR bstrName)
{
	return E_NOTIMPL;
}
*/

/**	GRASP文の実行
 *
 *　ICaoRobot::Chuck()の実体となる．
 *	SLIMのGRASP文の仕様参照
 *
 *	@param	bstrOption	:	[in] オプション
 *	@retval	HRESULT
 *
 */  
/*
HRESULT CCaoProvRobot::FinalChuck(BSTR bstrOption)
{
	return E_NOTIMPL;
}
*/

/**	DRIVE文の実行
 *
 *　ICaoRobot::Drive()の実体となる．
 *	SLIMのDRIVE文の仕様参照
 *
 *	@param	lNo	:	[in] 軸番号
 *	@param	fMov	:	[in] 移動量
 *	@param	bstrOpt	:	[in] 動作オプション
 *	@retval	HRESULT
 *
 */
/*
HRESULT CCaoProvRobot::FinalDrive(long lNo, float fMov, BSTR bstrOpt)
{
	return E_NOTIMPL;
}
*/

/**	GOHOME文の実行
 *
 *　ICaoRobot::GoHome()の実体となる．
 *	SLIMのGOHOME文の仕様参照
 *
 *	@retval	HRESULT
 *
 */  
/*
HRESULT CCaoProvRobot::FinalGoHome()
{
	return E_NOTIMPL;
}
*/

/**	強制停止
 *
 *	@param	bstrOption	:	[in] オプション
 *	@retval	HRESULT
 *
 */
/*
HRESULT CCaoProvRobot::FinalHalt(BSTR bstrOption)
{
	return E_NOTIMPL;
}
*/

/**	一時停止
 *
 *	@param	bstrOption	:	[in] オプション
 *	@retval	HRESULT
 *
 */
/*
HRESULT CCaoProvRobot::FinalHold(BSTR bstrOption)
{
	return E_NOTIMPL;
}
*/

/**	MOVE文の実行
 *
 *　ICaoRobot::Move()の実体となる．
 *	SLIMのMOVE文の仕様参照．
 *
 *	@param	lComp	:	[in] 補完指定
 *	@param	vntPose	:	[in] ポーズ列
 *	@param	bstrOpt	:	[in] 動作オプション
 *	@retval	HRESULT
 *
 */
/*
HRESULT CCaoProvRobot::FinalMove(long lComp, VARIANT vntPose, BSTR bstrOpt )
{
	return E_NOTIMPL;
}
*/

/**	ROTATE文の実行
 *
 *　ICaoRobot::Rotate()の実体となる．
 *	SLIMのROTATE文の仕様参照．
 *
 *	@param	vntRotSuf	:	[in] 回転面
 *	@param	fDeg	:	[in] 角度
 *	@param	vntPivot	:	[in] 回転中心
 *	@param	bstrOpt	:	[in] 動作オプション
 *	@retval	HRESULT
 *
 */
/*
HRESULT CCaoProvRobot::FinalRotate(VARIANT vntRotSuf, float fDeg, VARIANT vntPivot, BSTR bstrOpt )
{
	return E_NOTIMPL;
}
*/

/**	SPEED/JSPEED文の実行
 *
 *　ICaoRobot::Speed()の実体となる．
 *	SLIMのSPEED/JSPEED文の仕様参照
 *
 *	@param	lAxis	:	[in] 軸番号
 *	@param	fSpeed	:	[in] 速度
 *	@retval	HRESULT
 *
 */  
/*
HRESULT CCaoProvRobot::FinalSpeed(long lAxis, float fSpeed)
{
	return E_NOTIMPL;
}
*/

/**	RELEASE文の実行
 *
 *　ICaoRobot::Unchuck()の実体となる．
 *	SLIMのRELEASE文の仕様参照<br>
 *　SLIMのReleaseは予約語で使えないためChuck/Unchuckに変更．
 *
 *	@param	bstrOption	:	[in] オプション
 *	@retval	HRESULT
 *
 */  
/*
HRESULT CCaoProvRobot::FinalUnchuck(BSTR bstrOption)
{
	return E_NOTIMPL;
}
*/

/**	一時停止の解除
 *
 *	@param	bstrOption	:	[in] オプション
 *	@retval	HRESULT
 *
 */
/*
HRESULT CCaoProvRobot::FinalUnhold(BSTR bstrOption)
{
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
HRESULT CCaoProvRobot::FinalExecute(BSTR bstrCommand, VARIANT vntParam, VARIANT *pVal)
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
HRESULT CCaoProvRobot::FinalGetAttribute(long *pVal)
{
    // ロボットの属性を LONG型 で取得する．
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
HRESULT CCaoProvRobot::FinalGetHelp(BSTR *pVal)
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
HRESULT CCaoProvRobot::FinalGetVariableNames(BSTR bstrOption, VARIANT *pVal)
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
HRESULT CCaoProvRobot::FinalGetID(VARIANT *pVal)
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
HRESULT CCaoProvRobot::FinalPutID(VARIANT newVal)
{
	return E_NOTIMPL;
}
*/

// ========== 各社追加関数はこれ以下に記述する．==========
