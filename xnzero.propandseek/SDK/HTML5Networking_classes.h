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

// Class HTML5Networking.WebSocketConnection
// 0x0010 (FullSize[0x1898] - InheritedSize[0x1888])
class UWebSocketConnection : public UNetConnection
{
public:
	unsigned char                                      UnknownData_46BJ[0x10];                                    // 0x1888(0x0010) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class HTML5Networking.WebSocketConnection");
		return ptr;
	}



};

// Class HTML5Networking.WebSocketNetDriver
// 0x0010 (FullSize[0x0730] - InheritedSize[0x0720])
class UWebSocketNetDriver : public UNetDriver
{
public:
	int                                                WebSocketPort;                                             // 0x0720(0x0004) (ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_2MAR[0xC];                                     // 0x0724(0x000C) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class HTML5Networking.WebSocketNetDriver");
		return ptr;
	}



};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
