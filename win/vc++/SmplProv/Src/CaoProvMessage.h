/** @file CaoProvMessage.h
 *
 *  @brief CCaoProvMessage の宣言
 *
 *  @version	1.0
 *	@date		2003/8/8
 *	@author		DENSO WAVE
 *
 */

#ifndef __CAOPROVMESSAGE_H_
#define __CAOPROVMESSAGE_H_

#include "CaoProvMessageImpl.h"

/**	CAOプロバイダのMessageクラス
 *
 *	デュアルインターフェースを持つCOMのクラス．詳細はICaoProvFileを参照．<br>
 *	CaoProvControllerクラスから呼び出されるクラス．外部からインスタンスの作成は不可能．<br>
 *  インターフェースはICaoProvMessageImplクラスで実装されている．
 *	OnMessageイベントでCaoエンジンに送られるクラス．
 *
 */
class ATL_NO_VTABLE CCaoProvMessage : 
	public ICaoProvMessageImpl
{
protected:
//	HRESULT FinalInitialize(PVOID pObj);
//	void FinalTerminate();

//	HRESULT FinalReply(/*[in]*/ VARIANT vntData);
//	HRESULT FinalClear();

//	HRESULT FinalGetDateTime(/*[out, retval]*/ VARIANT *pVal);
//	HRESULT FinalGetDescription(/*[out, retval]*/ BSTR *pVal);
//	HRESULT FinalGetDestination(/*[out, retval]*/ BSTR *pVal);
//	HRESULT FinalGetNumber(/*[out, retval]*/ long *pVal);
//	HRESULT FinalGetSource(/*[out, retval]*/ BSTR *pVal);
//	HRESULT FinalGetValue(/*[out, retval]*/ VARIANT *pVal);

// ========== 各社追加関数はこれ以下に記述する．==========

private:
// ========== 各社追加関数はこれ以下に記述する．==========

};

#endif //__CAOPROVMESSAGE_H_
