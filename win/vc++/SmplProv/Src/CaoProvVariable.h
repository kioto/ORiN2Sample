/** @file CaoProvVariable.h
 *
 *  @brief CCaoProvVariable の宣言
 *
 *  @version	1.0
 *	@date		2003/8/8
 *	@author		DENSO WAVE
 *
 */

#ifndef __CAOPROVVARIABLE_H_
#define __CAOPROVVARIABLE_H_

#include "CaoProvVariableImpl.h"

/**	CAOプロバイダのVariableクラス
 *
 *	デュアルインターフェースを持つCOMのクラス．詳細はICaoProvVariableを参照．<br>
 *	CaoProvControllerクラス，CaoProvExtensionクラス，CaoProvFileクラス，CaoProvRobotクラス<br>
 *  及びCaoProvTaskクラスから呼び出されるクラス．<br>
 *  外部からインスタンスの作成は不可能．<br>
 *  インターフェースはICaoProvVariableImplクラスで実装されている．
 *
 */
class ATL_NO_VTABLE CCaoProvVariable : 
	public ICaoProvVariableImpl<CCaoProvVariable>
{
protected:
//	HRESULT FinalInitialize(PVOID pObj);
//	void FinalTerminate();

//	HRESULT FinalGetAttribute( /*[out, retval ]*/ long *pVal );
//	HRESULT FinalGetHelp(/*[out, retval]*/ BSTR *pVal);
//	HRESULT FinalGetDateTime(/*[out, retval]*/ VARIANT *pVal);
//	HRESULT FinalGetValue(/*[out, retval]*/ VARIANT *pVal);
//	HRESULT FinalPutValue(/*[in]*/ VARIANT newVal);
//	HRESULT FinalGetID(/*[out, retval]*/ VARIANT *pVal);
//	HRESULT FinalPutID(/*[in]*/ VARIANT newVal);
//	HRESULT FinalGetMicrosecond(/*[out, retval]*/ long *pVal);

// ========== 各社追加関数はこれ以下に記述する．==========
	HRESULT InitMapTable();

private:
// ========== 各社追加関数はこれ以下に記述する．==========
	HRESULT FinalGetCtrlSysValue(VARIANT *pVal);
	HRESULT FinalPutCtrlSysValue(VARIANT newVal);
	HRESULT FinalGetCtrlUserValue(VARIANT *pVal);
	HRESULT FinalPutCtrlUserValue(VARIANT newVal);

private:
// ========== 各社追加関数はこれ以下に記述する．==========

	// 変数名リスト
	static bool m_bInitializedMap;
	static var_map m_cs_map;

	long m_lUSysId;					// システム変数番号

};

#endif //__CAOPROVTASKVARIABLE_H_
