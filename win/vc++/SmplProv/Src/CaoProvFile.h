/** @file CaoProvFile.h
 *
 *  @brief CCaoProvFile の宣言
 *
 *  @version	1.0
 *	@date		2003/8/8
 *	@author		DENSO WAVE
 *
 */

#ifndef __CAOPROVFILE_H_
#define __CAOPROVFILE_H_

#include "CaoProvFileImpl.h"

/**	CAOプロバイダのFileクラス
 *
 *	デュアルインターフェースを持つCOMのクラス．詳細はICaoProvFileを参照．<br>
 *	CaoProvControllerクラス及びCaoProvFileクから呼び出されるクラス．<br>
 *　外部からインスタンスの作成は不可能．<br>
 *  インターフェースはICaoProvFileImplクラスで実装されている．
 *
 */
class ATL_NO_VTABLE CCaoProvFile:
	public ICaoProvFileImpl<CCaoProvFile, CCaoProvVariable>
{
protected:
//	HRESULT FinalInitialize(PVOID pObj);
//	void FinalTerminate();

//	HRESULT FinalCopy(/*[in]*/ BSTR bstrName, /*[in]*/ BSTR bstrOption);
//	HRESULT FinalMove(/*[in]*/ BSTR bstrName, /*[in]*/ BSTR bstrOption);
//	HRESULT FinalDelete(/*[in]*/ BSTR bstrOption);
//	HRESULT FinalRun(/*[in]*/ BSTR bstrOption, /*[out, retval]*/ BSTR *pVal);
//	HRESULT FinalExecute(/*[in]*/ BSTR bstrCommand, /*[in]*/ VARIANT vntParam, /*[out, retval]*/ VARIANT *pVal);

//	HRESULT FinalGetAttribute(/*[out, retval]*/ long *pVal);
//	HRESULT FinalGetDateCreated(/*[out, retval]*/ VARIANT *pVal);
//	HRESULT FinalGetDateLastAccessed(/*[out, retval]*/ VARIANT *pVal);
//	HRESULT FinalGetDateLastModified(/*[out, retval]*/ VARIANT *pVal);
//	HRESULT FinalGetHelp(/*[out, retval]*/ BSTR *pVal);
//	HRESULT FinalGetPath(/*[out, retval]*/ BSTR *pVal);
//	HRESULT FinalGetSize(/*[out, retval]*/ long *pVal);
//	HRESULT FinalGetType(/*[out, retval]*/ BSTR *pVal);
//	HRESULT FinalGetValue(/*[out, retval]*/ VARIANT *pVal);
//	HRESULT FinalPutValue(/*[in]*/ VARIANT newVal);
//	HRESULT FinalGetFileNames(/*[in]*/ BSTR bstrOption, /*[out, retval]*/ VARIANT *pVal);
//	HRESULT FinalGetVariableNames(/*[in]*/ BSTR bstrOption, /*[out, retval]*/ VARIANT *pVal);
//	HRESULT FinalGetID(/*[out, retval]*/ VARIANT *pVal);
//	HRESULT FinalPutID(/*[in]*/ VARIANT newVal);

// ========== 各社追加関数はこれ以下に記述する．==========

private:
// ========== 各社追加関数はこれ以下に記述する．==========

};

#endif //__CAOPROVFILE_H_
