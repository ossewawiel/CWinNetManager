#pragma once
#include "stdafx.h"
#define CUSTOM_ASSERT_SET \
	HRESULT hr(S_OK);

#define ASSERT_EQ_PROP_GET_BSTR(uinfObject, getProperty, eqTo) \
	_bstr_t bs##getProperty(L"*"); \
	HRESULT hr##getProperty(S_OK); \
	hr##getProperty =  ##uinfObject->##getProperty(bs##getProperty.GetAddress()); \
	ASSERT_FALSE(hr##getProperty) << TUtils::GetLastErrorAsString(hr##getProperty); \
	ASSERT_EQ(##eqTo, bs##getProperty);

#define ASSERT_NE_PROP_GET_BSTR(uinfObject, getProperty, neTo) \
	_bstr_t bs##getProperty(L"*"); \
	HRESULT hr##getProperty(S_OK); \
	hr##getProperty =  ##uinfObject->##getProperty(bs##getProperty.GetAddress()); \
	ASSERT_FALSE(hr##getProperty) << TUtils::GetLastErrorAsString(hr##getProperty); \
	ASSERT_NE(##neTo, bs##getProperty);

#define ASSERT_EQ_PROP_GET_ULONG(uinfObject, getProperty, eqTo) \
	ULONG ul##getProperty(100); \
	HRESULT hr##getProperty(S_OK); \
	hr##getProperty =  ##uinfObject->##getProperty(&ul##getProperty); \
	ASSERT_FALSE(hr##getProperty) << TUtils::GetLastErrorAsString(hr##getProperty); \
	ASSERT_EQ(##eqTo, ul##getProperty);

#define ASSERT_NE_PROP_GET_ULONG(uinfObject, getProperty, neTo) \
	ULONG ul##getProperty(100); \
	HRESULT hr##getProperty(S_OK); \
	hr##getProperty =  ##uinfObject->##getProperty(&ul##getProperty); \
	ASSERT_FALSE(hr##getProperty) << TUtils::GetLastErrorAsString(hr##getProperty); \
	ASSERT_NE(##neTo, ul##getProperty);

#define ASSERT_EQ_PROP_GET_CLOGONHOURS(uinfObject, getProperty, eqTo) \
	CComPtr<ICLogonHours> p##getProperty; \
	HRESULT hr##getProperty(S_OK); \
	hr##getProperty =  ##uinfObject->##getProperty(&p##getProperty); \
	ASSERT_FALSE(hr##getProperty) << TUtils::GetLastErrorAsString(hr##getProperty); \
	ASSERT_TRUE(TUtils::CompareCLogonHours(p##getProperty, eqTo));

#define ASSERT_EQ_PROP_GET_SHORT(uinfObject, getProperty, eqTo) \
	SHORT sh##getProperty(100); \
	HRESULT hr##getProperty(S_OK); \
	hr##getProperty =  ##uinfObject->##getProperty(&sh##getProperty); \
	ASSERT_FALSE(hr##getProperty) << TUtils::GetLastErrorAsString(hr##getProperty); \
	ASSERT_EQ(##eqTo, sh##getProperty);

#define ASSERT_GET_LOGONHOURS_ALL_ACTIVE(netuserObject, uinfLogonHours) \
	hr = netuserObject->GetLogonHoursAllActive(&uinfLogonHours);		\
	ASSERT_FALSE(hr) << TUtils::GetLastErrorAsString(hr);				\

#define ASSERT_CLEAR_USER_INFO(uinfObect) \
	hr = uinfObect->Clear();			\
	ASSERT_FALSE(hr) << TUtils::GetLastErrorAsString(hr);

#define ASSERT_LOGONHOURS_CLEAR(uinfLogonHours) \
	hr = uinfLogonHours->ClearAll(); \
	ASSERT_FALSE(hr) << TUtils::GetLastErrorAsString(hr);

#define ASSERT_ADD_USER_INFO(netuserObject, uinfObject, uiType) \
	hr = netuserObject->NetUserAdd(NULL, uiType, uinfObject); \
	ASSERT_FALSE(hr) << TUtils::GetLastErrorAsString(hr);

#define ASSERT_SET_USER_INFO(netuserObject, uName, uinfObject, uiType) \
	hr = netuserObject->NetUserSetInfo(NULL, uName, uiType, uinfObject); \
	ASSERT_FALSE(hr) << TUtils::GetLastErrorAsString(hr);

#define ASSERT_DELETE_USER(netuserObject, userName) \
	hr = netuserObject->NetUserDel(NULL, userName); \
	ASSERT_FALSE(hr) << TUtils::GetLastErrorAsString(hr);

#define ASSERT_GET_USER_INFO_0(netuserObject, uinfObject)		\
	hr = netuserObject->GetUserInfo0(PAR_UINF_NAME, &uinfObject); \
	ASSERT_FALSE(hr) << TUtils::GetLastErrorAsString(hr);

#define ASSERT_GET_USER_INFO_0_ALT(netuserObject, uinfObject)		\
	hr = netuserObject->GetUserInfo0(PAR_UINF_NAME_ALT, &uinfObject); \
	ASSERT_FALSE(hr) << TUtils::GetLastErrorAsString(hr);

#define ASSERT_USER_GET_INFO_0(netuserObject, uName, uinfObject)		\
	hr = netuserObject->NetUserGetInfo0(NULL, uName, &uinfObject); \
	ASSERT_FALSE(hr) << TUtils::GetLastErrorAsString(hr);

#define ASSERT_GET_USER_INFO_1(netuserObject, uinfObject)	\
	hr = netuserObject->GetUserInfo1(						\
		PAR_UINF_NAME										\
		, PAR_UINF_PWD										\
		, PAR_NOT_ZERO										\
		, PAR_UINF_PRIV										\
		, PAR_UINF_HOMEDIR									\
		, PAR_UINF_COMNT									\
		, PAR_UINF_FLGS										\
		, PAR_UINF_SCRPATH									\
		, &uinfObject);										\
	ASSERT_FALSE(hr) << TUtils::GetLastErrorAsString(hr);

#define ASSERT_GET_USER_INFO_1_ALT(netuserObject, uinfObject)\
	hr = netuserObject->GetUserInfo1(						\
		PAR_UINF_NAME									\
		, PAR_UINF_PWD_ALT									\
		, 0													\
		, 0													\
		, PAR_UINF_HOMEDIR_ALT								\
		, PAR_UINF_COMNT_ALT								\
		, PAR_UINF_FLGS_ALT									\
		, PAR_UINF_SCRPATH_ALT								\
		, &uinfObject);										\
	ASSERT_FALSE(hr) << TUtils::GetLastErrorAsString(hr);

#define ASSERT_USER_GET_INFO_1(netuserObject, uName, uinfObject)		\
	hr = netuserObject->NetUserGetInfo1(NULL, uName, &uinfObject); \
	ASSERT_FALSE(hr) << TUtils::GetLastErrorAsString(hr);

#define ASSERT_GET_USER_INFO_2(netuserObject, uinfLogonHours, uinfObject)	\
	hr = netuserObject->GetUserInfo2(										\
		PAR_UINF_NAME														\
		, PAR_UINF_PWD														\
		, PAR_NOT_ZERO														\
		, PAR_UINF_PRIV														\
		, PAR_UINF_HOMEDIR													\
		, PAR_UINF_COMNT													\
		, PAR_UINF_FLGS														\
		, PAR_UINF_SCRPATH													\
		, PAR_NOT_ZERO														\
		, PAR_UINF_FULLNAME													\
		, PAR_UINF_USRCOMMENT												\
		, PAR_UINF_PARAMS													\
		, PAR_UINF_WORKSTATIONS												\
		, PAR_NOT_ZERO														\
		, PAR_NOT_ZERO														\
		, PAR_UINF_ACCNTEXPIRES												\
		, PAR_UINF_MAXSTORAGE												\
		, PAR_NOT_ZERO														\
		, uinfLogonHours.Detach()											\
		, PAR_NOT_ZERO														\
		, PAR_NOT_ZERO														\
		, PAR_UINF_LOGONSERVER												\
		, PAR_UINF_COUNTRYCODE												\
		, PAR_UINF_CODEPAGE													\
		, &uinfObject);														\
	ASSERT_FALSE(hr) << TUtils::GetLastErrorAsString(hr);

#define ASSERT_GET_USER_INFO_2_SET(netuserObject, uinfLogonHours, uinfObject)\
	hr = netuserObject->GetUserInfo2(										\
		PAR_UINF_NAME														\
		, PAR_UINF_PWD														\
		, PAR_NOT_ZERO														\
		, PAR_UINF_PRIV														\
		, PAR_UINF_HOMEDIR													\
		, PAR_UINF_COMNT													\
		, PAR_UINF_FLGS														\
		, PAR_UINF_SCRPATH													\
		, 0																	\
		, PAR_UINF_FULLNAME													\
		, PAR_UINF_USRCOMMENT												\
		, PAR_UINF_PARAMS													\
		, PAR_UINF_WORKSTATIONS												\
		, 0																	\
		, 0																	\
		, PAR_UINF_ACCNTEXPIRES												\
		, PAR_UINF_MAXSTORAGE												\
		, 0																	\
		, uinfLogonHours.Detach()											\
		, 0																	\
		, 0																	\
		, PAR_UINF_LOGONSERVER												\
		, PAR_UINF_COUNTRYCODE												\
		, PAR_UINF_CODEPAGE													\
		, &uinfObject);														\
	ASSERT_FALSE(hr) << TUtils::GetLastErrorAsString(hr);

#define ASSERT_GET_USER_INFO_2_ALT(netuserObject, uinfLogonHours, uinfObject)\
	hr = netuserObject->GetUserInfo2(										\
		PAR_UINF_NAME														\
		, PAR_UINF_PWD														\
		, PAR_NOT_ZERO														\
		, 0														\
		, PAR_UINF_HOMEDIR													\
		, PAR_UINF_COMNT													\
		, PAR_UINF_FLGS														\
		, PAR_UINF_SCRPATH													\
		, 0																	\
		, PAR_UINF_FULLNAME													\
		, PAR_UINF_USRCOMMENT												\
		, PAR_UINF_PARAMS													\
		, PAR_UINF_WORKSTATIONS												\
		, 0																	\
		, 0																	\
		, PAR_UINF_ACCNTEXPIRES												\
		, PAR_UINF_MAXSTORAGE												\
		, 0																	\
		, uinfLogonHours.Detach()											\
		, 0																	\
		, 0																	\
		, PAR_UINF_LOGONSERVER												\
		, PAR_UINF_COUNTRYCODE												\
		, PAR_UINF_CODEPAGE													\
		, &uinfObject);														\
	ASSERT_FALSE(hr) << TUtils::GetLastErrorAsString(hr);

#define ASSERT_USER_GET_INFO_2(netuserObject, uName, uinfObject)		\
	hr = netuserObject->NetUserGetInfo2(NULL, uName, &uinfObject); \
	ASSERT_FALSE(hr) << TUtils::GetLastErrorAsString(hr);

#define ASSERT_GET_USER_INFO_3(netuserObject, uinfLogonHours, uinfObject)	\
	hr = netuserObject->GetUserInfo3(										\
		PAR_UINF_NAME														\
		, PAR_UINF_PWD														\
		, PAR_NOT_ZERO														\
		, PAR_UINF_PRIV														\
		, PAR_UINF_HOMEDIR													\
		, PAR_UINF_COMNT													\
		, PAR_UINF_FLGS														\
		, PAR_UINF_SCRPATH													\
		, PAR_NOT_ZERO														\
		, PAR_UINF_FULLNAME													\
		, PAR_UINF_USRCOMMENT												\
		, PAR_UINF_PARAMS													\
		, PAR_UINF_WORKSTATIONS												\
		, PAR_NOT_ZERO														\
		, PAR_NOT_ZERO														\
		, PAR_UINF_ACCNTEXPIRES												\
		, PAR_UINF_MAXSTORAGE												\
		, PAR_NOT_ZERO														\
		, uinfLogonHours.Detach()											\
		, PAR_NOT_ZERO														\
		, PAR_NOT_ZERO														\
		, PAR_UINF_LOGONSERVER												\
		, PAR_UINF_COUNTRYCODE												\
		, PAR_UINF_CODEPAGE													\
		, PAR_NOT_ZERO														\
		, PAR_UINF_PRIMGRPID												\
		, PAR_UINF_PRFL														\
		, PAR_UINF_HOMEDIRDRV												\
		, PAR_NOT_ZERO														\
		, &uinfObject);														\
	ASSERT_FALSE(hr) << TUtils::GetLastErrorAsString(hr);

#define ASSERT_GET_USER_INFO_3_SET(netuserObject, uinfLogonHours, uinfObject)\
	hr = netuserObject->GetUserInfo3(										\
		PAR_UINF_NAME														\
		, PAR_UINF_PWD														\
		, PAR_NOT_ZERO														\
		, PAR_UINF_PRIV														\
		, PAR_UINF_HOMEDIR													\
		, PAR_UINF_COMNT													\
		, PAR_UINF_FLGS														\
		, PAR_UINF_SCRPATH													\
		, 0																	\
		, PAR_UINF_FULLNAME													\
		, PAR_UINF_USRCOMMENT												\
		, PAR_UINF_PARAMS													\
		, PAR_UINF_WORKSTATIONS												\
		, 0																	\
		, 0																	\
		, PAR_UINF_ACCNTEXPIRES												\
		, PAR_UINF_MAXSTORAGE												\
		, 0																	\
		, uinfLogonHours.Detach()											\
		, 0																	\
		, 0																	\
		, PAR_UINF_LOGONSERVER												\
		, PAR_UINF_COUNTRYCODE												\
		, PAR_UINF_CODEPAGE													\
		, 0																	\
		, PAR_UINF_PRIMGRPID												\
		, PAR_UINF_PRFL														\
		, PAR_UINF_HOMEDIRDRV												\
		, 0																	\
		, &uinfObject);														\
	ASSERT_FALSE(hr) << TUtils::GetLastErrorAsString(hr);


#define ASSERT_GET_USER_INFO_4(netuserObject, uinfLogonHours, uinfObject)	\
	hr = netuserObject->GetUserInfo4(										\
		PAR_UINF_NAME														\
		, PAR_UINF_PWD														\
		, PAR_NOT_ZERO														\
		, PAR_UINF_PRIV														\
		, PAR_UINF_HOMEDIR													\
		, PAR_UINF_COMNT													\
		, PAR_UINF_FLGS														\
		, PAR_UINF_SCRPATH													\
		, PAR_NOT_ZERO														\
		, PAR_UINF_FULLNAME													\
		, PAR_UINF_USRCOMMENT												\
		, PAR_UINF_PARAMS													\
		, PAR_UINF_WORKSTATIONS												\
		, PAR_NOT_ZERO														\
		, PAR_NOT_ZERO														\
		, PAR_UINF_ACCNTEXPIRES												\
		, PAR_UINF_MAXSTORAGE												\
		, PAR_NOT_ZERO														\
		, pLogonHours.Detach()												\
		, PAR_NOT_ZERO														\
		, PAR_NOT_ZERO														\
		, PAR_UINF_LOGONSERVER												\
		, PAR_UINF_COUNTRYCODE												\
		, PAR_UINF_CODEPAGE													\
		, PAR_NOT_EMPTY														\
		, PAR_UINF_PRIMGRPID												\
		, PAR_UINF_PRFL														\
		, PAR_UINF_HOMEDIRDRV												\
		, PAR_NOT_ZERO														\
		, &uinfObject);														\
	ASSERT_FALSE(hr) << TUtils::GetLastErrorAsString(hr);

#define ASSERT_GET_USER_INFO_4_SET(netuserObject, uinfLogonHours, uinfObject)\
	hr = netuserObject->GetUserInfo4(										\
		PAR_UINF_NAME														\
		, PAR_UINF_PWD														\
		, 0																	\
		, PAR_UINF_PRIV														\
		, PAR_UINF_HOMEDIR													\
		, PAR_UINF_COMNT													\
		, PAR_UINF_FLGS														\
		, PAR_UINF_SCRPATH													\
		, 0																	\
		, PAR_UINF_FULLNAME													\
		, PAR_UINF_USRCOMMENT												\
		, PAR_UINF_PARAMS													\
		, PAR_UINF_WORKSTATIONS												\
		, 0																	\
		, 0																	\
		, PAR_UINF_ACCNTEXPIRES												\
		, PAR_UINF_MAXSTORAGE												\
		, 0																	\
		, pLogonHours.Detach()												\
		, NULL																\
		, 0																	\
		, PAR_UINF_LOGONSERVER												\
		, PAR_UINF_COUNTRYCODE												\
		, PAR_UINF_CODEPAGE													\
		, PAR_EMPTY															\
		, PAR_UINF_PRIMGRPID												\
		, PAR_UINF_PRFL														\
		, PAR_UINF_HOMEDIRDRV												\
		, 0																	\
		, &uinfObject);														\
	ASSERT_FALSE(hr) << TUtils::GetLastErrorAsString(hr);

#define ASSERT_USER_GET_INFO_4(netuserObject, uName, uinfObject)		\
	hr = netuserObject->NetUserGetInfo4(NULL, uName, &uinfObject); \
	ASSERT_FALSE(hr) << TUtils::GetLastErrorAsString(hr);

#define ASSERT_GET_USER_INFO_10(netuserObject, uinfObject)					\
	hr = netuserObject->GetUserInfo10(										\
		PAR_UINF_NAME														\
		, PAR_UINF_COMNT													\
		, PAR_UINF_USRCOMMENT												\
		, PAR_UINF_FULLNAME													\
		, &uinfObject);														\
	ASSERT_FALSE(hr) << TUtils::GetLastErrorAsString(hr);

#define ASSERT_GET_USER_INFO_11(netuserObject, uinfLogonHours, uinfObject)	\
	hr = netuserObject->GetUserInfo11(										\
		PAR_UINF_NAME														\
		, PAR_UINF_COMNT													\
		, PAR_UINF_USRCOMMENT												\
		, PAR_UINF_FULLNAME													\
		, PAR_UINF_PRIV														\
		, PAR_NOT_ZERO														\
		, PAR_NOT_ZERO														\
		, PAR_UINF_HOMEDIR													\
		, PAR_UINF_PARAMS													\
		, PAR_NOT_ZERO														\
		, PAR_NOT_ZERO														\
		, PAR_NOT_ZERO														\
		, PAR_NOT_ZERO														\
		, PAR_UINF_LOGONSERVER												\
		, PAR_UINF_COUNTRYCODE												\
		, PAR_UINF_WORKSTATIONS												\
		, PAR_UINF_MAXSTORAGE												\
		, PAR_NOT_ZERO														\
		, uinfLogonHours.Detach()											\
		, PAR_UINF_CODEPAGE													\
		, &uinfObject);														\
	ASSERT_FALSE(hr) << TUtils::GetLastErrorAsString(hr);

#define ASSERT_GET_USER_INFO_20(netuserObject, uinfObject)					\
	hr = netuserObject->GetUserInfo20(										\
		PAR_UINF_NAME														\
		, PAR_UINF_FULLNAME													\
		, PAR_UINF_COMNT													\
		, PAR_UINF_FLGS														\
		, PAR_NOT_ZERO														\
		, &uinfObject);														\
	ASSERT_FALSE(hr) << TUtils::GetLastErrorAsString(hr);

#define ASSERT_GET_USER_INFO_21(netuserObject, uinfObject)					\
	hr = netuserObject->GetUserInfo21(PAR_UINF_PWD							\
		, &uinfObject);														\
	ASSERT_FALSE(hr) << TUtils::GetLastErrorAsString(hr);

#define ASSERT_GET_USER_INFO_22(netuserObject, uinfLogonHours, uinfObject)	\
	hr = netuserObject->GetUserInfo22(										\
		PAR_UINF_NAME														\
		, PAR_UINF_PWD														\
		, PAR_NOT_ZERO														\
		, PAR_UINF_PRIV														\
		, PAR_UINF_HOMEDIR													\
		, PAR_UINF_COMNT													\
		, PAR_UINF_FLGS														\
		, PAR_UINF_SCRPATH													\
		, PAR_NOT_ZERO														\
		, PAR_UINF_FULLNAME													\
		, PAR_UINF_USRCOMMENT												\
		, PAR_UINF_PARAMS													\
		, PAR_UINF_WORKSTATIONS												\
		, PAR_NOT_ZERO														\
		, PAR_NOT_ZERO														\
		, PAR_UINF_ACCNTEXPIRES												\
		, PAR_UINF_MAXSTORAGE												\
		, PAR_NOT_ZERO														\
		, uinfLogonHours.Detach()											\
		, PAR_NOT_ZERO														\
		, PAR_NOT_ZERO														\
		, PAR_UINF_LOGONSERVER												\
		, PAR_UINF_COUNTRYCODE												\
		, PAR_UINF_CODEPAGE													\
		, &uinfObject);														\
	ASSERT_FALSE(hr) << TUtils::GetLastErrorAsString(hr);

#define ASSERT_GET_USER_INFO_23(netuserObject, uinfObject)					\
	hr = netuserObject->GetUserInfo23(										\
		PAR_UINF_NAME														\
		, PAR_UINF_FULLNAME													\
		, PAR_UINF_COMNT													\
		, PAR_UINF_FLGS														\
		, PAR_NOT_EMPTY														\
		, &uinfObject);														\
	ASSERT_FALSE(hr) << TUtils::GetLastErrorAsString(hr);

#define ASSERT_GET_USER_INFO_24(netuserObject, uinfObject)					\
	hr = netuserObject->GetUserInfo24(										\
		PAR_UINF_INTRNETID													\
		, PAR_UINF_FLGS														\
		, PAR_UINF_INTRNETPROVNAME											\
		, PAR_UINF_INTRNETPRNCPLNAME										\
		, PAR_NOT_EMPTY														\
		, &uinfObject);														\
	ASSERT_FALSE(hr) << TUtils::GetLastErrorAsString(hr);

#define ASSERT_GET_USER_INFO_1003(netuserObject, uinfObject)				\
	hr = netuserObject->GetUserInfo1003(									\
		PAR_UINF_PWD														\
		, &uinfObject);														\
	ASSERT_FALSE(hr) << TUtils::GetLastErrorAsString(hr);

#define ASSERT_GET_USER_INFO_1003_ALT(netuserObject, uinfObject)			\
	hr = netuserObject->GetUserInfo1003(									\
		PAR_UINF_PWD_ALT													\
		, &uinfObject);														\
	ASSERT_FALSE(hr) << TUtils::GetLastErrorAsString(hr);

#define ASSERT_GET_USER_INFO_1005_ALT(netuserObject, uinfObject)			\
	hr = netuserObject->GetUserInfo1005(PAR_UINF_PRIV_ALT, &uinfObject);	\
	ASSERT_FALSE(hr) << TUtils::GetLastErrorAsString(hr);

#define ASSERT_USER_GET_INFO_1005(netuserObject, uName, uinfObject)			\
	hr = netuserObject->NetUserGetInfo1005(NULL, uName, &uinfObject);		\
	ASSERT_FALSE(hr) << TUtils::GetLastErrorAsString(hr);

#define ASSERT_GET_USER_INFO_1006_ALT(netuserObject, uinfObject)			\
	hr = netuserObject->GetUserInfo1006(PAR_UINF_HOMEDIR_ALT, &uinfObject);	\
	ASSERT_FALSE(hr) << TUtils::GetLastErrorAsString(hr);

#define ASSERT_USER_GET_INFO_1006(netuserObject, uName, uinfObject)			\
	hr = netuserObject->NetUserGetInfo1006(NULL, uName, &uinfObject);		\
	ASSERT_FALSE(hr) << TUtils::GetLastErrorAsString(hr);

#define ASSERT_GET_USER_INFO_1007_ALT(netuserObject, uinfObject)			\
	hr = netuserObject->GetUserInfo1007(PAR_UINF_COMNT_ALT, &uinfObject);	\
	ASSERT_FALSE(hr) << TUtils::GetLastErrorAsString(hr);

#define ASSERT_USER_GET_INFO_1007(netuserObject, uName, uinfObject)			\
	hr = netuserObject->NetUserGetInfo1007(NULL, uName, &uinfObject);		\
	ASSERT_FALSE(hr) << TUtils::GetLastErrorAsString(hr);

#define ASSERT_GET_USER_INFO_1008_ALT(netuserObject, uinfObject)			\
	hr = netuserObject->GetUserInfo1008(PAR_UINF_FLGS_ALT, &uinfObject);	\
	ASSERT_FALSE(hr) << TUtils::GetLastErrorAsString(hr);

#define ASSERT_USER_GET_INFO_1008(netuserObject, uName, uinfObject)			\
	hr = netuserObject->NetUserGetInfo1008(NULL, uName, &uinfObject);		\
	ASSERT_FALSE(hr) << TUtils::GetLastErrorAsString(hr);

#define ASSERT_GET_USER_INFO_1009_ALT(netuserObject, uinfObject)			\
	hr = netuserObject->GetUserInfo1009(PAR_UINF_SCRPATH_ALT, &uinfObject);	\
	ASSERT_FALSE(hr) << TUtils::GetLastErrorAsString(hr);

#define ASSERT_USER_GET_INFO_1009(netuserObject, uName, uinfObject)			\
	hr = netuserObject->NetUserGetInfo1009(NULL, uName, &uinfObject);		\
	ASSERT_FALSE(hr) << TUtils::GetLastErrorAsString(hr);

#define ASSERT_GET_USER_INFO_1010_ALT(netuserObject, uinfObject)			\
	hr = netuserObject->GetUserInfo1010(PAR_UINF_AUTHFLGS_ALT, &uinfObject);	\
	ASSERT_FALSE(hr) << TUtils::GetLastErrorAsString(hr);

#define ASSERT_USER_GET_INFO_1010(netuserObject, uName, uinfObject)			\
	hr = netuserObject->NetUserGetInfo1010(NULL, uName, &uinfObject);		\
	ASSERT_FALSE(hr) << TUtils::GetLastErrorAsString(hr);

#define ASSERT_GET_USER_INFO_1011_ALT(netuserObject, uinfObject)			\
	hr = netuserObject->GetUserInfo1011(PAR_UINF_FULLNAME_ALT, &uinfObject);	\
	ASSERT_FALSE(hr) << TUtils::GetLastErrorAsString(hr);

#define ASSERT_USER_GET_INFO_1011(netuserObject, uName, uinfObject)			\
	hr = netuserObject->NetUserGetInfo1011(NULL, uName, &uinfObject);		\
	ASSERT_FALSE(hr) << TUtils::GetLastErrorAsString(hr);

#define ASSERT_GET_USER_INFO_1012_ALT(netuserObject, uinfObject)			\
	hr = netuserObject->GetUserInfo1012(PAR_UINF_USRCOMMENT_ALT, &uinfObject);	\
	ASSERT_FALSE(hr) << TUtils::GetLastErrorAsString(hr);

#define ASSERT_USER_GET_INFO_1012(netuserObject, uName, uinfObject)			\
	hr = netuserObject->NetUserGetInfo1012(NULL, uName, &uinfObject);		\
	ASSERT_FALSE(hr) << TUtils::GetLastErrorAsString(hr);

#define ASSERT_GET_USER_INFO_1014_ALT(netuserObject, uinfObject)			\
	hr = netuserObject->GetUserInfo1014(PAR_UINF_WORKSTATIONS_ALT, &uinfObject);	\
	ASSERT_FALSE(hr) << TUtils::GetLastErrorAsString(hr);

#define ASSERT_USER_GET_INFO_1014(netuserObject, uName, uinfObject)			\
	hr = netuserObject->NetUserGetInfo1014(NULL, uName, &uinfObject);		\
	ASSERT_FALSE(hr) << TUtils::GetLastErrorAsString(hr);

#define ASSERT_GET_USER_INFO_1017_ALT(netuserObject, uinfObject)			\
	hr = netuserObject->GetUserInfo1017(PAR_UINF_ACCNTEXPIRES_ALT, &uinfObject);	\
	ASSERT_FALSE(hr) << TUtils::GetLastErrorAsString(hr);

#define ASSERT_USER_GET_INFO_1017(netuserObject, uName, uinfObject)			\
	hr = netuserObject->NetUserGetInfo1017(NULL, uName, &uinfObject);		\
	ASSERT_FALSE(hr) << TUtils::GetLastErrorAsString(hr);

#define ASSERT_GET_USER_INFO_1020_ALT(netuserObject, uinfLogonHours, uinfObject)			\
	hr = netuserObject->GetUserInfo1020(									\
		PAR_UINF_UNITSPERWEEK														\
		, uinfLogonHours.Detach()											\
		, &uinfObject);	\
	ASSERT_FALSE(hr) << TUtils::GetLastErrorAsString(hr);

#define ASSERT_USER_GET_INFO_1020(netuserObject, uName, uinfObject)			\
	hr = netuserObject->NetUserGetInfo1020(NULL, uName, &uinfObject);		\
	ASSERT_FALSE(hr) << TUtils::GetLastErrorAsString(hr);

#define ASSERT_GET_USER_INFO_1024_ALT(netuserObject, uinfObject)			\
	hr = netuserObject->GetUserInfo1024(PAR_UINF_COUNTRYCODE_ALT, &uinfObject);	\
	ASSERT_FALSE(hr) << TUtils::GetLastErrorAsString(hr);

#define ASSERT_USER_GET_INFO_1024(netuserObject, uName, uinfObject)			\
	hr = netuserObject->NetUserGetInfo1024(NULL, uName, &uinfObject);		\
	ASSERT_FALSE(hr) << TUtils::GetLastErrorAsString(hr);

#define ASSERT_GET_USER_INFO_1051_ALT(netuserObject, uinfObject)			\
	hr = netuserObject->GetUserInfo1051(PAR_UINF_PRIMGRPID_ALT, &uinfObject);	\
	ASSERT_FALSE(hr) << TUtils::GetLastErrorAsString(hr);

#define ASSERT_USER_GET_INFO_1051(netuserObject, uName, uinfObject)			\
	hr = netuserObject->NetUserGetInfo1051(NULL, uName, &uinfObject);		\
	ASSERT_FALSE(hr) << TUtils::GetLastErrorAsString(hr);

#define ASSERT_GET_USER_INFO_1052_ALT(netuserObject, uinfObject)			\
	hr = netuserObject->GetUserInfo1052(PAR_UINF_PRFL_ALT, &uinfObject);	\
	ASSERT_FALSE(hr) << TUtils::GetLastErrorAsString(hr);

#define ASSERT_USER_GET_INFO_1052(netuserObject, uName, uinfObject)			\
	hr = netuserObject->NetUserGetInfo1052(NULL, uName, &uinfObject);		\
	ASSERT_FALSE(hr) << TUtils::GetLastErrorAsString(hr);

#define ASSERT_GET_USER_INFO_1053_ALT(netuserObject, uinfObject)			\
	hr = netuserObject->GetUserInfo1053(PAR_UINF_HOMEDIRDRV_ALT, &uinfObject);	\
	ASSERT_FALSE(hr) << TUtils::GetLastErrorAsString(hr);

#define ASSERT_USER_GET_INFO_1053(netuserObject, uName, uinfObject)			\
	hr = netuserObject->NetUserGetInfo1053(NULL, uName, &uinfObject);		\
	ASSERT_FALSE(hr) << TUtils::GetLastErrorAsString(hr);

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

	static bool CompareCLogonHours(ICLogonHours* pLeft, ICLogonHours* pRight)
	{
		if (pLeft == NULL) return false;
		if (pRight == NULL) return false;

		long lCountLeft;
		pLeft->get_Count(&lCountLeft);
		long lCountRight;
		pRight->get_Count(&lCountRight);
		if (lCountLeft != lCountRight) return false;
		for (long idx = 1; idx <= lCountLeft; idx++)
		{
			CComPtr<ICLogonHour> pLeftItem;
			pLeft->get_Item(idx, &pLeftItem);

			CComPtr<ICLogonHour> pRighttItem;
			pRight->get_Item(idx, &pRighttItem);

			SHORT leftShort;
			pLeftItem->get_Day(&leftShort);

			SHORT rightShort;
			pRighttItem->get_Day(&rightShort);

			if (leftShort != rightShort) return false;
			if (leftShort <= 0 || leftShort > 7) return false;
			if (rightShort <= 0 || rightShort > 7) return false;

			leftShort = 0;
			pLeftItem->get_Hour(&leftShort);

			rightShort = 0;
			pRighttItem->get_Hour(&rightShort);

			if (leftShort != rightShort) return false;
			if (leftShort < 0 || leftShort > 23) return false;
			if (rightShort < 0 || rightShort > 23) return false;

			leftShort = 0;
			pLeftItem->get_State(&leftShort);

			rightShort = 0;
			pRighttItem->get_State(&rightShort);

			if (leftShort != rightShort) return false;
			if (leftShort < 0 || leftShort > 1) return false;
			if (rightShort < 0 || rightShort > 1) return false;

			return true;
		}
	}
	//static void ASSERT_USRINF_NAME()
}


