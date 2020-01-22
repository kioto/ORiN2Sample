/** @file CaoProvExtension.h
 *
 *  @brief CCaoProvExtension の宣言
 *
 *  @version	1.0
 *	@date		2003/8/8
 *	@author		DENSO WAVE
 *
 */

#ifndef __CAOPROVEXTENSION_H_
#define __CAOPROVEXTENSION_H_

#include "CaoProvExtensionImpl.h"

/**	CAOプロバイダのExtensionクラス
 *
 *	デュアルインターフェースを持つCOMのクラス．詳細はICaoProvExtensionを参照．<br>
 *	CaoProvCtrlクラスから呼び出されるクラス．外部からインスタンスの作成は不可能．<br>
 *  インターフェースはICaoProvExtensionImplクラスで実装されている．
 *
 */
class ATL_NO_VTABLE CCaoProvExtension : 
	public ICaoProvExtensionImpl<CCaoProvExtension, CCaoProvVariable>
{
protected:
//	HRESULT FinalInitialize(PVOID pObj);
//	void FinalTerminate();

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

#endif //__CAOPROVEXTENSION_H_
