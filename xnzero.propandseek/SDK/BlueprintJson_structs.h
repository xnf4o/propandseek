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

// Enum BlueprintJson.EJsonType
enum class BlueprintJson_EJsonType : uint8_t
{
	EJsonType__None                = 0,
	EJsonType__Null                = 1,
	EJsonType__String              = 2,
	EJsonType__Number              = 3,
	EJsonType__Boolean             = 4,
	EJsonType__Array               = 5,
	EJsonType__Object              = 6,
	EJsonType__EJsonType_MAX       = 7,

};

//---------------------------------------------------------------------------
// Script Structs
//---------------------------------------------------------------------------

// ScriptStruct BlueprintJson.BlueprintJsonValue
// 0x0010
struct FBlueprintJsonValue
{
	unsigned char                                      UnknownData_238J[0x10];                                    // 0x0000(0x0010) MISSED OFFSET (PADDING)

};

// ScriptStruct BlueprintJson.BlueprintJsonObject
// 0x0010
struct FBlueprintJsonObject
{
	unsigned char                                      UnknownData_DZA2[0x10];                                    // 0x0000(0x0010) MISSED OFFSET (PADDING)

};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
