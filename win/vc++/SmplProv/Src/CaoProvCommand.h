/** @file CaoProvCommand.h
 *
 *  @brief CCaoProvCommand の宣言
 *
 *  @version	1.0
 *	@date		2003/8/8
 *	@author		DENSO WAVE
 *
 */

#ifndef __CAOPROVCOMMAND_H_
#define __CAOPROVCOMMAND_H_

#include "CaoProvCommandImpl.h"

/**	CAOプロバイダのCommandクラス
 *
 *	デュアルインターフェースを持つCOMのクラス．詳細はICaoProvCommandを参照．<br>
 *	CaoProvCommandクラスから呼び出されるクラス．外部からインスタンスの作成は不可能．<br>
 *  インターフェースはICaoProvCommandImplクラスで実装されている．
 *
 */
class ATL_NO_VTABLE CCaoProvCommand : 
	public ICaoProvCommandImpl<CCaoProvCommand>
{
protected:
//	HRESULT FinalInitialize(PVOID pObj);
//	void FinalTerminate();

//	HRESULT FinalExecute(/*[in]*/ long lMode, /*[out, retval]*/ VARIANT *pVal);
//	HRESULT FinalCancel();

//	HRESULT FinalGetAttribute(/*[out, retval]*/ long *pVal);
//	HRESULT FinalGetHelp(/*[out, retval]*/ BSTR *pVal);
//	HRESULT FinalGetParameters(/*[out, retval]*/ VARIANT *pVal);
//	HRESULT FinalPutParameters(/*[in]*/ VARIANT newVal);
//	HRESULT FinalGetState(/*[out, retval]*/ long *pVal);
//	HRESULT FinalGetTimeout(/*[out, retval]*/ long *pVal);
//	HRESULT FinalPutTimeout(/*[in]*/ long newVal);
//	HRESULT FinalGetID(/*[out, retval]*/ VARIANT *pVal);
//	HRESULT FinalPutID(/*[in]*/ VARIANT newVal);

// ========== 各社追加関数はこれ以下に記述する．==========

private:
// ========== 各社追加関数はこれ以下に記述する．==========


};

#endif //__CAOPROVCOMMAND_H_
