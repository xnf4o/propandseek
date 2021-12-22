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

// Enum LowEntryHttpRequest.ELowEntryHttpRequestSuccess
enum class LowEntryHttpRequest_ELowEntryHttpRequestSuccess : uint8_t
{
	ELowEntryHttpRequestSuccess__Success = 0,
	ELowEntryHttpRequestSuccess__Failed = 1,
	ELowEntryHttpRequestSuccess__ELowEntryHttpRequestSuccess_MAX = 2,

};

// Enum LowEntryHttpRequest.ELowEntryHttpRequestType
enum class LowEntryHttpRequest_ELowEntryHttpRequestType : uint8_t
{
	ELowEntryHttpRequestType__GET  = 0,
	ELowEntryHttpRequestType__POST = 1,
	ELowEntryHttpRequestType__PUT  = 2,
	ELowEntryHttpRequestType___PATCH = 3,
	ELowEntryHttpRequestType___DELETE = 4,
	ELowEntryHttpRequestType___CONNECT = 5,
	ELowEntryHttpRequestType___OPTIONS = 6,
	ELowEntryHttpRequestType___HEAD = 7,
	ELowEntryHttpRequestType___TRACE = 8,
	ELowEntryHttpRequestType__ELowEntryHttpRequestType_MAX = 9,

};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
