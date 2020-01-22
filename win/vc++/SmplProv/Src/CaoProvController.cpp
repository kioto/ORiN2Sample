/** @file CaoProvController.cpp
 *
 *  @brief CCaoProvController �̎���
 *
 *  @version	1.0
 *	@date		2003/8/8
 *	@author		DENSO WAVE
 *
 */

#include "stdafx.h"
#include "CAOPROV.h"
#include "CaoProvController.h"

#include "OptionValue.h" // ORiN2/CAO/Include


/**	����������
 *
 *�@CaoProvController�I�u�W�F�N�g���쐬����čŏ��ɌĂ΂��֐��ł���D
 *
 *	@retval	HRESULT
 *
 */
HRESULT CCaoProvController::FinalInitialize()
{
	_Module.LogEvent(LOG_LEVEL_DEBUG,"CCaoProvController::FinalInitialize()\n");

#ifdef CAOP_CANCEL_SUPPORT
	m_hProviderCancelEvent = ::CreateEvent(NULL, TRUE, FALSE, NULL);

	// Execute�p�R�}���h�Ɗ֐��|�C���^�̓o�^
	AddFunction(L"ProviderCancel", &CCaoProvController::ExecProviderCancel);
	AddFunction(L"ProviderClear", &CCaoProvController::ExecProviderClear);
	// :
	// �v���o�C�_�L�����Z���T���v��
	AddFunction(L"ProviderCancelSampleMethod", &CCaoProvController::ExecProviderCancelSampleMethod);
#endif

	// ���̊֐��͕K����������B
	// CaoProvController�I�u�W�F�N�g���ʂ̏����������Ȃǂ��s���D

	return S_OK; //����������Ԃ�l�� S_OK �ɂ���D
}

/**	�ŏI����
 *
 *�@CaoProvController�I�u�W�F�N�g�����ł���Ƃ��ɂP�x�����Ă΂��D
 *
 *	@retval	HRESULT
 *
 */
/*
void CCaoProvController::FinalTerminate()
{
	_Module.LogEvent(LOG_LEVEL_DEBUG,"CCaoProvController::FinalTerminate()\n");

#ifdef CAOP_CANCEL_SUPPORT
		if(m_hProviderCancelEvent != NULL) {
			::CloseHandle(m_hProviderCancelEvent);
			m_hProviderCancelEvent = NULL;
		}
#endif

	// ���̊֐��͕K����������B
	// CaoProvController�I�u�W�F�N�g�̉���O����������D
}
*/

/**	�v���o�C�_�ڑ��J�n����
 *
 *�@�v���o�C�_���ōŏ��ɌĂ΂��֐��ł���D
 *
 *	@retval	HRESULT
 *
 */
HRESULT CCaoProvController::FinalConnect()
{
	_Module.LogEvent(LOG_LEVEL_DEBUG,"CCaoProvController::FinalConnect()\n");

	// ���̊֐��͕K����������D
	// �v���o�C�_�̐ڑ������������ōs���D

	// �ڑ��p�����[�^�̎擾
	HRESULT hr = ParseConnectionString();
	if (FAILED(hr)) return hr;

	return S_OK; //����������Ԃ�l�� S_OK �ɂ���D
}

/**	�v���o�C�_�ؒf����
 *
 *	@retval	HRESULT
 *
 */
HRESULT CCaoProvController::FinalDisconnect()
{
	_Module.LogEvent(LOG_LEVEL_DEBUG,"CCaoProvController::FinalDisconnect()\n");

	// ���̊֐��͕K����������D
	// �v���o�C�_�̐ؒf�����������ōs���D

	return S_OK; //����������Ԃ�l�� S_OK �ɂ���D
}

/**	�g���R�}���h�̎��s
 *
 *	@param	bstrCmd	:	[in] �R�}���h��
 *	@param	vntPara	:	[in] �p�����[�^
 *	@param	pVal	:	[out] ���s����
 *	@retval	HRESULT
 *
 */
/*
HRESULT CCaoProvController::FinalExecute(BSTR bstrCommand, VARIANT vntParam, VARIANT *pVal)
{
	// AddFunction()�œo�^�����R�}���h�����s����
	HRESULT hr = ExecuteFunction(bstrCommand, vntParam, pVal);	

	if (FAILED(hr)) {
		_Module.LogEvent(LOG_LEVEL_ERROR,"FAILED(0x%x): CCaoProvController::FinalExecute(%s,...) \n", hr, ConvertBSTRToString(bstrCommand).c_str());
	}

	return hr;
}
*/

/**	�����̎擾
 *
 *	@param	pVal	:	[out] ����
 *	@retval	HRESULT
 *
 */
/*
HRESULT CCaoProvController::FinalGetAttribute(long *pVal)
{
    // �R���g���[���̑����� LONG�^ �Ŏ擾����D
	return E_NOTIMPL;
}
*/

/**	�w���v������̎擾
 *
 *	@param	pVal	:	[out] �w���v
 *	@retval	HRESULT
 *
 */
/*
HRESULT CCaoProvController::FinalGetHelp(BSTR *pVal)
{
	// �C�ӂ̃w���v�������Ԃ��D
	return E_NOTIMPL;
}
*/

/**	�R�}���h���X�g�̎擾
 *
 *	@param	bstrOption	:	[in] �I�v�V����
 *	@param	pVal	:	[out] �ϐ������X�g
 *	@retval	HRESULT
 *
 */
/*
HRESULT CCaoProvController::FinalGetCommandNames(BSTR bstrOption, VARIANT *pVal)
{
	// �ϐ������X�g�𕶎����SAFEARRAY�Ƃ��č쐬�D
    // ���̃|�C���^��VARIANT(pVal->vt = VT_BSTR|VT_ARRAY�CpVal->parray = xxx)�Ɋi�[����D
	return E_NOTIMPL;
}
*/

/**	�g���{�[�h�����X�g�̎擾
 *
 *	@param	bstrOption	:	[in] �I�v�V����
 *	@param	pVal	:	[out] �g���{�[�h�����X�g
 *	@retval	HRESULT
 *
 */
/*
HRESULT CCaoProvController::FinalGetExtensionNames(BSTR bstrOption, VARIANT *pVal)
{
	// �g���{�[�h�����X�g�𕶎����SAFEARRAY�Ƃ��č쐬�D
    // ���̃|�C���^��VARIANT(pVal->vt = VT_BSTR|VT_ARRAY�CpVal->parray = xxx)�Ɋi�[����D
	return E_NOTIMPL;
}
*/

/**	�t�@�C�������X�g�̎擾
 *
 *	@param	bstrOption	:	[in] �I�v�V����
 *	@param	pVal	:	[out] �t�@�C�������X�g
 *	@retval	HRESULT
 *
 */
/*
HRESULT CCaoProvController::FinalGetFileNames(BSTR bstrOption, VARIANT *pVal)
{
	// �t�@�C�������X�g�𕶎����SAFEARRAY�Ƃ��č쐬�D
    // ���̃|�C���^��VARIANT(pVal->vt = VT_BSTR|VT_ARRAY�CpVal->parray = xxx)�Ɋi�[����D
	return E_NOTIMPL;
}
*/

/**	���{�b�g�����X�g�̎擾
 *
 *	@param	bstrOption	:	[in] �I�v�V����
 *	@param	pVal	:	[out] ���{�b�g�����X�g
 *	@retval	HRESULT
 *
 */
/*
HRESULT CCaoProvController::FinalGetRobotNames(BSTR bstrOption, VARIANT *pVal)
{
	// ���{�b�g�����X�g�𕶎����SAFEARRAY�Ƃ��č쐬�D
    // ���̃|�C���^��VARIANT(pVal->vt = VT_BSTR|VT_ARRAY�CpVal->parray = xxx)�Ɋi�[����D
	return E_NOTIMPL;
}
*/

/**	�^�X�N�����X�g�̎擾
 *
 *	@param	bstrOption	:	[in] �I�v�V����
 *	@param	pVal	:	[out] �^�X�N�����X�g
 *	@retval	HRESULT
 *
 */
/*
HRESULT CCaoProvController::FinalGetTaskNames(BSTR bstrOption, VARIANT *pVal)
{
	// �^�X�N�����X�g�𕶎����SAFEARRAY�Ƃ��č쐬�D
    // ���̃|�C���^��VARIANT(pVal->vt = VT_BSTR|VT_ARRAY�CpVal->parray = xxx)�Ɋi�[����D
	return E_NOTIMPL;
}
*/

/**	�ϐ������X�g�̎擾
 *
 *	@param	bstrOption	:	[in] �I�v�V����
 *	@param	pVal	:	[out] �ϐ������X�g
 *	@retval	HRESULT
 *
 */
HRESULT CCaoProvController::FinalGetVariableNames(BSTR bstrOption, VARIANT *pVal)
{
	// �ϐ����̒�`�� �����X�g���X�V�����ꍇ�͏C�����K�v
	const int	nDefines = 4;
	
	pVal->vt = VT_ARRAY | VT_VARIANT;
	SAFEARRAY* psa;
	SAFEARRAYBOUND bounds = {nDefines, 0};
	psa = SafeArrayCreate(VT_VARIANT, 1, &bounds);

	CComVariant* vntArray;
	SafeArrayAccessData(psa, (void**)&vntArray);

	int i = 0;
	vntArray[i++] = CS_MAKER_NAME$;
	vntArray[i++] = CS_VERSION$;
	vntArray[i++] = CS_STATUS$;
	vntArray[i++] = CS_COMMAND$;
	// nDefines = 2

	ATLTRACE("nDefines = %d\n",i);
	ATLASSERT(i==nDefines);

	SafeArrayUnaccessData(psa);
	pVal->parray = psa;

	return S_OK;
}

/**	ID�̎擾
 *
 *	@param	pVal	:	[out] ID
 *	@retval	HRESULT
 *
 */
/*
HRESULT CCaoProvController::FinalGetID(VARIANT *pVal)
{
	return E_NOTIMPL;
}
*/

/**	ID�̐ݒ�
 *
 *	@param	newVal	:	[in] ID
 *	@retval	HRESULT
 *
 */
/*
HRESULT CCaoProvController::FinalPutID(VARIANT newVal)
{
	return E_NOTIMPL;
}
*/

#if CAOP_TIMER_INTERVAL > 0
/**	�^�C�}�[�C�x���g
 *
 * #define CAOP_TIMER_INTERVAL 0 �� ��`�� ms�P�ʎw��Œ�`�������D
 * ����ɂ�� CAOP_TIMER_INTERVAL ms�Ԋu�ł��̊֐����Ă΂��D
 *
 */
void CCaoProvController::OnTimer()
{
	return;
}
#endif

#ifdef CAOP_CANCEL_SUPPORT

/**	�v���o�C�_�L�����Z��
 *
 *�@���s���̏����𒼂��ɒ��f����
 *
 *	@param	vntPara	:	[in] �p�����[�^
 *							���g�p
 *	@param	pVal	:	[out] ���s����
 *							���g�p
 *	@retval	HRESULT
 *
 */
HRESULT CCaoProvController::ExecProviderCancel(VARIANT vntParam, VARIANT *pVal)
{
	ATLASSERT(m_hProviderCancelEvent != NULL);

	// �v���o�C�_�L�����Z���C�x���g���Z�b�g����
	::SetEvent(m_hProviderCancelEvent);

	// TODO: ���s���̏����𒆒f���鏈�����������邱��.
	// :

	return S_OK;
}

/**	�v���o�C�_�N���A
 *
 *�@���s���f���N���A����D
 *
 *	@param	vntPara	:	[in] �p�����[�^
 *							���g�p
 *	@param	pVal	:	[out] ���s����
 *							���g�p
 *	@retval	HRESULT
 *
 */
HRESULT CCaoProvController::ExecProviderClear(VARIANT vntParam, VARIANT *pVal)
{
	ATLASSERT(m_hProviderCancelEvent != NULL);

	// �v���o�C�_�L�����Z���C�x���g�����Z�b�g����
	::ResetEvent(m_hProviderCancelEvent);

	// TODO: ����Ɏ��s���邽�߂̏������������邱��.
	// :

	return S_OK;
}

/**	�v���o�C�_�L�����Z���̏�Ԋm�F
 *
 *�@�v���o�C�_�L�����Z���̗v���������������擾����
 *
 *	@retval	HRESULT 
 *		E_CANCEL:�L�����Z���v������  S_OK:�L�����Z���v���Ȃ�
 *
 */
HRESULT CCaoProvController::GetProviderCancelStatus() 
{
	ATLASSERT(m_hProviderCancelEvent != NULL);

	if(::WaitForSingleObject(m_hProviderCancelEvent, 0) == WAIT_OBJECT_0) {
		return E_CANCEL;
	}
	return S_OK;
}

/**	�v���o�C�_�L�����Z���n���h���擾
 *
 *�@�v���o�C�_�L�����Z���̃n���h�����擾����
 *
 *	@retval	HANDLE 
 *
 */
HANDLE CCaoProvController::GetProviderCancelHandle() 
{
	return m_hProviderCancelEvent;
}


/**	�v���o�C�_�L�����Z���ɑΉ�����������
 *
 *�@�Ȃɂ������s���Ȃ���v���o�C�_�L�����Z���ő��������
 *�@TODO: ���Ԃɍ��킹���������s��
 *
 *	@param	vntPara	:	[in] �p�����[�^
 *							���g�p
 *	@param	pVal	:	[out] ���s����
 *							���g�p
 *	@retval	HRESULT
 *
 */
HRESULT CCaoProvController::ExecProviderCancelSampleMethod(VARIANT vntParam, VARIANT *pVal)
{
	// TODO: �Ȃɂ����Ԃ������鏈���̎��s.
	// :
	HRESULT hr;
	for(int i=0; i<100; i++)
	{
		hr = GetProviderCancelStatus();
		if (FAILED(hr)) break;

		// �����̏����@�E�E�E
		//�@:

		// Sleep(100)�҂��Ńv���o�C�_�L�����Z�����V�O�i����ԂɂȂ�Α��������
		if(::WaitForSingleObject(GetProviderCancelHandle(), 100) == WAIT_OBJECT_0) {
			hr = E_CANCEL;
			break;
		}
	}

	return hr;
}

#endif

// ========== �e�Вǉ��֐��͂���ȉ��ɋL�q����D==========

/**	�ڑ��p�����[�^�̉��
 *
 *�@�ڑ��p�����[�^����K�v�ȃL�[�ƒl����͂���
 *
 *	@retval	HRESULT 
 *
 */
HRESULT CCaoProvController::ParseConnectionString()
{
	HRESULT hr = E_NOTIMPL;

	CComVariant vntOptVal;

	// Key = XXX
	vntOptVal.Clear();
	// TODO: �L�[������ƒl�̎d�l�����߁A�������s������.
	hr = GetOptionValue(m_bstrOption, L"Key", VT_BSTR, &vntOptVal); 
	if (vntOptVal.vt == VT_BSTR) {
		const BSTR bstrVal = vntOptVal.bstrVal;
		// :

	}

	return hr;
}
