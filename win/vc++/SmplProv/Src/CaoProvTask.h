/** @file CaoProvTask.h
 *
 *  @brief CCaoProvTask の宣言
 *
 *  @version	1.0
 *	@date		2003/8/8
 *	@author		DENSO WAVE
 *
 */

#ifndef __CAOPROVTASK_H_
#define __CAOPROVTASK_H_

#include "CaoProvTaskImpl.h"

/**	CAOプロバイダのTaskクラス
 *
 *	デュアルインターフェースを持つCOMのクラス．詳細はICaoProvTaskを参照．<br>
 *	CaoProvCtrlクラスから呼び出されるクラス．外部からインスタンスの作成は不可能．<br>
 *  インターフェースはICaoProvTaskImplクラスで実装されている．
 *
 */
class ATL_NO_VTABLE CCaoProvTask : 
	public ICaoProvTaskImpl<CCaoProvTask, CCaoProvVariable>
{
protected:
//	HRESULT FinalInitialize(PVOID pObj);
//	void FinalTerminate();

//	HRESULT FinalDelete(/*[in]*/ BSTR bstrOption);
//	HRESULT FinalStart(/*[in]*/ long lMode, /*[in]*/ BSTR bstrOption);
//	HRESULT FinalStop(/*[in]*/ long lMode, /*[in]*/ BSTR bstrOption);
//	HRESULT FinalExecute(/*[in]*/ BSTR bstrCommand, /*[in]*/ VARIANT vntParam, /*[out, retval]*/ VARIANT *pVal);

//	HRESULT FinalGetAttribute(/*[out, retval]*/ long *pVal);
//	HRESULT FinalGetHelp(/*[out, retval]*/ BSTR *pVal);
//	HRESULT FinalGetFileName(/*[out, retval]*/ BSTR *pVal);
//	HRESULT FinalGetVariableNames(/*[in]*/BSTR bstrOption, /*[out, retval]*/VARIANT *pVal);
//	HRESULT FinalGetID(/*[out, retval]*/ VARIANT *pVal);
//	HRESULT FinalPutID(/*[in]*/ VARIANT newVal);

// ========== 各社追加関数はこれ以下に記述する．==========

private:
// ========== 各社追加関数はこれ以下に記述する．==========


};

#endif //__CAOPROVTASK_H_
