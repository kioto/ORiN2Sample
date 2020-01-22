/** @file CaoProvFile.cpp
 *
 *  @brief CCaoProvFile の実装
 *
 *  @version	1.0
 *	@date		2003/8/8
 *	@author		DENSO WAVE
 *
 */

#include "stdafx.h"
#include "CAOPROV.h"
#include "CaoProvController.h"
#include "CaoProvFile.h"


/**	初期化処理
 *
 *　CaoProvFileオブジェクトが作成されて最初に呼ばれる関数である．
 *
 *	@param	pObj	:	[in] 親オブジェクト
 *	@retval	HRESULT
 *
 */ 
/*
HRESULT CCaoProvFile::FinalInitialize(PVOID pObj)
{
	CCaoProvController* pCaopCtrl = NULL;
	CCaoProvFile* pCaopFile = NULL;


	// 親オブジェクトの判定
	switch (m_ulParentType) {
	case SYS_CLS_CONTROLLER:
		pCaopCtrl = (CCaoProvController*)pObj;
		break;
	case SYS_CLS_FILE:
		pCaopFile = (CCaoProvFile*)pObj;
		break;
	}

	// CaoProvVariableオブジェクト共通の初期化処理などを行う．
	return E_NOTIMPL; // このクラスを実装するならば S_OK にして下さい．
}
*/

/**	最終処理
 *
 *　CaoProvFileオブジェクトが消滅するときに１度だけ呼ばれる．
 *
 */ 
/*
void CCaoProvFile::FinalTerminate()
{
	// CaoProvFileオブジェクトの解放前処理をする．
}
*/

/**	ファイルの複写
 *
 *　ICaoFile::Copy()メソッドの実体となる．
 *
 *	@param	bstrName	:	[in] 複写先パス（複写先ファイル）名（文字列）
 *	@param	bstrOption	:	[in] オプション
 *	@retval	HRESULT
 *
 */ 
/*
HRESULT CCaoProvFile::FinalCopy(BSTR bstrName, BSTR bstrOption)
{
	// ファイルの複写をする．
	return E_NOTIMPL;
}
*/

/**	ファイルの移動
 *
 *	@param	bstrName	:	[in] 移動先ファイル名（文字列）
 *	@param	bstrOption	:	[in] オプション
 *	@retval	HRESULT
 *
 */
/*
HRESULT CCaoProvFile::FinalMove(BSTR bstrName, BSTR bstrOption)
{
	// ファイルの移動をする．
	// ICaoFile::Path()プロパティの値も変更しておく．
	return E_NOTIMPL;
}
*/

/**	ファイルの削除
 *
 *　ICaoFile::Delete()メソッドの実体となる．
 *
 *	@param	bstrOption	:	[in] オプション
 *	@retval	HRESULT
 *
 */ 
/*
HRESULT CCaoProvFile::FinalDelete(BSTR bstrOption)
{
	// ファイルの削除をする．
	// CaoProvFileオブジェクトは残っている．
	return E_NOTIMPL;
}
*/
 
/**	タスクの生成
 *
 *　タスクを生成し，タスク名を取得する．
 *
 *	@param	bstrOption	:	[in] オプション
 *	@param	pVal	:	[out] タスク名
 *	@retval	HRESULT
 *
 */  
/*
HRESULT CCaoProvFile::FinalRun(BSTR bstrOption, BSTR *pVal)
{
	// プログラムを実行しタスクを生成する．
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
HRESULT CCaoProvFile::FinalExecute(BSTR bstrCommand, VARIANT vntParam, VARIANT *pVal)
{
	// 各社コマンドを解釈，実行し，実行結果を返す．
	// 実行結果は，各社毎に（VARIANT内で）自由である．
	return E_NOTIMPL;
}
*/

/**	ファイル属性の取得
 *
 *　ICaoFile::Attribute()プロパティの実体となる．
 *
 *	@param	pVal	:	[out] ファイル属性
 *	@retval	HRESULT
 *
 */
/*
HRESULT CCaoProvFile::FinalGetAttribute(long *pVal)
{
    // ファイルの属性を LONG型 で取得する．
	return E_NOTIMPL;
}
*/

/**	ファイル作成日時の取得
 *
 *　ICaoFile::DateCreated()プロパティの実体となる．
 *
 *	@param	pVal	:	[out] ファイル作成日時
 *	@retval	HRESULT
 *
 */
/*
HRESULT CCaoProvFile::FinalGetDateCreated(VARIANT *pVal)
{
    // VARIANT(pVal->vt = VT_DATE，pVal->date = xxx)に時間を格納する．
	return E_NOTIMPL;
}
*/
  
/**	フォルダ最終アクセス日時の取得
 *
 *　ICaoFile::DateLastAccessed()プロパティの実体となる．
 *
 *	@param	pVal	:	[out] ファイル最終アクセス日時
 *	@retval	HRESULT
 *
 */
/*
HRESULT CCaoProvFile::FinalGetDateLastAccessed(VARIANT *pVal)
{
    // VARIANT(pVal->vt = VT_DATE，pVal->date = xxx)に時間を格納する．
	return E_NOTIMPL;
}
*/

/**	ファイル更新日時を取得
 *
 *　ICaoFile::DateLastModified()プロパティの実体となる．
 *
 *	@param	pVal	:	[out] ファイル更新日時
 *	@retval	HRESULT
 *
 */
/*
HRESULT CCaoProvFile::FinalGetDateLastModified(VARIANT *pVal)
{
    // VARIANT(pVal->vt = VT_DATE，pVal->date = xxx)に時間を格納する．
	return E_NOTIMPL;
}
*/

/**	ヘルプの取得
 *
 *　コメント等を格納しておく．
 *　ICaoFile::Help()プロパティの実体となる．
 *
 *	@param	pVal	:	[out] ヘルプ文字列
 *	@retval	HRESULT
 *
 */
/*
HRESULT CCaoProvFile::FinalGetHelp(BSTR *pVal)
{
	// 任意のヘルプ文字列を返す．
	return E_NOTIMPL;
}
*/

/**	パスの取得
 *
 *　ファイルのフルパスを取得する．
 *　ICaoFile::Path()プロパティの実体となる．
 *
 *	@param	pVal	:	[out] ファイルのフルパス名（文字列）
 *	@retval	HRESULT
 *
 */
/*
HRESULT CCaoProvFile::FinalGetPath(BSTR *pVal)
{
	// ファイルのフルパス名を取得する．
	return E_NOTIMPL;
}
*/

/**	サイズの取得
 *
 *　ICaoFile::Size()プロパティの実体となる．
 *
 *	@param	pVal	:	[out] サイズ（バイト数）
 *	@retval	HRESULT
 *
 */
/*
HRESULT CCaoProvFile::FinalGetSize(long *pVal)
{
	// サブフォルダを含むバイトサイズを取得する．
	return E_NOTIMPL;
}
*/

/**	タイプ（拡張子）の取得
 *
 *　タイプ（拡張子）を文字列で取得する．
 *　ICaoFile::Type()プロパティの実体となる．
 *
 *	@param	pVal	:	[out] タイプ（拡張子）データ文字列
 *	@retval	HRESULT
 *
 */
/*
HRESULT CCaoProvFile::FinalGetType(BSTR *pVal)
{
	// 拡張子を文字列で返す．
	return E_NOTIMPL;
}
*/

/**	ファイルの内容の取得
 *
 *	@param	pVal	:	[in] ファイル内容
 *	@retval	HRESULT
 *
 */
/*
HRESULT CCaoProvFile::FinalGetValue(VARIANT *pVal)
{
	// ファイル内データを文字列として一括で返す．
	// テキストデータの場合 pVal->vt = VT_BSTRとしてデータを戻す
	// バイナリデータの場合 pVal->vt = VT_UI1 | VT_ARRAYとしてデータを戻す
	return E_NOTIMPL;
}
*/

/**	ファイルの内容の設定
 *
 *	@param	newVal	:	[in] ファイル内容
 *	@retval	HRESULT
 *
 */
/*
HRESULT CCaoProvFile::FinalPutValue(VARIANT newVal)
{
	// テキストデータ（VT_BSTR）かバイナリデータ（VT_UI1|VT_ARRAY）かを判別
	if (newVal.vt == VT_BSTR) {		// テキストデータ
		// データの転送処理
	}
	else {						// バイナリデータ
		// 受け取るパラメータが参照型か確認する
		SAFEARRAY* pSa;
		if (newVal.vt & VT_BYREF) {
			pSa = *(newVal.pparray);
		}
		else {
			pSa = newVal.parray;
		}
		// データの転送処理
	}

	return E_NOTIMPL;
}
*/

/**	ファイル名リストの取得
 *
 *	@param	bstrOption	:	[in] オプション
 *	@param	pVal	:	[out] ファイル名リスト
 *	@retval	HRESULT
 *
 */
/*
HRESULT CCaoProvFile::FinalGetFileNames(BSTR bstrOption, VARIANT *pVal)
{
	// ファイル名リストを文字列のSAFEARRAYとして作成．
    // そのポインタをVARIANT(pVal->vt = VT_BSTR|VT_ARRAY，pVal->parray = xxx)に格納する．
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
HRESULT CCaoProvFile::FinalGetVariableNames(BSTR bstrOption, VARIANT *pVal)
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
HRESULT CCaoProvFile::FinalGetID(VARIANT *pVal)
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
HRESULT CCaoProvFile::FinalPutID(VARIANT newVal)
{
	return E_NOTIMPL;
}
*/

// ========== 各社追加関数はこれ以下に記述する．==========
