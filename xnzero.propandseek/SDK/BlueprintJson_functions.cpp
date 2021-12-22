// Name: pns, Version: 1

#include "../pch.h"

/*!!DEFINE!!*/

/*!!HELPER_DEF!!*/

/*!!HELPER_INC!!*/

#ifdef _MSC_VER
	#pragma pack(push, 0x01)
#endif

namespace CG
{
//---------------------------------------------------------------------------
// Functions
//---------------------------------------------------------------------------

// Function:
//		Offset -> 0x006082B0
//		Name   -> Function BlueprintJson.BlueprintJsonLibrary.NotEqual_JsonValue
//		Flags  -> (Final, Native, Static, Public, HasOutParms, BlueprintCallable, BlueprintPure)
// Parameters:
//		struct FBlueprintJsonValue                         A                                                          (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
//		struct FBlueprintJsonValue                         B                                                          (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
//		bool                                               ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UBlueprintJsonLibrary::STATIC_NotEqual_JsonValue(const struct FBlueprintJsonValue& A, const struct FBlueprintJsonValue& B)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BlueprintJson.BlueprintJsonLibrary.NotEqual_JsonValue");

	UBlueprintJsonLibrary_NotEqual_JsonValue_Params params {};
	params.A = A;
	params.B = B;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x006081F0
//		Name   -> Function BlueprintJson.BlueprintJsonLibrary.JsonType
//		Flags  -> (Final, Native, Static, Public, HasOutParms, BlueprintCallable, BlueprintPure)
// Parameters:
//		struct FBlueprintJsonValue                         JsonValue                                                  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
//		BlueprintJson_EJsonType                            ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
BlueprintJson_EJsonType UBlueprintJsonLibrary::STATIC_JsonType(const struct FBlueprintJsonValue& JsonValue)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BlueprintJson.BlueprintJsonLibrary.JsonType");

	UBlueprintJsonLibrary_JsonType_Params params {};
	params.JsonValue = JsonValue;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00607B50
//		Name   -> Function BlueprintJson.BlueprintJsonLibrary.JsonSetField
//		Flags  -> (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
// Parameters:
//		struct FBlueprintJsonObject                        JsonObject                                                 (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
//		struct FString                                     FieldName                                                  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		struct FBlueprintJsonValue                         JsonValue                                                  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
//		struct FBlueprintJsonObject                        ReturnValue                                                (ConstParm, Parm, OutParm, ReturnParm, ReferenceParm, NativeAccessSpecifierPublic)
struct FBlueprintJsonObject UBlueprintJsonLibrary::STATIC_JsonSetField(const struct FBlueprintJsonObject& JsonObject, const struct FString& FieldName, const struct FBlueprintJsonValue& JsonValue)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BlueprintJson.BlueprintJsonLibrary.JsonSetField");

	UBlueprintJsonLibrary_JsonSetField_Params params {};
	params.JsonObject = JsonObject;
	params.FieldName = FieldName;
	params.JsonValue = JsonValue;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x006080C0
//		Name   -> Function BlueprintJson.BlueprintJsonLibrary.JsonRemoveField
//		Flags  -> (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
// Parameters:
//		struct FBlueprintJsonObject                        JsonObject                                                 (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
//		struct FString                                     FieldName                                                  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		struct FBlueprintJsonObject                        ReturnValue                                                (ConstParm, Parm, OutParm, ReturnParm, ReferenceParm, NativeAccessSpecifierPublic)
struct FBlueprintJsonObject UBlueprintJsonLibrary::STATIC_JsonRemoveField(const struct FBlueprintJsonObject& JsonObject, const struct FString& FieldName)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BlueprintJson.BlueprintJsonLibrary.JsonRemoveField");

	UBlueprintJsonLibrary_JsonRemoveField_Params params {};
	params.JsonObject = JsonObject;
	params.FieldName = FieldName;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00607FF0
//		Name   -> Function BlueprintJson.BlueprintJsonLibrary.JsonMakeString
//		Flags  -> (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
//		struct FString                                     Value                                                      (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		struct FBlueprintJsonValue                         ReturnValue                                                (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
struct FBlueprintJsonValue UBlueprintJsonLibrary::STATIC_JsonMakeString(const struct FString& Value)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BlueprintJson.BlueprintJsonLibrary.JsonMakeString");

	UBlueprintJsonLibrary_JsonMakeString_Params params {};
	params.Value = Value;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00607EF0
//		Name   -> Function BlueprintJson.BlueprintJsonLibrary.JsonMakeObject
//		Flags  -> (Final, Native, Static, Public, HasOutParms, BlueprintCallable, BlueprintPure)
// Parameters:
//		struct FBlueprintJsonObject                        Value                                                      (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
//		struct FBlueprintJsonValue                         ReturnValue                                                (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
struct FBlueprintJsonValue UBlueprintJsonLibrary::STATIC_JsonMakeObject(const struct FBlueprintJsonObject& Value)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BlueprintJson.BlueprintJsonLibrary.JsonMakeObject");

	UBlueprintJsonLibrary_JsonMakeObject_Params params {};
	params.Value = Value;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00607E80
//		Name   -> Function BlueprintJson.BlueprintJsonLibrary.JsonMakeNull
//		Flags  -> (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
//		struct FBlueprintJsonValue                         ReturnValue                                                (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
struct FBlueprintJsonValue UBlueprintJsonLibrary::STATIC_JsonMakeNull()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BlueprintJson.BlueprintJsonLibrary.JsonMakeNull");

	UBlueprintJsonLibrary_JsonMakeNull_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00607DC0
//		Name   -> Function BlueprintJson.BlueprintJsonLibrary.JsonMakeInt
//		Flags  -> (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
//		int                                                Value                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		struct FBlueprintJsonValue                         ReturnValue                                                (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
struct FBlueprintJsonValue UBlueprintJsonLibrary::STATIC_JsonMakeInt(int Value)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BlueprintJson.BlueprintJsonLibrary.JsonMakeInt");

	UBlueprintJsonLibrary_JsonMakeInt_Params params {};
	params.Value = Value;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00607D00
//		Name   -> Function BlueprintJson.BlueprintJsonLibrary.JsonMakeFloat
//		Flags  -> (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
//		float                                              Value                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		struct FBlueprintJsonValue                         ReturnValue                                                (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
struct FBlueprintJsonValue UBlueprintJsonLibrary::STATIC_JsonMakeFloat(float Value)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BlueprintJson.BlueprintJsonLibrary.JsonMakeFloat");

	UBlueprintJsonLibrary_JsonMakeFloat_Params params {};
	params.Value = Value;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00607B50
//		Name   -> Function BlueprintJson.BlueprintJsonLibrary.JsonMakeField
//		Flags  -> (Final, Native, Static, Public, HasOutParms, BlueprintCallable, BlueprintPure)
// Parameters:
//		struct FBlueprintJsonObject                        JsonObject                                                 (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
//		struct FString                                     FieldName                                                  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		struct FBlueprintJsonValue                         Value                                                      (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
//		struct FBlueprintJsonObject                        ReturnValue                                                (ConstParm, Parm, OutParm, ReturnParm, ReferenceParm, NativeAccessSpecifierPublic)
struct FBlueprintJsonObject UBlueprintJsonLibrary::STATIC_JsonMakeField(const struct FBlueprintJsonObject& JsonObject, const struct FString& FieldName, const struct FBlueprintJsonValue& Value)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BlueprintJson.BlueprintJsonLibrary.JsonMakeField");

	UBlueprintJsonLibrary_JsonMakeField_Params params {};
	params.JsonObject = JsonObject;
	params.FieldName = FieldName;
	params.Value = Value;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00607A90
//		Name   -> Function BlueprintJson.BlueprintJsonLibrary.JsonMakeBool
//		Flags  -> (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
//		bool                                               Value                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		struct FBlueprintJsonValue                         ReturnValue                                                (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
struct FBlueprintJsonValue UBlueprintJsonLibrary::STATIC_JsonMakeBool(bool Value)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BlueprintJson.BlueprintJsonLibrary.JsonMakeBool");

	UBlueprintJsonLibrary_JsonMakeBool_Params params {};
	params.Value = Value;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00607960
//		Name   -> Function BlueprintJson.BlueprintJsonLibrary.JsonMakeArray
//		Flags  -> (Final, Native, Static, Public, HasOutParms, BlueprintCallable, BlueprintPure)
// Parameters:
//		TArray<struct FBlueprintJsonValue>                 Value                                                      (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
//		struct FBlueprintJsonValue                         ReturnValue                                                (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
struct FBlueprintJsonValue UBlueprintJsonLibrary::STATIC_JsonMakeArray(TArray<struct FBlueprintJsonValue> Value)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BlueprintJson.BlueprintJsonLibrary.JsonMakeArray");

	UBlueprintJsonLibrary_JsonMakeArray_Params params {};
	params.Value = Value;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x006078F0
//		Name   -> Function BlueprintJson.BlueprintJsonLibrary.JsonMake
//		Flags  -> (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
//		struct FBlueprintJsonObject                        ReturnValue                                                (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
struct FBlueprintJsonObject UBlueprintJsonLibrary::STATIC_JsonMake()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BlueprintJson.BlueprintJsonLibrary.JsonMake");

	UBlueprintJsonLibrary_JsonMake_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00607830
//		Name   -> Function BlueprintJson.BlueprintJsonLibrary.JsonIsNull
//		Flags  -> (Final, Native, Static, Public, HasOutParms, BlueprintCallable, BlueprintPure)
// Parameters:
//		struct FBlueprintJsonValue                         JsonValue                                                  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
//		bool                                               ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UBlueprintJsonLibrary::STATIC_JsonIsNull(const struct FBlueprintJsonValue& JsonValue)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BlueprintJson.BlueprintJsonLibrary.JsonIsNull");

	UBlueprintJsonLibrary_JsonIsNull_Params params {};
	params.JsonValue = JsonValue;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x006076C0
//		Name   -> Function BlueprintJson.BlueprintJsonLibrary.JsonHasTypedField
//		Flags  -> (Final, Native, Static, Public, HasOutParms, BlueprintCallable, BlueprintPure)
// Parameters:
//		struct FBlueprintJsonObject                        JsonObject                                                 (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
//		struct FString                                     FieldName                                                  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		BlueprintJson_EJsonType                            Type                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		bool                                               ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UBlueprintJsonLibrary::STATIC_JsonHasTypedField(const struct FBlueprintJsonObject& JsonObject, const struct FString& FieldName, BlueprintJson_EJsonType Type)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BlueprintJson.BlueprintJsonLibrary.JsonHasTypedField");

	UBlueprintJsonLibrary_JsonHasTypedField_Params params {};
	params.JsonObject = JsonObject;
	params.FieldName = FieldName;
	params.Type = Type;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00607590
//		Name   -> Function BlueprintJson.BlueprintJsonLibrary.JsonHasField
//		Flags  -> (Final, Native, Static, Public, HasOutParms, BlueprintCallable, BlueprintPure)
// Parameters:
//		struct FBlueprintJsonObject                        JsonObject                                                 (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
//		struct FString                                     FieldName                                                  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		bool                                               ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UBlueprintJsonLibrary::STATIC_JsonHasField(const struct FBlueprintJsonObject& JsonObject, const struct FString& FieldName)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BlueprintJson.BlueprintJsonLibrary.JsonHasField");

	UBlueprintJsonLibrary_JsonHasField_Params params {};
	params.JsonObject = JsonObject;
	params.FieldName = FieldName;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00607440
//		Name   -> Function BlueprintJson.BlueprintJsonLibrary.EquaEqual_JsonValue
//		Flags  -> (Final, Native, Static, Public, HasOutParms, BlueprintCallable, BlueprintPure)
// Parameters:
//		struct FBlueprintJsonValue                         A                                                          (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
//		struct FBlueprintJsonValue                         B                                                          (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
//		bool                                               ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UBlueprintJsonLibrary::STATIC_EquaEqual_JsonValue(const struct FBlueprintJsonValue& A, const struct FBlueprintJsonValue& B)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BlueprintJson.BlueprintJsonLibrary.EquaEqual_JsonValue");

	UBlueprintJsonLibrary_EquaEqual_JsonValue_Params params {};
	params.A = A;
	params.B = B;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00607370
//		Name   -> Function BlueprintJson.BlueprintJsonLibrary.Conv_StringToJsonObject
//		Flags  -> (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
//		struct FString                                     JsonString                                                 (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		struct FBlueprintJsonObject                        ReturnValue                                                (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
struct FBlueprintJsonObject UBlueprintJsonLibrary::STATIC_Conv_StringToJsonObject(const struct FString& JsonString)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BlueprintJson.BlueprintJsonLibrary.Conv_StringToJsonObject");

	UBlueprintJsonLibrary_Conv_StringToJsonObject_Params params {};
	params.JsonString = JsonString;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00607270
//		Name   -> Function BlueprintJson.BlueprintJsonLibrary.Conv_JsonValueToString
//		Flags  -> (Final, Native, Static, Public, HasOutParms, BlueprintCallable, BlueprintPure)
// Parameters:
//		struct FBlueprintJsonValue                         JsonValue                                                  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
//		struct FString                                     ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
struct FString UBlueprintJsonLibrary::STATIC_Conv_JsonValueToString(const struct FBlueprintJsonValue& JsonValue)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BlueprintJson.BlueprintJsonLibrary.Conv_JsonValueToString");

	UBlueprintJsonLibrary_Conv_JsonValueToString_Params params {};
	params.JsonValue = JsonValue;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00607170
//		Name   -> Function BlueprintJson.BlueprintJsonLibrary.Conv_JsonValueToObject
//		Flags  -> (Final, Native, Static, Public, HasOutParms, BlueprintCallable, BlueprintPure)
// Parameters:
//		struct FBlueprintJsonValue                         JsonValue                                                  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
//		struct FBlueprintJsonObject                        ReturnValue                                                (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
struct FBlueprintJsonObject UBlueprintJsonLibrary::STATIC_Conv_JsonValueToObject(const struct FBlueprintJsonValue& JsonValue)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BlueprintJson.BlueprintJsonLibrary.Conv_JsonValueToObject");

	UBlueprintJsonLibrary_Conv_JsonValueToObject_Params params {};
	params.JsonValue = JsonValue;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x006070B0
//		Name   -> Function BlueprintJson.BlueprintJsonLibrary.Conv_JsonValueToInteger
//		Flags  -> (Final, Native, Static, Public, HasOutParms, BlueprintCallable, BlueprintPure)
// Parameters:
//		struct FBlueprintJsonValue                         JsonValue                                                  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
//		int                                                ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
int UBlueprintJsonLibrary::STATIC_Conv_JsonValueToInteger(const struct FBlueprintJsonValue& JsonValue)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BlueprintJson.BlueprintJsonLibrary.Conv_JsonValueToInteger");

	UBlueprintJsonLibrary_Conv_JsonValueToInteger_Params params {};
	params.JsonValue = JsonValue;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00606FF0
//		Name   -> Function BlueprintJson.BlueprintJsonLibrary.Conv_JsonValueToFloat
//		Flags  -> (Final, Native, Static, Public, HasOutParms, BlueprintCallable, BlueprintPure)
// Parameters:
//		struct FBlueprintJsonValue                         JsonValue                                                  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
//		float                                              ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
float UBlueprintJsonLibrary::STATIC_Conv_JsonValueToFloat(const struct FBlueprintJsonValue& JsonValue)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BlueprintJson.BlueprintJsonLibrary.Conv_JsonValueToFloat");

	UBlueprintJsonLibrary_Conv_JsonValueToFloat_Params params {};
	params.JsonValue = JsonValue;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00606F30
//		Name   -> Function BlueprintJson.BlueprintJsonLibrary.Conv_JsonValueToBool
//		Flags  -> (Final, Native, Static, Public, HasOutParms, BlueprintCallable, BlueprintPure)
// Parameters:
//		struct FBlueprintJsonValue                         JsonValue                                                  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
//		bool                                               ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UBlueprintJsonLibrary::STATIC_Conv_JsonValueToBool(const struct FBlueprintJsonValue& JsonValue)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BlueprintJson.BlueprintJsonLibrary.Conv_JsonValueToBool");

	UBlueprintJsonLibrary_Conv_JsonValueToBool_Params params {};
	params.JsonValue = JsonValue;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00606D80
//		Name   -> Function BlueprintJson.BlueprintJsonLibrary.Conv_JsonValueToArray
//		Flags  -> (Final, Native, Static, Public, HasOutParms, BlueprintCallable, BlueprintPure)
// Parameters:
//		struct FBlueprintJsonValue                         JsonValue                                                  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
//		TArray<struct FBlueprintJsonValue>                 ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, NativeAccessSpecifierPublic)
TArray<struct FBlueprintJsonValue> UBlueprintJsonLibrary::STATIC_Conv_JsonValueToArray(const struct FBlueprintJsonValue& JsonValue)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BlueprintJson.BlueprintJsonLibrary.Conv_JsonValueToArray");

	UBlueprintJsonLibrary_Conv_JsonValueToArray_Params params {};
	params.JsonValue = JsonValue;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00606C80
//		Name   -> Function BlueprintJson.BlueprintJsonLibrary.Conv_JsonObjectToString
//		Flags  -> (Final, Native, Static, Public, HasOutParms, BlueprintCallable, BlueprintPure)
// Parameters:
//		struct FBlueprintJsonObject                        JsonObject                                                 (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
//		struct FString                                     ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
struct FString UBlueprintJsonLibrary::STATIC_Conv_JsonObjectToString(const struct FBlueprintJsonObject& JsonObject)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BlueprintJson.BlueprintJsonLibrary.Conv_JsonObjectToString");

	UBlueprintJsonLibrary_Conv_JsonObjectToString_Params params {};
	params.JsonObject = JsonObject;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00606B80
//		Name   -> Function BlueprintJson.BlueprintJsonLibrary.Conv_JsonObjectToPrettyString
//		Flags  -> (Final, Native, Static, Public, HasOutParms, BlueprintCallable, BlueprintPure)
// Parameters:
//		struct FBlueprintJsonObject                        JsonObject                                                 (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
//		struct FString                                     ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
struct FString UBlueprintJsonLibrary::STATIC_Conv_JsonObjectToPrettyString(const struct FBlueprintJsonObject& JsonObject)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BlueprintJson.BlueprintJsonLibrary.Conv_JsonObjectToPrettyString");

	UBlueprintJsonLibrary_Conv_JsonObjectToPrettyString_Params params {};
	params.JsonObject = JsonObject;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00606A20
//		Name   -> Function BlueprintJson.BlueprintJsonLibrary.Conv_JsonObjectToJsonValue
//		Flags  -> (Final, Native, Static, Public, HasOutParms, BlueprintCallable, BlueprintPure)
// Parameters:
//		struct FBlueprintJsonObject                        JsonObject                                                 (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
//		struct FString                                     FieldName                                                  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		struct FBlueprintJsonValue                         ReturnValue                                                (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
struct FBlueprintJsonValue UBlueprintJsonLibrary::STATIC_Conv_JsonObjectToJsonValue(const struct FBlueprintJsonObject& JsonObject, const struct FString& FieldName)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BlueprintJson.BlueprintJsonLibrary.Conv_JsonObjectToJsonValue");

	UBlueprintJsonLibrary_Conv_JsonObjectToJsonValue_Params params {};
	params.JsonObject = JsonObject;
	params.FieldName = FieldName;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
