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

// Class BlueprintJson.BlueprintJsonLibrary
// 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
class UBlueprintJsonLibrary : public UBlueprintFunctionLibrary
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class BlueprintJson.BlueprintJsonLibrary");
		return ptr;
	}



	bool STATIC_NotEqual_JsonValue(const struct FBlueprintJsonValue& A, const struct FBlueprintJsonValue& B);
	BlueprintJson_EJsonType STATIC_JsonType(const struct FBlueprintJsonValue& JsonValue);
	struct FBlueprintJsonObject STATIC_JsonSetField(const struct FBlueprintJsonObject& JsonObject, const struct FString& FieldName, const struct FBlueprintJsonValue& JsonValue);
	struct FBlueprintJsonObject STATIC_JsonRemoveField(const struct FBlueprintJsonObject& JsonObject, const struct FString& FieldName);
	struct FBlueprintJsonValue STATIC_JsonMakeString(const struct FString& Value);
	struct FBlueprintJsonValue STATIC_JsonMakeObject(const struct FBlueprintJsonObject& Value);
	struct FBlueprintJsonValue STATIC_JsonMakeNull();
	struct FBlueprintJsonValue STATIC_JsonMakeInt(int Value);
	struct FBlueprintJsonValue STATIC_JsonMakeFloat(float Value);
	struct FBlueprintJsonObject STATIC_JsonMakeField(const struct FBlueprintJsonObject& JsonObject, const struct FString& FieldName, const struct FBlueprintJsonValue& Value);
	struct FBlueprintJsonValue STATIC_JsonMakeBool(bool Value);
	struct FBlueprintJsonValue STATIC_JsonMakeArray(TArray<struct FBlueprintJsonValue> Value);
	struct FBlueprintJsonObject STATIC_JsonMake();
	bool STATIC_JsonIsNull(const struct FBlueprintJsonValue& JsonValue);
	bool STATIC_JsonHasTypedField(const struct FBlueprintJsonObject& JsonObject, const struct FString& FieldName, BlueprintJson_EJsonType Type);
	bool STATIC_JsonHasField(const struct FBlueprintJsonObject& JsonObject, const struct FString& FieldName);
	bool STATIC_EquaEqual_JsonValue(const struct FBlueprintJsonValue& A, const struct FBlueprintJsonValue& B);
	struct FBlueprintJsonObject STATIC_Conv_StringToJsonObject(const struct FString& JsonString);
	struct FString STATIC_Conv_JsonValueToString(const struct FBlueprintJsonValue& JsonValue);
	struct FBlueprintJsonObject STATIC_Conv_JsonValueToObject(const struct FBlueprintJsonValue& JsonValue);
	int STATIC_Conv_JsonValueToInteger(const struct FBlueprintJsonValue& JsonValue);
	float STATIC_Conv_JsonValueToFloat(const struct FBlueprintJsonValue& JsonValue);
	bool STATIC_Conv_JsonValueToBool(const struct FBlueprintJsonValue& JsonValue);
	TArray<struct FBlueprintJsonValue> STATIC_Conv_JsonValueToArray(const struct FBlueprintJsonValue& JsonValue);
	struct FString STATIC_Conv_JsonObjectToString(const struct FBlueprintJsonObject& JsonObject);
	struct FString STATIC_Conv_JsonObjectToPrettyString(const struct FBlueprintJsonObject& JsonObject);
	struct FBlueprintJsonValue STATIC_Conv_JsonObjectToJsonValue(const struct FBlueprintJsonObject& JsonObject, const struct FString& FieldName);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
