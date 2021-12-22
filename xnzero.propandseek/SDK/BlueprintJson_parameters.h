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
// Parameters
//---------------------------------------------------------------------------

// Function BlueprintJson.BlueprintJsonLibrary.NotEqual_JsonValue
struct UBlueprintJsonLibrary_NotEqual_JsonValue_Params
{
	struct FBlueprintJsonValue                         A;                                                         // 0x0000(0x0010)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	struct FBlueprintJsonValue                         B;                                                         // 0x0000(0x0010)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	bool                                               ReturnValue;                                               // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function BlueprintJson.BlueprintJsonLibrary.JsonType
struct UBlueprintJsonLibrary_JsonType_Params
{
	struct FBlueprintJsonValue                         JsonValue;                                                 // 0x0000(0x0010)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	BlueprintJson_EJsonType                            ReturnValue;                                               // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function BlueprintJson.BlueprintJsonLibrary.JsonSetField
struct UBlueprintJsonLibrary_JsonSetField_Params
{
	struct FBlueprintJsonObject                        JsonObject;                                                // 0x0000(0x0010)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	struct FString                                     FieldName;                                                 // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FBlueprintJsonValue                         JsonValue;                                                 // 0x0000(0x0010)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	struct FBlueprintJsonObject                        ReturnValue;                                               // 0x0000(0x0010)  (ConstParm, Parm, OutParm, ReturnParm, ReferenceParm, NativeAccessSpecifierPublic)
};

// Function BlueprintJson.BlueprintJsonLibrary.JsonRemoveField
struct UBlueprintJsonLibrary_JsonRemoveField_Params
{
	struct FBlueprintJsonObject                        JsonObject;                                                // 0x0000(0x0010)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	struct FString                                     FieldName;                                                 // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FBlueprintJsonObject                        ReturnValue;                                               // 0x0000(0x0010)  (ConstParm, Parm, OutParm, ReturnParm, ReferenceParm, NativeAccessSpecifierPublic)
};

// Function BlueprintJson.BlueprintJsonLibrary.JsonMakeString
struct UBlueprintJsonLibrary_JsonMakeString_Params
{
	struct FString                                     Value;                                                     // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FBlueprintJsonValue                         ReturnValue;                                               // 0x0000(0x0010)  (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
};

// Function BlueprintJson.BlueprintJsonLibrary.JsonMakeObject
struct UBlueprintJsonLibrary_JsonMakeObject_Params
{
	struct FBlueprintJsonObject                        Value;                                                     // 0x0000(0x0010)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	struct FBlueprintJsonValue                         ReturnValue;                                               // 0x0000(0x0010)  (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
};

// Function BlueprintJson.BlueprintJsonLibrary.JsonMakeNull
struct UBlueprintJsonLibrary_JsonMakeNull_Params
{
	struct FBlueprintJsonValue                         ReturnValue;                                               // 0x0000(0x0010)  (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
};

// Function BlueprintJson.BlueprintJsonLibrary.JsonMakeInt
struct UBlueprintJsonLibrary_JsonMakeInt_Params
{
	int                                                Value;                                                     // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FBlueprintJsonValue                         ReturnValue;                                               // 0x0000(0x0010)  (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
};

// Function BlueprintJson.BlueprintJsonLibrary.JsonMakeFloat
struct UBlueprintJsonLibrary_JsonMakeFloat_Params
{
	float                                              Value;                                                     // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FBlueprintJsonValue                         ReturnValue;                                               // 0x0000(0x0010)  (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
};

// Function BlueprintJson.BlueprintJsonLibrary.JsonMakeField
struct UBlueprintJsonLibrary_JsonMakeField_Params
{
	struct FBlueprintJsonObject                        JsonObject;                                                // 0x0000(0x0010)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	struct FString                                     FieldName;                                                 // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FBlueprintJsonValue                         Value;                                                     // 0x0000(0x0010)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	struct FBlueprintJsonObject                        ReturnValue;                                               // 0x0000(0x0010)  (ConstParm, Parm, OutParm, ReturnParm, ReferenceParm, NativeAccessSpecifierPublic)
};

// Function BlueprintJson.BlueprintJsonLibrary.JsonMakeBool
struct UBlueprintJsonLibrary_JsonMakeBool_Params
{
	bool                                               Value;                                                     // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FBlueprintJsonValue                         ReturnValue;                                               // 0x0000(0x0010)  (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
};

// Function BlueprintJson.BlueprintJsonLibrary.JsonMakeArray
struct UBlueprintJsonLibrary_JsonMakeArray_Params
{
	TArray<struct FBlueprintJsonValue>                 Value;                                                     // 0x0000(0x0010)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
	struct FBlueprintJsonValue                         ReturnValue;                                               // 0x0000(0x0010)  (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
};

// Function BlueprintJson.BlueprintJsonLibrary.JsonMake
struct UBlueprintJsonLibrary_JsonMake_Params
{
	struct FBlueprintJsonObject                        ReturnValue;                                               // 0x0000(0x0010)  (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
};

// Function BlueprintJson.BlueprintJsonLibrary.JsonIsNull
struct UBlueprintJsonLibrary_JsonIsNull_Params
{
	struct FBlueprintJsonValue                         JsonValue;                                                 // 0x0000(0x0010)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	bool                                               ReturnValue;                                               // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function BlueprintJson.BlueprintJsonLibrary.JsonHasTypedField
struct UBlueprintJsonLibrary_JsonHasTypedField_Params
{
	struct FBlueprintJsonObject                        JsonObject;                                                // 0x0000(0x0010)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	struct FString                                     FieldName;                                                 // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	BlueprintJson_EJsonType                            Type;                                                      // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               ReturnValue;                                               // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function BlueprintJson.BlueprintJsonLibrary.JsonHasField
struct UBlueprintJsonLibrary_JsonHasField_Params
{
	struct FBlueprintJsonObject                        JsonObject;                                                // 0x0000(0x0010)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	struct FString                                     FieldName;                                                 // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               ReturnValue;                                               // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function BlueprintJson.BlueprintJsonLibrary.EquaEqual_JsonValue
struct UBlueprintJsonLibrary_EquaEqual_JsonValue_Params
{
	struct FBlueprintJsonValue                         A;                                                         // 0x0000(0x0010)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	struct FBlueprintJsonValue                         B;                                                         // 0x0000(0x0010)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	bool                                               ReturnValue;                                               // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function BlueprintJson.BlueprintJsonLibrary.Conv_StringToJsonObject
struct UBlueprintJsonLibrary_Conv_StringToJsonObject_Params
{
	struct FString                                     JsonString;                                                // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FBlueprintJsonObject                        ReturnValue;                                               // 0x0000(0x0010)  (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
};

// Function BlueprintJson.BlueprintJsonLibrary.Conv_JsonValueToString
struct UBlueprintJsonLibrary_Conv_JsonValueToString_Params
{
	struct FBlueprintJsonValue                         JsonValue;                                                 // 0x0000(0x0010)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	struct FString                                     ReturnValue;                                               // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function BlueprintJson.BlueprintJsonLibrary.Conv_JsonValueToObject
struct UBlueprintJsonLibrary_Conv_JsonValueToObject_Params
{
	struct FBlueprintJsonValue                         JsonValue;                                                 // 0x0000(0x0010)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	struct FBlueprintJsonObject                        ReturnValue;                                               // 0x0000(0x0010)  (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
};

// Function BlueprintJson.BlueprintJsonLibrary.Conv_JsonValueToInteger
struct UBlueprintJsonLibrary_Conv_JsonValueToInteger_Params
{
	struct FBlueprintJsonValue                         JsonValue;                                                 // 0x0000(0x0010)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	int                                                ReturnValue;                                               // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function BlueprintJson.BlueprintJsonLibrary.Conv_JsonValueToFloat
struct UBlueprintJsonLibrary_Conv_JsonValueToFloat_Params
{
	struct FBlueprintJsonValue                         JsonValue;                                                 // 0x0000(0x0010)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	float                                              ReturnValue;                                               // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function BlueprintJson.BlueprintJsonLibrary.Conv_JsonValueToBool
struct UBlueprintJsonLibrary_Conv_JsonValueToBool_Params
{
	struct FBlueprintJsonValue                         JsonValue;                                                 // 0x0000(0x0010)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	bool                                               ReturnValue;                                               // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function BlueprintJson.BlueprintJsonLibrary.Conv_JsonValueToArray
struct UBlueprintJsonLibrary_Conv_JsonValueToArray_Params
{
	struct FBlueprintJsonValue                         JsonValue;                                                 // 0x0000(0x0010)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	TArray<struct FBlueprintJsonValue>                 ReturnValue;                                               // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor, ReturnParm, NativeAccessSpecifierPublic)
};

// Function BlueprintJson.BlueprintJsonLibrary.Conv_JsonObjectToString
struct UBlueprintJsonLibrary_Conv_JsonObjectToString_Params
{
	struct FBlueprintJsonObject                        JsonObject;                                                // 0x0000(0x0010)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	struct FString                                     ReturnValue;                                               // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function BlueprintJson.BlueprintJsonLibrary.Conv_JsonObjectToPrettyString
struct UBlueprintJsonLibrary_Conv_JsonObjectToPrettyString_Params
{
	struct FBlueprintJsonObject                        JsonObject;                                                // 0x0000(0x0010)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	struct FString                                     ReturnValue;                                               // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function BlueprintJson.BlueprintJsonLibrary.Conv_JsonObjectToJsonValue
struct UBlueprintJsonLibrary_Conv_JsonObjectToJsonValue_Params
{
	struct FBlueprintJsonObject                        JsonObject;                                                // 0x0000(0x0010)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	struct FString                                     FieldName;                                                 // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FBlueprintJsonValue                         ReturnValue;                                               // 0x0000(0x0010)  (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
