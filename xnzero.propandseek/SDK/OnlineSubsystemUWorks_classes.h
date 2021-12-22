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
// Classes
//---------------------------------------------------------------------------

// Class OnlineSubsystemUWorks.IpConnectionUWorks
// 0x0000 (FullSize[0x18E8] - InheritedSize[0x18E8])
class UIpConnectionUWorks : public UIpConnection
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class OnlineSubsystemUWorks.IpConnectionUWorks");
		return ptr;
	}



};

// Class OnlineSubsystemUWorks.IpNetDriverUWorks
// 0x0038 (FullSize[0x07A0] - InheritedSize[0x0768])
class UIpNetDriverUWorks : public UIpNetDriver
{
public:
	unsigned char                                      UnknownData_RFRM[0x38];                                    // 0x0768(0x0038) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class OnlineSubsystemUWorks.IpNetDriverUWorks");
		return ptr;
	}



};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
