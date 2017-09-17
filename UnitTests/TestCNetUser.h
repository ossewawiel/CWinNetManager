#pragma once
#include "stdafx.h"
#include "TUtils.h"
#include "TConstants.h"

class TestCNetUser :
	public ::testing::Test
{
public:
	CComPtr<ICNetUser> mpCNetUser;

	void SetUp()
	{
		HRESULT hr = mpCNetUser.CoCreateInstance(CLSID_CNetUser);
		ASSERT_FALSE(hr) << TUtils::GetLastErrorAsString(hr);
	}

	void TearDown()
	{
		mpCNetUser.Release();
	}
};

class TestCNetUser_Get :
	public ::testing::Test
{
public:
	CComPtr<ICNetUser> mpCNetUser;

	void SetUp()
	{
		HRESULT hr = mpCNetUser.CoCreateInstance(CLSID_CNetUser);
		ASSERT_FALSE(hr) << TUtils::GetLastErrorAsString(hr);
	}

	void TearDown()
	{
		mpCNetUser.Release();
	}
};

class TestCNetUser_Clear :
	public ::testing::Test
{
public:
	CComPtr<ICNetUser> mpCNetUser;

	void SetUp()
	{
		HRESULT hr = mpCNetUser.CoCreateInstance(CLSID_CNetUser);
		ASSERT_FALSE(hr) << TUtils::GetLastErrorAsString(hr);
	}

	void TearDown()
	{
		mpCNetUser.Release();
	}
};

