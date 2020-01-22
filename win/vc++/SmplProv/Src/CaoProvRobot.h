/** @file CaoProvRobot.h
 *
 *  @brief CCaoProvRobot の宣言
 *
 *  @version	1.0
 *	@date		2003/8/8
 *	@author		DENSO WAVE
 *
 */

#ifndef __CAOPROVROBOT_H_
#define __CAOPROVROBOT_H_

#include "CaoProvRobotImpl.h"

/**	CAOプロバイダのRobotクラス
 *
 *	デュアルインターフェースを持つCOMのクラス．詳細はICaoProvRobotを参照．<br>
 *	CaoProvCtrlクラスから呼び出されるクラス．外部からインスタンスの作成は不可能．<br>
 *  インターフェースはICaoProvRobotImplクラスで実装されている．
 *
 */
class ATL_NO_VTABLE CCaoProvRobot : 
	public ICaoProvRobotImpl<CCaoProvRobot, CCaoProvVariable>
{
protected:
//	HRESULT FinalInitialize(PVOID pObj);
//	void FinalTerminate();

//	HRESULT FinalAccelerate(/*[in]*/ long lAxis, /*[in]*/ float fAccel, /*[in]*/ float fDecel);
//	HRESULT FinalChange(/*[in]*/ BSTR bstrName);
//	HRESULT FinalChuck(/*[in]*/ BSTR bstrOption);
//	HRESULT FinalDrive(/*[in]*/ long lNo, /*[in]*/ float fMov, /*[in]*/ BSTR bstrOpt);
//	HRESULT FinalGoHome();
//	HRESULT FinalHalt(/*[in]*/ BSTR bstrOption);
//	HRESULT FinalHold(/*[in]*/ BSTR bstrOption);
//	HRESULT FinalMove(/*[in]*/ long lComp, /*[in]*/ VARIANT vntPose, /*[in]*/ BSTR bstrOpt);
//	HRESULT FinalRotate(/*[in]*/ VARIANT vntRotSuf, /*[in]*/ float fDeg, /*[in]*/ VARIANT vntPivot, /*[in]*/ BSTR bstrOpt);
//	HRESULT FinalSpeed(/*[in]*/ long lAxis, /*[in]*/ float fSpeed);
//	HRESULT FinalUnchuck(/*[in]*/ BSTR bstrOption);
//	HRESULT FinalUnhold(/*[in]*/ BSTR bstrOption);
//	HRESULT FinalExecute(/*[in]*/ BSTR bstrCommand, /*[in]*/ VARIANT vntParam, /*[out, retval]*/ VARIANT *pVal);

//	HRESULT FinalGetAttribute(/*[out, retval]*/ long *pVal);
//	HRESULT FinalGetHelp(/*[out, retval]*/ BSTR *pVal);
//	HRESULT FinalGetVariableNames(/*[in]*/ BSTR bstrOption, /*[out, retval]*/ VARIANT *pVal);
//	HRESULT FinalGetID(/*[out, retval]*/ VARIANT *pVal);
//	HRESULT FinalPutID(/*[in]*/ VARIANT newVal);

// ========== 各社追加関数はこれ以下に記述する．==========

private:
// ========== 各社追加関数はこれ以下に記述する．==========

};

#endif //__CAOPROVROBOT_H_
