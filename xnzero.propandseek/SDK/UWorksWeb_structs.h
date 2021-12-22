#pragma once

// Name: pns, Version: 1


/*!!DEFINE!!*/

/*!!HELPER_DEF!!*/

/*!!HELPER_INC!!*/

#ifdef _MSC_VER
	#pragma pack(push, 0x01)
#endif

namespace CG
{
//---------------------------------------------------------------------------
// Enums
//---------------------------------------------------------------------------

// Enum UWorksWeb.EUWorksUserSession
enum class UWorksWeb_EUWorksUserSession : uint8_t
{
	EUWorksUserSession__None       = 0,
	EUWorksUserSession__Client     = 1,
	EUWorksUserSession__Web        = 2,
	EUWorksUserSession__EUWorksUserSession_MAX = 3,

};

// Enum UWorksWeb.EUWorksReportType
enum class UWorksWeb_EUWorksReportType : uint8_t
{
	EUWorksReportType__None        = 0,
	EUWorksReportType__GameSales   = 1,
	EUWorksReportType__SteamStore  = 2,
	EUWorksReportType__Settlement  = 3,
	EUWorksReportType__EUWorksReportType_MAX = 4,

};

// Enum UWorksWeb.FUWorksHTTPResponse
enum class UWorksWeb_EFUWorksHTTPResponse : uint8_t
{
	FUWorksHTTPResponse__Unknown   = 0,
	FUWorksHTTPResponse__Continue  = 1,
	FUWorksHTTPResponse__SwitchProtocol = 2,
	FUWorksHTTPResponse__Ok        = 3,
	FUWorksHTTPResponse__Created   = 4,
	FUWorksHTTPResponse__Accepted  = 5,
	FUWorksHTTPResponse__Partial   = 6,
	FUWorksHTTPResponse__NoContent = 7,
	FUWorksHTTPResponse__ResetContent = 8,
	FUWorksHTTPResponse__PartialContent = 9,
	FUWorksHTTPResponse__Ambiguous = 10,
	FUWorksHTTPResponse__Moved     = 11,
	FUWorksHTTPResponse__Redirect  = 12,
	FUWorksHTTPResponse__RedirectMethod = 13,
	FUWorksHTTPResponse__NotModified = 14,
	FUWorksHTTPResponse__UseProxy  = 15,
	FUWorksHTTPResponse__RedirectKeepVerb = 16,
	FUWorksHTTPResponse__BadRequest = 17,
	FUWorksHTTPResponse__Denied    = 18,
	FUWorksHTTPResponse__PaymentReq = 19,
	FUWorksHTTPResponse__Forbidden = 20,
	FUWorksHTTPResponse__NotFound  = 21,
	FUWorksHTTPResponse__BadMethod = 22,
	FUWorksHTTPResponse__NoneAcceptable = 23,
	FUWorksHTTPResponse__ProxyAuthReq = 24,
	FUWorksHTTPResponse__RequestTimeout = 25,
	FUWorksHTTPResponse__Conflict  = 26,
	FUWorksHTTPResponse__Gone      = 27,
	FUWorksHTTPResponse__LengthRequired = 28,
	FUWorksHTTPResponse__PrecondFailed = 29,
	FUWorksHTTPResponse__RequestTooLarge = 30,
	FUWorksHTTPResponse__UriTooLong = 31,
	FUWorksHTTPResponse__UnsupportedMedia = 32,
	FUWorksHTTPResponse__TooManyRequests = 33,
	FUWorksHTTPResponse__RetryWith = 34,
	FUWorksHTTPResponse__ServerError = 35,
	FUWorksHTTPResponse__NotSupported = 36,
	FUWorksHTTPResponse__BadGateway = 37,
	FUWorksHTTPResponse__ServiceUnavail = 38,
	FUWorksHTTPResponse__GatewayTimeout = 39,
	FUWorksHTTPResponse__VersionNotSup = 40,
	FUWorksHTTPResponse__FUWorksHTTPResponse_MAX = 41,

};

//---------------------------------------------------------------------------
// Script Structs
//---------------------------------------------------------------------------

// ScriptStruct UWorksWeb.UWorksTitle
// 0x0001
struct FUWorksTitle
{
	unsigned char                                      UnknownData_Z2U5[0x1];                                     // 0x0000(0x0001) MISSED OFFSET (PADDING)

};

// ScriptStruct UWorksWeb.UWorksUsers
// 0x0001
struct FUWorksUsers
{
	unsigned char                                      UnknownData_RXPQ[0x1];                                     // 0x0000(0x0001) MISSED OFFSET (PADDING)

};

// ScriptStruct UWorksWeb.UWorksSessions
// 0x0001
struct FUWorksSessions
{
	unsigned char                                      UnknownData_6UBR[0x1];                                     // 0x0000(0x0001) MISSED OFFSET (PADDING)

};

// ScriptStruct UWorksWeb.UWorksPlaySessions
// 0x0001
struct FUWorksPlaySessions
{
	unsigned char                                      UnknownData_3PJA[0x1];                                     // 0x0000(0x0001) MISSED OFFSET (PADDING)

};

// ScriptStruct UWorksWeb.UWorksRequiredKVTags
// 0x0001
struct FUWorksRequiredKVTags
{
	unsigned char                                      UnknownData_GLKX[0x1];                                     // 0x0000(0x0001) MISSED OFFSET (PADDING)

};

// ScriptStruct UWorksWeb.UWorksAssociatedWorkshopFiles
// 0x0001
struct FUWorksAssociatedWorkshopFiles
{
	unsigned char                                      UnknownData_CGKQ[0x1];                                     // 0x0000(0x0001) MISSED OFFSET (PADDING)

};

// ScriptStruct UWorksWeb.UWorksPartnerAccounts
// 0x0001
struct FUWorksPartnerAccounts
{
	unsigned char                                      UnknownData_FMPJ[0x1];                                     // 0x0000(0x0001) MISSED OFFSET (PADDING)

};

// ScriptStruct UWorksWeb.UWorksLanguages
// 0x0001
struct FUWorksLanguages
{
	unsigned char                                      UnknownData_VSFF[0x1];                                     // 0x0000(0x0001) MISSED OFFSET (PADDING)

};

// ScriptStruct UWorksWeb.UWorksAnnexWebApps
// 0x0001
struct FUWorksAnnexWebApps
{
	unsigned char                                      UnknownData_3L4E[0x1];                                     // 0x0000(0x0001) MISSED OFFSET (PADDING)

};

// ScriptStruct UWorksWeb.UWorksAnnexWebBroadcast
// 0x0001
struct FUWorksAnnexWebBroadcast
{
	unsigned char                                      UnknownData_KK21[0x1];                                     // 0x0000(0x0001) MISSED OFFSET (PADDING)

};

// ScriptStruct UWorksWeb.UWorksAnnexWebCheatReporting
// 0x0001
struct FUWorksAnnexWebCheatReporting
{
	unsigned char                                      UnknownData_26W6[0x1];                                     // 0x0000(0x0001) MISSED OFFSET (PADDING)

};

// ScriptStruct UWorksWeb.UWorksAnnexWebCommunity
// 0x0001
struct FUWorksAnnexWebCommunity
{
	unsigned char                                      UnknownData_YEC5[0x1];                                     // 0x0000(0x0001) MISSED OFFSET (PADDING)

};

// ScriptStruct UWorksWeb.UWorksAnnexWebEcon
// 0x0001
struct FUWorksAnnexWebEcon
{
	unsigned char                                      UnknownData_3RST[0x1];                                     // 0x0000(0x0001) MISSED OFFSET (PADDING)

};

// ScriptStruct UWorksWeb.UWorksAnnexWebEconMarket
// 0x0001
struct FUWorksAnnexWebEconMarket
{
	unsigned char                                      UnknownData_DCWG[0x1];                                     // 0x0000(0x0001) MISSED OFFSET (PADDING)

};

// ScriptStruct UWorksWeb.UWorksAnnexWebEconomy
// 0x0001
struct FUWorksAnnexWebEconomy
{
	unsigned char                                      UnknownData_EZMX[0x1];                                     // 0x0000(0x0001) MISSED OFFSET (PADDING)

};

// ScriptStruct UWorksWeb.UWorksAnnexWebGameInventory
// 0x0001
struct FUWorksAnnexWebGameInventory
{
	unsigned char                                      UnknownData_2GIO[0x1];                                     // 0x0000(0x0001) MISSED OFFSET (PADDING)

};

// ScriptStruct UWorksWeb.UWorksAnnexWebGameNotifications
// 0x0001
struct FUWorksAnnexWebGameNotifications
{
	unsigned char                                      UnknownData_BY6C[0x1];                                     // 0x0000(0x0001) MISSED OFFSET (PADDING)

};

// ScriptStruct UWorksWeb.UWorksAnnexWebGameServers
// 0x0001
struct FUWorksAnnexWebGameServers
{
	unsigned char                                      UnknownData_LIIK[0x1];                                     // 0x0000(0x0001) MISSED OFFSET (PADDING)

};

// ScriptStruct UWorksWeb.UWorksAnnexWebGameServerStats
// 0x0001
struct FUWorksAnnexWebGameServerStats
{
	unsigned char                                      UnknownData_UC7L[0x1];                                     // 0x0000(0x0001) MISSED OFFSET (PADDING)

};

// ScriptStruct UWorksWeb.UWorksAnnexWebInventory
// 0x0001
struct FUWorksAnnexWebInventory
{
	unsigned char                                      UnknownData_1QII[0x1];                                     // 0x0000(0x0001) MISSED OFFSET (PADDING)

};

// ScriptStruct UWorksWeb.UWorksAnnexWebLeaderboards
// 0x0001
struct FUWorksAnnexWebLeaderboards
{
	unsigned char                                      UnknownData_53M1[0x1];                                     // 0x0000(0x0001) MISSED OFFSET (PADDING)

};

// ScriptStruct UWorksWeb.UWorksAnnexWebMicroTxn
// 0x0001
struct FUWorksAnnexWebMicroTxn
{
	unsigned char                                      UnknownData_SS9V[0x1];                                     // 0x0000(0x0001) MISSED OFFSET (PADDING)

};

// ScriptStruct UWorksWeb.UWorksAnnexWebNews
// 0x0001
struct FUWorksAnnexWebNews
{
	unsigned char                                      UnknownData_L4C1[0x1];                                     // 0x0000(0x0001) MISSED OFFSET (PADDING)

};

// ScriptStruct UWorksWeb.UWorksAnnexWebPlayer
// 0x0001
struct FUWorksAnnexWebPlayer
{
	unsigned char                                      UnknownData_703Z[0x1];                                     // 0x0000(0x0001) MISSED OFFSET (PADDING)

};

// ScriptStruct UWorksWeb.UWorksAnnexWebPublishedFile
// 0x0001
struct FUWorksAnnexWebPublishedFile
{
	unsigned char                                      UnknownData_DIOH[0x1];                                     // 0x0000(0x0001) MISSED OFFSET (PADDING)

};

// ScriptStruct UWorksWeb.UWorksAnnexWebPublishedItemSearch
// 0x0001
struct FUWorksAnnexWebPublishedItemSearch
{
	unsigned char                                      UnknownData_LX7T[0x1];                                     // 0x0000(0x0001) MISSED OFFSET (PADDING)

};

// ScriptStruct UWorksWeb.UWorksAnnexWebPublishedItemVoting
// 0x0001
struct FUWorksAnnexWebPublishedItemVoting
{
	unsigned char                                      UnknownData_TYKF[0x1];                                     // 0x0000(0x0001) MISSED OFFSET (PADDING)

};

// ScriptStruct UWorksWeb.UWorksAnnexWebRemoteStorage
// 0x0001
struct FUWorksAnnexWebRemoteStorage
{
	unsigned char                                      UnknownData_TXYP[0x1];                                     // 0x0000(0x0001) MISSED OFFSET (PADDING)

};

// ScriptStruct UWorksWeb.UWorksAnnexWebUser
// 0x0001
struct FUWorksAnnexWebUser
{
	unsigned char                                      UnknownData_U4W2[0x1];                                     // 0x0000(0x0001) MISSED OFFSET (PADDING)

};

// ScriptStruct UWorksWeb.UWorksAnnexWebUserAuth
// 0x0001
struct FUWorksAnnexWebUserAuth
{
	unsigned char                                      UnknownData_1YCW[0x1];                                     // 0x0000(0x0001) MISSED OFFSET (PADDING)

};

// ScriptStruct UWorksWeb.UWorksAnnexWebUserStats
// 0x0001
struct FUWorksAnnexWebUserStats
{
	unsigned char                                      UnknownData_UWYY[0x1];                                     // 0x0000(0x0001) MISSED OFFSET (PADDING)

};

// ScriptStruct UWorksWeb.UWorksAnnexWebWorkshop
// 0x0001
struct FUWorksAnnexWebWorkshop
{
	unsigned char                                      UnknownData_OVUM[0x1];                                     // 0x0000(0x0001) MISSED OFFSET (PADDING)

};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
