#pragma once
#include "stdafx.h"

namespace TUtils
{
	static _bstr_t GetLastErrorAsString(HRESULT hr)
	{
		// Thanks Jamin Grey
		// https://stackoverflow.com/questions/1387064/how-to-get-the-error-message-from-the-error-code-returned-by-getlasterror
		// Get the error message, if any.
		DWORD errorMessageID = ::GetLastError();
		if (errorMessageID == 0)
		{
			_com_error err(hr);
			return err.ErrorMessage(); //No error message has been recorded
		}

		LPSTR messageBuffer = nullptr;
		size_t size = FormatMessageA(FORMAT_MESSAGE_ALLOCATE_BUFFER | FORMAT_MESSAGE_FROM_SYSTEM | FORMAT_MESSAGE_IGNORE_INSERTS,
			NULL, errorMessageID, MAKELANGID(LANG_NEUTRAL, SUBLANG_DEFAULT), (LPSTR)&messageBuffer, 0, NULL);

		_bstr_t message(messageBuffer);

		//Free the buffer.
		LocalFree(messageBuffer);

		return message;
	}

}


