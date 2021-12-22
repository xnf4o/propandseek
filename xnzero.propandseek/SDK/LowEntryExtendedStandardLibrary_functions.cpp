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
//		Offset -> 0x00462380
//		Name   -> Function LowEntryExtendedStandardLibrary.LowEntryBitDataReader.SetPosition
//		Flags  -> (Final, Native, Public, BlueprintCallable)
// Parameters:
//		int                                                Position_                                                  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void ULowEntryBitDataReader::SetPosition(int Position_)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function LowEntryExtendedStandardLibrary.LowEntryBitDataReader.SetPosition");

	ULowEntryBitDataReader_SetPosition_Params params {};
	params.Position_ = Position_;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00462340
//		Name   -> Function LowEntryExtendedStandardLibrary.LowEntryBitDataReader.Reset
//		Flags  -> (Final, Native, Public, BlueprintCallable)
void ULowEntryBitDataReader::Reset()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function LowEntryExtendedStandardLibrary.LowEntryBitDataReader.Reset");

	ULowEntryBitDataReader_Reset_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x004622E0
//		Name   -> Function LowEntryExtendedStandardLibrary.LowEntryBitDataReader.Remaining
//		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure)
// Parameters:
//		int                                                ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
int ULowEntryBitDataReader::Remaining()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function LowEntryExtendedStandardLibrary.LowEntryBitDataReader.Remaining");

	ULowEntryBitDataReader_Remaining_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x004621E0
//		Name   -> Function LowEntryExtendedStandardLibrary.LowEntryBitDataReader.GetStringUtf8Array
//		Flags  -> (Final, Native, Public, BlueprintCallable)
// Parameters:
//		TArray<struct FString>                             ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, NativeAccessSpecifierPublic)
TArray<struct FString> ULowEntryBitDataReader::GetStringUtf8Array()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function LowEntryExtendedStandardLibrary.LowEntryBitDataReader.GetStringUtf8Array");

	ULowEntryBitDataReader_GetStringUtf8Array_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x004620E0
//		Name   -> Function LowEntryExtendedStandardLibrary.LowEntryBitDataReader.GetStringUtf8
//		Flags  -> (Final, Native, Public, BlueprintCallable)
// Parameters:
//		struct FString                                     ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
struct FString ULowEntryBitDataReader::GetStringUtf8()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function LowEntryExtendedStandardLibrary.LowEntryBitDataReader.GetStringUtf8");

	ULowEntryBitDataReader_GetStringUtf8_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00461FE0
//		Name   -> Function LowEntryExtendedStandardLibrary.LowEntryBitDataReader.GetPositiveInteger3Array
//		Flags  -> (Final, Native, Public, BlueprintCallable)
// Parameters:
//		TArray<int>                                        ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, NativeAccessSpecifierPublic)
TArray<int> ULowEntryBitDataReader::GetPositiveInteger3Array()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function LowEntryExtendedStandardLibrary.LowEntryBitDataReader.GetPositiveInteger3Array");

	ULowEntryBitDataReader_GetPositiveInteger3Array_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00461F80
//		Name   -> Function LowEntryExtendedStandardLibrary.LowEntryBitDataReader.GetPositiveInteger3
//		Flags  -> (Final, Native, Public, BlueprintCallable)
// Parameters:
//		int                                                ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
int ULowEntryBitDataReader::GetPositiveInteger3()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function LowEntryExtendedStandardLibrary.LowEntryBitDataReader.GetPositiveInteger3");

	ULowEntryBitDataReader_GetPositiveInteger3_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00461E80
//		Name   -> Function LowEntryExtendedStandardLibrary.LowEntryBitDataReader.GetPositiveInteger2Array
//		Flags  -> (Final, Native, Public, BlueprintCallable)
// Parameters:
//		TArray<int>                                        ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, NativeAccessSpecifierPublic)
TArray<int> ULowEntryBitDataReader::GetPositiveInteger2Array()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function LowEntryExtendedStandardLibrary.LowEntryBitDataReader.GetPositiveInteger2Array");

	ULowEntryBitDataReader_GetPositiveInteger2Array_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00461E20
//		Name   -> Function LowEntryExtendedStandardLibrary.LowEntryBitDataReader.GetPositiveInteger2
//		Flags  -> (Final, Native, Public, BlueprintCallable)
// Parameters:
//		int                                                ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
int ULowEntryBitDataReader::GetPositiveInteger2()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function LowEntryExtendedStandardLibrary.LowEntryBitDataReader.GetPositiveInteger2");

	ULowEntryBitDataReader_GetPositiveInteger2_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00461D20
//		Name   -> Function LowEntryExtendedStandardLibrary.LowEntryBitDataReader.GetPositiveInteger1Array
//		Flags  -> (Final, Native, Public, BlueprintCallable)
// Parameters:
//		TArray<int>                                        ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, NativeAccessSpecifierPublic)
TArray<int> ULowEntryBitDataReader::GetPositiveInteger1Array()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function LowEntryExtendedStandardLibrary.LowEntryBitDataReader.GetPositiveInteger1Array");

	ULowEntryBitDataReader_GetPositiveInteger1Array_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00461CC0
//		Name   -> Function LowEntryExtendedStandardLibrary.LowEntryBitDataReader.GetPositiveInteger1
//		Flags  -> (Final, Native, Public, BlueprintCallable)
// Parameters:
//		int                                                ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
int ULowEntryBitDataReader::GetPositiveInteger1()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function LowEntryExtendedStandardLibrary.LowEntryBitDataReader.GetPositiveInteger1");

	ULowEntryBitDataReader_GetPositiveInteger1_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00461C60
//		Name   -> Function LowEntryExtendedStandardLibrary.LowEntryBitDataReader.GetPosition
//		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure)
// Parameters:
//		int                                                ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
int ULowEntryBitDataReader::GetPosition()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function LowEntryExtendedStandardLibrary.LowEntryBitDataReader.GetPosition");

	ULowEntryBitDataReader_GetPosition_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00461B60
//		Name   -> Function LowEntryExtendedStandardLibrary.LowEntryBitDataReader.GetLongBytesArray
//		Flags  -> (Final, Native, Public, BlueprintCallable)
// Parameters:
//		TArray<class ULowEntryLong*>                       ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, NativeAccessSpecifierPublic)
TArray<class ULowEntryLong*> ULowEntryBitDataReader::GetLongBytesArray()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function LowEntryExtendedStandardLibrary.LowEntryBitDataReader.GetLongBytesArray");

	ULowEntryBitDataReader_GetLongBytesArray_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00461B00
//		Name   -> Function LowEntryExtendedStandardLibrary.LowEntryBitDataReader.GetLongBytes
//		Flags  -> (Final, Native, Public, BlueprintCallable)
// Parameters:
//		class ULowEntryLong*                               ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
class ULowEntryLong* ULowEntryBitDataReader::GetLongBytes()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function LowEntryExtendedStandardLibrary.LowEntryBitDataReader.GetLongBytes");

	ULowEntryBitDataReader_GetLongBytes_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00461A70
//		Name   -> Function LowEntryExtendedStandardLibrary.LowEntryBitDataReader.GetIntegerMostSignificantBits
//		Flags  -> (Final, Native, Public, BlueprintCallable)
// Parameters:
//		int                                                BitCount                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		int                                                ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
int ULowEntryBitDataReader::GetIntegerMostSignificantBits(int BitCount)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function LowEntryExtendedStandardLibrary.LowEntryBitDataReader.GetIntegerMostSignificantBits");

	ULowEntryBitDataReader_GetIntegerMostSignificantBits_Params params {};
	params.BitCount = BitCount;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x004619E0
//		Name   -> Function LowEntryExtendedStandardLibrary.LowEntryBitDataReader.GetIntegerLeastSignificantBits
//		Flags  -> (Final, Native, Public, BlueprintCallable)
// Parameters:
//		int                                                BitCount                                                   (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		int                                                ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
int ULowEntryBitDataReader::GetIntegerLeastSignificantBits(int BitCount)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function LowEntryExtendedStandardLibrary.LowEntryBitDataReader.GetIntegerLeastSignificantBits");

	ULowEntryBitDataReader_GetIntegerLeastSignificantBits_Params params {};
	params.BitCount = BitCount;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00461910
//		Name   -> Function LowEntryExtendedStandardLibrary.LowEntryBitDataReader.GetIntegerArrayMostSignificantBits
//		Flags  -> (Final, Native, Public, BlueprintCallable)
// Parameters:
//		int                                                BitCount                                                   (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		TArray<int>                                        ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, NativeAccessSpecifierPublic)
TArray<int> ULowEntryBitDataReader::GetIntegerArrayMostSignificantBits(int BitCount)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function LowEntryExtendedStandardLibrary.LowEntryBitDataReader.GetIntegerArrayMostSignificantBits");

	ULowEntryBitDataReader_GetIntegerArrayMostSignificantBits_Params params {};
	params.BitCount = BitCount;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00461840
//		Name   -> Function LowEntryExtendedStandardLibrary.LowEntryBitDataReader.GetIntegerArrayLeastSignificantBits
//		Flags  -> (Final, Native, Public, BlueprintCallable)
// Parameters:
//		int                                                BitCount                                                   (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		TArray<int>                                        ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, NativeAccessSpecifierPublic)
TArray<int> ULowEntryBitDataReader::GetIntegerArrayLeastSignificantBits(int BitCount)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function LowEntryExtendedStandardLibrary.LowEntryBitDataReader.GetIntegerArrayLeastSignificantBits");

	ULowEntryBitDataReader_GetIntegerArrayLeastSignificantBits_Params params {};
	params.BitCount = BitCount;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00461660
//		Name   -> Function LowEntryExtendedStandardLibrary.LowEntryBitDataReader.GetIntegerArray
//		Flags  -> (Final, Native, Public, BlueprintCallable)
// Parameters:
//		TArray<int>                                        ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, NativeAccessSpecifierPublic)
TArray<int> ULowEntryBitDataReader::GetIntegerArray()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function LowEntryExtendedStandardLibrary.LowEntryBitDataReader.GetIntegerArray");

	ULowEntryBitDataReader_GetIntegerArray_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00461760
//		Name   -> Function LowEntryExtendedStandardLibrary.LowEntryBitDataReader.GetInteger
//		Flags  -> (Final, Native, Public, BlueprintCallable)
// Parameters:
//		int                                                ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
int ULowEntryBitDataReader::GetInteger()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function LowEntryExtendedStandardLibrary.LowEntryBitDataReader.GetInteger");

	ULowEntryBitDataReader_GetInteger_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00461660
//		Name   -> Function LowEntryExtendedStandardLibrary.LowEntryBitDataReader.GetFloatArray
//		Flags  -> (Final, Native, Public, BlueprintCallable)
// Parameters:
//		TArray<float>                                      ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, NativeAccessSpecifierPublic)
TArray<float> ULowEntryBitDataReader::GetFloatArray()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function LowEntryExtendedStandardLibrary.LowEntryBitDataReader.GetFloatArray");

	ULowEntryBitDataReader_GetFloatArray_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00461600
//		Name   -> Function LowEntryExtendedStandardLibrary.LowEntryBitDataReader.GetFloat
//		Flags  -> (Final, Native, Public, BlueprintCallable)
// Parameters:
//		float                                              ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
float ULowEntryBitDataReader::GetFloat()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function LowEntryExtendedStandardLibrary.LowEntryBitDataReader.GetFloat");

	ULowEntryBitDataReader_GetFloat_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00461500
//		Name   -> Function LowEntryExtendedStandardLibrary.LowEntryBitDataReader.GetDoubleBytesArray
//		Flags  -> (Final, Native, Public, BlueprintCallable)
// Parameters:
//		TArray<class ULowEntryDouble*>                     ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, NativeAccessSpecifierPublic)
TArray<class ULowEntryDouble*> ULowEntryBitDataReader::GetDoubleBytesArray()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function LowEntryExtendedStandardLibrary.LowEntryBitDataReader.GetDoubleBytesArray");

	ULowEntryBitDataReader_GetDoubleBytesArray_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x004614A0
//		Name   -> Function LowEntryExtendedStandardLibrary.LowEntryBitDataReader.GetDoubleBytes
//		Flags  -> (Final, Native, Public, BlueprintCallable)
// Parameters:
//		class ULowEntryDouble*                             ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
class ULowEntryDouble* ULowEntryBitDataReader::GetDoubleBytes()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function LowEntryExtendedStandardLibrary.LowEntryBitDataReader.GetDoubleBytes");

	ULowEntryBitDataReader_GetDoubleBytes_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00461440
//		Name   -> Function LowEntryExtendedStandardLibrary.LowEntryBitDataReader.GetClone
//		Flags  -> (Final, Native, Public, BlueprintCallable)
// Parameters:
//		class ULowEntryBitDataReader*                      ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
class ULowEntryBitDataReader* ULowEntryBitDataReader::GetClone()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function LowEntryExtendedStandardLibrary.LowEntryBitDataReader.GetClone");

	ULowEntryBitDataReader_GetClone_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x004613B0
//		Name   -> Function LowEntryExtendedStandardLibrary.LowEntryBitDataReader.GetByteMostSignificantBits
//		Flags  -> (Final, Native, Public, BlueprintCallable)
// Parameters:
//		int                                                BitCount                                                   (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		unsigned char                                      ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
unsigned char ULowEntryBitDataReader::GetByteMostSignificantBits(int BitCount)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function LowEntryExtendedStandardLibrary.LowEntryBitDataReader.GetByteMostSignificantBits");

	ULowEntryBitDataReader_GetByteMostSignificantBits_Params params {};
	params.BitCount = BitCount;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00461320
//		Name   -> Function LowEntryExtendedStandardLibrary.LowEntryBitDataReader.GetByteLeastSignificantBits
//		Flags  -> (Final, Native, Public, BlueprintCallable)
// Parameters:
//		int                                                BitCount                                                   (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		unsigned char                                      ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
unsigned char ULowEntryBitDataReader::GetByteLeastSignificantBits(int BitCount)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function LowEntryExtendedStandardLibrary.LowEntryBitDataReader.GetByteLeastSignificantBits");

	ULowEntryBitDataReader_GetByteLeastSignificantBits_Params params {};
	params.BitCount = BitCount;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00461250
//		Name   -> Function LowEntryExtendedStandardLibrary.LowEntryBitDataReader.GetByteArrayMostSignificantBits
//		Flags  -> (Final, Native, Public, BlueprintCallable)
// Parameters:
//		int                                                BitCount                                                   (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		TArray<unsigned char>                              ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, NativeAccessSpecifierPublic)
TArray<unsigned char> ULowEntryBitDataReader::GetByteArrayMostSignificantBits(int BitCount)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function LowEntryExtendedStandardLibrary.LowEntryBitDataReader.GetByteArrayMostSignificantBits");

	ULowEntryBitDataReader_GetByteArrayMostSignificantBits_Params params {};
	params.BitCount = BitCount;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00461180
//		Name   -> Function LowEntryExtendedStandardLibrary.LowEntryBitDataReader.GetByteArrayLeastSignificantBits
//		Flags  -> (Final, Native, Public, BlueprintCallable)
// Parameters:
//		int                                                BitCount                                                   (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		TArray<unsigned char>                              ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, NativeAccessSpecifierPublic)
TArray<unsigned char> ULowEntryBitDataReader::GetByteArrayLeastSignificantBits(int BitCount)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function LowEntryExtendedStandardLibrary.LowEntryBitDataReader.GetByteArrayLeastSignificantBits");

	ULowEntryBitDataReader_GetByteArrayLeastSignificantBits_Params params {};
	params.BitCount = BitCount;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00461080
//		Name   -> Function LowEntryExtendedStandardLibrary.LowEntryBitDataReader.GetByteArray
//		Flags  -> (Final, Native, Public, BlueprintCallable)
// Parameters:
//		TArray<unsigned char>                              ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, NativeAccessSpecifierPublic)
TArray<unsigned char> ULowEntryBitDataReader::GetByteArray()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function LowEntryExtendedStandardLibrary.LowEntryBitDataReader.GetByteArray");

	ULowEntryBitDataReader_GetByteArray_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00461020
//		Name   -> Function LowEntryExtendedStandardLibrary.LowEntryBitDataReader.GetByte
//		Flags  -> (Final, Native, Public, BlueprintCallable)
// Parameters:
//		unsigned char                                      ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
unsigned char ULowEntryBitDataReader::GetByte()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function LowEntryExtendedStandardLibrary.LowEntryBitDataReader.GetByte");

	ULowEntryBitDataReader_GetByte_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00460EF0
//		Name   -> Function LowEntryExtendedStandardLibrary.LowEntryBitDataReader.GetBooleanArray
//		Flags  -> (Final, Native, Public, BlueprintCallable)
// Parameters:
//		TArray<bool>                                       ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, NativeAccessSpecifierPublic)
TArray<bool> ULowEntryBitDataReader::GetBooleanArray()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function LowEntryExtendedStandardLibrary.LowEntryBitDataReader.GetBooleanArray");

	ULowEntryBitDataReader_GetBooleanArray_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00460EC0
//		Name   -> Function LowEntryExtendedStandardLibrary.LowEntryBitDataReader.GetBoolean
//		Flags  -> (Final, Native, Public, BlueprintCallable)
// Parameters:
//		bool                                               ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool ULowEntryBitDataReader::GetBoolean()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function LowEntryExtendedStandardLibrary.LowEntryBitDataReader.GetBoolean");

	ULowEntryBitDataReader_GetBoolean_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00460EF0
//		Name   -> Function LowEntryExtendedStandardLibrary.LowEntryBitDataReader.GetBitArray
//		Flags  -> (Final, Native, Public, BlueprintCallable)
// Parameters:
//		TArray<bool>                                       ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, NativeAccessSpecifierPublic)
TArray<bool> ULowEntryBitDataReader::GetBitArray()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function LowEntryExtendedStandardLibrary.LowEntryBitDataReader.GetBitArray");

	ULowEntryBitDataReader_GetBitArray_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00460EC0
//		Name   -> Function LowEntryExtendedStandardLibrary.LowEntryBitDataReader.GetBit
//		Flags  -> (Final, Native, Public, BlueprintCallable)
// Parameters:
//		bool                                               ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool ULowEntryBitDataReader::GetBit()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function LowEntryExtendedStandardLibrary.LowEntryBitDataReader.GetBit");

	ULowEntryBitDataReader_GetBit_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00460E80
//		Name   -> Function LowEntryExtendedStandardLibrary.LowEntryBitDataReader.Empty
//		Flags  -> (Final, Native, Public, BlueprintCallable)
void ULowEntryBitDataReader::Empty()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function LowEntryExtendedStandardLibrary.LowEntryBitDataReader.Empty");

	ULowEntryBitDataReader_Empty_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00460DB0
//		Name   -> Function LowEntryExtendedStandardLibrary.LowEntryBitDataWriter.AddStringUtf8Array
//		Flags  -> (Final, Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
//		TArray<struct FString>                             Value                                                      (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
void ULowEntryBitDataWriter::AddStringUtf8Array(TArray<struct FString> Value)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function LowEntryExtendedStandardLibrary.LowEntryBitDataWriter.AddStringUtf8Array");

	ULowEntryBitDataWriter_AddStringUtf8Array_Params params {};
	params.Value = Value;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00460D10
//		Name   -> Function LowEntryExtendedStandardLibrary.LowEntryBitDataWriter.AddStringUtf8
//		Flags  -> (Final, Native, Public, BlueprintCallable)
// Parameters:
//		struct FString                                     Value                                                      (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void ULowEntryBitDataWriter::AddStringUtf8(const struct FString& Value)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function LowEntryExtendedStandardLibrary.LowEntryBitDataWriter.AddStringUtf8");

	ULowEntryBitDataWriter_AddStringUtf8_Params params {};
	params.Value = Value;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00460C60
//		Name   -> Function LowEntryExtendedStandardLibrary.LowEntryBitDataWriter.AddPositiveInteger3Array
//		Flags  -> (Final, Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
//		TArray<int>                                        Value                                                      (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
void ULowEntryBitDataWriter::AddPositiveInteger3Array(TArray<int> Value)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function LowEntryExtendedStandardLibrary.LowEntryBitDataWriter.AddPositiveInteger3Array");

	ULowEntryBitDataWriter_AddPositiveInteger3Array_Params params {};
	params.Value = Value;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00460BE0
//		Name   -> Function LowEntryExtendedStandardLibrary.LowEntryBitDataWriter.AddPositiveInteger3
//		Flags  -> (Final, Native, Public, BlueprintCallable)
// Parameters:
//		int                                                Value                                                      (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void ULowEntryBitDataWriter::AddPositiveInteger3(int Value)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function LowEntryExtendedStandardLibrary.LowEntryBitDataWriter.AddPositiveInteger3");

	ULowEntryBitDataWriter_AddPositiveInteger3_Params params {};
	params.Value = Value;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00460B30
//		Name   -> Function LowEntryExtendedStandardLibrary.LowEntryBitDataWriter.AddPositiveInteger2Array
//		Flags  -> (Final, Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
//		TArray<int>                                        Value                                                      (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
void ULowEntryBitDataWriter::AddPositiveInteger2Array(TArray<int> Value)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function LowEntryExtendedStandardLibrary.LowEntryBitDataWriter.AddPositiveInteger2Array");

	ULowEntryBitDataWriter_AddPositiveInteger2Array_Params params {};
	params.Value = Value;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00460AB0
//		Name   -> Function LowEntryExtendedStandardLibrary.LowEntryBitDataWriter.AddPositiveInteger2
//		Flags  -> (Final, Native, Public, BlueprintCallable)
// Parameters:
//		int                                                Value                                                      (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void ULowEntryBitDataWriter::AddPositiveInteger2(int Value)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function LowEntryExtendedStandardLibrary.LowEntryBitDataWriter.AddPositiveInteger2");

	ULowEntryBitDataWriter_AddPositiveInteger2_Params params {};
	params.Value = Value;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00460A00
//		Name   -> Function LowEntryExtendedStandardLibrary.LowEntryBitDataWriter.AddPositiveInteger1Array
//		Flags  -> (Final, Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
//		TArray<int>                                        Value                                                      (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
void ULowEntryBitDataWriter::AddPositiveInteger1Array(TArray<int> Value)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function LowEntryExtendedStandardLibrary.LowEntryBitDataWriter.AddPositiveInteger1Array");

	ULowEntryBitDataWriter_AddPositiveInteger1Array_Params params {};
	params.Value = Value;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00460980
//		Name   -> Function LowEntryExtendedStandardLibrary.LowEntryBitDataWriter.AddPositiveInteger1
//		Flags  -> (Final, Native, Public, BlueprintCallable)
// Parameters:
//		int                                                Value                                                      (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void ULowEntryBitDataWriter::AddPositiveInteger1(int Value)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function LowEntryExtendedStandardLibrary.LowEntryBitDataWriter.AddPositiveInteger1");

	ULowEntryBitDataWriter_AddPositiveInteger1_Params params {};
	params.Value = Value;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00460310
//		Name   -> Function LowEntryExtendedStandardLibrary.LowEntryBitDataWriter.AddLongBytesArray
//		Flags  -> (Final, Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
//		TArray<class ULowEntryLong*>                       Value                                                      (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
void ULowEntryBitDataWriter::AddLongBytesArray(TArray<class ULowEntryLong*> Value)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function LowEntryExtendedStandardLibrary.LowEntryBitDataWriter.AddLongBytesArray");

	ULowEntryBitDataWriter_AddLongBytesArray_Params params {};
	params.Value = Value;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00460290
//		Name   -> Function LowEntryExtendedStandardLibrary.LowEntryBitDataWriter.AddLongBytes
//		Flags  -> (Final, Native, Public, BlueprintCallable)
// Parameters:
//		class ULowEntryLong*                               Value                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void ULowEntryBitDataWriter::AddLongBytes(class ULowEntryLong* Value)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function LowEntryExtendedStandardLibrary.LowEntryBitDataWriter.AddLongBytes");

	ULowEntryBitDataWriter_AddLongBytes_Params params {};
	params.Value = Value;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x004608C0
//		Name   -> Function LowEntryExtendedStandardLibrary.LowEntryBitDataWriter.AddIntegerMostSignificantBits
//		Flags  -> (Final, Native, Public, BlueprintCallable)
// Parameters:
//		int                                                Value                                                      (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		int                                                BitCount                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void ULowEntryBitDataWriter::AddIntegerMostSignificantBits(int Value, int BitCount)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function LowEntryExtendedStandardLibrary.LowEntryBitDataWriter.AddIntegerMostSignificantBits");

	ULowEntryBitDataWriter_AddIntegerMostSignificantBits_Params params {};
	params.Value = Value;
	params.BitCount = BitCount;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00460800
//		Name   -> Function LowEntryExtendedStandardLibrary.LowEntryBitDataWriter.AddIntegerLeastSignificantBits
//		Flags  -> (Final, Native, Public, BlueprintCallable)
// Parameters:
//		int                                                Value                                                      (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		int                                                BitCount                                                   (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void ULowEntryBitDataWriter::AddIntegerLeastSignificantBits(int Value, int BitCount)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function LowEntryExtendedStandardLibrary.LowEntryBitDataWriter.AddIntegerLeastSignificantBits");

	ULowEntryBitDataWriter_AddIntegerLeastSignificantBits_Params params {};
	params.Value = Value;
	params.BitCount = BitCount;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00460710
//		Name   -> Function LowEntryExtendedStandardLibrary.LowEntryBitDataWriter.AddIntegerArrayMostSignificantBits
//		Flags  -> (Final, Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
//		TArray<int>                                        Value                                                      (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
//		int                                                BitCount                                                   (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void ULowEntryBitDataWriter::AddIntegerArrayMostSignificantBits(TArray<int> Value, int BitCount)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function LowEntryExtendedStandardLibrary.LowEntryBitDataWriter.AddIntegerArrayMostSignificantBits");

	ULowEntryBitDataWriter_AddIntegerArrayMostSignificantBits_Params params {};
	params.Value = Value;
	params.BitCount = BitCount;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00460620
//		Name   -> Function LowEntryExtendedStandardLibrary.LowEntryBitDataWriter.AddIntegerArrayLeastSignificantBits
//		Flags  -> (Final, Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
//		TArray<int>                                        Value                                                      (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
//		int                                                BitCount                                                   (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void ULowEntryBitDataWriter::AddIntegerArrayLeastSignificantBits(TArray<int> Value, int BitCount)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function LowEntryExtendedStandardLibrary.LowEntryBitDataWriter.AddIntegerArrayLeastSignificantBits");

	ULowEntryBitDataWriter_AddIntegerArrayLeastSignificantBits_Params params {};
	params.Value = Value;
	params.BitCount = BitCount;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00460570
//		Name   -> Function LowEntryExtendedStandardLibrary.LowEntryBitDataWriter.AddIntegerArray
//		Flags  -> (Final, Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
//		TArray<int>                                        Value                                                      (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
void ULowEntryBitDataWriter::AddIntegerArray(TArray<int> Value)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function LowEntryExtendedStandardLibrary.LowEntryBitDataWriter.AddIntegerArray");

	ULowEntryBitDataWriter_AddIntegerArray_Params params {};
	params.Value = Value;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x004604F0
//		Name   -> Function LowEntryExtendedStandardLibrary.LowEntryBitDataWriter.AddInteger
//		Flags  -> (Final, Native, Public, BlueprintCallable)
// Parameters:
//		int                                                Value                                                      (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void ULowEntryBitDataWriter::AddInteger(int Value)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function LowEntryExtendedStandardLibrary.LowEntryBitDataWriter.AddInteger");

	ULowEntryBitDataWriter_AddInteger_Params params {};
	params.Value = Value;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00460440
//		Name   -> Function LowEntryExtendedStandardLibrary.LowEntryBitDataWriter.AddFloatArray
//		Flags  -> (Final, Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
//		TArray<float>                                      Value                                                      (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
void ULowEntryBitDataWriter::AddFloatArray(TArray<float> Value)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function LowEntryExtendedStandardLibrary.LowEntryBitDataWriter.AddFloatArray");

	ULowEntryBitDataWriter_AddFloatArray_Params params {};
	params.Value = Value;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x004603C0
//		Name   -> Function LowEntryExtendedStandardLibrary.LowEntryBitDataWriter.AddFloat
//		Flags  -> (Final, Native, Public, BlueprintCallable)
// Parameters:
//		float                                              Value                                                      (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void ULowEntryBitDataWriter::AddFloat(float Value)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function LowEntryExtendedStandardLibrary.LowEntryBitDataWriter.AddFloat");

	ULowEntryBitDataWriter_AddFloat_Params params {};
	params.Value = Value;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00460310
//		Name   -> Function LowEntryExtendedStandardLibrary.LowEntryBitDataWriter.AddDoubleBytesArray
//		Flags  -> (Final, Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
//		TArray<class ULowEntryDouble*>                     Value                                                      (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
void ULowEntryBitDataWriter::AddDoubleBytesArray(TArray<class ULowEntryDouble*> Value)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function LowEntryExtendedStandardLibrary.LowEntryBitDataWriter.AddDoubleBytesArray");

	ULowEntryBitDataWriter_AddDoubleBytesArray_Params params {};
	params.Value = Value;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00460290
//		Name   -> Function LowEntryExtendedStandardLibrary.LowEntryBitDataWriter.AddDoubleBytes
//		Flags  -> (Final, Native, Public, BlueprintCallable)
// Parameters:
//		class ULowEntryDouble*                             Value                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void ULowEntryBitDataWriter::AddDoubleBytes(class ULowEntryDouble* Value)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function LowEntryExtendedStandardLibrary.LowEntryBitDataWriter.AddDoubleBytes");

	ULowEntryBitDataWriter_AddDoubleBytes_Params params {};
	params.Value = Value;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x004601D0
//		Name   -> Function LowEntryExtendedStandardLibrary.LowEntryBitDataWriter.AddByteMostSignificantBits
//		Flags  -> (Final, Native, Public, BlueprintCallable)
// Parameters:
//		unsigned char                                      Value                                                      (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		int                                                BitCount                                                   (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void ULowEntryBitDataWriter::AddByteMostSignificantBits(unsigned char Value, int BitCount)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function LowEntryExtendedStandardLibrary.LowEntryBitDataWriter.AddByteMostSignificantBits");

	ULowEntryBitDataWriter_AddByteMostSignificantBits_Params params {};
	params.Value = Value;
	params.BitCount = BitCount;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00460110
//		Name   -> Function LowEntryExtendedStandardLibrary.LowEntryBitDataWriter.AddByteLeastSignificantBits
//		Flags  -> (Final, Native, Public, BlueprintCallable)
// Parameters:
//		unsigned char                                      Value                                                      (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		int                                                BitCount                                                   (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void ULowEntryBitDataWriter::AddByteLeastSignificantBits(unsigned char Value, int BitCount)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function LowEntryExtendedStandardLibrary.LowEntryBitDataWriter.AddByteLeastSignificantBits");

	ULowEntryBitDataWriter_AddByteLeastSignificantBits_Params params {};
	params.Value = Value;
	params.BitCount = BitCount;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00460020
//		Name   -> Function LowEntryExtendedStandardLibrary.LowEntryBitDataWriter.AddByteArrayMostSignificantBits
//		Flags  -> (Final, Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
//		TArray<unsigned char>                              Value                                                      (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
//		int                                                BitCount                                                   (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void ULowEntryBitDataWriter::AddByteArrayMostSignificantBits(TArray<unsigned char> Value, int BitCount)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function LowEntryExtendedStandardLibrary.LowEntryBitDataWriter.AddByteArrayMostSignificantBits");

	ULowEntryBitDataWriter_AddByteArrayMostSignificantBits_Params params {};
	params.Value = Value;
	params.BitCount = BitCount;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x0045FF30
//		Name   -> Function LowEntryExtendedStandardLibrary.LowEntryBitDataWriter.AddByteArrayLeastSignificantBits
//		Flags  -> (Final, Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
//		TArray<unsigned char>                              Value                                                      (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
//		int                                                BitCount                                                   (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void ULowEntryBitDataWriter::AddByteArrayLeastSignificantBits(TArray<unsigned char> Value, int BitCount)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function LowEntryExtendedStandardLibrary.LowEntryBitDataWriter.AddByteArrayLeastSignificantBits");

	ULowEntryBitDataWriter_AddByteArrayLeastSignificantBits_Params params {};
	params.Value = Value;
	params.BitCount = BitCount;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x0045FE80
//		Name   -> Function LowEntryExtendedStandardLibrary.LowEntryBitDataWriter.AddByteArray
//		Flags  -> (Final, Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
//		TArray<unsigned char>                              Value                                                      (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
void ULowEntryBitDataWriter::AddByteArray(TArray<unsigned char> Value)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function LowEntryExtendedStandardLibrary.LowEntryBitDataWriter.AddByteArray");

	ULowEntryBitDataWriter_AddByteArray_Params params {};
	params.Value = Value;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x0045FE00
//		Name   -> Function LowEntryExtendedStandardLibrary.LowEntryBitDataWriter.AddByte
//		Flags  -> (Final, Native, Public, BlueprintCallable)
// Parameters:
//		unsigned char                                      Value                                                      (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void ULowEntryBitDataWriter::AddByte(unsigned char Value)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function LowEntryExtendedStandardLibrary.LowEntryBitDataWriter.AddByte");

	ULowEntryBitDataWriter_AddByte_Params params {};
	params.Value = Value;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x0045FD50
//		Name   -> Function LowEntryExtendedStandardLibrary.LowEntryBitDataWriter.AddBooleanArray
//		Flags  -> (Final, Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
//		TArray<bool>                                       Value                                                      (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
void ULowEntryBitDataWriter::AddBooleanArray(TArray<bool> Value)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function LowEntryExtendedStandardLibrary.LowEntryBitDataWriter.AddBooleanArray");

	ULowEntryBitDataWriter_AddBooleanArray_Params params {};
	params.Value = Value;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x0045FCC0
//		Name   -> Function LowEntryExtendedStandardLibrary.LowEntryBitDataWriter.AddBoolean
//		Flags  -> (Final, Native, Public, BlueprintCallable)
// Parameters:
//		bool                                               Value                                                      (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void ULowEntryBitDataWriter::AddBoolean(bool Value)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function LowEntryExtendedStandardLibrary.LowEntryBitDataWriter.AddBoolean");

	ULowEntryBitDataWriter_AddBoolean_Params params {};
	params.Value = Value;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x0045FD50
//		Name   -> Function LowEntryExtendedStandardLibrary.LowEntryBitDataWriter.AddBitArray
//		Flags  -> (Final, Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
//		TArray<bool>                                       Value                                                      (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
void ULowEntryBitDataWriter::AddBitArray(TArray<bool> Value)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function LowEntryExtendedStandardLibrary.LowEntryBitDataWriter.AddBitArray");

	ULowEntryBitDataWriter_AddBitArray_Params params {};
	params.Value = Value;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x0045FCC0
//		Name   -> Function LowEntryExtendedStandardLibrary.LowEntryBitDataWriter.AddBit
//		Flags  -> (Final, Native, Public, BlueprintCallable)
// Parameters:
//		bool                                               Value                                                      (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void ULowEntryBitDataWriter::AddBit(bool Value)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function LowEntryExtendedStandardLibrary.LowEntryBitDataWriter.AddBit");

	ULowEntryBitDataWriter_AddBit_Params params {};
	params.Value = Value;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x002C5E40
//		Name   -> Function LowEntryExtendedStandardLibrary.LowEntryByteDataReader.SetPosition
//		Flags  -> (Final, Native, Public, BlueprintCallable)
// Parameters:
//		int                                                Position_                                                  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void ULowEntryByteDataReader::SetPosition(int Position_)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function LowEntryExtendedStandardLibrary.LowEntryByteDataReader.SetPosition");

	ULowEntryByteDataReader_SetPosition_Params params {};
	params.Position_ = Position_;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00462360
//		Name   -> Function LowEntryExtendedStandardLibrary.LowEntryByteDataReader.Reset
//		Flags  -> (Final, Native, Public, BlueprintCallable)
void ULowEntryByteDataReader::Reset()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function LowEntryExtendedStandardLibrary.LowEntryByteDataReader.Reset");

	ULowEntryByteDataReader_Reset_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00462310
//		Name   -> Function LowEntryExtendedStandardLibrary.LowEntryByteDataReader.Remaining
//		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure)
// Parameters:
//		int                                                ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
int ULowEntryByteDataReader::Remaining()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function LowEntryExtendedStandardLibrary.LowEntryByteDataReader.Remaining");

	ULowEntryByteDataReader_Remaining_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00462260
//		Name   -> Function LowEntryExtendedStandardLibrary.LowEntryByteDataReader.GetStringUtf8Array
//		Flags  -> (Final, Native, Public, BlueprintCallable)
// Parameters:
//		TArray<struct FString>                             ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, NativeAccessSpecifierPublic)
TArray<struct FString> ULowEntryByteDataReader::GetStringUtf8Array()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function LowEntryExtendedStandardLibrary.LowEntryByteDataReader.GetStringUtf8Array");

	ULowEntryByteDataReader_GetStringUtf8Array_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00462160
//		Name   -> Function LowEntryExtendedStandardLibrary.LowEntryByteDataReader.GetStringUtf8
//		Flags  -> (Final, Native, Public, BlueprintCallable)
// Parameters:
//		struct FString                                     ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
struct FString ULowEntryByteDataReader::GetStringUtf8()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function LowEntryExtendedStandardLibrary.LowEntryByteDataReader.GetStringUtf8");

	ULowEntryByteDataReader_GetStringUtf8_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00462060
//		Name   -> Function LowEntryExtendedStandardLibrary.LowEntryByteDataReader.GetPositiveInteger3Array
//		Flags  -> (Final, Native, Public, BlueprintCallable)
// Parameters:
//		TArray<int>                                        ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, NativeAccessSpecifierPublic)
TArray<int> ULowEntryByteDataReader::GetPositiveInteger3Array()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function LowEntryExtendedStandardLibrary.LowEntryByteDataReader.GetPositiveInteger3Array");

	ULowEntryByteDataReader_GetPositiveInteger3Array_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00461FB0
//		Name   -> Function LowEntryExtendedStandardLibrary.LowEntryByteDataReader.GetPositiveInteger3
//		Flags  -> (Final, Native, Public, BlueprintCallable)
// Parameters:
//		int                                                ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
int ULowEntryByteDataReader::GetPositiveInteger3()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function LowEntryExtendedStandardLibrary.LowEntryByteDataReader.GetPositiveInteger3");

	ULowEntryByteDataReader_GetPositiveInteger3_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00461F00
//		Name   -> Function LowEntryExtendedStandardLibrary.LowEntryByteDataReader.GetPositiveInteger2Array
//		Flags  -> (Final, Native, Public, BlueprintCallable)
// Parameters:
//		TArray<int>                                        ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, NativeAccessSpecifierPublic)
TArray<int> ULowEntryByteDataReader::GetPositiveInteger2Array()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function LowEntryExtendedStandardLibrary.LowEntryByteDataReader.GetPositiveInteger2Array");

	ULowEntryByteDataReader_GetPositiveInteger2Array_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00461E50
//		Name   -> Function LowEntryExtendedStandardLibrary.LowEntryByteDataReader.GetPositiveInteger2
//		Flags  -> (Final, Native, Public, BlueprintCallable)
// Parameters:
//		int                                                ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
int ULowEntryByteDataReader::GetPositiveInteger2()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function LowEntryExtendedStandardLibrary.LowEntryByteDataReader.GetPositiveInteger2");

	ULowEntryByteDataReader_GetPositiveInteger2_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00461DA0
//		Name   -> Function LowEntryExtendedStandardLibrary.LowEntryByteDataReader.GetPositiveInteger1Array
//		Flags  -> (Final, Native, Public, BlueprintCallable)
// Parameters:
//		TArray<int>                                        ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, NativeAccessSpecifierPublic)
TArray<int> ULowEntryByteDataReader::GetPositiveInteger1Array()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function LowEntryExtendedStandardLibrary.LowEntryByteDataReader.GetPositiveInteger1Array");

	ULowEntryByteDataReader_GetPositiveInteger1Array_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00461CF0
//		Name   -> Function LowEntryExtendedStandardLibrary.LowEntryByteDataReader.GetPositiveInteger1
//		Flags  -> (Final, Native, Public, BlueprintCallable)
// Parameters:
//		int                                                ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
int ULowEntryByteDataReader::GetPositiveInteger1()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function LowEntryExtendedStandardLibrary.LowEntryByteDataReader.GetPositiveInteger1");

	ULowEntryByteDataReader_GetPositiveInteger1_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00461C90
//		Name   -> Function LowEntryExtendedStandardLibrary.LowEntryByteDataReader.GetPosition
//		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure)
// Parameters:
//		int                                                ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
int ULowEntryByteDataReader::GetPosition()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function LowEntryExtendedStandardLibrary.LowEntryByteDataReader.GetPosition");

	ULowEntryByteDataReader_GetPosition_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00461BE0
//		Name   -> Function LowEntryExtendedStandardLibrary.LowEntryByteDataReader.GetLongBytesArray
//		Flags  -> (Final, Native, Public, BlueprintCallable)
// Parameters:
//		TArray<class ULowEntryLong*>                       ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, NativeAccessSpecifierPublic)
TArray<class ULowEntryLong*> ULowEntryByteDataReader::GetLongBytesArray()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function LowEntryExtendedStandardLibrary.LowEntryByteDataReader.GetLongBytesArray");

	ULowEntryByteDataReader_GetLongBytesArray_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00461B30
//		Name   -> Function LowEntryExtendedStandardLibrary.LowEntryByteDataReader.GetLongBytes
//		Flags  -> (Final, Native, Public, BlueprintCallable)
// Parameters:
//		class ULowEntryLong*                               ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
class ULowEntryLong* ULowEntryByteDataReader::GetLongBytes()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function LowEntryExtendedStandardLibrary.LowEntryByteDataReader.GetLongBytes");

	ULowEntryByteDataReader_GetLongBytes_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x004617C0
//		Name   -> Function LowEntryExtendedStandardLibrary.LowEntryByteDataReader.GetIntegerArray
//		Flags  -> (Final, Native, Public, BlueprintCallable)
// Parameters:
//		TArray<int>                                        ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, NativeAccessSpecifierPublic)
TArray<int> ULowEntryByteDataReader::GetIntegerArray()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function LowEntryExtendedStandardLibrary.LowEntryByteDataReader.GetIntegerArray");

	ULowEntryByteDataReader_GetIntegerArray_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00461790
//		Name   -> Function LowEntryExtendedStandardLibrary.LowEntryByteDataReader.GetInteger
//		Flags  -> (Final, Native, Public, BlueprintCallable)
// Parameters:
//		int                                                ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
int ULowEntryByteDataReader::GetInteger()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function LowEntryExtendedStandardLibrary.LowEntryByteDataReader.GetInteger");

	ULowEntryByteDataReader_GetInteger_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x004616E0
//		Name   -> Function LowEntryExtendedStandardLibrary.LowEntryByteDataReader.GetFloatArray
//		Flags  -> (Final, Native, Public, BlueprintCallable)
// Parameters:
//		TArray<float>                                      ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, NativeAccessSpecifierPublic)
TArray<float> ULowEntryByteDataReader::GetFloatArray()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function LowEntryExtendedStandardLibrary.LowEntryByteDataReader.GetFloatArray");

	ULowEntryByteDataReader_GetFloatArray_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00461630
//		Name   -> Function LowEntryExtendedStandardLibrary.LowEntryByteDataReader.GetFloat
//		Flags  -> (Final, Native, Public, BlueprintCallable)
// Parameters:
//		float                                              ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
float ULowEntryByteDataReader::GetFloat()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function LowEntryExtendedStandardLibrary.LowEntryByteDataReader.GetFloat");

	ULowEntryByteDataReader_GetFloat_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00461580
//		Name   -> Function LowEntryExtendedStandardLibrary.LowEntryByteDataReader.GetDoubleBytesArray
//		Flags  -> (Final, Native, Public, BlueprintCallable)
// Parameters:
//		TArray<class ULowEntryDouble*>                     ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, NativeAccessSpecifierPublic)
TArray<class ULowEntryDouble*> ULowEntryByteDataReader::GetDoubleBytesArray()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function LowEntryExtendedStandardLibrary.LowEntryByteDataReader.GetDoubleBytesArray");

	ULowEntryByteDataReader_GetDoubleBytesArray_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x004614D0
//		Name   -> Function LowEntryExtendedStandardLibrary.LowEntryByteDataReader.GetDoubleBytes
//		Flags  -> (Final, Native, Public, BlueprintCallable)
// Parameters:
//		class ULowEntryDouble*                             ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
class ULowEntryDouble* ULowEntryByteDataReader::GetDoubleBytes()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function LowEntryExtendedStandardLibrary.LowEntryByteDataReader.GetDoubleBytes");

	ULowEntryByteDataReader_GetDoubleBytes_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00461470
//		Name   -> Function LowEntryExtendedStandardLibrary.LowEntryByteDataReader.GetClone
//		Flags  -> (Final, Native, Public, BlueprintCallable)
// Parameters:
//		class ULowEntryByteDataReader*                     ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
class ULowEntryByteDataReader* ULowEntryByteDataReader::GetClone()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function LowEntryExtendedStandardLibrary.LowEntryByteDataReader.GetClone");

	ULowEntryByteDataReader_GetClone_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00461100
//		Name   -> Function LowEntryExtendedStandardLibrary.LowEntryByteDataReader.GetByteArray
//		Flags  -> (Final, Native, Public, BlueprintCallable)
// Parameters:
//		TArray<unsigned char>                              ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, NativeAccessSpecifierPublic)
TArray<unsigned char> ULowEntryByteDataReader::GetByteArray()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function LowEntryExtendedStandardLibrary.LowEntryByteDataReader.GetByteArray");

	ULowEntryByteDataReader_GetByteArray_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00461050
//		Name   -> Function LowEntryExtendedStandardLibrary.LowEntryByteDataReader.GetByte
//		Flags  -> (Final, Native, Public, BlueprintCallable)
// Parameters:
//		unsigned char                                      ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
unsigned char ULowEntryByteDataReader::GetByte()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function LowEntryExtendedStandardLibrary.LowEntryByteDataReader.GetByte");

	ULowEntryByteDataReader_GetByte_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00460FA0
//		Name   -> Function LowEntryExtendedStandardLibrary.LowEntryByteDataReader.GetBooleanArray
//		Flags  -> (Final, Native, Public, BlueprintCallable)
// Parameters:
//		TArray<bool>                                       ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, NativeAccessSpecifierPublic)
TArray<bool> ULowEntryByteDataReader::GetBooleanArray()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function LowEntryExtendedStandardLibrary.LowEntryByteDataReader.GetBooleanArray");

	ULowEntryByteDataReader_GetBooleanArray_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00460F70
//		Name   -> Function LowEntryExtendedStandardLibrary.LowEntryByteDataReader.GetBoolean
//		Flags  -> (Final, Native, Public, BlueprintCallable)
// Parameters:
//		bool                                               ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool ULowEntryByteDataReader::GetBoolean()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function LowEntryExtendedStandardLibrary.LowEntryByteDataReader.GetBoolean");

	ULowEntryByteDataReader_GetBoolean_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00460EA0
//		Name   -> Function LowEntryExtendedStandardLibrary.LowEntryByteDataReader.Empty
//		Flags  -> (Final, Native, Public, BlueprintCallable)
void ULowEntryByteDataReader::Empty()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function LowEntryExtendedStandardLibrary.LowEntryByteDataReader.Empty");

	ULowEntryByteDataReader_Empty_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00467590
//		Name   -> Function LowEntryExtendedStandardLibrary.LowEntryByteDataWriter.AddStringUtf8Array
//		Flags  -> (Final, Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
//		TArray<struct FString>                             Value                                                      (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
void ULowEntryByteDataWriter::AddStringUtf8Array(TArray<struct FString> Value)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function LowEntryExtendedStandardLibrary.LowEntryByteDataWriter.AddStringUtf8Array");

	ULowEntryByteDataWriter_AddStringUtf8Array_Params params {};
	params.Value = Value;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x004674F0
//		Name   -> Function LowEntryExtendedStandardLibrary.LowEntryByteDataWriter.AddStringUtf8
//		Flags  -> (Final, Native, Public, BlueprintCallable)
// Parameters:
//		struct FString                                     Value                                                      (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void ULowEntryByteDataWriter::AddStringUtf8(const struct FString& Value)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function LowEntryExtendedStandardLibrary.LowEntryByteDataWriter.AddStringUtf8");

	ULowEntryByteDataWriter_AddStringUtf8_Params params {};
	params.Value = Value;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00467440
//		Name   -> Function LowEntryExtendedStandardLibrary.LowEntryByteDataWriter.AddPositiveInteger3Array
//		Flags  -> (Final, Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
//		TArray<int>                                        Value                                                      (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
void ULowEntryByteDataWriter::AddPositiveInteger3Array(TArray<int> Value)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function LowEntryExtendedStandardLibrary.LowEntryByteDataWriter.AddPositiveInteger3Array");

	ULowEntryByteDataWriter_AddPositiveInteger3Array_Params params {};
	params.Value = Value;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x004673C0
//		Name   -> Function LowEntryExtendedStandardLibrary.LowEntryByteDataWriter.AddPositiveInteger3
//		Flags  -> (Final, Native, Public, BlueprintCallable)
// Parameters:
//		int                                                Value                                                      (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void ULowEntryByteDataWriter::AddPositiveInteger3(int Value)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function LowEntryExtendedStandardLibrary.LowEntryByteDataWriter.AddPositiveInteger3");

	ULowEntryByteDataWriter_AddPositiveInteger3_Params params {};
	params.Value = Value;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00467310
//		Name   -> Function LowEntryExtendedStandardLibrary.LowEntryByteDataWriter.AddPositiveInteger2Array
//		Flags  -> (Final, Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
//		TArray<int>                                        Value                                                      (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
void ULowEntryByteDataWriter::AddPositiveInteger2Array(TArray<int> Value)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function LowEntryExtendedStandardLibrary.LowEntryByteDataWriter.AddPositiveInteger2Array");

	ULowEntryByteDataWriter_AddPositiveInteger2Array_Params params {};
	params.Value = Value;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00467290
//		Name   -> Function LowEntryExtendedStandardLibrary.LowEntryByteDataWriter.AddPositiveInteger2
//		Flags  -> (Final, Native, Public, BlueprintCallable)
// Parameters:
//		int                                                Value                                                      (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void ULowEntryByteDataWriter::AddPositiveInteger2(int Value)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function LowEntryExtendedStandardLibrary.LowEntryByteDataWriter.AddPositiveInteger2");

	ULowEntryByteDataWriter_AddPositiveInteger2_Params params {};
	params.Value = Value;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x004671E0
//		Name   -> Function LowEntryExtendedStandardLibrary.LowEntryByteDataWriter.AddPositiveInteger1Array
//		Flags  -> (Final, Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
//		TArray<int>                                        Value                                                      (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
void ULowEntryByteDataWriter::AddPositiveInteger1Array(TArray<int> Value)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function LowEntryExtendedStandardLibrary.LowEntryByteDataWriter.AddPositiveInteger1Array");

	ULowEntryByteDataWriter_AddPositiveInteger1Array_Params params {};
	params.Value = Value;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00467160
//		Name   -> Function LowEntryExtendedStandardLibrary.LowEntryByteDataWriter.AddPositiveInteger1
//		Flags  -> (Final, Native, Public, BlueprintCallable)
// Parameters:
//		int                                                Value                                                      (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void ULowEntryByteDataWriter::AddPositiveInteger1(int Value)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function LowEntryExtendedStandardLibrary.LowEntryByteDataWriter.AddPositiveInteger1");

	ULowEntryByteDataWriter_AddPositiveInteger1_Params params {};
	params.Value = Value;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00466E50
//		Name   -> Function LowEntryExtendedStandardLibrary.LowEntryByteDataWriter.AddLongBytesArray
//		Flags  -> (Final, Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
//		TArray<class ULowEntryLong*>                       Value                                                      (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
void ULowEntryByteDataWriter::AddLongBytesArray(TArray<class ULowEntryLong*> Value)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function LowEntryExtendedStandardLibrary.LowEntryByteDataWriter.AddLongBytesArray");

	ULowEntryByteDataWriter_AddLongBytesArray_Params params {};
	params.Value = Value;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00466DD0
//		Name   -> Function LowEntryExtendedStandardLibrary.LowEntryByteDataWriter.AddLongBytes
//		Flags  -> (Final, Native, Public, BlueprintCallable)
// Parameters:
//		class ULowEntryLong*                               Value                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void ULowEntryByteDataWriter::AddLongBytes(class ULowEntryLong* Value)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function LowEntryExtendedStandardLibrary.LowEntryByteDataWriter.AddLongBytes");

	ULowEntryByteDataWriter_AddLongBytes_Params params {};
	params.Value = Value;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x004670B0
//		Name   -> Function LowEntryExtendedStandardLibrary.LowEntryByteDataWriter.AddIntegerArray
//		Flags  -> (Final, Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
//		TArray<int>                                        Value                                                      (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
void ULowEntryByteDataWriter::AddIntegerArray(TArray<int> Value)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function LowEntryExtendedStandardLibrary.LowEntryByteDataWriter.AddIntegerArray");

	ULowEntryByteDataWriter_AddIntegerArray_Params params {};
	params.Value = Value;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00467030
//		Name   -> Function LowEntryExtendedStandardLibrary.LowEntryByteDataWriter.AddInteger
//		Flags  -> (Final, Native, Public, BlueprintCallable)
// Parameters:
//		int                                                Value                                                      (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void ULowEntryByteDataWriter::AddInteger(int Value)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function LowEntryExtendedStandardLibrary.LowEntryByteDataWriter.AddInteger");

	ULowEntryByteDataWriter_AddInteger_Params params {};
	params.Value = Value;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00466F80
//		Name   -> Function LowEntryExtendedStandardLibrary.LowEntryByteDataWriter.AddFloatArray
//		Flags  -> (Final, Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
//		TArray<float>                                      Value                                                      (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
void ULowEntryByteDataWriter::AddFloatArray(TArray<float> Value)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function LowEntryExtendedStandardLibrary.LowEntryByteDataWriter.AddFloatArray");

	ULowEntryByteDataWriter_AddFloatArray_Params params {};
	params.Value = Value;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00466F00
//		Name   -> Function LowEntryExtendedStandardLibrary.LowEntryByteDataWriter.AddFloat
//		Flags  -> (Final, Native, Public, BlueprintCallable)
// Parameters:
//		float                                              Value                                                      (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void ULowEntryByteDataWriter::AddFloat(float Value)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function LowEntryExtendedStandardLibrary.LowEntryByteDataWriter.AddFloat");

	ULowEntryByteDataWriter_AddFloat_Params params {};
	params.Value = Value;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00466E50
//		Name   -> Function LowEntryExtendedStandardLibrary.LowEntryByteDataWriter.AddDoubleBytesArray
//		Flags  -> (Final, Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
//		TArray<class ULowEntryDouble*>                     Value                                                      (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
void ULowEntryByteDataWriter::AddDoubleBytesArray(TArray<class ULowEntryDouble*> Value)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function LowEntryExtendedStandardLibrary.LowEntryByteDataWriter.AddDoubleBytesArray");

	ULowEntryByteDataWriter_AddDoubleBytesArray_Params params {};
	params.Value = Value;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00466DD0
//		Name   -> Function LowEntryExtendedStandardLibrary.LowEntryByteDataWriter.AddDoubleBytes
//		Flags  -> (Final, Native, Public, BlueprintCallable)
// Parameters:
//		class ULowEntryDouble*                             Value                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void ULowEntryByteDataWriter::AddDoubleBytes(class ULowEntryDouble* Value)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function LowEntryExtendedStandardLibrary.LowEntryByteDataWriter.AddDoubleBytes");

	ULowEntryByteDataWriter_AddDoubleBytes_Params params {};
	params.Value = Value;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00466D20
//		Name   -> Function LowEntryExtendedStandardLibrary.LowEntryByteDataWriter.AddByteArray
//		Flags  -> (Final, Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
//		TArray<unsigned char>                              Value                                                      (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
void ULowEntryByteDataWriter::AddByteArray(TArray<unsigned char> Value)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function LowEntryExtendedStandardLibrary.LowEntryByteDataWriter.AddByteArray");

	ULowEntryByteDataWriter_AddByteArray_Params params {};
	params.Value = Value;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00466CA0
//		Name   -> Function LowEntryExtendedStandardLibrary.LowEntryByteDataWriter.AddByte
//		Flags  -> (Final, Native, Public, BlueprintCallable)
// Parameters:
//		unsigned char                                      Value                                                      (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void ULowEntryByteDataWriter::AddByte(unsigned char Value)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function LowEntryExtendedStandardLibrary.LowEntryByteDataWriter.AddByte");

	ULowEntryByteDataWriter_AddByte_Params params {};
	params.Value = Value;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00466BF0
//		Name   -> Function LowEntryExtendedStandardLibrary.LowEntryByteDataWriter.AddBooleanArray
//		Flags  -> (Final, Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
//		TArray<bool>                                       Value                                                      (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
void ULowEntryByteDataWriter::AddBooleanArray(TArray<bool> Value)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function LowEntryExtendedStandardLibrary.LowEntryByteDataWriter.AddBooleanArray");

	ULowEntryByteDataWriter_AddBooleanArray_Params params {};
	params.Value = Value;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00466B60
//		Name   -> Function LowEntryExtendedStandardLibrary.LowEntryByteDataWriter.AddBoolean
//		Flags  -> (Final, Native, Public, BlueprintCallable)
// Parameters:
//		bool                                               Value                                                      (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void ULowEntryByteDataWriter::AddBoolean(bool Value)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function LowEntryExtendedStandardLibrary.LowEntryByteDataWriter.AddBoolean");

	ULowEntryByteDataWriter_AddBoolean_Params params {};
	params.Value = Value;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00476310
//		Name   -> Function LowEntryExtendedStandardLibrary.LowEntryDouble.SetBytes
//		Flags  -> (Final, Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
//		TArray<unsigned char>                              ByteArray                                                  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
//		int                                                Index                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		int                                                Length                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void ULowEntryDouble::SetBytes(TArray<unsigned char> ByteArray, int Index, int Length)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function LowEntryExtendedStandardLibrary.LowEntryDouble.SetBytes");

	ULowEntryDouble_SetBytes_Params params {};
	params.ByteArray = ByteArray;
	params.Index = Index;
	params.Length = Length;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00472E80
//		Name   -> Function LowEntryExtendedStandardLibrary.LowEntryDouble.LongBytes_LessThan
//		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure)
// Parameters:
//		class ULowEntryLong*                               Value                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		bool                                               ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool ULowEntryDouble::LongBytes_LessThan(class ULowEntryLong* Value)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function LowEntryExtendedStandardLibrary.LowEntryDouble.LongBytes_LessThan");

	ULowEntryDouble_LongBytes_LessThan_Params params {};
	params.Value = Value;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00472DF0
//		Name   -> Function LowEntryExtendedStandardLibrary.LowEntryDouble.LongBytes_GreaterThan
//		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure)
// Parameters:
//		class ULowEntryLong*                               Value                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		bool                                               ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool ULowEntryDouble::LongBytes_GreaterThan(class ULowEntryLong* Value)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function LowEntryExtendedStandardLibrary.LowEntryDouble.LongBytes_GreaterThan");

	ULowEntryDouble_LongBytes_GreaterThan_Params params {};
	params.Value = Value;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00471B50
//		Name   -> Function LowEntryExtendedStandardLibrary.LowEntryDouble.Integer_LessThan
//		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure)
// Parameters:
//		int                                                Value                                                      (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		bool                                               ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool ULowEntryDouble::Integer_LessThan(int Value)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function LowEntryExtendedStandardLibrary.LowEntryDouble.Integer_LessThan");

	ULowEntryDouble_Integer_LessThan_Params params {};
	params.Value = Value;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00471AC0
//		Name   -> Function LowEntryExtendedStandardLibrary.LowEntryDouble.Integer_GreaterThan
//		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure)
// Parameters:
//		int                                                Value                                                      (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		bool                                               ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool ULowEntryDouble::Integer_GreaterThan(int Value)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function LowEntryExtendedStandardLibrary.LowEntryDouble.Integer_GreaterThan");

	ULowEntryDouble_Integer_GreaterThan_Params params {};
	params.Value = Value;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x0046F130
//		Name   -> Function LowEntryExtendedStandardLibrary.LowEntryDouble.GetBytes
//		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure)
// Parameters:
//		TArray<unsigned char>                              ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, NativeAccessSpecifierPublic)
TArray<unsigned char> ULowEntryDouble::GetBytes()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function LowEntryExtendedStandardLibrary.LowEntryDouble.GetBytes");

	ULowEntryDouble_GetBytes_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x0046E7C0
//		Name   -> Function LowEntryExtendedStandardLibrary.LowEntryDouble.Float_Subtract
//		Flags  -> (Final, Native, Public, BlueprintCallable)
// Parameters:
//		float                                              Value                                                      (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void ULowEntryDouble::Float_Subtract(float Value)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function LowEntryExtendedStandardLibrary.LowEntryDouble.Float_Subtract");

	ULowEntryDouble_Float_Subtract_Params params {};
	params.Value = Value;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x0046E730
//		Name   -> Function LowEntryExtendedStandardLibrary.LowEntryDouble.Float_LessThan
//		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure)
// Parameters:
//		float                                              Value                                                      (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		bool                                               ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool ULowEntryDouble::Float_LessThan(float Value)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function LowEntryExtendedStandardLibrary.LowEntryDouble.Float_LessThan");

	ULowEntryDouble_Float_LessThan_Params params {};
	params.Value = Value;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x0046E6A0
//		Name   -> Function LowEntryExtendedStandardLibrary.LowEntryDouble.Float_GreaterThan
//		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure)
// Parameters:
//		float                                              Value                                                      (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		bool                                               ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool ULowEntryDouble::Float_GreaterThan(float Value)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function LowEntryExtendedStandardLibrary.LowEntryDouble.Float_GreaterThan");

	ULowEntryDouble_Float_GreaterThan_Params params {};
	params.Value = Value;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x0046E610
//		Name   -> Function LowEntryExtendedStandardLibrary.LowEntryDouble.Float_Equals
//		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure)
// Parameters:
//		float                                              Value                                                      (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		bool                                               ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool ULowEntryDouble::Float_Equals(float Value)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function LowEntryExtendedStandardLibrary.LowEntryDouble.Float_Equals");

	ULowEntryDouble_Float_Equals_Params params {};
	params.Value = Value;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x0046E590
//		Name   -> Function LowEntryExtendedStandardLibrary.LowEntryDouble.Float_Add
//		Flags  -> (Final, Native, Public, BlueprintCallable)
// Parameters:
//		float                                              Value                                                      (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void ULowEntryDouble::Float_Add(float Value)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function LowEntryExtendedStandardLibrary.LowEntryDouble.Float_Add");

	ULowEntryDouble_Float_Add_Params params {};
	params.Value = Value;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x0046E120
//		Name   -> Function LowEntryExtendedStandardLibrary.LowEntryDouble.DoubleBytes_Subtract
//		Flags  -> (Final, Native, Public, BlueprintCallable)
// Parameters:
//		class ULowEntryDouble*                             Value                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void ULowEntryDouble::DoubleBytes_Subtract(class ULowEntryDouble* Value)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function LowEntryExtendedStandardLibrary.LowEntryDouble.DoubleBytes_Subtract");

	ULowEntryDouble_DoubleBytes_Subtract_Params params {};
	params.Value = Value;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x0046E090
//		Name   -> Function LowEntryExtendedStandardLibrary.LowEntryDouble.DoubleBytes_LessThan
//		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure)
// Parameters:
//		class ULowEntryDouble*                             Value                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		bool                                               ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool ULowEntryDouble::DoubleBytes_LessThan(class ULowEntryDouble* Value)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function LowEntryExtendedStandardLibrary.LowEntryDouble.DoubleBytes_LessThan");

	ULowEntryDouble_DoubleBytes_LessThan_Params params {};
	params.Value = Value;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x0046E000
//		Name   -> Function LowEntryExtendedStandardLibrary.LowEntryDouble.DoubleBytes_GreaterThan
//		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure)
// Parameters:
//		class ULowEntryDouble*                             Value                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		bool                                               ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool ULowEntryDouble::DoubleBytes_GreaterThan(class ULowEntryDouble* Value)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function LowEntryExtendedStandardLibrary.LowEntryDouble.DoubleBytes_GreaterThan");

	ULowEntryDouble_DoubleBytes_GreaterThan_Params params {};
	params.Value = Value;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x0046DF70
//		Name   -> Function LowEntryExtendedStandardLibrary.LowEntryDouble.DoubleBytes_Equals
//		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure)
// Parameters:
//		class ULowEntryDouble*                             Value                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		bool                                               ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool ULowEntryDouble::DoubleBytes_Equals(class ULowEntryDouble* Value)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function LowEntryExtendedStandardLibrary.LowEntryDouble.DoubleBytes_Equals");

	ULowEntryDouble_DoubleBytes_Equals_Params params {};
	params.Value = Value;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x0046DEF0
//		Name   -> Function LowEntryExtendedStandardLibrary.LowEntryDouble.DoubleBytes_Add
//		Flags  -> (Final, Native, Public, BlueprintCallable)
// Parameters:
//		class ULowEntryDouble*                             Value                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void ULowEntryDouble::DoubleBytes_Add(class ULowEntryDouble* Value)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function LowEntryExtendedStandardLibrary.LowEntryDouble.DoubleBytes_Add");

	ULowEntryDouble_DoubleBytes_Add_Params params {};
	params.Value = Value;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x0046D6D0
//		Name   -> Function LowEntryExtendedStandardLibrary.LowEntryDouble.CreateClone
//		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure)
// Parameters:
//		class ULowEntryDouble*                             ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
class ULowEntryDouble* ULowEntryDouble::CreateClone()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function LowEntryExtendedStandardLibrary.LowEntryDouble.CreateClone");

	ULowEntryDouble_CreateClone_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x0046D050
//		Name   -> Function LowEntryExtendedStandardLibrary.LowEntryDouble.CastToString
//		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure)
// Parameters:
//		int                                                MinFractionalDigits                                        (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		struct FString                                     ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
struct FString ULowEntryDouble::CastToString(int MinFractionalDigits)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function LowEntryExtendedStandardLibrary.LowEntryDouble.CastToString");

	ULowEntryDouble_CastToString_Params params {};
	params.MinFractionalDigits = MinFractionalDigits;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x0046D020
//		Name   -> Function LowEntryExtendedStandardLibrary.LowEntryDouble.CastToLongBytes
//		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure)
// Parameters:
//		class ULowEntryLong*                               ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
class ULowEntryLong* ULowEntryDouble::CastToLongBytes()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function LowEntryExtendedStandardLibrary.LowEntryDouble.CastToLongBytes");

	ULowEntryDouble_CastToLongBytes_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00467660
//		Name   -> Function LowEntryExtendedStandardLibrary.LowEntryExtendedStandardLibrary.XboxOnePlatform
//		Flags  -> (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
//		bool                                               ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool ULowEntryExtendedStandardLibrary::STATIC_XboxOnePlatform()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function LowEntryExtendedStandardLibrary.LowEntryExtendedStandardLibrary.XboxOnePlatform");

	ULowEntryExtendedStandardLibrary_XboxOnePlatform_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00467660
//		Name   -> Function LowEntryExtendedStandardLibrary.LowEntryExtendedStandardLibrary.WithEditor
//		Flags  -> (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
//		bool                                               ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool ULowEntryExtendedStandardLibrary::STATIC_WithEditor()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function LowEntryExtendedStandardLibrary.LowEntryExtendedStandardLibrary.WithEditor");

	ULowEntryExtendedStandardLibrary_WithEditor_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00467660
//		Name   -> Function LowEntryExtendedStandardLibrary.LowEntryExtendedStandardLibrary.WindowsRtPlatform
//		Flags  -> (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
//		bool                                               ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool ULowEntryExtendedStandardLibrary::STATIC_WindowsRtPlatform()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function LowEntryExtendedStandardLibrary.LowEntryExtendedStandardLibrary.WindowsRtPlatform");

	ULowEntryExtendedStandardLibrary_WindowsRtPlatform_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00467660
//		Name   -> Function LowEntryExtendedStandardLibrary.LowEntryExtendedStandardLibrary.WindowsRtArmPlatform
//		Flags  -> (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
//		bool                                               ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool ULowEntryExtendedStandardLibrary::STATIC_WindowsRtArmPlatform()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function LowEntryExtendedStandardLibrary.LowEntryExtendedStandardLibrary.WindowsRtArmPlatform");

	ULowEntryExtendedStandardLibrary_WindowsRtArmPlatform_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x0046DDE0
//		Name   -> Function LowEntryExtendedStandardLibrary.LowEntryExtendedStandardLibrary.WindowsPlatform
//		Flags  -> (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
//		bool                                               ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool ULowEntryExtendedStandardLibrary::STATIC_WindowsPlatform()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function LowEntryExtendedStandardLibrary.LowEntryExtendedStandardLibrary.WindowsPlatform");

	ULowEntryExtendedStandardLibrary_WindowsPlatform_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00478D60
//		Name   -> Function LowEntryExtendedStandardLibrary.LowEntryExtendedStandardLibrary.WindowsNewlineCharacter
//		Flags  -> (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
//		struct FString                                     ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
struct FString ULowEntryExtendedStandardLibrary::STATIC_WindowsNewlineCharacter()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function LowEntryExtendedStandardLibrary.LowEntryExtendedStandardLibrary.WindowsNewlineCharacter");

	ULowEntryExtendedStandardLibrary_WindowsNewlineCharacter_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x0046DDE0
//		Name   -> Function LowEntryExtendedStandardLibrary.LowEntryExtendedStandardLibrary.Windows64Platform
//		Flags  -> (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
//		bool                                               ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool ULowEntryExtendedStandardLibrary::STATIC_Windows64Platform()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function LowEntryExtendedStandardLibrary.LowEntryExtendedStandardLibrary.Windows64Platform");

	ULowEntryExtendedStandardLibrary_Windows64Platform_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00467660
//		Name   -> Function LowEntryExtendedStandardLibrary.LowEntryExtendedStandardLibrary.Windows32Platform
//		Flags  -> (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
//		bool                                               ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool ULowEntryExtendedStandardLibrary::STATIC_Windows32Platform()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function LowEntryExtendedStandardLibrary.LowEntryExtendedStandardLibrary.Windows32Platform");

	ULowEntryExtendedStandardLibrary_Windows32Platform_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00478BB0
//		Name   -> Function LowEntryExtendedStandardLibrary.LowEntryExtendedStandardLibrary.TickSeconds
//		Flags  -> (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
// Parameters:
//		class UObject*                                     WorldContextObject                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		struct FLatentActionInfo                           LatentInfo                                                 (Parm, NoDestructor, NativeAccessSpecifierPublic)
//		int                                                Ticks                                                      (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		float                                              SecondsInterval                                            (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		int                                                Tick                                                       (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void ULowEntryExtendedStandardLibrary::STATIC_TickSeconds(class UObject* WorldContextObject, const struct FLatentActionInfo& LatentInfo, int Ticks, float SecondsInterval, int* Tick)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function LowEntryExtendedStandardLibrary.LowEntryExtendedStandardLibrary.TickSeconds");

	ULowEntryExtendedStandardLibrary_TickSeconds_Params params {};
	params.WorldContextObject = WorldContextObject;
	params.LatentInfo = LatentInfo;
	params.Ticks = Ticks;
	params.SecondsInterval = SecondsInterval;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Tick != nullptr)
		*Tick = params.Tick;

}


// Function:
//		Offset -> 0x00478A10
//		Name   -> Function LowEntryExtendedStandardLibrary.LowEntryExtendedStandardLibrary.TickFrames
//		Flags  -> (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
// Parameters:
//		class UObject*                                     WorldContextObject                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		struct FLatentActionInfo                           LatentInfo                                                 (Parm, NoDestructor, NativeAccessSpecifierPublic)
//		int                                                Ticks                                                      (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		int                                                FramesInterval                                             (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		int                                                Tick                                                       (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void ULowEntryExtendedStandardLibrary::STATIC_TickFrames(class UObject* WorldContextObject, const struct FLatentActionInfo& LatentInfo, int Ticks, int FramesInterval, int* Tick)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function LowEntryExtendedStandardLibrary.LowEntryExtendedStandardLibrary.TickFrames");

	ULowEntryExtendedStandardLibrary_TickFrames_Params params {};
	params.WorldContextObject = WorldContextObject;
	params.LatentInfo = LatentInfo;
	params.Ticks = Ticks;
	params.FramesInterval = FramesInterval;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Tick != nullptr)
		*Tick = params.Tick;

}


// Function:
//		Offset -> 0x004789A0
//		Name   -> Function LowEntryExtendedStandardLibrary.LowEntryExtendedStandardLibrary.TextureUpdateResource
//		Flags  -> (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
//		class UTexture*                                    Texture                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void ULowEntryExtendedStandardLibrary::STATIC_TextureUpdateResource(class UTexture* Texture)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function LowEntryExtendedStandardLibrary.LowEntryExtendedStandardLibrary.TextureUpdateResource");

	ULowEntryExtendedStandardLibrary_TextureUpdateResource_Params params {};
	params.Texture = Texture;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00478820
//		Name   -> Function LowEntryExtendedStandardLibrary.LowEntryExtendedStandardLibrary.TextureRenderTarget2DToPixels
//		Flags  -> (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
// Parameters:
//		class UTextureRenderTarget2D*                      TextureRenderTarget2D                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		int                                                Width                                                      (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		int                                                Height                                                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		TArray<struct FColor>                              Pixels                                                     (Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
void ULowEntryExtendedStandardLibrary::STATIC_TextureRenderTarget2DToPixels(class UTextureRenderTarget2D* TextureRenderTarget2D, int* Width, int* Height, TArray<struct FColor>* Pixels)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function LowEntryExtendedStandardLibrary.LowEntryExtendedStandardLibrary.TextureRenderTarget2DToPixels");

	ULowEntryExtendedStandardLibrary_TextureRenderTarget2DToPixels_Params params {};
	params.TextureRenderTarget2D = TextureRenderTarget2D;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Width != nullptr)
		*Width = params.Width;
	if (Height != nullptr)
		*Height = params.Height;
	if (Pixels != nullptr)
		*Pixels = params.Pixels;

}


// Function:
//		Offset -> 0x004786C0
//		Name   -> Function LowEntryExtendedStandardLibrary.LowEntryExtendedStandardLibrary.TextureRenderTarget2DToBytes
//		Flags  -> (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
// Parameters:
//		class UTextureRenderTarget2D*                      TextureRenderTarget2D                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		LowEntryExtendedStandardLibrary_ELowEntryImageFormat ImageFormat                                                (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		TArray<unsigned char>                              ByteArray                                                  (Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
//		int                                                CompressionQuality                                         (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void ULowEntryExtendedStandardLibrary::STATIC_TextureRenderTarget2DToBytes(class UTextureRenderTarget2D* TextureRenderTarget2D, LowEntryExtendedStandardLibrary_ELowEntryImageFormat ImageFormat, TArray<unsigned char>* ByteArray, int CompressionQuality)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function LowEntryExtendedStandardLibrary.LowEntryExtendedStandardLibrary.TextureRenderTarget2DToBytes");

	ULowEntryExtendedStandardLibrary_TextureRenderTarget2DToBytes_Params params {};
	params.TextureRenderTarget2D = TextureRenderTarget2D;
	params.ImageFormat = ImageFormat;
	params.CompressionQuality = CompressionQuality;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (ByteArray != nullptr)
		*ByteArray = params.ByteArray;

}


// Function:
//		Offset -> 0x00478540
//		Name   -> Function LowEntryExtendedStandardLibrary.LowEntryExtendedStandardLibrary.Texture2DToPixels
//		Flags  -> (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
// Parameters:
//		class UTexture2D*                                  Texture2D                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		int                                                Width                                                      (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		int                                                Height                                                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		TArray<struct FColor>                              Pixels                                                     (Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
void ULowEntryExtendedStandardLibrary::STATIC_Texture2DToPixels(class UTexture2D* Texture2D, int* Width, int* Height, TArray<struct FColor>* Pixels)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function LowEntryExtendedStandardLibrary.LowEntryExtendedStandardLibrary.Texture2DToPixels");

	ULowEntryExtendedStandardLibrary_Texture2DToPixels_Params params {};
	params.Texture2D = Texture2D;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Width != nullptr)
		*Width = params.Width;
	if (Height != nullptr)
		*Height = params.Height;
	if (Pixels != nullptr)
		*Pixels = params.Pixels;

}


// Function:
//		Offset -> 0x004783E0
//		Name   -> Function LowEntryExtendedStandardLibrary.LowEntryExtendedStandardLibrary.Texture2DToBytes
//		Flags  -> (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
// Parameters:
//		class UTexture2D*                                  Texture2D                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		LowEntryExtendedStandardLibrary_ELowEntryImageFormat ImageFormat                                                (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		TArray<unsigned char>                              ByteArray                                                  (Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
//		int                                                CompressionQuality                                         (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void ULowEntryExtendedStandardLibrary::STATIC_Texture2DToBytes(class UTexture2D* Texture2D, LowEntryExtendedStandardLibrary_ELowEntryImageFormat ImageFormat, TArray<unsigned char>* ByteArray, int CompressionQuality)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function LowEntryExtendedStandardLibrary.LowEntryExtendedStandardLibrary.Texture2DToBytes");

	ULowEntryExtendedStandardLibrary_Texture2DToBytes_Params params {};
	params.Texture2D = Texture2D;
	params.ImageFormat = ImageFormat;
	params.CompressionQuality = CompressionQuality;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (ByteArray != nullptr)
		*ByteArray = params.ByteArray;

}


// Function:
//		Offset -> 0x00467660
//		Name   -> Function LowEntryExtendedStandardLibrary.LowEntryExtendedStandardLibrary.TestBuild
//		Flags  -> (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
//		bool                                               ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool ULowEntryExtendedStandardLibrary::STATIC_TestBuild()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function LowEntryExtendedStandardLibrary.LowEntryExtendedStandardLibrary.TestBuild");

	ULowEntryExtendedStandardLibrary_TestBuild_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00478360
//		Name   -> Function LowEntryExtendedStandardLibrary.LowEntryExtendedStandardLibrary.TabCharacter
//		Flags  -> (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
//		struct FString                                     ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
struct FString ULowEntryExtendedStandardLibrary::STATIC_TabCharacter()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function LowEntryExtendedStandardLibrary.LowEntryExtendedStandardLibrary.TabCharacter");

	ULowEntryExtendedStandardLibrary_TabCharacter_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00467660
//		Name   -> Function LowEntryExtendedStandardLibrary.LowEntryExtendedStandardLibrary.SwitchPlatform
//		Flags  -> (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
//		bool                                               ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool ULowEntryExtendedStandardLibrary::STATIC_SwitchPlatform()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function LowEntryExtendedStandardLibrary.LowEntryExtendedStandardLibrary.SwitchPlatform");

	ULowEntryExtendedStandardLibrary_SwitchPlatform_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00478280
//		Name   -> Function LowEntryExtendedStandardLibrary.LowEntryExtendedStandardLibrary.StringToBytesUtf8
//		Flags  -> (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
//		struct FString                                     String                                                     (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		TArray<unsigned char>                              ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, NativeAccessSpecifierPublic)
TArray<unsigned char> ULowEntryExtendedStandardLibrary::STATIC_StringToBytesUtf8(const struct FString& String)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function LowEntryExtendedStandardLibrary.LowEntryExtendedStandardLibrary.StringToBytesUtf8");

	ULowEntryExtendedStandardLibrary_StringToBytesUtf8_Params params {};
	params.String = String;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x004780E0
//		Name   -> Function LowEntryExtendedStandardLibrary.LowEntryExtendedStandardLibrary.SplitBytes
//		Flags  -> (Final, Native, Static, Public, HasOutParms, BlueprintCallable, BlueprintPure)
// Parameters:
//		TArray<unsigned char>                              ByteArray                                                  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
//		int                                                LengthA                                                    (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		TArray<unsigned char>                              A                                                          (Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
//		TArray<unsigned char>                              B                                                          (Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
void ULowEntryExtendedStandardLibrary::STATIC_SplitBytes(TArray<unsigned char> ByteArray, int LengthA, TArray<unsigned char>* A, TArray<unsigned char>* B)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function LowEntryExtendedStandardLibrary.LowEntryExtendedStandardLibrary.SplitBytes");

	ULowEntryExtendedStandardLibrary_SplitBytes_Params params {};
	params.ByteArray = ByteArray;
	params.LengthA = LengthA;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (A != nullptr)
		*A = params.A;
	if (B != nullptr)
		*B = params.B;

}


// Function:
//		Offset -> 0x00478020
//		Name   -> Function LowEntryExtendedStandardLibrary.LowEntryExtendedStandardLibrary.SoundClass_SetVolume
//		Flags  -> (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
//		class USoundClass*                                 SoundClass                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		float                                              Volume                                                     (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void ULowEntryExtendedStandardLibrary::STATIC_SoundClass_SetVolume(class USoundClass* SoundClass, float Volume)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function LowEntryExtendedStandardLibrary.LowEntryExtendedStandardLibrary.SoundClass_SetVolume");

	ULowEntryExtendedStandardLibrary_SoundClass_SetVolume_Params params {};
	params.SoundClass = SoundClass;
	params.Volume = Volume;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00477F60
//		Name   -> Function LowEntryExtendedStandardLibrary.LowEntryExtendedStandardLibrary.SoundClass_SetPitch
//		Flags  -> (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
//		class USoundClass*                                 SoundClass                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		float                                              Pitch                                                      (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void ULowEntryExtendedStandardLibrary::STATIC_SoundClass_SetPitch(class USoundClass* SoundClass, float Pitch)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function LowEntryExtendedStandardLibrary.LowEntryExtendedStandardLibrary.SoundClass_SetPitch");

	ULowEntryExtendedStandardLibrary_SoundClass_SetPitch_Params params {};
	params.SoundClass = SoundClass;
	params.Pitch = Pitch;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00477ED0
//		Name   -> Function LowEntryExtendedStandardLibrary.LowEntryExtendedStandardLibrary.SoundClass_GetVolume
//		Flags  -> (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
//		class USoundClass*                                 SoundClass                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		float                                              ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
float ULowEntryExtendedStandardLibrary::STATIC_SoundClass_GetVolume(class USoundClass* SoundClass)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function LowEntryExtendedStandardLibrary.LowEntryExtendedStandardLibrary.SoundClass_GetVolume");

	ULowEntryExtendedStandardLibrary_SoundClass_GetVolume_Params params {};
	params.SoundClass = SoundClass;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00477E40
//		Name   -> Function LowEntryExtendedStandardLibrary.LowEntryExtendedStandardLibrary.SoundClass_GetPitch
//		Flags  -> (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
//		class USoundClass*                                 SoundClass                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		float                                              ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
float ULowEntryExtendedStandardLibrary::STATIC_SoundClass_GetPitch(class USoundClass* SoundClass)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function LowEntryExtendedStandardLibrary.LowEntryExtendedStandardLibrary.SoundClass_GetPitch");

	ULowEntryExtendedStandardLibrary_SoundClass_GetPitch_Params params {};
	params.SoundClass = SoundClass;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x004773A0
//		Name   -> Function LowEntryExtendedStandardLibrary.LowEntryExtendedStandardLibrary.SortTimespanArrayDirectly
//		Flags  -> (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
// Parameters:
//		TArray<struct FTimespan>                           TimespanArray                                              (Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
//		bool                                               Reversed                                                   (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void ULowEntryExtendedStandardLibrary::STATIC_SortTimespanArrayDirectly(TArray<struct FTimespan>* TimespanArray, bool Reversed)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function LowEntryExtendedStandardLibrary.LowEntryExtendedStandardLibrary.SortTimespanArrayDirectly");

	ULowEntryExtendedStandardLibrary_SortTimespanArrayDirectly_Params params {};
	params.Reversed = Reversed;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (TimespanArray != nullptr)
		*TimespanArray = params.TimespanArray;

}


// Function:
//		Offset -> 0x00477260
//		Name   -> Function LowEntryExtendedStandardLibrary.LowEntryExtendedStandardLibrary.SortTimespanArray
//		Flags  -> (Final, Native, Static, Public, HasOutParms, BlueprintCallable, BlueprintPure)
// Parameters:
//		TArray<struct FTimespan>                           TimespanArray                                              (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
//		bool                                               Reversed                                                   (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		TArray<struct FTimespan>                           ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, NativeAccessSpecifierPublic)
TArray<struct FTimespan> ULowEntryExtendedStandardLibrary::STATIC_SortTimespanArray(TArray<struct FTimespan> TimespanArray, bool Reversed)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function LowEntryExtendedStandardLibrary.LowEntryExtendedStandardLibrary.SortTimespanArray");

	ULowEntryExtendedStandardLibrary_SortTimespanArray_Params params {};
	params.TimespanArray = TimespanArray;
	params.Reversed = Reversed;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00477D30
//		Name   -> Function LowEntryExtendedStandardLibrary.LowEntryExtendedStandardLibrary.SortStringArrayDirectly
//		Flags  -> (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
// Parameters:
//		TArray<struct FString>                             StringArray                                                (Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
//		bool                                               Reversed                                                   (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void ULowEntryExtendedStandardLibrary::STATIC_SortStringArrayDirectly(TArray<struct FString>* StringArray, bool Reversed)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function LowEntryExtendedStandardLibrary.LowEntryExtendedStandardLibrary.SortStringArrayDirectly");

	ULowEntryExtendedStandardLibrary_SortStringArrayDirectly_Params params {};
	params.Reversed = Reversed;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (StringArray != nullptr)
		*StringArray = params.StringArray;

}


// Function:
//		Offset -> 0x00477BD0
//		Name   -> Function LowEntryExtendedStandardLibrary.LowEntryExtendedStandardLibrary.SortStringArray
//		Flags  -> (Final, Native, Static, Public, HasOutParms, BlueprintCallable, BlueprintPure)
// Parameters:
//		TArray<struct FString>                             StringArray                                                (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
//		bool                                               Reversed                                                   (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		TArray<struct FString>                             ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, NativeAccessSpecifierPublic)
TArray<struct FString> ULowEntryExtendedStandardLibrary::STATIC_SortStringArray(TArray<struct FString> StringArray, bool Reversed)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function LowEntryExtendedStandardLibrary.LowEntryExtendedStandardLibrary.SortStringArray");

	ULowEntryExtendedStandardLibrary_SortStringArray_Params params {};
	params.StringArray = StringArray;
	params.Reversed = Reversed;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00477A80
//		Name   -> Function LowEntryExtendedStandardLibrary.LowEntryExtendedStandardLibrary.SortObjectArrayDirectly
//		Flags  -> (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
// Parameters:
//		TArray<class UObject*>                             ObjectArray                                                (Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
//		struct FScriptDelegate                             Comparator                                                 (Parm, ZeroConstructor, NoDestructor, NativeAccessSpecifierPublic)
//		bool                                               Reversed                                                   (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void ULowEntryExtendedStandardLibrary::STATIC_SortObjectArrayDirectly(TArray<class UObject*>* ObjectArray, const struct FScriptDelegate& Comparator, bool Reversed)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function LowEntryExtendedStandardLibrary.LowEntryExtendedStandardLibrary.SortObjectArrayDirectly");

	ULowEntryExtendedStandardLibrary_SortObjectArrayDirectly_Params params {};
	params.Comparator = Comparator;
	params.Reversed = Reversed;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (ObjectArray != nullptr)
		*ObjectArray = params.ObjectArray;

}


// Function:
//		Offset -> 0x004778F0
//		Name   -> Function LowEntryExtendedStandardLibrary.LowEntryExtendedStandardLibrary.SortObjectArray
//		Flags  -> (Final, Native, Static, Public, HasOutParms, BlueprintCallable, BlueprintPure)
// Parameters:
//		TArray<class UObject*>                             ObjectArray                                                (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
//		struct FScriptDelegate                             Comparator                                                 (Parm, ZeroConstructor, NoDestructor, NativeAccessSpecifierPublic)
//		bool                                               Reversed                                                   (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		TArray<class UObject*>                             ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, NativeAccessSpecifierPublic)
TArray<class UObject*> ULowEntryExtendedStandardLibrary::STATIC_SortObjectArray(TArray<class UObject*> ObjectArray, const struct FScriptDelegate& Comparator, bool Reversed)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function LowEntryExtendedStandardLibrary.LowEntryExtendedStandardLibrary.SortObjectArray");

	ULowEntryExtendedStandardLibrary_SortObjectArray_Params params {};
	params.ObjectArray = ObjectArray;
	params.Comparator = Comparator;
	params.Reversed = Reversed;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00477800
//		Name   -> Function LowEntryExtendedStandardLibrary.LowEntryExtendedStandardLibrary.SortIntegerArrayDirectly
//		Flags  -> (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
// Parameters:
//		TArray<int>                                        IntegerArray                                               (Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
//		bool                                               Reversed                                                   (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void ULowEntryExtendedStandardLibrary::STATIC_SortIntegerArrayDirectly(TArray<int>* IntegerArray, bool Reversed)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function LowEntryExtendedStandardLibrary.LowEntryExtendedStandardLibrary.SortIntegerArrayDirectly");

	ULowEntryExtendedStandardLibrary_SortIntegerArrayDirectly_Params params {};
	params.Reversed = Reversed;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (IntegerArray != nullptr)
		*IntegerArray = params.IntegerArray;

}


// Function:
//		Offset -> 0x004776C0
//		Name   -> Function LowEntryExtendedStandardLibrary.LowEntryExtendedStandardLibrary.SortIntegerArray
//		Flags  -> (Final, Native, Static, Public, HasOutParms, BlueprintCallable, BlueprintPure)
// Parameters:
//		TArray<int>                                        IntegerArray                                               (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
//		bool                                               Reversed                                                   (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		TArray<int>                                        ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, NativeAccessSpecifierPublic)
TArray<int> ULowEntryExtendedStandardLibrary::STATIC_SortIntegerArray(TArray<int> IntegerArray, bool Reversed)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function LowEntryExtendedStandardLibrary.LowEntryExtendedStandardLibrary.SortIntegerArray");

	ULowEntryExtendedStandardLibrary_SortIntegerArray_Params params {};
	params.IntegerArray = IntegerArray;
	params.Reversed = Reversed;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x004775D0
//		Name   -> Function LowEntryExtendedStandardLibrary.LowEntryExtendedStandardLibrary.SortFloatArrayDirectly
//		Flags  -> (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
// Parameters:
//		TArray<float>                                      FloatArray                                                 (Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
//		bool                                               Reversed                                                   (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void ULowEntryExtendedStandardLibrary::STATIC_SortFloatArrayDirectly(TArray<float>* FloatArray, bool Reversed)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function LowEntryExtendedStandardLibrary.LowEntryExtendedStandardLibrary.SortFloatArrayDirectly");

	ULowEntryExtendedStandardLibrary_SortFloatArrayDirectly_Params params {};
	params.Reversed = Reversed;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (FloatArray != nullptr)
		*FloatArray = params.FloatArray;

}


// Function:
//		Offset -> 0x00477490
//		Name   -> Function LowEntryExtendedStandardLibrary.LowEntryExtendedStandardLibrary.SortFloatArray
//		Flags  -> (Final, Native, Static, Public, HasOutParms, BlueprintCallable, BlueprintPure)
// Parameters:
//		TArray<float>                                      FloatArray                                                 (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
//		bool                                               Reversed                                                   (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		TArray<float>                                      ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, NativeAccessSpecifierPublic)
TArray<float> ULowEntryExtendedStandardLibrary::STATIC_SortFloatArray(TArray<float> FloatArray, bool Reversed)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function LowEntryExtendedStandardLibrary.LowEntryExtendedStandardLibrary.SortFloatArray");

	ULowEntryExtendedStandardLibrary_SortFloatArray_Params params {};
	params.FloatArray = FloatArray;
	params.Reversed = Reversed;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x004773A0
//		Name   -> Function LowEntryExtendedStandardLibrary.LowEntryExtendedStandardLibrary.SortDateTimeArrayDirectly
//		Flags  -> (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
// Parameters:
//		TArray<struct FDateTime>                           DateTimeArray                                              (Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
//		bool                                               Reversed                                                   (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void ULowEntryExtendedStandardLibrary::STATIC_SortDateTimeArrayDirectly(TArray<struct FDateTime>* DateTimeArray, bool Reversed)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function LowEntryExtendedStandardLibrary.LowEntryExtendedStandardLibrary.SortDateTimeArrayDirectly");

	ULowEntryExtendedStandardLibrary_SortDateTimeArrayDirectly_Params params {};
	params.Reversed = Reversed;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (DateTimeArray != nullptr)
		*DateTimeArray = params.DateTimeArray;

}


// Function:
//		Offset -> 0x00477260
//		Name   -> Function LowEntryExtendedStandardLibrary.LowEntryExtendedStandardLibrary.SortDateTimeArray
//		Flags  -> (Final, Native, Static, Public, HasOutParms, BlueprintCallable, BlueprintPure)
// Parameters:
//		TArray<struct FDateTime>                           DateTimeArray                                              (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
//		bool                                               Reversed                                                   (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		TArray<struct FDateTime>                           ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, NativeAccessSpecifierPublic)
TArray<struct FDateTime> ULowEntryExtendedStandardLibrary::STATIC_SortDateTimeArray(TArray<struct FDateTime> DateTimeArray, bool Reversed)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function LowEntryExtendedStandardLibrary.LowEntryExtendedStandardLibrary.SortDateTimeArray");

	ULowEntryExtendedStandardLibrary_SortDateTimeArray_Params params {};
	params.DateTimeArray = DateTimeArray;
	params.Reversed = Reversed;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00477170
//		Name   -> Function LowEntryExtendedStandardLibrary.LowEntryExtendedStandardLibrary.SortByteArrayDirectly
//		Flags  -> (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
// Parameters:
//		TArray<unsigned char>                              ByteArray                                                  (Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
//		bool                                               Reversed                                                   (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void ULowEntryExtendedStandardLibrary::STATIC_SortByteArrayDirectly(TArray<unsigned char>* ByteArray, bool Reversed)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function LowEntryExtendedStandardLibrary.LowEntryExtendedStandardLibrary.SortByteArrayDirectly");

	ULowEntryExtendedStandardLibrary_SortByteArrayDirectly_Params params {};
	params.Reversed = Reversed;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (ByteArray != nullptr)
		*ByteArray = params.ByteArray;

}


// Function:
//		Offset -> 0x00477030
//		Name   -> Function LowEntryExtendedStandardLibrary.LowEntryExtendedStandardLibrary.SortByteArray
//		Flags  -> (Final, Native, Static, Public, HasOutParms, BlueprintCallable, BlueprintPure)
// Parameters:
//		TArray<unsigned char>                              ByteArray                                                  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
//		bool                                               Reversed                                                   (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		TArray<unsigned char>                              ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, NativeAccessSpecifierPublic)
TArray<unsigned char> ULowEntryExtendedStandardLibrary::STATIC_SortByteArray(TArray<unsigned char> ByteArray, bool Reversed)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function LowEntryExtendedStandardLibrary.LowEntryExtendedStandardLibrary.SortByteArray");

	ULowEntryExtendedStandardLibrary_SortByteArray_Params params {};
	params.ByteArray = ByteArray;
	params.Reversed = Reversed;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00476FA0
//		Name   -> Function LowEntryExtendedStandardLibrary.LowEntryExtendedStandardLibrary.SimpleKismetSystemLibraryPrintString
//		Flags  -> (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
//		struct FString                                     inString                                                   (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void ULowEntryExtendedStandardLibrary::STATIC_SimpleKismetSystemLibraryPrintString(const struct FString& inString)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function LowEntryExtendedStandardLibrary.LowEntryExtendedStandardLibrary.SimpleKismetSystemLibraryPrintString");

	ULowEntryExtendedStandardLibrary_SimpleKismetSystemLibraryPrintString_Params params {};
	params.inString = inString;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x0046DDE0
//		Name   -> Function LowEntryExtendedStandardLibrary.LowEntryExtendedStandardLibrary.ShippingBuild
//		Flags  -> (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
//		bool                                               ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool ULowEntryExtendedStandardLibrary::STATIC_ShippingBuild()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function LowEntryExtendedStandardLibrary.LowEntryExtendedStandardLibrary.ShippingBuild");

	ULowEntryExtendedStandardLibrary_ShippingBuild_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00476E40
//		Name   -> Function LowEntryExtendedStandardLibrary.LowEntryExtendedStandardLibrary.Sha512
//		Flags  -> (Final, Native, Static, Public, HasOutParms, BlueprintCallable, BlueprintPure)
// Parameters:
//		TArray<unsigned char>                              ByteArray                                                  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
//		int                                                Index                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		int                                                Length                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		TArray<unsigned char>                              ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, NativeAccessSpecifierPublic)
TArray<unsigned char> ULowEntryExtendedStandardLibrary::STATIC_Sha512(TArray<unsigned char> ByteArray, int Index, int Length)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function LowEntryExtendedStandardLibrary.LowEntryExtendedStandardLibrary.Sha512");

	ULowEntryExtendedStandardLibrary_Sha512_Params params {};
	params.ByteArray = ByteArray;
	params.Index = Index;
	params.Length = Length;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00476CE0
//		Name   -> Function LowEntryExtendedStandardLibrary.LowEntryExtendedStandardLibrary.Sha256
//		Flags  -> (Final, Native, Static, Public, HasOutParms, BlueprintCallable, BlueprintPure)
// Parameters:
//		TArray<unsigned char>                              ByteArray                                                  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
//		int                                                Index                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		int                                                Length                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		TArray<unsigned char>                              ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, NativeAccessSpecifierPublic)
TArray<unsigned char> ULowEntryExtendedStandardLibrary::STATIC_Sha256(TArray<unsigned char> ByteArray, int Index, int Length)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function LowEntryExtendedStandardLibrary.LowEntryExtendedStandardLibrary.Sha256");

	ULowEntryExtendedStandardLibrary_Sha256_Params params {};
	params.ByteArray = ByteArray;
	params.Index = Index;
	params.Length = Length;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00476B80
//		Name   -> Function LowEntryExtendedStandardLibrary.LowEntryExtendedStandardLibrary.Sha1
//		Flags  -> (Final, Native, Static, Public, HasOutParms, BlueprintCallable, BlueprintPure)
// Parameters:
//		TArray<unsigned char>                              ByteArray                                                  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
//		int                                                Index                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		int                                                Length                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		TArray<unsigned char>                              ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, NativeAccessSpecifierPublic)
TArray<unsigned char> ULowEntryExtendedStandardLibrary::STATIC_Sha1(TArray<unsigned char> ByteArray, int Index, int Length)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function LowEntryExtendedStandardLibrary.LowEntryExtendedStandardLibrary.Sha1");

	ULowEntryExtendedStandardLibrary_Sha1_Params params {};
	params.ByteArray = ByteArray;
	params.Index = Index;
	params.Length = Length;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00476B00
//		Name   -> Function LowEntryExtendedStandardLibrary.LowEntryExtendedStandardLibrary.SetWorldRenderingEnabled
//		Flags  -> (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
//		bool                                               Enabled                                                    (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void ULowEntryExtendedStandardLibrary::STATIC_SetWorldRenderingEnabled(bool Enabled)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function LowEntryExtendedStandardLibrary.LowEntryExtendedStandardLibrary.SetWorldRenderingEnabled");

	ULowEntryExtendedStandardLibrary_SetWorldRenderingEnabled_Params params {};
	params.Enabled = Enabled;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00476A50
//		Name   -> Function LowEntryExtendedStandardLibrary.LowEntryExtendedStandardLibrary.SetWindowSize
//		Flags  -> (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
//		int                                                Width                                                      (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		int                                                Height                                                     (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void ULowEntryExtendedStandardLibrary::STATIC_SetWindowSize(int Width, int Height)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function LowEntryExtendedStandardLibrary.LowEntryExtendedStandardLibrary.SetWindowSize");

	ULowEntryExtendedStandardLibrary_SetWindowSize_Params params {};
	params.Width = Width;
	params.Height = Height;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x004769A0
//		Name   -> Function LowEntryExtendedStandardLibrary.LowEntryExtendedStandardLibrary.SetWindowPosition
//		Flags  -> (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
//		int                                                X                                                          (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		int                                                Y                                                          (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void ULowEntryExtendedStandardLibrary::STATIC_SetWindowPosition(int X, int Y)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function LowEntryExtendedStandardLibrary.LowEntryExtendedStandardLibrary.SetWindowPosition");

	ULowEntryExtendedStandardLibrary_SetWindowPosition_Params params {};
	params.X = X;
	params.Y = Y;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x004768F0
//		Name   -> Function LowEntryExtendedStandardLibrary.LowEntryExtendedStandardLibrary.SetWindowPositiomInPercentagesCentered
//		Flags  -> (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
//		float                                              X                                                          (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		float                                              Y                                                          (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void ULowEntryExtendedStandardLibrary::STATIC_SetWindowPositiomInPercentagesCentered(float X, float Y)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function LowEntryExtendedStandardLibrary.LowEntryExtendedStandardLibrary.SetWindowPositiomInPercentagesCentered");

	ULowEntryExtendedStandardLibrary_SetWindowPositiomInPercentagesCentered_Params params {};
	params.X = X;
	params.Y = Y;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00476820
//		Name   -> Function LowEntryExtendedStandardLibrary.LowEntryExtendedStandardLibrary.SetWindowMode
//		Flags  -> (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
//		bool                                               Fullscreen                                                 (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		bool                                               IsFullscreenWindowed                                       (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void ULowEntryExtendedStandardLibrary::STATIC_SetWindowMode(bool Fullscreen, bool IsFullscreenWindowed)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function LowEntryExtendedStandardLibrary.LowEntryExtendedStandardLibrary.SetWindowMode");

	ULowEntryExtendedStandardLibrary_SetWindowMode_Params params {};
	params.Fullscreen = Fullscreen;
	params.IsFullscreenWindowed = IsFullscreenWindowed;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x004767B0
//		Name   -> Function LowEntryExtendedStandardLibrary.LowEntryExtendedStandardLibrary.SetSplitScreenType_TwoPlayers
//		Flags  -> (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
//		LowEntryExtendedStandardLibrary_ELowEntrySplitScreenTypeTwoPlayers Type                                                       (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void ULowEntryExtendedStandardLibrary::STATIC_SetSplitScreenType_TwoPlayers(LowEntryExtendedStandardLibrary_ELowEntrySplitScreenTypeTwoPlayers Type)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function LowEntryExtendedStandardLibrary.LowEntryExtendedStandardLibrary.SetSplitScreenType_TwoPlayers");

	ULowEntryExtendedStandardLibrary_SetSplitScreenType_TwoPlayers_Params params {};
	params.Type = Type;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00476740
//		Name   -> Function LowEntryExtendedStandardLibrary.LowEntryExtendedStandardLibrary.SetSplitScreenType_ThreePlayers
//		Flags  -> (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
//		LowEntryExtendedStandardLibrary_ELowEntrySplitScreenTypeThreePlayers Type                                                       (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void ULowEntryExtendedStandardLibrary::STATIC_SetSplitScreenType_ThreePlayers(LowEntryExtendedStandardLibrary_ELowEntrySplitScreenTypeThreePlayers Type)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function LowEntryExtendedStandardLibrary.LowEntryExtendedStandardLibrary.SetSplitScreenType_ThreePlayers");

	ULowEntryExtendedStandardLibrary_SetSplitScreenType_ThreePlayers_Params params {};
	params.Type = Type;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x004766C0
//		Name   -> Function LowEntryExtendedStandardLibrary.LowEntryExtendedStandardLibrary.SetSplitScreenEnabled
//		Flags  -> (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
//		bool                                               Enabled                                                    (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void ULowEntryExtendedStandardLibrary::STATIC_SetSplitScreenEnabled(bool Enabled)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function LowEntryExtendedStandardLibrary.LowEntryExtendedStandardLibrary.SetSplitScreenEnabled");

	ULowEntryExtendedStandardLibrary_SetSplitScreenEnabled_Params params {};
	params.Enabled = Enabled;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00476610
//		Name   -> Function LowEntryExtendedStandardLibrary.LowEntryExtendedStandardLibrary.SetMousePositionInPercentages
//		Flags  -> (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
//		float                                              X                                                          (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		float                                              Y                                                          (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void ULowEntryExtendedStandardLibrary::STATIC_SetMousePositionInPercentages(float X, float Y)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function LowEntryExtendedStandardLibrary.LowEntryExtendedStandardLibrary.SetMousePositionInPercentages");

	ULowEntryExtendedStandardLibrary_SetMousePositionInPercentages_Params params {};
	params.X = X;
	params.Y = Y;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00476560
//		Name   -> Function LowEntryExtendedStandardLibrary.LowEntryExtendedStandardLibrary.SetMousePosition
//		Flags  -> (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
//		int                                                X                                                          (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		int                                                Y                                                          (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void ULowEntryExtendedStandardLibrary::STATIC_SetMousePosition(int X, int Y)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function LowEntryExtendedStandardLibrary.LowEntryExtendedStandardLibrary.SetMousePosition");

	ULowEntryExtendedStandardLibrary_SetMousePosition_Params params {};
	params.X = X;
	params.Y = Y;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x004764E0
//		Name   -> Function LowEntryExtendedStandardLibrary.LowEntryExtendedStandardLibrary.SetMouseLockedToViewport
//		Flags  -> (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
//		bool                                               Locked                                                     (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void ULowEntryExtendedStandardLibrary::STATIC_SetMouseLockedToViewport(bool Locked)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function LowEntryExtendedStandardLibrary.LowEntryExtendedStandardLibrary.SetMouseLockedToViewport");

	ULowEntryExtendedStandardLibrary_SetMouseLockedToViewport_Params params {};
	params.Locked = Locked;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00476430
//		Name   -> Function LowEntryExtendedStandardLibrary.LowEntryExtendedStandardLibrary.SetGenericTeamId
//		Flags  -> (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
//		class AActor*                                      Target                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		unsigned char                                      TeamID                                                     (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void ULowEntryExtendedStandardLibrary::STATIC_SetGenericTeamId(class AActor* Target, unsigned char TeamID)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function LowEntryExtendedStandardLibrary.LowEntryExtendedStandardLibrary.SetGenericTeamId");

	ULowEntryExtendedStandardLibrary_SetGenericTeamId_Params params {};
	params.Target = Target;
	params.TeamID = TeamID;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x004761B0
//		Name   -> Function LowEntryExtendedStandardLibrary.LowEntryExtendedStandardLibrary.ServerChangeMap
//		Flags  -> (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
//		class UObject*                                     WorldContextObject                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		struct FString                                     Map                                                        (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		struct FString                                     Args                                                       (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		class APlayerController*                           SpecificPlayer                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void ULowEntryExtendedStandardLibrary::STATIC_ServerChangeMap(class UObject* WorldContextObject, const struct FString& Map, const struct FString& Args, class APlayerController* SpecificPlayer)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function LowEntryExtendedStandardLibrary.LowEntryExtendedStandardLibrary.ServerChangeMap");

	ULowEntryExtendedStandardLibrary_ServerChangeMap_Params params {};
	params.WorldContextObject = WorldContextObject;
	params.Map = Map;
	params.Args = Args;
	params.SpecificPlayer = SpecificPlayer;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00475EA0
//		Name   -> Function LowEntryExtendedStandardLibrary.LowEntryExtendedStandardLibrary.SceneCaptureComponent2DToPixels
//		Flags  -> (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
// Parameters:
//		class USceneCaptureComponent2D*                    SceneCaptureComponent2D                                    (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		int                                                Width                                                      (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		int                                                Height                                                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		TArray<struct FColor>                              Pixels                                                     (Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
void ULowEntryExtendedStandardLibrary::STATIC_SceneCaptureComponent2DToPixels(class USceneCaptureComponent2D* SceneCaptureComponent2D, int* Width, int* Height, TArray<struct FColor>* Pixels)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function LowEntryExtendedStandardLibrary.LowEntryExtendedStandardLibrary.SceneCaptureComponent2DToPixels");

	ULowEntryExtendedStandardLibrary_SceneCaptureComponent2DToPixels_Params params {};
	params.SceneCaptureComponent2D = SceneCaptureComponent2D;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Width != nullptr)
		*Width = params.Width;
	if (Height != nullptr)
		*Height = params.Height;
	if (Pixels != nullptr)
		*Pixels = params.Pixels;

}


// Function:
//		Offset -> 0x00475D40
//		Name   -> Function LowEntryExtendedStandardLibrary.LowEntryExtendedStandardLibrary.SceneCaptureComponent2DToBytes
//		Flags  -> (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
// Parameters:
//		class USceneCaptureComponent2D*                    SceneCaptureComponent2D                                    (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		LowEntryExtendedStandardLibrary_ELowEntryImageFormat ImageFormat                                                (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		TArray<unsigned char>                              ByteArray                                                  (Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
//		int                                                CompressionQuality                                         (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void ULowEntryExtendedStandardLibrary::STATIC_SceneCaptureComponent2DToBytes(class USceneCaptureComponent2D* SceneCaptureComponent2D, LowEntryExtendedStandardLibrary_ELowEntryImageFormat ImageFormat, TArray<unsigned char>* ByteArray, int CompressionQuality)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function LowEntryExtendedStandardLibrary.LowEntryExtendedStandardLibrary.SceneCaptureComponent2DToBytes");

	ULowEntryExtendedStandardLibrary_SceneCaptureComponent2DToBytes_Params params {};
	params.SceneCaptureComponent2D = SceneCaptureComponent2D;
	params.ImageFormat = ImageFormat;
	params.CompressionQuality = CompressionQuality;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (ByteArray != nullptr)
		*ByteArray = params.ByteArray;

}


// Function:
//		Offset -> 0x004760F0
//		Name   -> Function LowEntryExtendedStandardLibrary.LowEntryExtendedStandardLibrary.SceneCaptureComponent2D_SetFov
//		Flags  -> (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
//		class USceneCaptureComponent2D*                    SceneCaptureComponent2D                                    (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		float                                              FOV                                                        (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void ULowEntryExtendedStandardLibrary::STATIC_SceneCaptureComponent2D_SetFov(class USceneCaptureComponent2D* SceneCaptureComponent2D, float FOV)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function LowEntryExtendedStandardLibrary.LowEntryExtendedStandardLibrary.SceneCaptureComponent2D_SetFov");

	ULowEntryExtendedStandardLibrary_SceneCaptureComponent2D_SetFov_Params params {};
	params.SceneCaptureComponent2D = SceneCaptureComponent2D;
	params.FOV = FOV;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00476020
//		Name   -> Function LowEntryExtendedStandardLibrary.LowEntryExtendedStandardLibrary.SceneCaptureComponent2D_GetFov
//		Flags  -> (Final, Native, Static, Public, HasOutParms, BlueprintCallable, BlueprintPure)
// Parameters:
//		class USceneCaptureComponent2D*                    SceneCaptureComponent2D                                    (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		float                                              FOV                                                        (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void ULowEntryExtendedStandardLibrary::STATIC_SceneCaptureComponent2D_GetFov(class USceneCaptureComponent2D* SceneCaptureComponent2D, float* FOV)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function LowEntryExtendedStandardLibrary.LowEntryExtendedStandardLibrary.SceneCaptureComponent2D_GetFov");

	ULowEntryExtendedStandardLibrary_SceneCaptureComponent2D_GetFov_Params params {};
	params.SceneCaptureComponent2D = SceneCaptureComponent2D;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (FOV != nullptr)
		*FOV = params.FOV;

}


// Function:
//		Offset -> 0x00475A30
//		Name   -> Function LowEntryExtendedStandardLibrary.LowEntryExtendedStandardLibrary.SceneCapture2DToPixels
//		Flags  -> (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
// Parameters:
//		class ASceneCapture2D*                             SceneCapture2D                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		int                                                Width                                                      (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		int                                                Height                                                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		TArray<struct FColor>                              Pixels                                                     (Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
void ULowEntryExtendedStandardLibrary::STATIC_SceneCapture2DToPixels(class ASceneCapture2D* SceneCapture2D, int* Width, int* Height, TArray<struct FColor>* Pixels)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function LowEntryExtendedStandardLibrary.LowEntryExtendedStandardLibrary.SceneCapture2DToPixels");

	ULowEntryExtendedStandardLibrary_SceneCapture2DToPixels_Params params {};
	params.SceneCapture2D = SceneCapture2D;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Width != nullptr)
		*Width = params.Width;
	if (Height != nullptr)
		*Height = params.Height;
	if (Pixels != nullptr)
		*Pixels = params.Pixels;

}


// Function:
//		Offset -> 0x004758D0
//		Name   -> Function LowEntryExtendedStandardLibrary.LowEntryExtendedStandardLibrary.SceneCapture2DToBytes
//		Flags  -> (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
// Parameters:
//		class ASceneCapture2D*                             SceneCapture2D                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		LowEntryExtendedStandardLibrary_ELowEntryImageFormat ImageFormat                                                (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		TArray<unsigned char>                              ByteArray                                                  (Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
//		int                                                CompressionQuality                                         (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void ULowEntryExtendedStandardLibrary::STATIC_SceneCapture2DToBytes(class ASceneCapture2D* SceneCapture2D, LowEntryExtendedStandardLibrary_ELowEntryImageFormat ImageFormat, TArray<unsigned char>* ByteArray, int CompressionQuality)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function LowEntryExtendedStandardLibrary.LowEntryExtendedStandardLibrary.SceneCapture2DToBytes");

	ULowEntryExtendedStandardLibrary_SceneCapture2DToBytes_Params params {};
	params.SceneCapture2D = SceneCapture2D;
	params.ImageFormat = ImageFormat;
	params.CompressionQuality = CompressionQuality;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (ByteArray != nullptr)
		*ByteArray = params.ByteArray;

}


// Function:
//		Offset -> 0x00475C80
//		Name   -> Function LowEntryExtendedStandardLibrary.LowEntryExtendedStandardLibrary.SceneCapture2D_SetFov
//		Flags  -> (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
//		class ASceneCapture2D*                             SceneCapture2D                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		float                                              FOV                                                        (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void ULowEntryExtendedStandardLibrary::STATIC_SceneCapture2D_SetFov(class ASceneCapture2D* SceneCapture2D, float FOV)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function LowEntryExtendedStandardLibrary.LowEntryExtendedStandardLibrary.SceneCapture2D_SetFov");

	ULowEntryExtendedStandardLibrary_SceneCapture2D_SetFov_Params params {};
	params.SceneCapture2D = SceneCapture2D;
	params.FOV = FOV;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00475BB0
//		Name   -> Function LowEntryExtendedStandardLibrary.LowEntryExtendedStandardLibrary.SceneCapture2D_GetFov
//		Flags  -> (Final, Native, Static, Public, HasOutParms, BlueprintCallable, BlueprintPure)
// Parameters:
//		class ASceneCapture2D*                             SceneCapture2D                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		float                                              FOV                                                        (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void ULowEntryExtendedStandardLibrary::STATIC_SceneCapture2D_GetFov(class ASceneCapture2D* SceneCapture2D, float* FOV)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function LowEntryExtendedStandardLibrary.LowEntryExtendedStandardLibrary.SceneCapture2D_GetFov");

	ULowEntryExtendedStandardLibrary_SceneCapture2D_GetFov_Params params {};
	params.SceneCapture2D = SceneCapture2D;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (FOV != nullptr)
		*FOV = params.FOV;

}


// Function:
//		Offset -> 0x00475800
//		Name   -> Function LowEntryExtendedStandardLibrary.LowEntryExtendedStandardLibrary.RoundDecimals
//		Flags  -> (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
//		float                                              Number                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		int                                                Decimals                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		float                                              ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
float ULowEntryExtendedStandardLibrary::STATIC_RoundDecimals(float Number, int Decimals)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function LowEntryExtendedStandardLibrary.LowEntryExtendedStandardLibrary.RoundDecimals");

	ULowEntryExtendedStandardLibrary_RoundDecimals_Params params {};
	params.Number = Number;
	params.Decimals = Decimals;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x004756B0
//		Name   -> Function LowEntryExtendedStandardLibrary.LowEntryExtendedStandardLibrary.RetriggerableRandomDelayFrames
//		Flags  -> (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
//		class UObject*                                     WorldContextObject                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		int                                                MinFrames                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		int                                                MaxFrames                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		struct FLatentActionInfo                           LatentInfo                                                 (Parm, NoDestructor, NativeAccessSpecifierPublic)
void ULowEntryExtendedStandardLibrary::STATIC_RetriggerableRandomDelayFrames(class UObject* WorldContextObject, int MinFrames, int MaxFrames, const struct FLatentActionInfo& LatentInfo)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function LowEntryExtendedStandardLibrary.LowEntryExtendedStandardLibrary.RetriggerableRandomDelayFrames");

	ULowEntryExtendedStandardLibrary_RetriggerableRandomDelayFrames_Params params {};
	params.WorldContextObject = WorldContextObject;
	params.MinFrames = MinFrames;
	params.MaxFrames = MaxFrames;
	params.LatentInfo = LatentInfo;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00475560
//		Name   -> Function LowEntryExtendedStandardLibrary.LowEntryExtendedStandardLibrary.RetriggerableRandomDelay
//		Flags  -> (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
//		class UObject*                                     WorldContextObject                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		float                                              MinDuration                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		float                                              MaxDuration                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		struct FLatentActionInfo                           LatentInfo                                                 (Parm, NoDestructor, NativeAccessSpecifierPublic)
void ULowEntryExtendedStandardLibrary::STATIC_RetriggerableRandomDelay(class UObject* WorldContextObject, float MinDuration, float MaxDuration, const struct FLatentActionInfo& LatentInfo)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function LowEntryExtendedStandardLibrary.LowEntryExtendedStandardLibrary.RetriggerableRandomDelay");

	ULowEntryExtendedStandardLibrary_RetriggerableRandomDelay_Params params {};
	params.WorldContextObject = WorldContextObject;
	params.MinDuration = MinDuration;
	params.MaxDuration = MaxDuration;
	params.LatentInfo = LatentInfo;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00475440
//		Name   -> Function LowEntryExtendedStandardLibrary.LowEntryExtendedStandardLibrary.RetriggerableDelayFrames
//		Flags  -> (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
//		class UObject*                                     WorldContextObject                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		int                                                Frames                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		struct FLatentActionInfo                           LatentInfo                                                 (Parm, NoDestructor, NativeAccessSpecifierPublic)
void ULowEntryExtendedStandardLibrary::STATIC_RetriggerableDelayFrames(class UObject* WorldContextObject, int Frames, const struct FLatentActionInfo& LatentInfo)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function LowEntryExtendedStandardLibrary.LowEntryExtendedStandardLibrary.RetriggerableDelayFrames");

	ULowEntryExtendedStandardLibrary_RetriggerableDelayFrames_Params params {};
	params.WorldContextObject = WorldContextObject;
	params.Frames = Frames;
	params.LatentInfo = LatentInfo;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00475200
//		Name   -> Function LowEntryExtendedStandardLibrary.LowEntryExtendedStandardLibrary.ReplaceCharactersExcept
//		Flags  -> (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
//		struct FString                                     String                                                     (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		struct FString                                     ReplacementCharacter                                       (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		bool                                               KeepLowercaseAZ                                            (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		bool                                               KeepUppercaseAZ                                            (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		bool                                               KeepNumbers                                                (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		struct FString                                     OtherCharactersToKeep                                      (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		struct FString                                     ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
struct FString ULowEntryExtendedStandardLibrary::STATIC_ReplaceCharactersExcept(const struct FString& String, const struct FString& ReplacementCharacter, bool KeepLowercaseAZ, bool KeepUppercaseAZ, bool KeepNumbers, const struct FString& OtherCharactersToKeep)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function LowEntryExtendedStandardLibrary.LowEntryExtendedStandardLibrary.ReplaceCharactersExcept");

	ULowEntryExtendedStandardLibrary_ReplaceCharactersExcept_Params params {};
	params.String = String;
	params.ReplacementCharacter = ReplacementCharacter;
	params.KeepLowercaseAZ = KeepLowercaseAZ;
	params.KeepUppercaseAZ = KeepUppercaseAZ;
	params.KeepNumbers = KeepNumbers;
	params.OtherCharactersToKeep = OtherCharactersToKeep;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00475010
//		Name   -> Function LowEntryExtendedStandardLibrary.LowEntryExtendedStandardLibrary.RemoveCharactersExcept
//		Flags  -> (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
//		struct FString                                     String                                                     (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		bool                                               KeepLowercaseAZ                                            (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		bool                                               KeepUppercaseAZ                                            (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		bool                                               KeepNumbers                                                (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		struct FString                                     OtherCharactersToKeep                                      (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		struct FString                                     ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
struct FString ULowEntryExtendedStandardLibrary::STATIC_RemoveCharactersExcept(const struct FString& String, bool KeepLowercaseAZ, bool KeepUppercaseAZ, bool KeepNumbers, const struct FString& OtherCharactersToKeep)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function LowEntryExtendedStandardLibrary.LowEntryExtendedStandardLibrary.RemoveCharactersExcept");

	ULowEntryExtendedStandardLibrary_RemoveCharactersExcept_Params params {};
	params.String = String;
	params.KeepLowercaseAZ = KeepLowercaseAZ;
	params.KeepUppercaseAZ = KeepUppercaseAZ;
	params.KeepNumbers = KeepNumbers;
	params.OtherCharactersToKeep = OtherCharactersToKeep;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00474E90
//		Name   -> Function LowEntryExtendedStandardLibrary.LowEntryExtendedStandardLibrary.RegexReplace
//		Flags  -> (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
//		struct FString                                     String                                                     (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		struct FString                                     Pattern                                                    (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		struct FString                                     Replacement                                                (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		struct FString                                     ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
struct FString ULowEntryExtendedStandardLibrary::STATIC_RegexReplace(const struct FString& String, const struct FString& Pattern, const struct FString& Replacement)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function LowEntryExtendedStandardLibrary.LowEntryExtendedStandardLibrary.RegexReplace");

	ULowEntryExtendedStandardLibrary_RegexReplace_Params params {};
	params.String = String;
	params.Pattern = Pattern;
	params.Replacement = Replacement;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00474DA0
//		Name   -> Function LowEntryExtendedStandardLibrary.LowEntryExtendedStandardLibrary.RegexMatch
//		Flags  -> (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
//		struct FString                                     String                                                     (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		struct FString                                     Pattern                                                    (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		bool                                               ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool ULowEntryExtendedStandardLibrary::STATIC_RegexMatch(const struct FString& String, const struct FString& Pattern)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function LowEntryExtendedStandardLibrary.LowEntryExtendedStandardLibrary.RegexMatch");

	ULowEntryExtendedStandardLibrary_RegexMatch_Params params {};
	params.String = String;
	params.Pattern = Pattern;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00474B80
//		Name   -> Function LowEntryExtendedStandardLibrary.LowEntryExtendedStandardLibrary.RegexGetMatches
//		Flags  -> (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
//		struct FString                                     String                                                     (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		struct FString                                     Pattern                                                    (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		TArray<struct FLowEntryRegexMatch>                 ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, NativeAccessSpecifierPublic)
TArray<struct FLowEntryRegexMatch> ULowEntryExtendedStandardLibrary::STATIC_RegexGetMatches(const struct FString& String, const struct FString& Pattern)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function LowEntryExtendedStandardLibrary.LowEntryExtendedStandardLibrary.RegexGetMatches");

	ULowEntryExtendedStandardLibrary_RegexGetMatches_Params params {};
	params.String = String;
	params.Pattern = Pattern;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00474A90
//		Name   -> Function LowEntryExtendedStandardLibrary.LowEntryExtendedStandardLibrary.RegexCount
//		Flags  -> (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
//		struct FString                                     String                                                     (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		struct FString                                     Pattern                                                    (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		int                                                ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
int ULowEntryExtendedStandardLibrary::STATIC_RegexCount(const struct FString& String, const struct FString& Pattern)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function LowEntryExtendedStandardLibrary.LowEntryExtendedStandardLibrary.RegexCount");

	ULowEntryExtendedStandardLibrary_RegexCount_Params params {};
	params.String = String;
	params.Pattern = Pattern;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00474940
//		Name   -> Function LowEntryExtendedStandardLibrary.LowEntryExtendedStandardLibrary.RandomDelayFrames
//		Flags  -> (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
//		class UObject*                                     WorldContextObject                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		int                                                MinFrames                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		int                                                MaxFrames                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		struct FLatentActionInfo                           LatentInfo                                                 (Parm, NoDestructor, NativeAccessSpecifierPublic)
void ULowEntryExtendedStandardLibrary::STATIC_RandomDelayFrames(class UObject* WorldContextObject, int MinFrames, int MaxFrames, const struct FLatentActionInfo& LatentInfo)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function LowEntryExtendedStandardLibrary.LowEntryExtendedStandardLibrary.RandomDelayFrames");

	ULowEntryExtendedStandardLibrary_RandomDelayFrames_Params params {};
	params.WorldContextObject = WorldContextObject;
	params.MinFrames = MinFrames;
	params.MaxFrames = MaxFrames;
	params.LatentInfo = LatentInfo;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x004747F0
//		Name   -> Function LowEntryExtendedStandardLibrary.LowEntryExtendedStandardLibrary.RandomDelay
//		Flags  -> (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
//		class UObject*                                     WorldContextObject                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		float                                              MinDuration                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		float                                              MaxDuration                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		struct FLatentActionInfo                           LatentInfo                                                 (Parm, NoDestructor, NativeAccessSpecifierPublic)
void ULowEntryExtendedStandardLibrary::STATIC_RandomDelay(class UObject* WorldContextObject, float MinDuration, float MaxDuration, const struct FLatentActionInfo& LatentInfo)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function LowEntryExtendedStandardLibrary.LowEntryExtendedStandardLibrary.RandomDelay");

	ULowEntryExtendedStandardLibrary_RandomDelay_Params params {};
	params.WorldContextObject = WorldContextObject;
	params.MinDuration = MinDuration;
	params.MaxDuration = MaxDuration;
	params.LatentInfo = LatentInfo;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x004746B0
//		Name   -> Function LowEntryExtendedStandardLibrary.LowEntryExtendedStandardLibrary.QueueExecutions
//		Flags  -> (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
// Parameters:
//		class UObject*                                     WorldContextObject                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		class ULowEntryExecutionQueue*                     Queue                                                      (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		struct FLatentActionInfo                           LatentInfo                                                 (Parm, NoDestructor, NativeAccessSpecifierPublic)
void ULowEntryExtendedStandardLibrary::STATIC_QueueExecutions(class UObject* WorldContextObject, class ULowEntryExecutionQueue** Queue, const struct FLatentActionInfo& LatentInfo)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function LowEntryExtendedStandardLibrary.LowEntryExtendedStandardLibrary.QueueExecutions");

	ULowEntryExtendedStandardLibrary_QueueExecutions_Params params {};
	params.WorldContextObject = WorldContextObject;
	params.LatentInfo = LatentInfo;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Queue != nullptr)
		*Queue = params.Queue;

}


// Function:
//		Offset -> 0x00467660
//		Name   -> Function LowEntryExtendedStandardLibrary.LowEntryExtendedStandardLibrary.Ps4Platform
//		Flags  -> (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
//		bool                                               ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool ULowEntryExtendedStandardLibrary::STATIC_Ps4Platform()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function LowEntryExtendedStandardLibrary.LowEntryExtendedStandardLibrary.Ps4Platform");

	ULowEntryExtendedStandardLibrary_Ps4Platform_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00474590
//		Name   -> Function LowEntryExtendedStandardLibrary.LowEntryExtendedStandardLibrary.PlayerControllerGetLocalPlayer
//		Flags  -> (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
// Parameters:
//		class APlayerController*                           PlayerController                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		bool                                               Success                                                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		class ULocalPlayer*                                LocalPlayer                                                (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void ULowEntryExtendedStandardLibrary::STATIC_PlayerControllerGetLocalPlayer(class APlayerController* PlayerController, bool* Success, class ULocalPlayer** LocalPlayer)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function LowEntryExtendedStandardLibrary.LowEntryExtendedStandardLibrary.PlayerControllerGetLocalPlayer");

	ULowEntryExtendedStandardLibrary_PlayerControllerGetLocalPlayer_Params params {};
	params.PlayerController = PlayerController;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Success != nullptr)
		*Success = params.Success;
	if (LocalPlayer != nullptr)
		*LocalPlayer = params.LocalPlayer;

}


// Function:
//		Offset -> 0x00474470
//		Name   -> Function LowEntryExtendedStandardLibrary.LowEntryExtendedStandardLibrary.PixelsToTexture2D
//		Flags  -> (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
// Parameters:
//		int                                                Width                                                      (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		int                                                Height                                                     (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		TArray<struct FColor>                              Pixels                                                     (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
//		class UTexture2D*                                  ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
class UTexture2D* ULowEntryExtendedStandardLibrary::STATIC_PixelsToTexture2D(int Width, int Height, TArray<struct FColor> Pixels)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function LowEntryExtendedStandardLibrary.LowEntryExtendedStandardLibrary.PixelsToTexture2D");

	ULowEntryExtendedStandardLibrary_PixelsToTexture2D_Params params {};
	params.Width = Width;
	params.Height = Height;
	params.Pixels = Pixels;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x004742A0
//		Name   -> Function LowEntryExtendedStandardLibrary.LowEntryExtendedStandardLibrary.PixelsToExistingTexture2D
//		Flags  -> (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
// Parameters:
//		bool                                               ReusedGivenTexture2D                                       (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		class UTexture2D*                                  Texture2D                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		int                                                Width                                                      (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		int                                                Height                                                     (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		TArray<struct FColor>                              Pixels                                                     (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
//		class UTexture2D*                                  ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
class UTexture2D* ULowEntryExtendedStandardLibrary::STATIC_PixelsToExistingTexture2D(bool* ReusedGivenTexture2D, class UTexture2D* Texture2D, int Width, int Height, TArray<struct FColor> Pixels)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function LowEntryExtendedStandardLibrary.LowEntryExtendedStandardLibrary.PixelsToExistingTexture2D");

	ULowEntryExtendedStandardLibrary_PixelsToExistingTexture2D_Params params {};
	params.Texture2D = Texture2D;
	params.Width = Width;
	params.Height = Height;
	params.Pixels = Pixels;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (ReusedGivenTexture2D != nullptr)
		*ReusedGivenTexture2D = params.ReusedGivenTexture2D;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x004740A0
//		Name   -> Function LowEntryExtendedStandardLibrary.LowEntryExtendedStandardLibrary.PixelsToBytes
//		Flags  -> (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
// Parameters:
//		int                                                Width                                                      (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		int                                                Height                                                     (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		TArray<struct FColor>                              Pixels                                                     (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
//		LowEntryExtendedStandardLibrary_ELowEntryImageFormat ImageFormat                                                (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		TArray<unsigned char>                              ByteArray                                                  (Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
//		int                                                CompressionQuality                                         (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void ULowEntryExtendedStandardLibrary::STATIC_PixelsToBytes(int Width, int Height, TArray<struct FColor> Pixels, LowEntryExtendedStandardLibrary_ELowEntryImageFormat ImageFormat, TArray<unsigned char>* ByteArray, int CompressionQuality)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function LowEntryExtendedStandardLibrary.LowEntryExtendedStandardLibrary.PixelsToBytes");

	ULowEntryExtendedStandardLibrary_PixelsToBytes_Params params {};
	params.Width = Width;
	params.Height = Height;
	params.Pixels = Pixels;
	params.ImageFormat = ImageFormat;
	params.CompressionQuality = CompressionQuality;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (ByteArray != nullptr)
		*ByteArray = params.ByteArray;

}


// Function:
//		Offset -> 0x00473EE0
//		Name   -> Function LowEntryExtendedStandardLibrary.LowEntryExtendedStandardLibrary.Pearson
//		Flags  -> (Final, Native, Static, Public, HasOutParms, BlueprintCallable, BlueprintPure)
// Parameters:
//		TArray<unsigned char>                              ByteArray                                                  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
//		int                                                HashLength                                                 (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		int                                                Index                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		int                                                Length                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		TArray<unsigned char>                              ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, NativeAccessSpecifierPublic)
TArray<unsigned char> ULowEntryExtendedStandardLibrary::STATIC_Pearson(TArray<unsigned char> ByteArray, int HashLength, int Index, int Length)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function LowEntryExtendedStandardLibrary.LowEntryExtendedStandardLibrary.Pearson");

	ULowEntryExtendedStandardLibrary_Pearson_Params params {};
	params.ByteArray = ByteArray;
	params.HashLength = HashLength;
	params.Index = Index;
	params.Length = Length;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00473DC0
//		Name   -> Function LowEntryExtendedStandardLibrary.LowEntryExtendedStandardLibrary.ParseStringIntoLongBytes
//		Flags  -> (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
//		struct FString                                     String                                                     (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		class ULowEntryLong*                               ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
class ULowEntryLong* ULowEntryExtendedStandardLibrary::STATIC_ParseStringIntoLongBytes(const struct FString& String)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function LowEntryExtendedStandardLibrary.LowEntryExtendedStandardLibrary.ParseStringIntoLongBytes");

	ULowEntryExtendedStandardLibrary_ParseStringIntoLongBytes_Params params {};
	params.String = String;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00473D20
//		Name   -> Function LowEntryExtendedStandardLibrary.LowEntryExtendedStandardLibrary.ParseStringIntoDoubleBytes
//		Flags  -> (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
//		struct FString                                     String                                                     (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		class ULowEntryDouble*                             ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
class ULowEntryDouble* ULowEntryExtendedStandardLibrary::STATIC_ParseStringIntoDoubleBytes(const struct FString& String)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function LowEntryExtendedStandardLibrary.LowEntryExtendedStandardLibrary.ParseStringIntoDoubleBytes");

	ULowEntryExtendedStandardLibrary_ParseStringIntoDoubleBytes_Params params {};
	params.String = String;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00473E60
//		Name   -> Function LowEntryExtendedStandardLibrary.LowEntryExtendedStandardLibrary.ParsedHashcashIsValid
//		Flags  -> (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
//		class ULowEntryParsedHashcash*                     Target                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		bool                                               ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool ULowEntryExtendedStandardLibrary::STATIC_ParsedHashcashIsValid(class ULowEntryParsedHashcash* Target)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function LowEntryExtendedStandardLibrary.LowEntryExtendedStandardLibrary.ParsedHashcashIsValid");

	ULowEntryExtendedStandardLibrary_ParsedHashcashIsValid_Params params {};
	params.Target = Target;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00473CB0
//		Name   -> Function LowEntryExtendedStandardLibrary.LowEntryExtendedStandardLibrary.NextQueueExecution
//		Flags  -> (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
//		class ULowEntryExecutionQueue*                     Queue                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void ULowEntryExtendedStandardLibrary::STATIC_NextQueueExecution(class ULowEntryExecutionQueue* Queue)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function LowEntryExtendedStandardLibrary.LowEntryExtendedStandardLibrary.NextQueueExecution");

	ULowEntryExtendedStandardLibrary_NextQueueExecution_Params params {};
	params.Queue = Queue;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00473C30
//		Name   -> Function LowEntryExtendedStandardLibrary.LowEntryExtendedStandardLibrary.NewlineCharacter
//		Flags  -> (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
//		struct FString                                     ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
struct FString ULowEntryExtendedStandardLibrary::STATIC_NewlineCharacter()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function LowEntryExtendedStandardLibrary.LowEntryExtendedStandardLibrary.NewlineCharacter");

	ULowEntryExtendedStandardLibrary_NewlineCharacter_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00473A80
//		Name   -> Function LowEntryExtendedStandardLibrary.LowEntryExtendedStandardLibrary.MinString
//		Flags  -> (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
//		struct FString                                     A                                                          (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		struct FString                                     B                                                          (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		struct FString                                     ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
struct FString ULowEntryExtendedStandardLibrary::STATIC_MinString(const struct FString& A, const struct FString& B)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function LowEntryExtendedStandardLibrary.LowEntryExtendedStandardLibrary.MinString");

	ULowEntryExtendedStandardLibrary_MinString_Params params {};
	params.A = A;
	params.B = B;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x004737B0
//		Name   -> Function LowEntryExtendedStandardLibrary.LowEntryExtendedStandardLibrary.MinOfTimespanArray
//		Flags  -> (Final, Native, Static, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintPure)
// Parameters:
//		TArray<struct FTimespan>                           TimespanArray                                              (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
//		int                                                IndexOfMinValue                                            (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		struct FTimespan                                   MinValue                                                   (Parm, OutParm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void ULowEntryExtendedStandardLibrary::STATIC_MinOfTimespanArray(TArray<struct FTimespan> TimespanArray, int* IndexOfMinValue, struct FTimespan* MinValue)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function LowEntryExtendedStandardLibrary.LowEntryExtendedStandardLibrary.MinOfTimespanArray");

	ULowEntryExtendedStandardLibrary_MinOfTimespanArray_Params params {};
	params.TimespanArray = TimespanArray;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (IndexOfMinValue != nullptr)
		*IndexOfMinValue = params.IndexOfMinValue;
	if (MinValue != nullptr)
		*MinValue = params.MinValue;

}


// Function:
//		Offset -> 0x004738F0
//		Name   -> Function LowEntryExtendedStandardLibrary.LowEntryExtendedStandardLibrary.MinOfStringArray
//		Flags  -> (Final, Native, Static, Public, HasOutParms, BlueprintCallable, BlueprintPure)
// Parameters:
//		TArray<struct FString>                             StringArray                                                (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
//		int                                                IndexOfMinValue                                            (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		struct FString                                     MinValue                                                   (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void ULowEntryExtendedStandardLibrary::STATIC_MinOfStringArray(TArray<struct FString> StringArray, int* IndexOfMinValue, struct FString* MinValue)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function LowEntryExtendedStandardLibrary.LowEntryExtendedStandardLibrary.MinOfStringArray");

	ULowEntryExtendedStandardLibrary_MinOfStringArray_Params params {};
	params.StringArray = StringArray;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (IndexOfMinValue != nullptr)
		*IndexOfMinValue = params.IndexOfMinValue;
	if (MinValue != nullptr)
		*MinValue = params.MinValue;

}


// Function:
//		Offset -> 0x004737B0
//		Name   -> Function LowEntryExtendedStandardLibrary.LowEntryExtendedStandardLibrary.MinOfDateTimeArray
//		Flags  -> (Final, Native, Static, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintPure)
// Parameters:
//		TArray<struct FDateTime>                           DateTimeArray                                              (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
//		int                                                IndexOfMinValue                                            (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		struct FDateTime                                   MinValue                                                   (Parm, OutParm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void ULowEntryExtendedStandardLibrary::STATIC_MinOfDateTimeArray(TArray<struct FDateTime> DateTimeArray, int* IndexOfMinValue, struct FDateTime* MinValue)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function LowEntryExtendedStandardLibrary.LowEntryExtendedStandardLibrary.MinOfDateTimeArray");

	ULowEntryExtendedStandardLibrary_MinOfDateTimeArray_Params params {};
	params.DateTimeArray = DateTimeArray;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (IndexOfMinValue != nullptr)
		*IndexOfMinValue = params.IndexOfMinValue;
	if (MinValue != nullptr)
		*MinValue = params.MinValue;

}


// Function:
//		Offset -> 0x004736C0
//		Name   -> Function LowEntryExtendedStandardLibrary.LowEntryExtendedStandardLibrary.MergeEncapsulatedByteArrays
//		Flags  -> (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
// Parameters:
//		TArray<class ULowEntryByteArray*>                  ByteArrays                                                 (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
//		TArray<unsigned char>                              ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, NativeAccessSpecifierPublic)
TArray<unsigned char> ULowEntryExtendedStandardLibrary::STATIC_MergeEncapsulatedByteArrays(TArray<class ULowEntryByteArray*> ByteArrays)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function LowEntryExtendedStandardLibrary.LowEntryExtendedStandardLibrary.MergeEncapsulatedByteArrays");

	ULowEntryExtendedStandardLibrary_MergeEncapsulatedByteArrays_Params params {};
	params.ByteArrays = ByteArrays;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00473520
//		Name   -> Function LowEntryExtendedStandardLibrary.LowEntryExtendedStandardLibrary.MergeBytes
//		Flags  -> (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
//		TArray<unsigned char>                              A                                                          (Parm, ZeroConstructor, NativeAccessSpecifierPublic)
//		TArray<unsigned char>                              B                                                          (Parm, ZeroConstructor, NativeAccessSpecifierPublic)
//		TArray<unsigned char>                              ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, NativeAccessSpecifierPublic)
TArray<unsigned char> ULowEntryExtendedStandardLibrary::STATIC_MergeBytes(TArray<unsigned char> A, TArray<unsigned char> B)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function LowEntryExtendedStandardLibrary.LowEntryExtendedStandardLibrary.MergeBytes");

	ULowEntryExtendedStandardLibrary_MergeBytes_Params params {};
	params.A = A;
	params.B = B;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x004733C0
//		Name   -> Function LowEntryExtendedStandardLibrary.LowEntryExtendedStandardLibrary.Md5
//		Flags  -> (Final, Native, Static, Public, HasOutParms, BlueprintCallable, BlueprintPure)
// Parameters:
//		TArray<unsigned char>                              ByteArray                                                  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
//		int                                                Index                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		int                                                Length                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		TArray<unsigned char>                              ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, NativeAccessSpecifierPublic)
TArray<unsigned char> ULowEntryExtendedStandardLibrary::STATIC_Md5(TArray<unsigned char> ByteArray, int Index, int Length)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function LowEntryExtendedStandardLibrary.LowEntryExtendedStandardLibrary.Md5");

	ULowEntryExtendedStandardLibrary_Md5_Params params {};
	params.ByteArray = ByteArray;
	params.Index = Index;
	params.Length = Length;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00473210
//		Name   -> Function LowEntryExtendedStandardLibrary.LowEntryExtendedStandardLibrary.MaxString
//		Flags  -> (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
//		struct FString                                     A                                                          (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		struct FString                                     B                                                          (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		struct FString                                     ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
struct FString ULowEntryExtendedStandardLibrary::STATIC_MaxString(const struct FString& A, const struct FString& B)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function LowEntryExtendedStandardLibrary.LowEntryExtendedStandardLibrary.MaxString");

	ULowEntryExtendedStandardLibrary_MaxString_Params params {};
	params.A = A;
	params.B = B;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00472F40
//		Name   -> Function LowEntryExtendedStandardLibrary.LowEntryExtendedStandardLibrary.MaxOfTimespanArray
//		Flags  -> (Final, Native, Static, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintPure)
// Parameters:
//		TArray<struct FTimespan>                           TimespanArray                                              (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
//		int                                                IndexOfMaxValue                                            (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		struct FTimespan                                   MaxValue                                                   (Parm, OutParm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void ULowEntryExtendedStandardLibrary::STATIC_MaxOfTimespanArray(TArray<struct FTimespan> TimespanArray, int* IndexOfMaxValue, struct FTimespan* MaxValue)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function LowEntryExtendedStandardLibrary.LowEntryExtendedStandardLibrary.MaxOfTimespanArray");

	ULowEntryExtendedStandardLibrary_MaxOfTimespanArray_Params params {};
	params.TimespanArray = TimespanArray;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (IndexOfMaxValue != nullptr)
		*IndexOfMaxValue = params.IndexOfMaxValue;
	if (MaxValue != nullptr)
		*MaxValue = params.MaxValue;

}


// Function:
//		Offset -> 0x00473080
//		Name   -> Function LowEntryExtendedStandardLibrary.LowEntryExtendedStandardLibrary.MaxOfStringArray
//		Flags  -> (Final, Native, Static, Public, HasOutParms, BlueprintCallable, BlueprintPure)
// Parameters:
//		TArray<struct FString>                             StringArray                                                (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
//		int                                                IndexOfMaxValue                                            (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		struct FString                                     MaxValue                                                   (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void ULowEntryExtendedStandardLibrary::STATIC_MaxOfStringArray(TArray<struct FString> StringArray, int* IndexOfMaxValue, struct FString* MaxValue)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function LowEntryExtendedStandardLibrary.LowEntryExtendedStandardLibrary.MaxOfStringArray");

	ULowEntryExtendedStandardLibrary_MaxOfStringArray_Params params {};
	params.StringArray = StringArray;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (IndexOfMaxValue != nullptr)
		*IndexOfMaxValue = params.IndexOfMaxValue;
	if (MaxValue != nullptr)
		*MaxValue = params.MaxValue;

}


// Function:
//		Offset -> 0x00472F40
//		Name   -> Function LowEntryExtendedStandardLibrary.LowEntryExtendedStandardLibrary.MaxOfDateTimeArray
//		Flags  -> (Final, Native, Static, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintPure)
// Parameters:
//		TArray<struct FDateTime>                           DateTimeArray                                              (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
//		int                                                IndexOfMaxValue                                            (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		struct FDateTime                                   MaxValue                                                   (Parm, OutParm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void ULowEntryExtendedStandardLibrary::STATIC_MaxOfDateTimeArray(TArray<struct FDateTime> DateTimeArray, int* IndexOfMaxValue, struct FDateTime* MaxValue)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function LowEntryExtendedStandardLibrary.LowEntryExtendedStandardLibrary.MaxOfDateTimeArray");

	ULowEntryExtendedStandardLibrary_MaxOfDateTimeArray_Params params {};
	params.DateTimeArray = DateTimeArray;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (IndexOfMaxValue != nullptr)
		*IndexOfMaxValue = params.IndexOfMaxValue;
	if (MaxValue != nullptr)
		*MaxValue = params.MaxValue;

}


// Function:
//		Offset -> 0x00467660
//		Name   -> Function LowEntryExtendedStandardLibrary.LowEntryExtendedStandardLibrary.MacPlatform
//		Flags  -> (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
//		bool                                               ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool ULowEntryExtendedStandardLibrary::STATIC_MacPlatform()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function LowEntryExtendedStandardLibrary.LowEntryExtendedStandardLibrary.MacPlatform");

	ULowEntryExtendedStandardLibrary_MacPlatform_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00472F10
//		Name   -> Function LowEntryExtendedStandardLibrary.LowEntryExtendedStandardLibrary.Long_CreateZero
//		Flags  -> (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
//		class ULowEntryLong*                               ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
class ULowEntryLong* ULowEntryExtendedStandardLibrary::STATIC_Long_CreateZero()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function LowEntryExtendedStandardLibrary.LowEntryExtendedStandardLibrary.Long_CreateZero");

	ULowEntryExtendedStandardLibrary_Long_CreateZero_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x0046C040
//		Name   -> Function LowEntryExtendedStandardLibrary.LowEntryExtendedStandardLibrary.Long_Create
//		Flags  -> (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
// Parameters:
//		TArray<unsigned char>                              ByteArray                                                  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
//		int                                                Index                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		int                                                Length                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		class ULowEntryLong*                               ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
class ULowEntryLong* ULowEntryExtendedStandardLibrary::STATIC_Long_Create(TArray<unsigned char> ByteArray, int Index, int Length)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function LowEntryExtendedStandardLibrary.LowEntryExtendedStandardLibrary.Long_Create");

	ULowEntryExtendedStandardLibrary_Long_Create_Params params {};
	params.ByteArray = ByteArray;
	params.Index = Index;
	params.Length = Length;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00472BA0
//		Name   -> Function LowEntryExtendedStandardLibrary.LowEntryExtendedStandardLibrary.LoadVideo
//		Flags  -> (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
// Parameters:
//		class UMediaSoundComponent*                        MediaSoundComponent                                        (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		struct FString                                     URL                                                        (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		bool                                               Success                                                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		class UMediaPlayer*                                MediaPlayer                                                (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		class UMediaTexture*                               MediaTexture                                               (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		bool                                               PlayOnOpen                                                 (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		bool                                               Loop                                                       (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void ULowEntryExtendedStandardLibrary::STATIC_LoadVideo(class UMediaSoundComponent* MediaSoundComponent, const struct FString& URL, bool* Success, class UMediaPlayer** MediaPlayer, class UMediaTexture** MediaTexture, bool PlayOnOpen, bool Loop)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function LowEntryExtendedStandardLibrary.LowEntryExtendedStandardLibrary.LoadVideo");

	ULowEntryExtendedStandardLibrary_LoadVideo_Params params {};
	params.MediaSoundComponent = MediaSoundComponent;
	params.URL = URL;
	params.PlayOnOpen = PlayOnOpen;
	params.Loop = Loop;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Success != nullptr)
		*Success = params.Success;
	if (MediaPlayer != nullptr)
		*MediaPlayer = params.MediaPlayer;
	if (MediaTexture != nullptr)
		*MediaTexture = params.MediaTexture;

}


// Function:
//		Offset -> 0x00467660
//		Name   -> Function LowEntryExtendedStandardLibrary.LowEntryExtendedStandardLibrary.LinuxPlatform
//		Flags  -> (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
//		bool                                               ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool ULowEntryExtendedStandardLibrary::STATIC_LinuxPlatform()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function LowEntryExtendedStandardLibrary.LowEntryExtendedStandardLibrary.LinuxPlatform");

	ULowEntryExtendedStandardLibrary_LinuxPlatform_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00472AB0
//		Name   -> Function LowEntryExtendedStandardLibrary.LowEntryExtendedStandardLibrary.LessStringString
//		Flags  -> (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
//		struct FString                                     A                                                          (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		struct FString                                     B                                                          (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		bool                                               ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool ULowEntryExtendedStandardLibrary::STATIC_LessStringString(const struct FString& A, const struct FString& B)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function LowEntryExtendedStandardLibrary.LowEntryExtendedStandardLibrary.LessStringString");

	ULowEntryExtendedStandardLibrary_LessStringString_Params params {};
	params.A = A;
	params.B = B;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x004729E0
//		Name   -> Function LowEntryExtendedStandardLibrary.LowEntryExtendedStandardLibrary.LessIntegerFloat
//		Flags  -> (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
//		int                                                A                                                          (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		float                                              B                                                          (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		bool                                               ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool ULowEntryExtendedStandardLibrary::STATIC_LessIntegerFloat(int A, float B)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function LowEntryExtendedStandardLibrary.LowEntryExtendedStandardLibrary.LessIntegerFloat");

	ULowEntryExtendedStandardLibrary_LessIntegerFloat_Params params {};
	params.A = A;
	params.B = B;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00472920
//		Name   -> Function LowEntryExtendedStandardLibrary.LowEntryExtendedStandardLibrary.LessIntegerByte
//		Flags  -> (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
//		int                                                A                                                          (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		unsigned char                                      B                                                          (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		bool                                               ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool ULowEntryExtendedStandardLibrary::STATIC_LessIntegerByte(int A, unsigned char B)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function LowEntryExtendedStandardLibrary.LowEntryExtendedStandardLibrary.LessIntegerByte");

	ULowEntryExtendedStandardLibrary_LessIntegerByte_Params params {};
	params.A = A;
	params.B = B;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00472850
//		Name   -> Function LowEntryExtendedStandardLibrary.LowEntryExtendedStandardLibrary.LessFloatInteger
//		Flags  -> (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
//		float                                              A                                                          (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		int                                                B                                                          (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		bool                                               ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool ULowEntryExtendedStandardLibrary::STATIC_LessFloatInteger(float A, int B)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function LowEntryExtendedStandardLibrary.LowEntryExtendedStandardLibrary.LessFloatInteger");

	ULowEntryExtendedStandardLibrary_LessFloatInteger_Params params {};
	params.A = A;
	params.B = B;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00472790
//		Name   -> Function LowEntryExtendedStandardLibrary.LowEntryExtendedStandardLibrary.LessFloatByte
//		Flags  -> (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
//		float                                              A                                                          (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		unsigned char                                      B                                                          (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		bool                                               ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool ULowEntryExtendedStandardLibrary::STATIC_LessFloatByte(float A, unsigned char B)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function LowEntryExtendedStandardLibrary.LowEntryExtendedStandardLibrary.LessFloatByte");

	ULowEntryExtendedStandardLibrary_LessFloatByte_Params params {};
	params.A = A;
	params.B = B;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x004726A0
//		Name   -> Function LowEntryExtendedStandardLibrary.LowEntryExtendedStandardLibrary.LessEqualStringString
//		Flags  -> (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
//		struct FString                                     A                                                          (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		struct FString                                     B                                                          (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		bool                                               ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool ULowEntryExtendedStandardLibrary::STATIC_LessEqualStringString(const struct FString& A, const struct FString& B)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function LowEntryExtendedStandardLibrary.LowEntryExtendedStandardLibrary.LessEqualStringString");

	ULowEntryExtendedStandardLibrary_LessEqualStringString_Params params {};
	params.A = A;
	params.B = B;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x004725D0
//		Name   -> Function LowEntryExtendedStandardLibrary.LowEntryExtendedStandardLibrary.LessEqualIntegerFloat
//		Flags  -> (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
//		int                                                A                                                          (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		float                                              B                                                          (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		bool                                               ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool ULowEntryExtendedStandardLibrary::STATIC_LessEqualIntegerFloat(int A, float B)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function LowEntryExtendedStandardLibrary.LowEntryExtendedStandardLibrary.LessEqualIntegerFloat");

	ULowEntryExtendedStandardLibrary_LessEqualIntegerFloat_Params params {};
	params.A = A;
	params.B = B;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00472510
//		Name   -> Function LowEntryExtendedStandardLibrary.LowEntryExtendedStandardLibrary.LessEqualIntegerByte
//		Flags  -> (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
//		int                                                A                                                          (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		unsigned char                                      B                                                          (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		bool                                               ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool ULowEntryExtendedStandardLibrary::STATIC_LessEqualIntegerByte(int A, unsigned char B)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function LowEntryExtendedStandardLibrary.LowEntryExtendedStandardLibrary.LessEqualIntegerByte");

	ULowEntryExtendedStandardLibrary_LessEqualIntegerByte_Params params {};
	params.A = A;
	params.B = B;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00472440
//		Name   -> Function LowEntryExtendedStandardLibrary.LowEntryExtendedStandardLibrary.LessEqualFloatInteger
//		Flags  -> (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
//		float                                              A                                                          (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		int                                                B                                                          (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		bool                                               ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool ULowEntryExtendedStandardLibrary::STATIC_LessEqualFloatInteger(float A, int B)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function LowEntryExtendedStandardLibrary.LowEntryExtendedStandardLibrary.LessEqualFloatInteger");

	ULowEntryExtendedStandardLibrary_LessEqualFloatInteger_Params params {};
	params.A = A;
	params.B = B;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00472380
//		Name   -> Function LowEntryExtendedStandardLibrary.LowEntryExtendedStandardLibrary.LessEqualFloatByte
//		Flags  -> (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
//		float                                              A                                                          (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		unsigned char                                      B                                                          (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		bool                                               ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool ULowEntryExtendedStandardLibrary::STATIC_LessEqualFloatByte(float A, unsigned char B)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function LowEntryExtendedStandardLibrary.LowEntryExtendedStandardLibrary.LessEqualFloatByte");

	ULowEntryExtendedStandardLibrary_LessEqualFloatByte_Params params {};
	params.A = A;
	params.B = B;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x004722C0
//		Name   -> Function LowEntryExtendedStandardLibrary.LowEntryExtendedStandardLibrary.LessEqualByteInteger
//		Flags  -> (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
//		unsigned char                                      A                                                          (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		int                                                B                                                          (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		bool                                               ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool ULowEntryExtendedStandardLibrary::STATIC_LessEqualByteInteger(unsigned char A, int B)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function LowEntryExtendedStandardLibrary.LowEntryExtendedStandardLibrary.LessEqualByteInteger");

	ULowEntryExtendedStandardLibrary_LessEqualByteInteger_Params params {};
	params.A = A;
	params.B = B;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00472200
//		Name   -> Function LowEntryExtendedStandardLibrary.LowEntryExtendedStandardLibrary.LessEqualByteFloat
//		Flags  -> (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
//		unsigned char                                      A                                                          (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		float                                              B                                                          (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		bool                                               ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool ULowEntryExtendedStandardLibrary::STATIC_LessEqualByteFloat(unsigned char A, float B)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function LowEntryExtendedStandardLibrary.LowEntryExtendedStandardLibrary.LessEqualByteFloat");

	ULowEntryExtendedStandardLibrary_LessEqualByteFloat_Params params {};
	params.A = A;
	params.B = B;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00472140
//		Name   -> Function LowEntryExtendedStandardLibrary.LowEntryExtendedStandardLibrary.LessByteInteger
//		Flags  -> (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
//		unsigned char                                      A                                                          (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		int                                                B                                                          (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		bool                                               ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool ULowEntryExtendedStandardLibrary::STATIC_LessByteInteger(unsigned char A, int B)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function LowEntryExtendedStandardLibrary.LowEntryExtendedStandardLibrary.LessByteInteger");

	ULowEntryExtendedStandardLibrary_LessByteInteger_Params params {};
	params.A = A;
	params.B = B;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00472080
//		Name   -> Function LowEntryExtendedStandardLibrary.LowEntryExtendedStandardLibrary.LessByteFloat
//		Flags  -> (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
//		unsigned char                                      A                                                          (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		float                                              B                                                          (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		bool                                               ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool ULowEntryExtendedStandardLibrary::STATIC_LessByteFloat(unsigned char A, float B)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function LowEntryExtendedStandardLibrary.LowEntryExtendedStandardLibrary.LessByteFloat");

	ULowEntryExtendedStandardLibrary_LessByteFloat_Params params {};
	params.A = A;
	params.B = B;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00472000
//		Name   -> Function LowEntryExtendedStandardLibrary.LowEntryExtendedStandardLibrary.LatentAction_Create_String
//		Flags  -> (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
// Parameters:
//		class ULowEntryLatentActionString*                 LatentAction                                               (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void ULowEntryExtendedStandardLibrary::STATIC_LatentAction_Create_String(class ULowEntryLatentActionString** LatentAction)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function LowEntryExtendedStandardLibrary.LowEntryExtendedStandardLibrary.LatentAction_Create_String");

	ULowEntryExtendedStandardLibrary_LatentAction_Create_String_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (LatentAction != nullptr)
		*LatentAction = params.LatentAction;

}


// Function:
//		Offset -> 0x00471F80
//		Name   -> Function LowEntryExtendedStandardLibrary.LowEntryExtendedStandardLibrary.LatentAction_Create_Object
//		Flags  -> (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
// Parameters:
//		class ULowEntryLatentActionObject*                 LatentAction                                               (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void ULowEntryExtendedStandardLibrary::STATIC_LatentAction_Create_Object(class ULowEntryLatentActionObject** LatentAction)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function LowEntryExtendedStandardLibrary.LowEntryExtendedStandardLibrary.LatentAction_Create_Object");

	ULowEntryExtendedStandardLibrary_LatentAction_Create_Object_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (LatentAction != nullptr)
		*LatentAction = params.LatentAction;

}


// Function:
//		Offset -> 0x00471F00
//		Name   -> Function LowEntryExtendedStandardLibrary.LowEntryExtendedStandardLibrary.LatentAction_Create_None
//		Flags  -> (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
// Parameters:
//		class ULowEntryLatentActionNone*                   LatentAction                                               (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void ULowEntryExtendedStandardLibrary::STATIC_LatentAction_Create_None(class ULowEntryLatentActionNone** LatentAction)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function LowEntryExtendedStandardLibrary.LowEntryExtendedStandardLibrary.LatentAction_Create_None");

	ULowEntryExtendedStandardLibrary_LatentAction_Create_None_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (LatentAction != nullptr)
		*LatentAction = params.LatentAction;

}


// Function:
//		Offset -> 0x00471E80
//		Name   -> Function LowEntryExtendedStandardLibrary.LowEntryExtendedStandardLibrary.LatentAction_Create_Integer
//		Flags  -> (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
// Parameters:
//		class ULowEntryLatentActionInteger*                LatentAction                                               (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void ULowEntryExtendedStandardLibrary::STATIC_LatentAction_Create_Integer(class ULowEntryLatentActionInteger** LatentAction)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function LowEntryExtendedStandardLibrary.LowEntryExtendedStandardLibrary.LatentAction_Create_Integer");

	ULowEntryExtendedStandardLibrary_LatentAction_Create_Integer_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (LatentAction != nullptr)
		*LatentAction = params.LatentAction;

}


// Function:
//		Offset -> 0x00471E00
//		Name   -> Function LowEntryExtendedStandardLibrary.LowEntryExtendedStandardLibrary.LatentAction_Create_Float
//		Flags  -> (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
// Parameters:
//		class ULowEntryLatentActionFloat*                  LatentAction                                               (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void ULowEntryExtendedStandardLibrary::STATIC_LatentAction_Create_Float(class ULowEntryLatentActionFloat** LatentAction)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function LowEntryExtendedStandardLibrary.LowEntryExtendedStandardLibrary.LatentAction_Create_Float");

	ULowEntryExtendedStandardLibrary_LatentAction_Create_Float_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (LatentAction != nullptr)
		*LatentAction = params.LatentAction;

}


// Function:
//		Offset -> 0x00471D80
//		Name   -> Function LowEntryExtendedStandardLibrary.LowEntryExtendedStandardLibrary.LatentAction_Create_Boolean
//		Flags  -> (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
// Parameters:
//		class ULowEntryLatentActionBoolean*                LatentAction                                               (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void ULowEntryExtendedStandardLibrary::STATIC_LatentAction_Create_Boolean(class ULowEntryLatentActionBoolean** LatentAction)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function LowEntryExtendedStandardLibrary.LowEntryExtendedStandardLibrary.LatentAction_Create_Boolean");

	ULowEntryExtendedStandardLibrary_LatentAction_Create_Boolean_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (LatentAction != nullptr)
		*LatentAction = params.LatentAction;

}


// Function:
//		Offset -> 0x0046D1F0
//		Name   -> Function LowEntryExtendedStandardLibrary.LowEntryExtendedStandardLibrary.JoinGame
//		Flags  -> (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
//		class UObject*                                     WorldContextObject                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		struct FString                                     ServerAddress                                              (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		struct FString                                     Args                                                       (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		class APlayerController*                           SpecificPlayer                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void ULowEntryExtendedStandardLibrary::STATIC_JoinGame(class UObject* WorldContextObject, const struct FString& ServerAddress, const struct FString& Args, class APlayerController* SpecificPlayer)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function LowEntryExtendedStandardLibrary.LowEntryExtendedStandardLibrary.JoinGame");

	ULowEntryExtendedStandardLibrary_JoinGame_Params params {};
	params.WorldContextObject = WorldContextObject;
	params.ServerAddress = ServerAddress;
	params.Args = Args;
	params.SpecificPlayer = SpecificPlayer;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00471CA0
//		Name   -> Function LowEntryExtendedStandardLibrary.LowEntryExtendedStandardLibrary.IsWorldRenderingEnabled
//		Flags  -> (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
// Parameters:
//		bool                                               Success                                                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		bool                                               Enabled                                                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void ULowEntryExtendedStandardLibrary::STATIC_IsWorldRenderingEnabled(bool* Success, bool* Enabled)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function LowEntryExtendedStandardLibrary.LowEntryExtendedStandardLibrary.IsWorldRenderingEnabled");

	ULowEntryExtendedStandardLibrary_IsWorldRenderingEnabled_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Success != nullptr)
		*Success = params.Success;
	if (Enabled != nullptr)
		*Enabled = params.Enabled;

}


// Function:
//		Offset -> 0x00471BE0
//		Name   -> Function LowEntryExtendedStandardLibrary.LowEntryExtendedStandardLibrary.IsBitSet
//		Flags  -> (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
//		unsigned char                                      B                                                          (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		int                                                Bit                                                        (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		bool                                               ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool ULowEntryExtendedStandardLibrary::STATIC_IsBitSet(unsigned char B, int Bit)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function LowEntryExtendedStandardLibrary.LowEntryExtendedStandardLibrary.IsBitSet");

	ULowEntryExtendedStandardLibrary_IsBitSet_Params params {};
	params.B = B;
	params.Bit = Bit;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00467660
//		Name   -> Function LowEntryExtendedStandardLibrary.LowEntryExtendedStandardLibrary.IsAndroidDaydreamApplication
//		Flags  -> (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
//		bool                                               ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool ULowEntryExtendedStandardLibrary::STATIC_IsAndroidDaydreamApplication()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function LowEntryExtendedStandardLibrary.LowEntryExtendedStandardLibrary.IsAndroidDaydreamApplication");

	ULowEntryExtendedStandardLibrary_IsAndroidDaydreamApplication_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00467660
//		Name   -> Function LowEntryExtendedStandardLibrary.LowEntryExtendedStandardLibrary.IosPlatform
//		Flags  -> (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
//		bool                                               ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool ULowEntryExtendedStandardLibrary::STATIC_IosPlatform()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function LowEntryExtendedStandardLibrary.LowEntryExtendedStandardLibrary.IosPlatform");

	ULowEntryExtendedStandardLibrary_IosPlatform_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00471A00
//		Name   -> Function LowEntryExtendedStandardLibrary.LowEntryExtendedStandardLibrary.IntegerToBytes
//		Flags  -> (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
//		int                                                Value                                                      (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		TArray<unsigned char>                              ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, NativeAccessSpecifierPublic)
TArray<unsigned char> ULowEntryExtendedStandardLibrary::STATIC_IntegerToBytes(int Value)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function LowEntryExtendedStandardLibrary.LowEntryExtendedStandardLibrary.IntegerToBytes");

	ULowEntryExtendedStandardLibrary_IntegerToBytes_Params params {};
	params.Value = Value;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00467660
//		Name   -> Function LowEntryExtendedStandardLibrary.LowEntryExtendedStandardLibrary.Html5Platform
//		Flags  -> (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
//		bool                                               ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool ULowEntryExtendedStandardLibrary::STATIC_Html5Platform()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function LowEntryExtendedStandardLibrary.LowEntryExtendedStandardLibrary.Html5Platform");

	ULowEntryExtendedStandardLibrary_Html5Platform_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x004718A0
//		Name   -> Function LowEntryExtendedStandardLibrary.LowEntryExtendedStandardLibrary.HostGame
//		Flags  -> (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
//		class UObject*                                     WorldContextObject                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		struct FString                                     Map                                                        (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		struct FString                                     Args                                                       (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		class APlayerController*                           SpecificPlayer                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void ULowEntryExtendedStandardLibrary::STATIC_HostGame(class UObject* WorldContextObject, const struct FString& Map, const struct FString& Args, class APlayerController* SpecificPlayer)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function LowEntryExtendedStandardLibrary.LowEntryExtendedStandardLibrary.HostGame");

	ULowEntryExtendedStandardLibrary_HostGame_Params params {};
	params.WorldContextObject = WorldContextObject;
	params.Map = Map;
	params.Args = Args;
	params.SpecificPlayer = SpecificPlayer;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00470E90
//		Name   -> Function LowEntryExtendedStandardLibrary.LowEntryExtendedStandardLibrary.HMAC
//		Flags  -> (Final, Native, Static, Public, HasOutParms, BlueprintCallable, BlueprintPure)
// Parameters:
//		TArray<unsigned char>                              ByteArray                                                  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
//		TArray<unsigned char>                              Key                                                        (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
//		LowEntryExtendedStandardLibrary_ELowEntryHmacAlgorithm Algorithm                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		int                                                Index                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		int                                                Length                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		TArray<unsigned char>                              ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, NativeAccessSpecifierPublic)
TArray<unsigned char> ULowEntryExtendedStandardLibrary::STATIC_HMAC(TArray<unsigned char> ByteArray, TArray<unsigned char> Key, LowEntryExtendedStandardLibrary_ELowEntryHmacAlgorithm Algorithm, int Index, int Length)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function LowEntryExtendedStandardLibrary.LowEntryExtendedStandardLibrary.HMAC");

	ULowEntryExtendedStandardLibrary_HMAC_Params params {};
	params.ByteArray = ByteArray;
	params.Key = Key;
	params.Algorithm = Algorithm;
	params.Index = Index;
	params.Length = Length;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x004717C0
//		Name   -> Function LowEntryExtendedStandardLibrary.LowEntryExtendedStandardLibrary.HexToBytes
//		Flags  -> (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
//		struct FString                                     Hex                                                        (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		TArray<unsigned char>                              ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, NativeAccessSpecifierPublic)
TArray<unsigned char> ULowEntryExtendedStandardLibrary::STATIC_HexToBytes(const struct FString& Hex)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function LowEntryExtendedStandardLibrary.LowEntryExtendedStandardLibrary.HexToBytes");

	ULowEntryExtendedStandardLibrary_HexToBytes_Params params {};
	params.Hex = Hex;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x004716B0
//		Name   -> Function LowEntryExtendedStandardLibrary.LowEntryExtendedStandardLibrary.HashcashParseArray
//		Flags  -> (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
// Parameters:
//		TArray<struct FString>                             Hashes                                                     (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
//		TArray<class ULowEntryParsedHashcash*>             ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, NativeAccessSpecifierPublic)
TArray<class ULowEntryParsedHashcash*> ULowEntryExtendedStandardLibrary::STATIC_HashcashParseArray(TArray<struct FString> Hashes)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function LowEntryExtendedStandardLibrary.LowEntryExtendedStandardLibrary.HashcashParseArray");

	ULowEntryExtendedStandardLibrary_HashcashParseArray_Params params {};
	params.Hashes = Hashes;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00471610
//		Name   -> Function LowEntryExtendedStandardLibrary.LowEntryExtendedStandardLibrary.HashcashParse
//		Flags  -> (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
//		struct FString                                     Hash                                                       (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		class ULowEntryParsedHashcash*                     ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
class ULowEntryParsedHashcash* ULowEntryExtendedStandardLibrary::STATIC_HashcashParse(const struct FString& Hash)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function LowEntryExtendedStandardLibrary.LowEntryExtendedStandardLibrary.HashcashParse");

	ULowEntryExtendedStandardLibrary_HashcashParse_Params params {};
	params.Hash = Hash;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x004714B0
//		Name   -> Function LowEntryExtendedStandardLibrary.LowEntryExtendedStandardLibrary.HashcashCustomCreationDate
//		Flags  -> (Final, Native, Static, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintPure)
// Parameters:
//		struct FString                                     resource                                                   (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		struct FDateTime                                   UtcDate                                                    (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		int                                                Bits                                                       (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		struct FString                                     ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
struct FString ULowEntryExtendedStandardLibrary::STATIC_HashcashCustomCreationDate(const struct FString& resource, const struct FDateTime& UtcDate, int Bits)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function LowEntryExtendedStandardLibrary.LowEntryExtendedStandardLibrary.HashcashCustomCreationDate");

	ULowEntryExtendedStandardLibrary_HashcashCustomCreationDate_Params params {};
	params.resource = resource;
	params.UtcDate = UtcDate;
	params.Bits = Bits;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00471310
//		Name   -> Function LowEntryExtendedStandardLibrary.LowEntryExtendedStandardLibrary.HashcashArrayCustomCreationDate
//		Flags  -> (Final, Native, Static, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintPure)
// Parameters:
//		TArray<struct FString>                             Resources                                                  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
//		struct FDateTime                                   UtcDate                                                    (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		int                                                Bits                                                       (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		TArray<struct FString>                             ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, NativeAccessSpecifierPublic)
TArray<struct FString> ULowEntryExtendedStandardLibrary::STATIC_HashcashArrayCustomCreationDate(TArray<struct FString> Resources, const struct FDateTime& UtcDate, int Bits)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function LowEntryExtendedStandardLibrary.LowEntryExtendedStandardLibrary.HashcashArrayCustomCreationDate");

	ULowEntryExtendedStandardLibrary_HashcashArrayCustomCreationDate_Params params {};
	params.Resources = Resources;
	params.UtcDate = UtcDate;
	params.Bits = Bits;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x004711B0
//		Name   -> Function LowEntryExtendedStandardLibrary.LowEntryExtendedStandardLibrary.HashcashArray
//		Flags  -> (Final, Native, Static, Public, HasOutParms, BlueprintCallable, BlueprintPure)
// Parameters:
//		TArray<struct FString>                             Resources                                                  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
//		int                                                Bits                                                       (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		TArray<struct FString>                             ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, NativeAccessSpecifierPublic)
TArray<struct FString> ULowEntryExtendedStandardLibrary::STATIC_HashcashArray(TArray<struct FString> Resources, int Bits)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function LowEntryExtendedStandardLibrary.LowEntryExtendedStandardLibrary.HashcashArray");

	ULowEntryExtendedStandardLibrary_HashcashArray_Params params {};
	params.Resources = Resources;
	params.Bits = Bits;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00471090
//		Name   -> Function LowEntryExtendedStandardLibrary.LowEntryExtendedStandardLibrary.Hashcash
//		Flags  -> (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
//		struct FString                                     resource                                                   (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		int                                                Bits                                                       (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		struct FString                                     ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
struct FString ULowEntryExtendedStandardLibrary::STATIC_Hashcash(const struct FString& resource, int Bits)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function LowEntryExtendedStandardLibrary.LowEntryExtendedStandardLibrary.Hashcash");

	ULowEntryExtendedStandardLibrary_Hashcash_Params params {};
	params.resource = resource;
	params.Bits = Bits;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00470DA0
//		Name   -> Function LowEntryExtendedStandardLibrary.LowEntryExtendedStandardLibrary.GreaterStringString
//		Flags  -> (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
//		struct FString                                     A                                                          (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		struct FString                                     B                                                          (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		bool                                               ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool ULowEntryExtendedStandardLibrary::STATIC_GreaterStringString(const struct FString& A, const struct FString& B)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function LowEntryExtendedStandardLibrary.LowEntryExtendedStandardLibrary.GreaterStringString");

	ULowEntryExtendedStandardLibrary_GreaterStringString_Params params {};
	params.A = A;
	params.B = B;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00470CD0
//		Name   -> Function LowEntryExtendedStandardLibrary.LowEntryExtendedStandardLibrary.GreaterIntegerFloat
//		Flags  -> (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
//		int                                                A                                                          (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		float                                              B                                                          (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		bool                                               ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool ULowEntryExtendedStandardLibrary::STATIC_GreaterIntegerFloat(int A, float B)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function LowEntryExtendedStandardLibrary.LowEntryExtendedStandardLibrary.GreaterIntegerFloat");

	ULowEntryExtendedStandardLibrary_GreaterIntegerFloat_Params params {};
	params.A = A;
	params.B = B;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00470C10
//		Name   -> Function LowEntryExtendedStandardLibrary.LowEntryExtendedStandardLibrary.GreaterIntegerByte
//		Flags  -> (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
//		int                                                A                                                          (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		unsigned char                                      B                                                          (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		bool                                               ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool ULowEntryExtendedStandardLibrary::STATIC_GreaterIntegerByte(int A, unsigned char B)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function LowEntryExtendedStandardLibrary.LowEntryExtendedStandardLibrary.GreaterIntegerByte");

	ULowEntryExtendedStandardLibrary_GreaterIntegerByte_Params params {};
	params.A = A;
	params.B = B;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00470B40
//		Name   -> Function LowEntryExtendedStandardLibrary.LowEntryExtendedStandardLibrary.GreaterFloatInteger
//		Flags  -> (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
//		float                                              A                                                          (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		int                                                B                                                          (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		bool                                               ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool ULowEntryExtendedStandardLibrary::STATIC_GreaterFloatInteger(float A, int B)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function LowEntryExtendedStandardLibrary.LowEntryExtendedStandardLibrary.GreaterFloatInteger");

	ULowEntryExtendedStandardLibrary_GreaterFloatInteger_Params params {};
	params.A = A;
	params.B = B;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00470A80
//		Name   -> Function LowEntryExtendedStandardLibrary.LowEntryExtendedStandardLibrary.GreaterFloatByte
//		Flags  -> (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
//		float                                              A                                                          (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		unsigned char                                      B                                                          (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		bool                                               ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool ULowEntryExtendedStandardLibrary::STATIC_GreaterFloatByte(float A, unsigned char B)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function LowEntryExtendedStandardLibrary.LowEntryExtendedStandardLibrary.GreaterFloatByte");

	ULowEntryExtendedStandardLibrary_GreaterFloatByte_Params params {};
	params.A = A;
	params.B = B;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00470990
//		Name   -> Function LowEntryExtendedStandardLibrary.LowEntryExtendedStandardLibrary.GreaterEqualStringString
//		Flags  -> (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
//		struct FString                                     A                                                          (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		struct FString                                     B                                                          (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		bool                                               ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool ULowEntryExtendedStandardLibrary::STATIC_GreaterEqualStringString(const struct FString& A, const struct FString& B)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function LowEntryExtendedStandardLibrary.LowEntryExtendedStandardLibrary.GreaterEqualStringString");

	ULowEntryExtendedStandardLibrary_GreaterEqualStringString_Params params {};
	params.A = A;
	params.B = B;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x004708C0
//		Name   -> Function LowEntryExtendedStandardLibrary.LowEntryExtendedStandardLibrary.GreaterEqualIntegerFloat
//		Flags  -> (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
//		int                                                A                                                          (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		float                                              B                                                          (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		bool                                               ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool ULowEntryExtendedStandardLibrary::STATIC_GreaterEqualIntegerFloat(int A, float B)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function LowEntryExtendedStandardLibrary.LowEntryExtendedStandardLibrary.GreaterEqualIntegerFloat");

	ULowEntryExtendedStandardLibrary_GreaterEqualIntegerFloat_Params params {};
	params.A = A;
	params.B = B;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00470800
//		Name   -> Function LowEntryExtendedStandardLibrary.LowEntryExtendedStandardLibrary.GreaterEqualIntegerByte
//		Flags  -> (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
//		int                                                A                                                          (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		unsigned char                                      B                                                          (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		bool                                               ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool ULowEntryExtendedStandardLibrary::STATIC_GreaterEqualIntegerByte(int A, unsigned char B)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function LowEntryExtendedStandardLibrary.LowEntryExtendedStandardLibrary.GreaterEqualIntegerByte");

	ULowEntryExtendedStandardLibrary_GreaterEqualIntegerByte_Params params {};
	params.A = A;
	params.B = B;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00470730
//		Name   -> Function LowEntryExtendedStandardLibrary.LowEntryExtendedStandardLibrary.GreaterEqualFloatInteger
//		Flags  -> (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
//		float                                              A                                                          (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		int                                                B                                                          (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		bool                                               ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool ULowEntryExtendedStandardLibrary::STATIC_GreaterEqualFloatInteger(float A, int B)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function LowEntryExtendedStandardLibrary.LowEntryExtendedStandardLibrary.GreaterEqualFloatInteger");

	ULowEntryExtendedStandardLibrary_GreaterEqualFloatInteger_Params params {};
	params.A = A;
	params.B = B;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00470670
//		Name   -> Function LowEntryExtendedStandardLibrary.LowEntryExtendedStandardLibrary.GreaterEqualFloatByte
//		Flags  -> (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
//		float                                              A                                                          (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		unsigned char                                      B                                                          (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		bool                                               ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool ULowEntryExtendedStandardLibrary::STATIC_GreaterEqualFloatByte(float A, unsigned char B)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function LowEntryExtendedStandardLibrary.LowEntryExtendedStandardLibrary.GreaterEqualFloatByte");

	ULowEntryExtendedStandardLibrary_GreaterEqualFloatByte_Params params {};
	params.A = A;
	params.B = B;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x004705B0
//		Name   -> Function LowEntryExtendedStandardLibrary.LowEntryExtendedStandardLibrary.GreaterEqualByteInteger
//		Flags  -> (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
//		unsigned char                                      A                                                          (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		int                                                B                                                          (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		bool                                               ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool ULowEntryExtendedStandardLibrary::STATIC_GreaterEqualByteInteger(unsigned char A, int B)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function LowEntryExtendedStandardLibrary.LowEntryExtendedStandardLibrary.GreaterEqualByteInteger");

	ULowEntryExtendedStandardLibrary_GreaterEqualByteInteger_Params params {};
	params.A = A;
	params.B = B;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x004704F0
//		Name   -> Function LowEntryExtendedStandardLibrary.LowEntryExtendedStandardLibrary.GreaterEqualByteFloat
//		Flags  -> (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
//		unsigned char                                      A                                                          (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		float                                              B                                                          (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		bool                                               ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool ULowEntryExtendedStandardLibrary::STATIC_GreaterEqualByteFloat(unsigned char A, float B)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function LowEntryExtendedStandardLibrary.LowEntryExtendedStandardLibrary.GreaterEqualByteFloat");

	ULowEntryExtendedStandardLibrary_GreaterEqualByteFloat_Params params {};
	params.A = A;
	params.B = B;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00470430
//		Name   -> Function LowEntryExtendedStandardLibrary.LowEntryExtendedStandardLibrary.GreaterByteInteger
//		Flags  -> (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
//		unsigned char                                      A                                                          (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		int                                                B                                                          (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		bool                                               ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool ULowEntryExtendedStandardLibrary::STATIC_GreaterByteInteger(unsigned char A, int B)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function LowEntryExtendedStandardLibrary.LowEntryExtendedStandardLibrary.GreaterByteInteger");

	ULowEntryExtendedStandardLibrary_GreaterByteInteger_Params params {};
	params.A = A;
	params.B = B;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00470370
//		Name   -> Function LowEntryExtendedStandardLibrary.LowEntryExtendedStandardLibrary.GreaterByteFloat
//		Flags  -> (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
//		unsigned char                                      A                                                          (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		float                                              B                                                          (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		bool                                               ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool ULowEntryExtendedStandardLibrary::STATIC_GreaterByteFloat(unsigned char A, float B)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function LowEntryExtendedStandardLibrary.LowEntryExtendedStandardLibrary.GreaterByteFloat");

	ULowEntryExtendedStandardLibrary_GreaterByteFloat_Params params {};
	params.A = A;
	params.B = B;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00470280
//		Name   -> Function LowEntryExtendedStandardLibrary.LowEntryExtendedStandardLibrary.GrayscalePixels
//		Flags  -> (Final, Native, Static, Public, HasOutParms, BlueprintCallable, BlueprintPure)
// Parameters:
//		TArray<struct FColor>                              Pixel                                                      (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
//		TArray<struct FColor>                              ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, NativeAccessSpecifierPublic)
TArray<struct FColor> ULowEntryExtendedStandardLibrary::STATIC_GrayscalePixels(TArray<struct FColor> Pixel)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function LowEntryExtendedStandardLibrary.LowEntryExtendedStandardLibrary.GrayscalePixels");

	ULowEntryExtendedStandardLibrary_GrayscalePixels_Params params {};
	params.Pixel = Pixel;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x004701F0
//		Name   -> Function LowEntryExtendedStandardLibrary.LowEntryExtendedStandardLibrary.GrayscalePixel
//		Flags  -> (Final, Native, Static, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintPure)
// Parameters:
//		struct FColor                                      Pixel                                                      (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		struct FColor                                      ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
struct FColor ULowEntryExtendedStandardLibrary::STATIC_GrayscalePixel(const struct FColor& Pixel)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function LowEntryExtendedStandardLibrary.LowEntryExtendedStandardLibrary.GrayscalePixel");

	ULowEntryExtendedStandardLibrary_GrayscalePixel_Params params {};
	params.Pixel = Pixel;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x004700C0
//		Name   -> Function LowEntryExtendedStandardLibrary.LowEntryExtendedStandardLibrary.GetWindowSize
//		Flags  -> (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
// Parameters:
//		bool                                               Success                                                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		int                                                Width                                                      (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		int                                                Height                                                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void ULowEntryExtendedStandardLibrary::STATIC_GetWindowSize(bool* Success, int* Width, int* Height)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function LowEntryExtendedStandardLibrary.LowEntryExtendedStandardLibrary.GetWindowSize");

	ULowEntryExtendedStandardLibrary_GetWindowSize_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Success != nullptr)
		*Success = params.Success;
	if (Width != nullptr)
		*Width = params.Width;
	if (Height != nullptr)
		*Height = params.Height;

}


// Function:
//		Offset -> 0x0046FF90
//		Name   -> Function LowEntryExtendedStandardLibrary.LowEntryExtendedStandardLibrary.GetWindowPosition
//		Flags  -> (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
// Parameters:
//		bool                                               Success                                                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		int                                                X                                                          (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		int                                                Y                                                          (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void ULowEntryExtendedStandardLibrary::STATIC_GetWindowPosition(bool* Success, int* X, int* Y)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function LowEntryExtendedStandardLibrary.LowEntryExtendedStandardLibrary.GetWindowPosition");

	ULowEntryExtendedStandardLibrary_GetWindowPosition_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Success != nullptr)
		*Success = params.Success;
	if (X != nullptr)
		*X = params.X;
	if (Y != nullptr)
		*Y = params.Y;

}


// Function:
//		Offset -> 0x0046FE60
//		Name   -> Function LowEntryExtendedStandardLibrary.LowEntryExtendedStandardLibrary.GetWindowPositiomInPercentagesCentered
//		Flags  -> (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
// Parameters:
//		bool                                               Success                                                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		float                                              X                                                          (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		float                                              Y                                                          (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void ULowEntryExtendedStandardLibrary::STATIC_GetWindowPositiomInPercentagesCentered(bool* Success, float* X, float* Y)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function LowEntryExtendedStandardLibrary.LowEntryExtendedStandardLibrary.GetWindowPositiomInPercentagesCentered");

	ULowEntryExtendedStandardLibrary_GetWindowPositiomInPercentagesCentered_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Success != nullptr)
		*Success = params.Success;
	if (X != nullptr)
		*X = params.X;
	if (Y != nullptr)
		*Y = params.Y;

}


// Function:
//		Offset -> 0x0046FD30
//		Name   -> Function LowEntryExtendedStandardLibrary.LowEntryExtendedStandardLibrary.GetWindowMode
//		Flags  -> (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
// Parameters:
//		bool                                               Success                                                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		bool                                               Fullscreen                                                 (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		bool                                               IsFullscreenWindowed                                       (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void ULowEntryExtendedStandardLibrary::STATIC_GetWindowMode(bool* Success, bool* Fullscreen, bool* IsFullscreenWindowed)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function LowEntryExtendedStandardLibrary.LowEntryExtendedStandardLibrary.GetWindowMode");

	ULowEntryExtendedStandardLibrary_GetWindowMode_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Success != nullptr)
		*Success = params.Success;
	if (Fullscreen != nullptr)
		*Fullscreen = params.Fullscreen;
	if (IsFullscreenWindowed != nullptr)
		*IsFullscreenWindowed = params.IsFullscreenWindowed;

}


// Function:
//		Offset -> 0x0046FB50
//		Name   -> Function LowEntryExtendedStandardLibrary.LowEntryExtendedStandardLibrary.GetWindowBounds
//		Flags  -> (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
// Parameters:
//		bool                                               Success                                                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		int                                                X                                                          (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		int                                                Y                                                          (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		int                                                Width                                                      (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		int                                                Height                                                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void ULowEntryExtendedStandardLibrary::STATIC_GetWindowBounds(bool* Success, int* X, int* Y, int* Width, int* Height)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function LowEntryExtendedStandardLibrary.LowEntryExtendedStandardLibrary.GetWindowBounds");

	ULowEntryExtendedStandardLibrary_GetWindowBounds_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Success != nullptr)
		*Success = params.Success;
	if (X != nullptr)
		*X = params.X;
	if (Y != nullptr)
		*Y = params.Y;
	if (Width != nullptr)
		*Width = params.Width;
	if (Height != nullptr)
		*Height = params.Height;

}


// Function:
//		Offset -> 0x0046FA70
//		Name   -> Function LowEntryExtendedStandardLibrary.LowEntryExtendedStandardLibrary.GetWindowBorderSize
//		Flags  -> (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
// Parameters:
//		bool                                               Success                                                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		struct FMargin                                     Margin                                                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
void ULowEntryExtendedStandardLibrary::STATIC_GetWindowBorderSize(bool* Success, struct FMargin* Margin)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function LowEntryExtendedStandardLibrary.LowEntryExtendedStandardLibrary.GetWindowBorderSize");

	ULowEntryExtendedStandardLibrary_GetWindowBorderSize_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Success != nullptr)
		*Success = params.Success;
	if (Margin != nullptr)
		*Margin = params.Margin;

}


// Function:
//		Offset -> 0x0046F9E0
//		Name   -> Function LowEntryExtendedStandardLibrary.LowEntryExtendedStandardLibrary.GetUserFocusedWidgetType
//		Flags  -> (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
//		int                                                UserIndex                                                  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		struct FName                                       ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
struct FName ULowEntryExtendedStandardLibrary::STATIC_GetUserFocusedWidgetType(int UserIndex)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function LowEntryExtendedStandardLibrary.LowEntryExtendedStandardLibrary.GetUserFocusedWidgetType");

	ULowEntryExtendedStandardLibrary_GetUserFocusedWidgetType_Params params {};
	params.UserIndex = UserIndex;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x0046F960
//		Name   -> Function LowEntryExtendedStandardLibrary.LowEntryExtendedStandardLibrary.GetSplitScreenType
//		Flags  -> (Final, Native, Static, Public, HasOutParms, BlueprintCallable, BlueprintPure)
// Parameters:
//		LowEntryExtendedStandardLibrary_ELowEntrySplitScreenType Type                                                       (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void ULowEntryExtendedStandardLibrary::STATIC_GetSplitScreenType(LowEntryExtendedStandardLibrary_ELowEntrySplitScreenType* Type)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function LowEntryExtendedStandardLibrary.LowEntryExtendedStandardLibrary.GetSplitScreenType");

	ULowEntryExtendedStandardLibrary_GetSplitScreenType_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Type != nullptr)
		*Type = params.Type;

}


// Function:
//		Offset -> 0x0046F7E0
//		Name   -> Function LowEntryExtendedStandardLibrary.LowEntryExtendedStandardLibrary.GetPrimaryMonitorWorkArea
//		Flags  -> (Final, Native, Static, Public, HasOutParms, BlueprintCallable, BlueprintPure)
// Parameters:
//		int                                                X                                                          (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		int                                                Y                                                          (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		int                                                Width                                                      (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		int                                                Height                                                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void ULowEntryExtendedStandardLibrary::STATIC_GetPrimaryMonitorWorkArea(int* X, int* Y, int* Width, int* Height)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function LowEntryExtendedStandardLibrary.LowEntryExtendedStandardLibrary.GetPrimaryMonitorWorkArea");

	ULowEntryExtendedStandardLibrary_GetPrimaryMonitorWorkArea_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (X != nullptr)
		*X = params.X;
	if (Y != nullptr)
		*Y = params.Y;
	if (Width != nullptr)
		*Width = params.Width;
	if (Height != nullptr)
		*Height = params.Height;

}


// Function:
//		Offset -> 0x0046F700
//		Name   -> Function LowEntryExtendedStandardLibrary.LowEntryExtendedStandardLibrary.GetPrimaryMonitorResolution
//		Flags  -> (Final, Native, Static, Public, HasOutParms, BlueprintCallable, BlueprintPure)
// Parameters:
//		int                                                Width                                                      (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		int                                                Height                                                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void ULowEntryExtendedStandardLibrary::STATIC_GetPrimaryMonitorResolution(int* Width, int* Height)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function LowEntryExtendedStandardLibrary.LowEntryExtendedStandardLibrary.GetPrimaryMonitorResolution");

	ULowEntryExtendedStandardLibrary_GetPrimaryMonitorResolution_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Width != nullptr)
		*Width = params.Width;
	if (Height != nullptr)
		*Height = params.Height;

}


// Function:
//		Offset -> 0x0046F5D0
//		Name   -> Function LowEntryExtendedStandardLibrary.LowEntryExtendedStandardLibrary.GetMousePositionInPercentages
//		Flags  -> (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
// Parameters:
//		bool                                               Success                                                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		float                                              X                                                          (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		float                                              Y                                                          (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void ULowEntryExtendedStandardLibrary::STATIC_GetMousePositionInPercentages(bool* Success, float* X, float* Y)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function LowEntryExtendedStandardLibrary.LowEntryExtendedStandardLibrary.GetMousePositionInPercentages");

	ULowEntryExtendedStandardLibrary_GetMousePositionInPercentages_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Success != nullptr)
		*Success = params.Success;
	if (X != nullptr)
		*X = params.X;
	if (Y != nullptr)
		*Y = params.Y;

}


// Function:
//		Offset -> 0x0046F4A0
//		Name   -> Function LowEntryExtendedStandardLibrary.LowEntryExtendedStandardLibrary.GetMousePosition
//		Flags  -> (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
// Parameters:
//		bool                                               Success                                                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		int                                                X                                                          (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		int                                                Y                                                          (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void ULowEntryExtendedStandardLibrary::STATIC_GetMousePosition(bool* Success, int* X, int* Y)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function LowEntryExtendedStandardLibrary.LowEntryExtendedStandardLibrary.GetMousePosition");

	ULowEntryExtendedStandardLibrary_GetMousePosition_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Success != nullptr)
		*Success = params.Success;
	if (X != nullptr)
		*X = params.X;
	if (Y != nullptr)
		*Y = params.Y;

}


// Function:
//		Offset -> 0x0046EDA0
//		Name   -> Function LowEntryExtendedStandardLibrary.LowEntryExtendedStandardLibrary.GetMaximumVolume
//		Flags  -> (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
// Parameters:
//		int                                                Volume                                                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		bool                                               Success                                                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void ULowEntryExtendedStandardLibrary::STATIC_GetMaximumVolume(int* Volume, bool* Success)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function LowEntryExtendedStandardLibrary.LowEntryExtendedStandardLibrary.GetMaximumVolume");

	ULowEntryExtendedStandardLibrary_GetMaximumVolume_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Volume != nullptr)
		*Volume = params.Volume;
	if (Success != nullptr)
		*Success = params.Success;

}


// Function:
//		Offset -> 0x0046F3E0
//		Name   -> Function LowEntryExtendedStandardLibrary.LowEntryExtendedStandardLibrary.GetLocalToAbsoluteScale
//		Flags  -> (Final, Native, Static, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintPure)
// Parameters:
//		struct FGeometry                                   Geometry                                                   (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
//		struct FVector2D                                   ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
struct FVector2D ULowEntryExtendedStandardLibrary::STATIC_GetLocalToAbsoluteScale(const struct FGeometry& Geometry)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function LowEntryExtendedStandardLibrary.LowEntryExtendedStandardLibrary.GetLocalToAbsoluteScale");

	ULowEntryExtendedStandardLibrary_GetLocalToAbsoluteScale_Params params {};
	params.Geometry = Geometry;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x0046F3A0
//		Name   -> Function LowEntryExtendedStandardLibrary.LowEntryExtendedStandardLibrary.GetKeyboardFocusedWidgetType
//		Flags  -> (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
//		struct FName                                       ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
struct FName ULowEntryExtendedStandardLibrary::STATIC_GetKeyboardFocusedWidgetType()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function LowEntryExtendedStandardLibrary.LowEntryExtendedStandardLibrary.GetKeyboardFocusedWidgetType");

	ULowEntryExtendedStandardLibrary_GetKeyboardFocusedWidgetType_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x0046F2E0
//		Name   -> Function LowEntryExtendedStandardLibrary.LowEntryExtendedStandardLibrary.GetGenericTeamId
//		Flags  -> (Final, Native, Static, Public, HasOutParms, BlueprintCallable, BlueprintPure)
// Parameters:
//		class AActor*                                      Target                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		unsigned char                                      TeamID                                                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void ULowEntryExtendedStandardLibrary::STATIC_GetGenericTeamId(class AActor* Target, unsigned char* TeamID)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function LowEntryExtendedStandardLibrary.LowEntryExtendedStandardLibrary.GetGenericTeamId");

	ULowEntryExtendedStandardLibrary_GetGenericTeamId_Params params {};
	params.Target = Target;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (TeamID != nullptr)
		*TeamID = params.TeamID;

}


// Function:
//		Offset -> 0x0046EF60
//		Name   -> Function LowEntryExtendedStandardLibrary.LowEntryExtendedStandardLibrary.GetCurrentVolumePercentage
//		Flags  -> (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
// Parameters:
//		float                                              Percentage                                                 (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		bool                                               Success                                                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void ULowEntryExtendedStandardLibrary::STATIC_GetCurrentVolumePercentage(float* Percentage, bool* Success)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function LowEntryExtendedStandardLibrary.LowEntryExtendedStandardLibrary.GetCurrentVolumePercentage");

	ULowEntryExtendedStandardLibrary_GetCurrentVolumePercentage_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Percentage != nullptr)
		*Percentage = params.Percentage;
	if (Success != nullptr)
		*Success = params.Success;

}


// Function:
//		Offset -> 0x0046EDA0
//		Name   -> Function LowEntryExtendedStandardLibrary.LowEntryExtendedStandardLibrary.GetCurrentVolume
//		Flags  -> (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
// Parameters:
//		int                                                Volume                                                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		bool                                               Success                                                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void ULowEntryExtendedStandardLibrary::STATIC_GetCurrentVolume(int* Volume, bool* Success)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function LowEntryExtendedStandardLibrary.LowEntryExtendedStandardLibrary.GetCurrentVolume");

	ULowEntryExtendedStandardLibrary_GetCurrentVolume_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Volume != nullptr)
		*Volume = params.Volume;
	if (Success != nullptr)
		*Success = params.Success;

}


// Function:
//		Offset -> 0x0046F1B0
//		Name   -> Function LowEntryExtendedStandardLibrary.LowEntryExtendedStandardLibrary.GetClassWithName
//		Flags  -> (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
// Parameters:
//		struct FString                                     ClassName                                                  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		class UClass*                                      Class_                                                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		bool                                               Success                                                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void ULowEntryExtendedStandardLibrary::STATIC_GetClassWithName(const struct FString& ClassName, class UClass** Class_, bool* Success)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function LowEntryExtendedStandardLibrary.LowEntryExtendedStandardLibrary.GetClassWithName");

	ULowEntryExtendedStandardLibrary_GetClassWithName_Params params {};
	params.ClassName = ClassName;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Class_ != nullptr)
		*Class_ = params.Class_;
	if (Success != nullptr)
		*Success = params.Success;

}


// Function:
//		Offset -> 0x0046F040
//		Name   -> Function LowEntryExtendedStandardLibrary.LowEntryExtendedStandardLibrary.GetByteWithBitSet
//		Flags  -> (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
//		unsigned char                                      Byte                                                       (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		int                                                Bit                                                        (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		bool                                               Value                                                      (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		unsigned char                                      ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
unsigned char ULowEntryExtendedStandardLibrary::STATIC_GetByteWithBitSet(unsigned char Byte, int Bit, bool Value)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function LowEntryExtendedStandardLibrary.LowEntryExtendedStandardLibrary.GetByteWithBitSet");

	ULowEntryExtendedStandardLibrary_GetByteWithBitSet_Params params {};
	params.Byte = Byte;
	params.Bit = Bit;
	params.Value = Value;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x0046EF60
//		Name   -> Function LowEntryExtendedStandardLibrary.LowEntryExtendedStandardLibrary.GetBatteryTemperature
//		Flags  -> (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
// Parameters:
//		float                                              Celsius                                                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		bool                                               Success                                                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void ULowEntryExtendedStandardLibrary::STATIC_GetBatteryTemperature(float* Celsius, bool* Success)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function LowEntryExtendedStandardLibrary.LowEntryExtendedStandardLibrary.GetBatteryTemperature");

	ULowEntryExtendedStandardLibrary_GetBatteryTemperature_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Celsius != nullptr)
		*Celsius = params.Celsius;
	if (Success != nullptr)
		*Success = params.Success;

}


// Function:
//		Offset -> 0x0046EE80
//		Name   -> Function LowEntryExtendedStandardLibrary.LowEntryExtendedStandardLibrary.GetBatteryState
//		Flags  -> (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
// Parameters:
//		LowEntryExtendedStandardLibrary_ELowEntryBatteryState State                                                      (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		bool                                               Success                                                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void ULowEntryExtendedStandardLibrary::STATIC_GetBatteryState(LowEntryExtendedStandardLibrary_ELowEntryBatteryState* State, bool* Success)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function LowEntryExtendedStandardLibrary.LowEntryExtendedStandardLibrary.GetBatteryState");

	ULowEntryExtendedStandardLibrary_GetBatteryState_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (State != nullptr)
		*State = params.State;
	if (Success != nullptr)
		*Success = params.Success;

}


// Function:
//		Offset -> 0x0046EDA0
//		Name   -> Function LowEntryExtendedStandardLibrary.LowEntryExtendedStandardLibrary.GetBatteryCharge
//		Flags  -> (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
// Parameters:
//		int                                                Percentage                                                 (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		bool                                               Success                                                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void ULowEntryExtendedStandardLibrary::STATIC_GetBatteryCharge(int* Percentage, bool* Success)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function LowEntryExtendedStandardLibrary.LowEntryExtendedStandardLibrary.GetBatteryCharge");

	ULowEntryExtendedStandardLibrary_GetBatteryCharge_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Percentage != nullptr)
		*Percentage = params.Percentage;
	if (Success != nullptr)
		*Success = params.Success;

}


// Function:
//		Offset -> 0x0046ED20
//		Name   -> Function LowEntryExtendedStandardLibrary.LowEntryExtendedStandardLibrary.GetAndroidVolume
//		Flags  -> (Final, Native, Static, Public, HasOutParms, BlueprintCallable, BlueprintPure)
// Parameters:
//		int                                                Volume                                                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void ULowEntryExtendedStandardLibrary::STATIC_GetAndroidVolume(int* Volume)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function LowEntryExtendedStandardLibrary.LowEntryExtendedStandardLibrary.GetAndroidVolume");

	ULowEntryExtendedStandardLibrary_GetAndroidVolume_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Volume != nullptr)
		*Volume = params.Volume;

}


// Function:
//		Offset -> 0x0046ECA0
//		Name   -> Function LowEntryExtendedStandardLibrary.LowEntryExtendedStandardLibrary.GetAndroidVersion
//		Flags  -> (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
//		struct FString                                     ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
struct FString ULowEntryExtendedStandardLibrary::STATIC_GetAndroidVersion()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function LowEntryExtendedStandardLibrary.LowEntryExtendedStandardLibrary.GetAndroidVersion");

	ULowEntryExtendedStandardLibrary_GetAndroidVersion_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x0046ECA0
//		Name   -> Function LowEntryExtendedStandardLibrary.LowEntryExtendedStandardLibrary.GetAndroidOsLanguage
//		Flags  -> (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
//		struct FString                                     ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
struct FString ULowEntryExtendedStandardLibrary::STATIC_GetAndroidOsLanguage()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function LowEntryExtendedStandardLibrary.LowEntryExtendedStandardLibrary.GetAndroidOsLanguage");

	ULowEntryExtendedStandardLibrary_GetAndroidOsLanguage_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x0046EC70
//		Name   -> Function LowEntryExtendedStandardLibrary.LowEntryExtendedStandardLibrary.GetAndroidNumberOfCores
//		Flags  -> (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
//		int                                                ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
int ULowEntryExtendedStandardLibrary::STATIC_GetAndroidNumberOfCores()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function LowEntryExtendedStandardLibrary.LowEntryExtendedStandardLibrary.GetAndroidNumberOfCores");

	ULowEntryExtendedStandardLibrary_GetAndroidNumberOfCores_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x0046ECA0
//		Name   -> Function LowEntryExtendedStandardLibrary.LowEntryExtendedStandardLibrary.GetAndroidGpuFamily
//		Flags  -> (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
//		struct FString                                     ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
struct FString ULowEntryExtendedStandardLibrary::STATIC_GetAndroidGpuFamily()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function LowEntryExtendedStandardLibrary.LowEntryExtendedStandardLibrary.GetAndroidGpuFamily");

	ULowEntryExtendedStandardLibrary_GetAndroidGpuFamily_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x0046ECA0
//		Name   -> Function LowEntryExtendedStandardLibrary.LowEntryExtendedStandardLibrary.GetAndroidGlVersion
//		Flags  -> (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
//		struct FString                                     ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
struct FString ULowEntryExtendedStandardLibrary::STATIC_GetAndroidGlVersion()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function LowEntryExtendedStandardLibrary.LowEntryExtendedStandardLibrary.GetAndroidGlVersion");

	ULowEntryExtendedStandardLibrary_GetAndroidGlVersion_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x0046ECA0
//		Name   -> Function LowEntryExtendedStandardLibrary.LowEntryExtendedStandardLibrary.GetAndroidDeviceModel
//		Flags  -> (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
//		struct FString                                     ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
struct FString ULowEntryExtendedStandardLibrary::STATIC_GetAndroidDeviceModel()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function LowEntryExtendedStandardLibrary.LowEntryExtendedStandardLibrary.GetAndroidDeviceModel");

	ULowEntryExtendedStandardLibrary_GetAndroidDeviceModel_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x0046ECA0
//		Name   -> Function LowEntryExtendedStandardLibrary.LowEntryExtendedStandardLibrary.GetAndroidDeviceMake
//		Flags  -> (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
//		struct FString                                     ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
struct FString ULowEntryExtendedStandardLibrary::STATIC_GetAndroidDeviceMake()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function LowEntryExtendedStandardLibrary.LowEntryExtendedStandardLibrary.GetAndroidDeviceMake");

	ULowEntryExtendedStandardLibrary_GetAndroidDeviceMake_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x0046ECA0
//		Name   -> Function LowEntryExtendedStandardLibrary.LowEntryExtendedStandardLibrary.GetAndroidDefaultLocale
//		Flags  -> (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
//		struct FString                                     ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
struct FString ULowEntryExtendedStandardLibrary::STATIC_GetAndroidDefaultLocale()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function LowEntryExtendedStandardLibrary.LowEntryExtendedStandardLibrary.GetAndroidDefaultLocale");

	ULowEntryExtendedStandardLibrary_GetAndroidDefaultLocale_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x0046EC70
//		Name   -> Function LowEntryExtendedStandardLibrary.LowEntryExtendedStandardLibrary.GetAndroidBuildVersion
//		Flags  -> (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
//		int                                                ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
int ULowEntryExtendedStandardLibrary::STATIC_GetAndroidBuildVersion()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function LowEntryExtendedStandardLibrary.LowEntryExtendedStandardLibrary.GetAndroidBuildVersion");

	ULowEntryExtendedStandardLibrary_GetAndroidBuildVersion_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x0046EBB0
//		Name   -> Function LowEntryExtendedStandardLibrary.LowEntryExtendedStandardLibrary.GetAbsoluteToLocalScale
//		Flags  -> (Final, Native, Static, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintPure)
// Parameters:
//		struct FGeometry                                   Geometry                                                   (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
//		struct FVector2D                                   ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
struct FVector2D ULowEntryExtendedStandardLibrary::STATIC_GetAbsoluteToLocalScale(const struct FGeometry& Geometry)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function LowEntryExtendedStandardLibrary.LowEntryExtendedStandardLibrary.GetAbsoluteToLocalScale");

	ULowEntryExtendedStandardLibrary_GetAbsoluteToLocalScale_Params params {};
	params.Geometry = Geometry;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x0046EAF0
//		Name   -> Function LowEntryExtendedStandardLibrary.LowEntryExtendedStandardLibrary.GetAbsoluteSize
//		Flags  -> (Final, Native, Static, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintPure)
// Parameters:
//		struct FGeometry                                   Geometry                                                   (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
//		struct FVector2D                                   ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
struct FVector2D ULowEntryExtendedStandardLibrary::STATIC_GetAbsoluteSize(const struct FGeometry& Geometry)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function LowEntryExtendedStandardLibrary.LowEntryExtendedStandardLibrary.GetAbsoluteSize");

	ULowEntryExtendedStandardLibrary_GetAbsoluteSize_Params params {};
	params.Geometry = Geometry;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x0046E9E0
//		Name   -> Function LowEntryExtendedStandardLibrary.LowEntryExtendedStandardLibrary.GenerateRandomBytesRandomLength
//		Flags  -> (Final, Native, Static, Public, HasOutParms, BlueprintCallable, BlueprintPure)
// Parameters:
//		int                                                minLength                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		int                                                maxLength                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		TArray<unsigned char>                              ByteArray                                                  (Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
void ULowEntryExtendedStandardLibrary::STATIC_GenerateRandomBytesRandomLength(int minLength, int maxLength, TArray<unsigned char>* ByteArray)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function LowEntryExtendedStandardLibrary.LowEntryExtendedStandardLibrary.GenerateRandomBytesRandomLength");

	ULowEntryExtendedStandardLibrary_GenerateRandomBytesRandomLength_Params params {};
	params.minLength = minLength;
	params.maxLength = maxLength;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (ByteArray != nullptr)
		*ByteArray = params.ByteArray;

}


// Function:
//		Offset -> 0x0046E910
//		Name   -> Function LowEntryExtendedStandardLibrary.LowEntryExtendedStandardLibrary.GenerateRandomBytes
//		Flags  -> (Final, Native, Static, Public, HasOutParms, BlueprintCallable, BlueprintPure)
// Parameters:
//		int                                                Length                                                     (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		TArray<unsigned char>                              ByteArray                                                  (Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
void ULowEntryExtendedStandardLibrary::STATIC_GenerateRandomBytes(int Length, TArray<unsigned char>* ByteArray)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function LowEntryExtendedStandardLibrary.LowEntryExtendedStandardLibrary.GenerateRandomBytes");

	ULowEntryExtendedStandardLibrary_GenerateRandomBytes_Params params {};
	params.Length = Length;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (ByteArray != nullptr)
		*ByteArray = params.ByteArray;

}


// Function:
//		Offset -> 0x0046E840
//		Name   -> Function LowEntryExtendedStandardLibrary.LowEntryExtendedStandardLibrary.FloorDecimals
//		Flags  -> (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
//		float                                              Number                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		int                                                Decimals                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		float                                              ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
float ULowEntryExtendedStandardLibrary::STATIC_FloorDecimals(float Number, int Decimals)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function LowEntryExtendedStandardLibrary.LowEntryExtendedStandardLibrary.FloorDecimals");

	ULowEntryExtendedStandardLibrary_FloorDecimals_Params params {};
	params.Number = Number;
	params.Decimals = Decimals;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x0046E4C0
//		Name   -> Function LowEntryExtendedStandardLibrary.LowEntryExtendedStandardLibrary.FloatToBytes
//		Flags  -> (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
//		float                                              Value                                                      (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		TArray<unsigned char>                              ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, NativeAccessSpecifierPublic)
TArray<unsigned char> ULowEntryExtendedStandardLibrary::STATIC_FloatToBytes(float Value)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function LowEntryExtendedStandardLibrary.LowEntryExtendedStandardLibrary.FloatToBytes");

	ULowEntryExtendedStandardLibrary_FloatToBytes_Params params {};
	params.Value = Value;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x0046E400
//		Name   -> Function LowEntryExtendedStandardLibrary.LowEntryExtendedStandardLibrary.ExecToInteger
//		Flags  -> (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
// Parameters:
//		LowEntryExtendedStandardLibrary_ELowEntryExtendedStandardLibrary0to9 Branch                                                     (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		int                                                Value                                                      (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void ULowEntryExtendedStandardLibrary::STATIC_ExecToInteger(LowEntryExtendedStandardLibrary_ELowEntryExtendedStandardLibrary0to9 Branch, int* Value)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function LowEntryExtendedStandardLibrary.LowEntryExtendedStandardLibrary.ExecToInteger");

	ULowEntryExtendedStandardLibrary_ExecToInteger_Params params {};
	params.Branch = Branch;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Value != nullptr)
		*Value = params.Value;

}


// Function:
//		Offset -> 0x0046E340
//		Name   -> Function LowEntryExtendedStandardLibrary.LowEntryExtendedStandardLibrary.ExecToByte
//		Flags  -> (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
// Parameters:
//		LowEntryExtendedStandardLibrary_ELowEntryExtendedStandardLibrary0to9 Branch                                                     (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		unsigned char                                      Value                                                      (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void ULowEntryExtendedStandardLibrary::STATIC_ExecToByte(LowEntryExtendedStandardLibrary_ELowEntryExtendedStandardLibrary0to9 Branch, unsigned char* Value)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function LowEntryExtendedStandardLibrary.LowEntryExtendedStandardLibrary.ExecToByte");

	ULowEntryExtendedStandardLibrary_ExecToByte_Params params {};
	params.Branch = Branch;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Value != nullptr)
		*Value = params.Value;

}


// Function:
//		Offset -> 0x0046E280
//		Name   -> Function LowEntryExtendedStandardLibrary.LowEntryExtendedStandardLibrary.ExecToBoolean
//		Flags  -> (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
// Parameters:
//		LowEntryExtendedStandardLibrary_ELowEntryExtendedStandardLibraryTrueOrFalse Branch                                                     (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		bool                                               Value                                                      (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void ULowEntryExtendedStandardLibrary::STATIC_ExecToBoolean(LowEntryExtendedStandardLibrary_ELowEntryExtendedStandardLibraryTrueOrFalse Branch, bool* Value)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function LowEntryExtendedStandardLibrary.LowEntryExtendedStandardLibrary.ExecToBoolean");

	ULowEntryExtendedStandardLibrary_ExecToBoolean_Params params {};
	params.Branch = Branch;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Value != nullptr)
		*Value = params.Value;

}


// Function:
//		Offset -> 0x0046E1D0
//		Name   -> Function LowEntryExtendedStandardLibrary.LowEntryExtendedStandardLibrary.EncapsulateByteArray
//		Flags  -> (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
// Parameters:
//		TArray<unsigned char>                              ByteArray                                                  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
//		class ULowEntryByteArray*                          ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
class ULowEntryByteArray* ULowEntryExtendedStandardLibrary::STATIC_EncapsulateByteArray(TArray<unsigned char> ByteArray)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function LowEntryExtendedStandardLibrary.LowEntryExtendedStandardLibrary.EncapsulateByteArray");

	ULowEntryExtendedStandardLibrary_EncapsulateByteArray_Params params {};
	params.ByteArray = ByteArray;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x0046E1A0
//		Name   -> Function LowEntryExtendedStandardLibrary.LowEntryExtendedStandardLibrary.Double_CreateZero
//		Flags  -> (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
//		class ULowEntryDouble*                             ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
class ULowEntryDouble* ULowEntryExtendedStandardLibrary::STATIC_Double_CreateZero()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function LowEntryExtendedStandardLibrary.LowEntryExtendedStandardLibrary.Double_CreateZero");

	ULowEntryExtendedStandardLibrary_Double_CreateZero_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x0046B7C0
//		Name   -> Function LowEntryExtendedStandardLibrary.LowEntryExtendedStandardLibrary.Double_Create
//		Flags  -> (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
// Parameters:
//		TArray<unsigned char>                              ByteArray                                                  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
//		int                                                Index                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		int                                                Length                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		class ULowEntryDouble*                             ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
class ULowEntryDouble* ULowEntryExtendedStandardLibrary::STATIC_Double_Create(TArray<unsigned char> ByteArray, int Index, int Length)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function LowEntryExtendedStandardLibrary.LowEntryExtendedStandardLibrary.Double_Create");

	ULowEntryExtendedStandardLibrary_Double_Create_Params params {};
	params.ByteArray = ByteArray;
	params.Index = Index;
	params.Length = Length;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x0046DE10
//		Name   -> Function LowEntryExtendedStandardLibrary.LowEntryExtendedStandardLibrary.Divide_Vector2dVector2d
//		Flags  -> (Final, Native, Static, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintPure)
// Parameters:
//		struct FVector2D                                   A                                                          (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		struct FVector2D                                   B                                                          (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		struct FVector2D                                   ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
struct FVector2D ULowEntryExtendedStandardLibrary::STATIC_Divide_Vector2dVector2d(const struct FVector2D& A, const struct FVector2D& B)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function LowEntryExtendedStandardLibrary.LowEntryExtendedStandardLibrary.Divide_Vector2dVector2d");

	ULowEntryExtendedStandardLibrary_Divide_Vector2dVector2d_Params params {};
	params.A = A;
	params.B = B;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00467660
//		Name   -> Function LowEntryExtendedStandardLibrary.LowEntryExtendedStandardLibrary.DevelopmentBuild
//		Flags  -> (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
//		bool                                               ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool ULowEntryExtendedStandardLibrary::STATIC_DevelopmentBuild()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function LowEntryExtendedStandardLibrary.LowEntryExtendedStandardLibrary.DevelopmentBuild");

	ULowEntryExtendedStandardLibrary_DevelopmentBuild_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x0046DDE0
//		Name   -> Function LowEntryExtendedStandardLibrary.LowEntryExtendedStandardLibrary.DesktopPlatform
//		Flags  -> (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
//		bool                                               ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool ULowEntryExtendedStandardLibrary::STATIC_DesktopPlatform()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function LowEntryExtendedStandardLibrary.LowEntryExtendedStandardLibrary.DesktopPlatform");

	ULowEntryExtendedStandardLibrary_DesktopPlatform_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x0046DCC0
//		Name   -> Function LowEntryExtendedStandardLibrary.LowEntryExtendedStandardLibrary.DelayFrames
//		Flags  -> (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
//		class UObject*                                     WorldContextObject                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		int                                                Frames                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		struct FLatentActionInfo                           LatentInfo                                                 (Parm, NoDestructor, NativeAccessSpecifierPublic)
void ULowEntryExtendedStandardLibrary::STATIC_DelayFrames(class UObject* WorldContextObject, int Frames, const struct FLatentActionInfo& LatentInfo)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function LowEntryExtendedStandardLibrary.LowEntryExtendedStandardLibrary.DelayFrames");

	ULowEntryExtendedStandardLibrary_DelayFrames_Params params {};
	params.WorldContextObject = WorldContextObject;
	params.Frames = Frames;
	params.LatentInfo = LatentInfo;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00467660
//		Name   -> Function LowEntryExtendedStandardLibrary.LowEntryExtendedStandardLibrary.DebugBuild
//		Flags  -> (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
//		bool                                               ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool ULowEntryExtendedStandardLibrary::STATIC_DebugBuild()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function LowEntryExtendedStandardLibrary.LowEntryExtendedStandardLibrary.DebugBuild");

	ULowEntryExtendedStandardLibrary_DebugBuild_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x0046DBE0
//		Name   -> Function LowEntryExtendedStandardLibrary.LowEntryExtendedStandardLibrary.DateTime_ToUnixTimestamp
//		Flags  -> (Final, Native, Static, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintPure)
// Parameters:
//		struct FDateTime                                   DateTime                                                   (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		class ULowEntryLong*                               Timestamp                                                  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void ULowEntryExtendedStandardLibrary::STATIC_DateTime_ToUnixTimestamp(const struct FDateTime& DateTime, class ULowEntryLong** Timestamp)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function LowEntryExtendedStandardLibrary.LowEntryExtendedStandardLibrary.DateTime_ToUnixTimestamp");

	ULowEntryExtendedStandardLibrary_DateTime_ToUnixTimestamp_Params params {};
	params.DateTime = DateTime;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Timestamp != nullptr)
		*Timestamp = params.Timestamp;

}


// Function:
//		Offset -> 0x0046DA90
//		Name   -> Function LowEntryExtendedStandardLibrary.LowEntryExtendedStandardLibrary.DateTime_ToString
//		Flags  -> (Final, Native, Static, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintPure)
// Parameters:
//		struct FDateTime                                   DateTime                                                   (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		struct FString                                     String                                                     (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		struct FString                                     Format                                                     (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void ULowEntryExtendedStandardLibrary::STATIC_DateTime_ToString(const struct FDateTime& DateTime, struct FString* String, const struct FString& Format)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function LowEntryExtendedStandardLibrary.LowEntryExtendedStandardLibrary.DateTime_ToString");

	ULowEntryExtendedStandardLibrary_DateTime_ToString_Params params {};
	params.DateTime = DateTime;
	params.Format = Format;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (String != nullptr)
		*String = params.String;

}


// Function:
//		Offset -> 0x0046D9A0
//		Name   -> Function LowEntryExtendedStandardLibrary.LowEntryExtendedStandardLibrary.DateTime_ToIso8601
//		Flags  -> (Final, Native, Static, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintPure)
// Parameters:
//		struct FDateTime                                   DateTime                                                   (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		struct FString                                     String                                                     (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void ULowEntryExtendedStandardLibrary::STATIC_DateTime_ToIso8601(const struct FDateTime& DateTime, struct FString* String)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function LowEntryExtendedStandardLibrary.LowEntryExtendedStandardLibrary.DateTime_ToIso8601");

	ULowEntryExtendedStandardLibrary_DateTime_ToIso8601_Params params {};
	params.DateTime = DateTime;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (String != nullptr)
		*String = params.String;

}


// Function:
//		Offset -> 0x0046D8E0
//		Name   -> Function LowEntryExtendedStandardLibrary.LowEntryExtendedStandardLibrary.DateTime_FromUnixTimestamp
//		Flags  -> (Final, Native, Static, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintPure)
// Parameters:
//		class ULowEntryLong*                               Timestamp                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		struct FDateTime                                   DateTime                                                   (Parm, OutParm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void ULowEntryExtendedStandardLibrary::STATIC_DateTime_FromUnixTimestamp(class ULowEntryLong* Timestamp, struct FDateTime* DateTime)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function LowEntryExtendedStandardLibrary.LowEntryExtendedStandardLibrary.DateTime_FromUnixTimestamp");

	ULowEntryExtendedStandardLibrary_DateTime_FromUnixTimestamp_Params params {};
	params.Timestamp = Timestamp;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (DateTime != nullptr)
		*DateTime = params.DateTime;

}


// Function:
//		Offset -> 0x0046D7C0
//		Name   -> Function LowEntryExtendedStandardLibrary.LowEntryExtendedStandardLibrary.CreateString
//		Flags  -> (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
//		int                                                Length                                                     (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		struct FString                                     Filler                                                     (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		struct FString                                     ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
struct FString ULowEntryExtendedStandardLibrary::STATIC_CreateString(int Length, const struct FString& Filler)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function LowEntryExtendedStandardLibrary.LowEntryExtendedStandardLibrary.CreateString");

	ULowEntryExtendedStandardLibrary_CreateString_Params params {};
	params.Length = Length;
	params.Filler = Filler;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x0046D700
//		Name   -> Function LowEntryExtendedStandardLibrary.LowEntryExtendedStandardLibrary.CreateObject
//		Flags  -> (Final, Native, Static, Public, HasOutParms, BlueprintCallable, BlueprintPure)
// Parameters:
//		class UClass*                                      Class                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		class UObject*                                     Object                                                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void ULowEntryExtendedStandardLibrary::STATIC_CreateObject(class UClass* Class, class UObject** Object)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function LowEntryExtendedStandardLibrary.LowEntryExtendedStandardLibrary.CreateObject");

	ULowEntryExtendedStandardLibrary_CreateObject_Params params {};
	params.Class = Class;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Object != nullptr)
		*Object = params.Object;

}


// Function:
//		Offset -> 0x0046D6B0
//		Name   -> Function LowEntryExtendedStandardLibrary.LowEntryExtendedStandardLibrary.Crash
//		Flags  -> (Final, Native, Static, Public, BlueprintCallable)
void ULowEntryExtendedStandardLibrary::STATIC_Crash()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function LowEntryExtendedStandardLibrary.LowEntryExtendedStandardLibrary.Crash");

	ULowEntryExtendedStandardLibrary_Crash_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x0046D5E0
//		Name   -> Function LowEntryExtendedStandardLibrary.LowEntryExtendedStandardLibrary.ConvertUtcDateToLocalDate
//		Flags  -> (Final, Native, Static, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintPure)
// Parameters:
//		struct FDateTime                                   Utc                                                        (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		struct FDateTime                                   Local                                                      (Parm, OutParm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void ULowEntryExtendedStandardLibrary::STATIC_ConvertUtcDateToLocalDate(const struct FDateTime& Utc, struct FDateTime* Local)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function LowEntryExtendedStandardLibrary.LowEntryExtendedStandardLibrary.ConvertUtcDateToLocalDate");

	ULowEntryExtendedStandardLibrary_ConvertUtcDateToLocalDate_Params params {};
	params.Utc = Utc;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Local != nullptr)
		*Local = params.Local;

}


// Function:
//		Offset -> 0x0046D510
//		Name   -> Function LowEntryExtendedStandardLibrary.LowEntryExtendedStandardLibrary.ConvertLocalDateToUtcDate
//		Flags  -> (Final, Native, Static, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintPure)
// Parameters:
//		struct FDateTime                                   Local                                                      (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		struct FDateTime                                   Utc                                                        (Parm, OutParm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void ULowEntryExtendedStandardLibrary::STATIC_ConvertLocalDateToUtcDate(const struct FDateTime& Local, struct FDateTime* Utc)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function LowEntryExtendedStandardLibrary.LowEntryExtendedStandardLibrary.ConvertLocalDateToUtcDate");

	ULowEntryExtendedStandardLibrary_ConvertLocalDateToUtcDate_Params params {};
	params.Local = Local;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Utc != nullptr)
		*Utc = params.Utc;

}


// Function:
//		Offset -> 0x0046D480
//		Name   -> Function LowEntryExtendedStandardLibrary.LowEntryExtendedStandardLibrary.ClipboardSet
//		Flags  -> (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
//		struct FString                                     Value                                                      (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void ULowEntryExtendedStandardLibrary::STATIC_ClipboardSet(const struct FString& Value)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function LowEntryExtendedStandardLibrary.LowEntryExtendedStandardLibrary.ClipboardSet");

	ULowEntryExtendedStandardLibrary_ClipboardSet_Params params {};
	params.Value = Value;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x0046D400
//		Name   -> Function LowEntryExtendedStandardLibrary.LowEntryExtendedStandardLibrary.ClipboardGet
//		Flags  -> (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
//		struct FString                                     ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
struct FString ULowEntryExtendedStandardLibrary::STATIC_ClipboardGet()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function LowEntryExtendedStandardLibrary.LowEntryExtendedStandardLibrary.ClipboardGet");

	ULowEntryExtendedStandardLibrary_ClipboardGet_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x0046D390
//		Name   -> Function LowEntryExtendedStandardLibrary.LowEntryExtendedStandardLibrary.ClearUserFocus
//		Flags  -> (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
//		int                                                UserIndex                                                  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void ULowEntryExtendedStandardLibrary::STATIC_ClearUserFocus(int UserIndex)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function LowEntryExtendedStandardLibrary.LowEntryExtendedStandardLibrary.ClearUserFocus");

	ULowEntryExtendedStandardLibrary_ClearUserFocus_Params params {};
	params.UserIndex = UserIndex;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x0046D370
//		Name   -> Function LowEntryExtendedStandardLibrary.LowEntryExtendedStandardLibrary.ClearKeyboardFocus
//		Flags  -> (Final, Native, Static, Public, BlueprintCallable)
void ULowEntryExtendedStandardLibrary::STATIC_ClearKeyboardFocus()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function LowEntryExtendedStandardLibrary.LowEntryExtendedStandardLibrary.ClearKeyboardFocus");

	ULowEntryExtendedStandardLibrary_ClearKeyboardFocus_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x0046D350
//		Name   -> Function LowEntryExtendedStandardLibrary.LowEntryExtendedStandardLibrary.ClearAllUserFocus
//		Flags  -> (Final, Native, Static, Public, BlueprintCallable)
void ULowEntryExtendedStandardLibrary::STATIC_ClearAllUserFocus()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function LowEntryExtendedStandardLibrary.LowEntryExtendedStandardLibrary.ClearAllUserFocus");

	ULowEntryExtendedStandardLibrary_ClearAllUserFocus_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x0046D1F0
//		Name   -> Function LowEntryExtendedStandardLibrary.LowEntryExtendedStandardLibrary.ChangeMap
//		Flags  -> (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
//		class UObject*                                     WorldContextObject                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		struct FString                                     Map                                                        (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		struct FString                                     Args                                                       (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		class APlayerController*                           SpecificPlayer                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void ULowEntryExtendedStandardLibrary::STATIC_ChangeMap(class UObject* WorldContextObject, const struct FString& Map, const struct FString& Args, class APlayerController* SpecificPlayer)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function LowEntryExtendedStandardLibrary.LowEntryExtendedStandardLibrary.ChangeMap");

	ULowEntryExtendedStandardLibrary_ChangeMap_Params params {};
	params.WorldContextObject = WorldContextObject;
	params.Map = Map;
	params.Args = Args;
	params.SpecificPlayer = SpecificPlayer;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x0046D120
//		Name   -> Function LowEntryExtendedStandardLibrary.LowEntryExtendedStandardLibrary.CeilDecimals
//		Flags  -> (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
//		float                                              Number                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		int                                                Decimals                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		float                                              ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
float ULowEntryExtendedStandardLibrary::STATIC_CeilDecimals(float Number, int Decimals)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function LowEntryExtendedStandardLibrary.LowEntryExtendedStandardLibrary.CeilDecimals");

	ULowEntryExtendedStandardLibrary_CeilDecimals_Params params {};
	params.Number = Number;
	params.Decimals = Decimals;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x0046CC90
//		Name   -> Function LowEntryExtendedStandardLibrary.LowEntryExtendedStandardLibrary.CaseSwitchObject
//		Flags  -> (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
// Parameters:
//		int                                                OnlyCheckFirstX                                            (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		class UObject*                                     Value                                                      (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		class UObject*                                     _1__                                                       (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		class UObject*                                     _2__                                                       (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		class UObject*                                     _3__                                                       (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		class UObject*                                     _4__                                                       (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		class UObject*                                     _5__                                                       (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		class UObject*                                     _6__                                                       (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		class UObject*                                     _7__                                                       (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		class UObject*                                     _8__                                                       (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		class UObject*                                     _9__                                                       (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		class UObject*                                     _10__                                                      (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		LowEntryExtendedStandardLibrary_ELowEntryExtendedStandardLibrary1to10other Branch                                                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void ULowEntryExtendedStandardLibrary::STATIC_CaseSwitchObject(int OnlyCheckFirstX, class UObject* Value, class UObject* _1__, class UObject* _2__, class UObject* _3__, class UObject* _4__, class UObject* _5__, class UObject* _6__, class UObject* _7__, class UObject* _8__, class UObject* _9__, class UObject* _10__, LowEntryExtendedStandardLibrary_ELowEntryExtendedStandardLibrary1to10other* Branch)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function LowEntryExtendedStandardLibrary.LowEntryExtendedStandardLibrary.CaseSwitchObject");

	ULowEntryExtendedStandardLibrary_CaseSwitchObject_Params params {};
	params.OnlyCheckFirstX = OnlyCheckFirstX;
	params.Value = Value;
	params._1__ = _1__;
	params._2__ = _2__;
	params._3__ = _3__;
	params._4__ = _4__;
	params._5__ = _5__;
	params._6__ = _6__;
	params._7__ = _7__;
	params._8__ = _8__;
	params._9__ = _9__;
	params._10__ = _10__;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Branch != nullptr)
		*Branch = params.Branch;

}


// Function:
//		Offset -> 0x0046C920
//		Name   -> Function LowEntryExtendedStandardLibrary.LowEntryExtendedStandardLibrary.CaseSwitchInteger
//		Flags  -> (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
// Parameters:
//		int                                                OnlyCheckFirstX                                            (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		int                                                Value                                                      (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		int                                                _1__                                                       (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		int                                                _2__                                                       (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		int                                                _3__                                                       (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		int                                                _4__                                                       (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		int                                                _5__                                                       (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		int                                                _6__                                                       (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		int                                                _7__                                                       (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		int                                                _8__                                                       (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		int                                                _9__                                                       (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		int                                                _10__                                                      (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		LowEntryExtendedStandardLibrary_ELowEntryExtendedStandardLibrary1to10other Branch                                                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void ULowEntryExtendedStandardLibrary::STATIC_CaseSwitchInteger(int OnlyCheckFirstX, int Value, int _1__, int _2__, int _3__, int _4__, int _5__, int _6__, int _7__, int _8__, int _9__, int _10__, LowEntryExtendedStandardLibrary_ELowEntryExtendedStandardLibrary1to10other* Branch)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function LowEntryExtendedStandardLibrary.LowEntryExtendedStandardLibrary.CaseSwitchInteger");

	ULowEntryExtendedStandardLibrary_CaseSwitchInteger_Params params {};
	params.OnlyCheckFirstX = OnlyCheckFirstX;
	params.Value = Value;
	params._1__ = _1__;
	params._2__ = _2__;
	params._3__ = _3__;
	params._4__ = _4__;
	params._5__ = _5__;
	params._6__ = _6__;
	params._7__ = _7__;
	params._8__ = _8__;
	params._9__ = _9__;
	params._10__ = _10__;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Branch != nullptr)
		*Branch = params.Branch;

}


// Function:
//		Offset -> 0x0046C5A0
//		Name   -> Function LowEntryExtendedStandardLibrary.LowEntryExtendedStandardLibrary.CaseSwitchByte
//		Flags  -> (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
// Parameters:
//		int                                                OnlyCheckFirstX                                            (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		unsigned char                                      Value                                                      (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		unsigned char                                      _1__                                                       (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		unsigned char                                      _2__                                                       (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		unsigned char                                      _3__                                                       (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		unsigned char                                      _4__                                                       (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		unsigned char                                      _5__                                                       (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		unsigned char                                      _6__                                                       (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		unsigned char                                      _7__                                                       (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		unsigned char                                      _8__                                                       (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		unsigned char                                      _9__                                                       (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		unsigned char                                      _10__                                                      (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		LowEntryExtendedStandardLibrary_ELowEntryExtendedStandardLibrary1to10other Branch                                                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void ULowEntryExtendedStandardLibrary::STATIC_CaseSwitchByte(int OnlyCheckFirstX, unsigned char Value, unsigned char _1__, unsigned char _2__, unsigned char _3__, unsigned char _4__, unsigned char _5__, unsigned char _6__, unsigned char _7__, unsigned char _8__, unsigned char _9__, unsigned char _10__, LowEntryExtendedStandardLibrary_ELowEntryExtendedStandardLibrary1to10other* Branch)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function LowEntryExtendedStandardLibrary.LowEntryExtendedStandardLibrary.CaseSwitchByte");

	ULowEntryExtendedStandardLibrary_CaseSwitchByte_Params params {};
	params.OnlyCheckFirstX = OnlyCheckFirstX;
	params.Value = Value;
	params._1__ = _1__;
	params._2__ = _2__;
	params._3__ = _3__;
	params._4__ = _4__;
	params._5__ = _5__;
	params._6__ = _6__;
	params._7__ = _7__;
	params._8__ = _8__;
	params._9__ = _9__;
	params._10__ = _10__;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Branch != nullptr)
		*Branch = params.Branch;

}


// Function:
//		Offset -> 0x0046C520
//		Name   -> Function LowEntryExtendedStandardLibrary.LowEntryExtendedStandardLibrary.CarriageReturnCharacter
//		Flags  -> (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
//		struct FString                                     ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
struct FString ULowEntryExtendedStandardLibrary::STATIC_CarriageReturnCharacter()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function LowEntryExtendedStandardLibrary.LowEntryExtendedStandardLibrary.CarriageReturnCharacter");

	ULowEntryExtendedStandardLibrary_CarriageReturnCharacter_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x0046AD00
//		Name   -> Function LowEntryExtendedStandardLibrary.LowEntryExtendedStandardLibrary.ByteToBytes
//		Flags  -> (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
//		unsigned char                                      Value                                                      (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		TArray<unsigned char>                              ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, NativeAccessSpecifierPublic)
TArray<unsigned char> ULowEntryExtendedStandardLibrary::STATIC_ByteToBytes(unsigned char Value)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function LowEntryExtendedStandardLibrary.LowEntryExtendedStandardLibrary.ByteToBytes");

	ULowEntryExtendedStandardLibrary_ByteToBytes_Params params {};
	params.Value = Value;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x0046AC80
//		Name   -> Function LowEntryExtendedStandardLibrary.LowEntryExtendedStandardLibrary.ByteToBoolean
//		Flags  -> (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
//		unsigned char                                      Byte                                                       (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		bool                                               ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool ULowEntryExtendedStandardLibrary::STATIC_ByteToBoolean(unsigned char Byte)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function LowEntryExtendedStandardLibrary.LowEntryExtendedStandardLibrary.ByteToBoolean");

	ULowEntryExtendedStandardLibrary_ByteToBoolean_Params params {};
	params.Byte = Byte;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x0046A970
//		Name   -> Function LowEntryExtendedStandardLibrary.LowEntryExtendedStandardLibrary.ByteToBits
//		Flags  -> (Final, Native, Static, Public, HasOutParms, BlueprintCallable, BlueprintPure)
// Parameters:
//		unsigned char                                      Byte                                                       (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		bool                                               Bit1                                                       (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		bool                                               Bit2                                                       (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		bool                                               Bit3                                                       (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		bool                                               Bit4                                                       (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		bool                                               Bit5                                                       (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		bool                                               Bit6                                                       (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		bool                                               Bit7                                                       (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		bool                                               Bit8                                                       (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void ULowEntryExtendedStandardLibrary::STATIC_ByteToBits(unsigned char Byte, bool* Bit1, bool* Bit2, bool* Bit3, bool* Bit4, bool* Bit5, bool* Bit6, bool* Bit7, bool* Bit8)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function LowEntryExtendedStandardLibrary.LowEntryExtendedStandardLibrary.ByteToBits");

	ULowEntryExtendedStandardLibrary_ByteToBits_Params params {};
	params.Byte = Byte;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Bit1 != nullptr)
		*Bit1 = params.Bit1;
	if (Bit2 != nullptr)
		*Bit2 = params.Bit2;
	if (Bit3 != nullptr)
		*Bit3 = params.Bit3;
	if (Bit4 != nullptr)
		*Bit4 = params.Bit4;
	if (Bit5 != nullptr)
		*Bit5 = params.Bit5;
	if (Bit6 != nullptr)
		*Bit6 = params.Bit6;
	if (Bit7 != nullptr)
		*Bit7 = params.Bit7;
	if (Bit8 != nullptr)
		*Bit8 = params.Bit8;

}


// Function:
//		Offset -> 0x0046C3C0
//		Name   -> Function LowEntryExtendedStandardLibrary.LowEntryExtendedStandardLibrary.BytesToStringUtf8
//		Flags  -> (Final, Native, Static, Public, HasOutParms, BlueprintCallable, BlueprintPure)
// Parameters:
//		TArray<unsigned char>                              ByteArray                                                  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
//		int                                                Index                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		int                                                Length                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		struct FString                                     ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
struct FString ULowEntryExtendedStandardLibrary::STATIC_BytesToStringUtf8(TArray<unsigned char> ByteArray, int Index, int Length)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function LowEntryExtendedStandardLibrary.LowEntryExtendedStandardLibrary.BytesToStringUtf8");

	ULowEntryExtendedStandardLibrary_BytesToStringUtf8_Params params {};
	params.ByteArray = ByteArray;
	params.Index = Index;
	params.Length = Length;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x0046C160
//		Name   -> Function LowEntryExtendedStandardLibrary.LowEntryExtendedStandardLibrary.BytesToPixels
//		Flags  -> (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
// Parameters:
//		TArray<unsigned char>                              ByteArray                                                  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
//		LowEntryExtendedStandardLibrary_ELowEntryImageFormat ImageFormat                                                (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		int                                                Width                                                      (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		int                                                Height                                                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		TArray<struct FColor>                              Pixels                                                     (Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
//		int                                                Index                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		int                                                Length                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void ULowEntryExtendedStandardLibrary::STATIC_BytesToPixels(TArray<unsigned char> ByteArray, LowEntryExtendedStandardLibrary_ELowEntryImageFormat ImageFormat, int* Width, int* Height, TArray<struct FColor>* Pixels, int Index, int Length)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function LowEntryExtendedStandardLibrary.LowEntryExtendedStandardLibrary.BytesToPixels");

	ULowEntryExtendedStandardLibrary_BytesToPixels_Params params {};
	params.ByteArray = ByteArray;
	params.ImageFormat = ImageFormat;
	params.Index = Index;
	params.Length = Length;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Width != nullptr)
		*Width = params.Width;
	if (Height != nullptr)
		*Height = params.Height;
	if (Pixels != nullptr)
		*Pixels = params.Pixels;

}


// Function:
//		Offset -> 0x0046C040
//		Name   -> Function LowEntryExtendedStandardLibrary.LowEntryExtendedStandardLibrary.BytesToLongBytes
//		Flags  -> (Final, Native, Static, Public, HasOutParms, BlueprintCallable, BlueprintPure)
// Parameters:
//		TArray<unsigned char>                              ByteArray                                                  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
//		int                                                Index                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		int                                                Length                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		class ULowEntryLong*                               ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
class ULowEntryLong* ULowEntryExtendedStandardLibrary::STATIC_BytesToLongBytes(TArray<unsigned char> ByteArray, int Index, int Length)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function LowEntryExtendedStandardLibrary.LowEntryExtendedStandardLibrary.BytesToLongBytes");

	ULowEntryExtendedStandardLibrary_BytesToLongBytes_Params params {};
	params.ByteArray = ByteArray;
	params.Index = Index;
	params.Length = Length;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x0046BF20
//		Name   -> Function LowEntryExtendedStandardLibrary.LowEntryExtendedStandardLibrary.BytesToInteger
//		Flags  -> (Final, Native, Static, Public, HasOutParms, BlueprintCallable, BlueprintPure)
// Parameters:
//		TArray<unsigned char>                              ByteArray                                                  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
//		int                                                Index                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		int                                                Length                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		int                                                ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
int ULowEntryExtendedStandardLibrary::STATIC_BytesToInteger(TArray<unsigned char> ByteArray, int Index, int Length)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function LowEntryExtendedStandardLibrary.LowEntryExtendedStandardLibrary.BytesToInteger");

	ULowEntryExtendedStandardLibrary_BytesToInteger_Params params {};
	params.ByteArray = ByteArray;
	params.Index = Index;
	params.Length = Length;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x0046BDC0
//		Name   -> Function LowEntryExtendedStandardLibrary.LowEntryExtendedStandardLibrary.BytesToImage
//		Flags  -> (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
// Parameters:
//		TArray<unsigned char>                              ByteArray                                                  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
//		LowEntryExtendedStandardLibrary_ELowEntryImageFormat ImageFormat                                                (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		int                                                Index                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		int                                                Length                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		class UTexture2D*                                  ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
class UTexture2D* ULowEntryExtendedStandardLibrary::STATIC_BytesToImage(TArray<unsigned char> ByteArray, LowEntryExtendedStandardLibrary_ELowEntryImageFormat ImageFormat, int Index, int Length)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function LowEntryExtendedStandardLibrary.LowEntryExtendedStandardLibrary.BytesToImage");

	ULowEntryExtendedStandardLibrary_BytesToImage_Params params {};
	params.ByteArray = ByteArray;
	params.ImageFormat = ImageFormat;
	params.Index = Index;
	params.Length = Length;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x0046BBF0
//		Name   -> Function LowEntryExtendedStandardLibrary.LowEntryExtendedStandardLibrary.BytesToHex
//		Flags  -> (Final, Native, Static, Public, HasOutParms, BlueprintCallable, BlueprintPure)
// Parameters:
//		TArray<unsigned char>                              ByteArray                                                  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
//		bool                                               AddSpaces                                                  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		int                                                Index                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		int                                                Length                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		struct FString                                     ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
struct FString ULowEntryExtendedStandardLibrary::STATIC_BytesToHex(TArray<unsigned char> ByteArray, bool AddSpaces, int Index, int Length)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function LowEntryExtendedStandardLibrary.LowEntryExtendedStandardLibrary.BytesToHex");

	ULowEntryExtendedStandardLibrary_BytesToHex_Params params {};
	params.ByteArray = ByteArray;
	params.AddSpaces = AddSpaces;
	params.Index = Index;
	params.Length = Length;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x0046BAD0
//		Name   -> Function LowEntryExtendedStandardLibrary.LowEntryExtendedStandardLibrary.BytesToFloat
//		Flags  -> (Final, Native, Static, Public, HasOutParms, BlueprintCallable, BlueprintPure)
// Parameters:
//		TArray<unsigned char>                              ByteArray                                                  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
//		int                                                Index                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		int                                                Length                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		float                                              ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
float ULowEntryExtendedStandardLibrary::STATIC_BytesToFloat(TArray<unsigned char> ByteArray, int Index, int Length)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function LowEntryExtendedStandardLibrary.LowEntryExtendedStandardLibrary.BytesToFloat");

	ULowEntryExtendedStandardLibrary_BytesToFloat_Params params {};
	params.ByteArray = ByteArray;
	params.Index = Index;
	params.Length = Length;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x0046B8E0
//		Name   -> Function LowEntryExtendedStandardLibrary.LowEntryExtendedStandardLibrary.BytesToExistingImage
//		Flags  -> (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
// Parameters:
//		bool                                               ReusedGivenTexture2D                                       (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		class UTexture2D*                                  Texture2D                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		TArray<unsigned char>                              ByteArray                                                  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
//		LowEntryExtendedStandardLibrary_ELowEntryImageFormat ImageFormat                                                (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		int                                                Index                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		int                                                Length                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		class UTexture2D*                                  ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
class UTexture2D* ULowEntryExtendedStandardLibrary::STATIC_BytesToExistingImage(bool* ReusedGivenTexture2D, class UTexture2D* Texture2D, TArray<unsigned char> ByteArray, LowEntryExtendedStandardLibrary_ELowEntryImageFormat ImageFormat, int Index, int Length)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function LowEntryExtendedStandardLibrary.LowEntryExtendedStandardLibrary.BytesToExistingImage");

	ULowEntryExtendedStandardLibrary_BytesToExistingImage_Params params {};
	params.Texture2D = Texture2D;
	params.ByteArray = ByteArray;
	params.ImageFormat = ImageFormat;
	params.Index = Index;
	params.Length = Length;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (ReusedGivenTexture2D != nullptr)
		*ReusedGivenTexture2D = params.ReusedGivenTexture2D;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x0046B7C0
//		Name   -> Function LowEntryExtendedStandardLibrary.LowEntryExtendedStandardLibrary.BytesToDoubleBytes
//		Flags  -> (Final, Native, Static, Public, HasOutParms, BlueprintCallable, BlueprintPure)
// Parameters:
//		TArray<unsigned char>                              ByteArray                                                  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
//		int                                                Index                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		int                                                Length                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		class ULowEntryDouble*                             ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
class ULowEntryDouble* ULowEntryExtendedStandardLibrary::STATIC_BytesToDoubleBytes(TArray<unsigned char> ByteArray, int Index, int Length)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function LowEntryExtendedStandardLibrary.LowEntryExtendedStandardLibrary.BytesToDoubleBytes");

	ULowEntryExtendedStandardLibrary_BytesToDoubleBytes_Params params {};
	params.ByteArray = ByteArray;
	params.Index = Index;
	params.Length = Length;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x0046B6A0
//		Name   -> Function LowEntryExtendedStandardLibrary.LowEntryExtendedStandardLibrary.BytesToByte
//		Flags  -> (Final, Native, Static, Public, HasOutParms, BlueprintCallable, BlueprintPure)
// Parameters:
//		TArray<unsigned char>                              ByteArray                                                  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
//		int                                                Index                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		int                                                Length                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		unsigned char                                      ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
unsigned char ULowEntryExtendedStandardLibrary::STATIC_BytesToByte(TArray<unsigned char> ByteArray, int Index, int Length)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function LowEntryExtendedStandardLibrary.LowEntryExtendedStandardLibrary.BytesToByte");

	ULowEntryExtendedStandardLibrary_BytesToByte_Params params {};
	params.ByteArray = ByteArray;
	params.Index = Index;
	params.Length = Length;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x0046B580
//		Name   -> Function LowEntryExtendedStandardLibrary.LowEntryExtendedStandardLibrary.BytesToBoolean
//		Flags  -> (Final, Native, Static, Public, HasOutParms, BlueprintCallable, BlueprintPure)
// Parameters:
//		TArray<unsigned char>                              ByteArray                                                  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
//		int                                                Index                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		int                                                Length                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		bool                                               ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool ULowEntryExtendedStandardLibrary::STATIC_BytesToBoolean(TArray<unsigned char> ByteArray, int Index, int Length)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function LowEntryExtendedStandardLibrary.LowEntryExtendedStandardLibrary.BytesToBoolean");

	ULowEntryExtendedStandardLibrary_BytesToBoolean_Params params {};
	params.ByteArray = ByteArray;
	params.Index = Index;
	params.Length = Length;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x0046B3B0
//		Name   -> Function LowEntryExtendedStandardLibrary.LowEntryExtendedStandardLibrary.BytesToBitString
//		Flags  -> (Final, Native, Static, Public, HasOutParms, BlueprintCallable, BlueprintPure)
// Parameters:
//		TArray<unsigned char>                              ByteArray                                                  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
//		bool                                               AddSpaces                                                  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		int                                                Index                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		int                                                Length                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		struct FString                                     ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
struct FString ULowEntryExtendedStandardLibrary::STATIC_BytesToBitString(TArray<unsigned char> ByteArray, bool AddSpaces, int Index, int Length)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function LowEntryExtendedStandardLibrary.LowEntryExtendedStandardLibrary.BytesToBitString");

	ULowEntryExtendedStandardLibrary_BytesToBitString_Params params {};
	params.ByteArray = ByteArray;
	params.AddSpaces = AddSpaces;
	params.Index = Index;
	params.Length = Length;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x0046B1E0
//		Name   -> Function LowEntryExtendedStandardLibrary.LowEntryExtendedStandardLibrary.BytesToBinary
//		Flags  -> (Final, Native, Static, Public, HasOutParms, BlueprintCallable, BlueprintPure)
// Parameters:
//		TArray<unsigned char>                              ByteArray                                                  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
//		bool                                               AddSpaces                                                  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		int                                                Index                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		int                                                Length                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		struct FString                                     ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
struct FString ULowEntryExtendedStandardLibrary::STATIC_BytesToBinary(TArray<unsigned char> ByteArray, bool AddSpaces, int Index, int Length)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function LowEntryExtendedStandardLibrary.LowEntryExtendedStandardLibrary.BytesToBinary");

	ULowEntryExtendedStandardLibrary_BytesToBinary_Params params {};
	params.ByteArray = ByteArray;
	params.AddSpaces = AddSpaces;
	params.Index = Index;
	params.Length = Length;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x0046B080
//		Name   -> Function LowEntryExtendedStandardLibrary.LowEntryExtendedStandardLibrary.BytesToBase64Url
//		Flags  -> (Final, Native, Static, Public, HasOutParms, BlueprintCallable, BlueprintPure)
// Parameters:
//		TArray<unsigned char>                              ByteArray                                                  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
//		int                                                Index                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		int                                                Length                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		struct FString                                     ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
struct FString ULowEntryExtendedStandardLibrary::STATIC_BytesToBase64Url(TArray<unsigned char> ByteArray, int Index, int Length)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function LowEntryExtendedStandardLibrary.LowEntryExtendedStandardLibrary.BytesToBase64Url");

	ULowEntryExtendedStandardLibrary_BytesToBase64Url_Params params {};
	params.ByteArray = ByteArray;
	params.Index = Index;
	params.Length = Length;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x0046AF20
//		Name   -> Function LowEntryExtendedStandardLibrary.LowEntryExtendedStandardLibrary.BytesToBase64
//		Flags  -> (Final, Native, Static, Public, HasOutParms, BlueprintCallable, BlueprintPure)
// Parameters:
//		TArray<unsigned char>                              ByteArray                                                  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
//		int                                                Index                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		int                                                Length                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		struct FString                                     ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
struct FString ULowEntryExtendedStandardLibrary::STATIC_BytesToBase64(TArray<unsigned char> ByteArray, int Index, int Length)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function LowEntryExtendedStandardLibrary.LowEntryExtendedStandardLibrary.BytesToBase64");

	ULowEntryExtendedStandardLibrary_BytesToBase64_Params params {};
	params.ByteArray = ByteArray;
	params.Index = Index;
	params.Length = Length;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x0046ADC0
//		Name   -> Function LowEntryExtendedStandardLibrary.LowEntryExtendedStandardLibrary.BytesSubArray
//		Flags  -> (Final, Native, Static, Public, HasOutParms, BlueprintCallable, BlueprintPure)
// Parameters:
//		TArray<unsigned char>                              ByteArray                                                  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
//		int                                                Index                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		int                                                Length                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		TArray<unsigned char>                              ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, NativeAccessSpecifierPublic)
TArray<unsigned char> ULowEntryExtendedStandardLibrary::STATIC_BytesSubArray(TArray<unsigned char> ByteArray, int Index, int Length)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function LowEntryExtendedStandardLibrary.LowEntryExtendedStandardLibrary.BytesSubArray");

	ULowEntryExtendedStandardLibrary_BytesSubArray_Params params {};
	params.ByteArray = ByteArray;
	params.Index = Index;
	params.Length = Length;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x0046A8A0
//		Name   -> Function LowEntryExtendedStandardLibrary.LowEntryExtendedStandardLibrary.ByteDataWriter_GetBytes
//		Flags  -> (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
//		class ULowEntryByteDataWriter*                     ByteDataWriter                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		TArray<unsigned char>                              ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, NativeAccessSpecifierPublic)
TArray<unsigned char> ULowEntryExtendedStandardLibrary::STATIC_ByteDataWriter_GetBytes(class ULowEntryByteDataWriter* ByteDataWriter)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function LowEntryExtendedStandardLibrary.LowEntryExtendedStandardLibrary.ByteDataWriter_GetBytes");

	ULowEntryExtendedStandardLibrary_ByteDataWriter_GetBytes_Params params {};
	params.ByteDataWriter = ByteDataWriter;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x0046A7F0
//		Name   -> Function LowEntryExtendedStandardLibrary.LowEntryExtendedStandardLibrary.ByteDataWriter_CreateFromEntryArrayPure
//		Flags  -> (Final, Native, Static, Public, HasOutParms, BlueprintCallable, BlueprintPure)
// Parameters:
//		TArray<class ULowEntryByteDataEntry*>              Array                                                      (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
//		class ULowEntryByteDataWriter*                     ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
class ULowEntryByteDataWriter* ULowEntryExtendedStandardLibrary::STATIC_ByteDataWriter_CreateFromEntryArrayPure(TArray<class ULowEntryByteDataEntry*> Array)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function LowEntryExtendedStandardLibrary.LowEntryExtendedStandardLibrary.ByteDataWriter_CreateFromEntryArrayPure");

	ULowEntryExtendedStandardLibrary_ByteDataWriter_CreateFromEntryArrayPure_Params params {};
	params.Array = Array;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x0046A7F0
//		Name   -> Function LowEntryExtendedStandardLibrary.LowEntryExtendedStandardLibrary.ByteDataWriter_CreateFromEntryArray
//		Flags  -> (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
// Parameters:
//		TArray<class ULowEntryByteDataEntry*>              Array                                                      (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
//		class ULowEntryByteDataWriter*                     ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
class ULowEntryByteDataWriter* ULowEntryExtendedStandardLibrary::STATIC_ByteDataWriter_CreateFromEntryArray(TArray<class ULowEntryByteDataEntry*> Array)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function LowEntryExtendedStandardLibrary.LowEntryExtendedStandardLibrary.ByteDataWriter_CreateFromEntryArray");

	ULowEntryExtendedStandardLibrary_ByteDataWriter_CreateFromEntryArray_Params params {};
	params.Array = Array;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x0046A6D0
//		Name   -> Function LowEntryExtendedStandardLibrary.LowEntryExtendedStandardLibrary.ByteDataReader_Create
//		Flags  -> (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
// Parameters:
//		TArray<unsigned char>                              Bytes                                                      (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
//		int                                                Index                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		int                                                Length                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		class ULowEntryByteDataReader*                     ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
class ULowEntryByteDataReader* ULowEntryExtendedStandardLibrary::STATIC_ByteDataReader_Create(TArray<unsigned char> Bytes, int Index, int Length)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function LowEntryExtendedStandardLibrary.LowEntryExtendedStandardLibrary.ByteDataReader_Create");

	ULowEntryExtendedStandardLibrary_ByteDataReader_Create_Params params {};
	params.Bytes = Bytes;
	params.Index = Index;
	params.Length = Length;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x0046A600
//		Name   -> Function LowEntryExtendedStandardLibrary.LowEntryExtendedStandardLibrary.ByteDataEntry_CreateFromStringUtf8Array
//		Flags  -> (Final, Native, Static, Public, HasOutParms, BlueprintCallable, BlueprintPure)
// Parameters:
//		TArray<struct FString>                             Value                                                      (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
//		class ULowEntryByteDataEntry*                      ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
class ULowEntryByteDataEntry* ULowEntryExtendedStandardLibrary::STATIC_ByteDataEntry_CreateFromStringUtf8Array(TArray<struct FString> Value)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function LowEntryExtendedStandardLibrary.LowEntryExtendedStandardLibrary.ByteDataEntry_CreateFromStringUtf8Array");

	ULowEntryExtendedStandardLibrary_ByteDataEntry_CreateFromStringUtf8Array_Params params {};
	params.Value = Value;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x0046A560
//		Name   -> Function LowEntryExtendedStandardLibrary.LowEntryExtendedStandardLibrary.ByteDataEntry_CreateFromStringUtf8
//		Flags  -> (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
//		struct FString                                     Value                                                      (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		class ULowEntryByteDataEntry*                      ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
class ULowEntryByteDataEntry* ULowEntryExtendedStandardLibrary::STATIC_ByteDataEntry_CreateFromStringUtf8(const struct FString& Value)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function LowEntryExtendedStandardLibrary.LowEntryExtendedStandardLibrary.ByteDataEntry_CreateFromStringUtf8");

	ULowEntryExtendedStandardLibrary_ByteDataEntry_CreateFromStringUtf8_Params params {};
	params.Value = Value;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x0046A4B0
//		Name   -> Function LowEntryExtendedStandardLibrary.LowEntryExtendedStandardLibrary.ByteDataEntry_CreateFromPositiveInteger3Array
//		Flags  -> (Final, Native, Static, Public, HasOutParms, BlueprintCallable, BlueprintPure)
// Parameters:
//		TArray<int>                                        Value                                                      (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
//		class ULowEntryByteDataEntry*                      ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
class ULowEntryByteDataEntry* ULowEntryExtendedStandardLibrary::STATIC_ByteDataEntry_CreateFromPositiveInteger3Array(TArray<int> Value)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function LowEntryExtendedStandardLibrary.LowEntryExtendedStandardLibrary.ByteDataEntry_CreateFromPositiveInteger3Array");

	ULowEntryExtendedStandardLibrary_ByteDataEntry_CreateFromPositiveInteger3Array_Params params {};
	params.Value = Value;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x0046A430
//		Name   -> Function LowEntryExtendedStandardLibrary.LowEntryExtendedStandardLibrary.ByteDataEntry_CreateFromPositiveInteger3
//		Flags  -> (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
//		int                                                Value                                                      (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		class ULowEntryByteDataEntry*                      ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
class ULowEntryByteDataEntry* ULowEntryExtendedStandardLibrary::STATIC_ByteDataEntry_CreateFromPositiveInteger3(int Value)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function LowEntryExtendedStandardLibrary.LowEntryExtendedStandardLibrary.ByteDataEntry_CreateFromPositiveInteger3");

	ULowEntryExtendedStandardLibrary_ByteDataEntry_CreateFromPositiveInteger3_Params params {};
	params.Value = Value;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x0046A380
//		Name   -> Function LowEntryExtendedStandardLibrary.LowEntryExtendedStandardLibrary.ByteDataEntry_CreateFromPositiveInteger2Array
//		Flags  -> (Final, Native, Static, Public, HasOutParms, BlueprintCallable, BlueprintPure)
// Parameters:
//		TArray<int>                                        Value                                                      (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
//		class ULowEntryByteDataEntry*                      ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
class ULowEntryByteDataEntry* ULowEntryExtendedStandardLibrary::STATIC_ByteDataEntry_CreateFromPositiveInteger2Array(TArray<int> Value)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function LowEntryExtendedStandardLibrary.LowEntryExtendedStandardLibrary.ByteDataEntry_CreateFromPositiveInteger2Array");

	ULowEntryExtendedStandardLibrary_ByteDataEntry_CreateFromPositiveInteger2Array_Params params {};
	params.Value = Value;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x0046A300
//		Name   -> Function LowEntryExtendedStandardLibrary.LowEntryExtendedStandardLibrary.ByteDataEntry_CreateFromPositiveInteger2
//		Flags  -> (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
//		int                                                Value                                                      (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		class ULowEntryByteDataEntry*                      ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
class ULowEntryByteDataEntry* ULowEntryExtendedStandardLibrary::STATIC_ByteDataEntry_CreateFromPositiveInteger2(int Value)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function LowEntryExtendedStandardLibrary.LowEntryExtendedStandardLibrary.ByteDataEntry_CreateFromPositiveInteger2");

	ULowEntryExtendedStandardLibrary_ByteDataEntry_CreateFromPositiveInteger2_Params params {};
	params.Value = Value;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x0046A250
//		Name   -> Function LowEntryExtendedStandardLibrary.LowEntryExtendedStandardLibrary.ByteDataEntry_CreateFromPositiveInteger1Array
//		Flags  -> (Final, Native, Static, Public, HasOutParms, BlueprintCallable, BlueprintPure)
// Parameters:
//		TArray<int>                                        Value                                                      (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
//		class ULowEntryByteDataEntry*                      ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
class ULowEntryByteDataEntry* ULowEntryExtendedStandardLibrary::STATIC_ByteDataEntry_CreateFromPositiveInteger1Array(TArray<int> Value)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function LowEntryExtendedStandardLibrary.LowEntryExtendedStandardLibrary.ByteDataEntry_CreateFromPositiveInteger1Array");

	ULowEntryExtendedStandardLibrary_ByteDataEntry_CreateFromPositiveInteger1Array_Params params {};
	params.Value = Value;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x0046A1D0
//		Name   -> Function LowEntryExtendedStandardLibrary.LowEntryExtendedStandardLibrary.ByteDataEntry_CreateFromPositiveInteger1
//		Flags  -> (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
//		int                                                Value                                                      (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		class ULowEntryByteDataEntry*                      ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
class ULowEntryByteDataEntry* ULowEntryExtendedStandardLibrary::STATIC_ByteDataEntry_CreateFromPositiveInteger1(int Value)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function LowEntryExtendedStandardLibrary.LowEntryExtendedStandardLibrary.ByteDataEntry_CreateFromPositiveInteger1");

	ULowEntryExtendedStandardLibrary_ByteDataEntry_CreateFromPositiveInteger1_Params params {};
	params.Value = Value;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x0046A120
//		Name   -> Function LowEntryExtendedStandardLibrary.LowEntryExtendedStandardLibrary.ByteDataEntry_CreateFromLongBytesArray
//		Flags  -> (Final, Native, Static, Public, HasOutParms, BlueprintCallable, BlueprintPure)
// Parameters:
//		TArray<class ULowEntryLong*>                       Value                                                      (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
//		class ULowEntryByteDataEntry*                      ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
class ULowEntryByteDataEntry* ULowEntryExtendedStandardLibrary::STATIC_ByteDataEntry_CreateFromLongBytesArray(TArray<class ULowEntryLong*> Value)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function LowEntryExtendedStandardLibrary.LowEntryExtendedStandardLibrary.ByteDataEntry_CreateFromLongBytesArray");

	ULowEntryExtendedStandardLibrary_ByteDataEntry_CreateFromLongBytesArray_Params params {};
	params.Value = Value;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x0046A0A0
//		Name   -> Function LowEntryExtendedStandardLibrary.LowEntryExtendedStandardLibrary.ByteDataEntry_CreateFromLongBytes
//		Flags  -> (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
//		class ULowEntryLong*                               Value                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		class ULowEntryByteDataEntry*                      ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
class ULowEntryByteDataEntry* ULowEntryExtendedStandardLibrary::STATIC_ByteDataEntry_CreateFromLongBytes(class ULowEntryLong* Value)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function LowEntryExtendedStandardLibrary.LowEntryExtendedStandardLibrary.ByteDataEntry_CreateFromLongBytes");

	ULowEntryExtendedStandardLibrary_ByteDataEntry_CreateFromLongBytes_Params params {};
	params.Value = Value;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00469FF0
//		Name   -> Function LowEntryExtendedStandardLibrary.LowEntryExtendedStandardLibrary.ByteDataEntry_CreateFromIntegerArray
//		Flags  -> (Final, Native, Static, Public, HasOutParms, BlueprintCallable, BlueprintPure)
// Parameters:
//		TArray<int>                                        Value                                                      (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
//		class ULowEntryByteDataEntry*                      ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
class ULowEntryByteDataEntry* ULowEntryExtendedStandardLibrary::STATIC_ByteDataEntry_CreateFromIntegerArray(TArray<int> Value)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function LowEntryExtendedStandardLibrary.LowEntryExtendedStandardLibrary.ByteDataEntry_CreateFromIntegerArray");

	ULowEntryExtendedStandardLibrary_ByteDataEntry_CreateFromIntegerArray_Params params {};
	params.Value = Value;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00469F70
//		Name   -> Function LowEntryExtendedStandardLibrary.LowEntryExtendedStandardLibrary.ByteDataEntry_CreateFromInteger
//		Flags  -> (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
//		int                                                Value                                                      (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		class ULowEntryByteDataEntry*                      ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
class ULowEntryByteDataEntry* ULowEntryExtendedStandardLibrary::STATIC_ByteDataEntry_CreateFromInteger(int Value)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function LowEntryExtendedStandardLibrary.LowEntryExtendedStandardLibrary.ByteDataEntry_CreateFromInteger");

	ULowEntryExtendedStandardLibrary_ByteDataEntry_CreateFromInteger_Params params {};
	params.Value = Value;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00469EC0
//		Name   -> Function LowEntryExtendedStandardLibrary.LowEntryExtendedStandardLibrary.ByteDataEntry_CreateFromFloatArray
//		Flags  -> (Final, Native, Static, Public, HasOutParms, BlueprintCallable, BlueprintPure)
// Parameters:
//		TArray<float>                                      Value                                                      (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
//		class ULowEntryByteDataEntry*                      ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
class ULowEntryByteDataEntry* ULowEntryExtendedStandardLibrary::STATIC_ByteDataEntry_CreateFromFloatArray(TArray<float> Value)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function LowEntryExtendedStandardLibrary.LowEntryExtendedStandardLibrary.ByteDataEntry_CreateFromFloatArray");

	ULowEntryExtendedStandardLibrary_ByteDataEntry_CreateFromFloatArray_Params params {};
	params.Value = Value;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00469E40
//		Name   -> Function LowEntryExtendedStandardLibrary.LowEntryExtendedStandardLibrary.ByteDataEntry_CreateFromFloat
//		Flags  -> (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
//		float                                              Value                                                      (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		class ULowEntryByteDataEntry*                      ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
class ULowEntryByteDataEntry* ULowEntryExtendedStandardLibrary::STATIC_ByteDataEntry_CreateFromFloat(float Value)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function LowEntryExtendedStandardLibrary.LowEntryExtendedStandardLibrary.ByteDataEntry_CreateFromFloat");

	ULowEntryExtendedStandardLibrary_ByteDataEntry_CreateFromFloat_Params params {};
	params.Value = Value;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00469D90
//		Name   -> Function LowEntryExtendedStandardLibrary.LowEntryExtendedStandardLibrary.ByteDataEntry_CreateFromDoubleBytesArray
//		Flags  -> (Final, Native, Static, Public, HasOutParms, BlueprintCallable, BlueprintPure)
// Parameters:
//		TArray<class ULowEntryDouble*>                     Value                                                      (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
//		class ULowEntryByteDataEntry*                      ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
class ULowEntryByteDataEntry* ULowEntryExtendedStandardLibrary::STATIC_ByteDataEntry_CreateFromDoubleBytesArray(TArray<class ULowEntryDouble*> Value)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function LowEntryExtendedStandardLibrary.LowEntryExtendedStandardLibrary.ByteDataEntry_CreateFromDoubleBytesArray");

	ULowEntryExtendedStandardLibrary_ByteDataEntry_CreateFromDoubleBytesArray_Params params {};
	params.Value = Value;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00469D10
//		Name   -> Function LowEntryExtendedStandardLibrary.LowEntryExtendedStandardLibrary.ByteDataEntry_CreateFromDoubleBytes
//		Flags  -> (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
//		class ULowEntryDouble*                             Value                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		class ULowEntryByteDataEntry*                      ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
class ULowEntryByteDataEntry* ULowEntryExtendedStandardLibrary::STATIC_ByteDataEntry_CreateFromDoubleBytes(class ULowEntryDouble* Value)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function LowEntryExtendedStandardLibrary.LowEntryExtendedStandardLibrary.ByteDataEntry_CreateFromDoubleBytes");

	ULowEntryExtendedStandardLibrary_ByteDataEntry_CreateFromDoubleBytes_Params params {};
	params.Value = Value;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00469C60
//		Name   -> Function LowEntryExtendedStandardLibrary.LowEntryExtendedStandardLibrary.ByteDataEntry_CreateFromByteArray
//		Flags  -> (Final, Native, Static, Public, HasOutParms, BlueprintCallable, BlueprintPure)
// Parameters:
//		TArray<unsigned char>                              Value                                                      (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
//		class ULowEntryByteDataEntry*                      ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
class ULowEntryByteDataEntry* ULowEntryExtendedStandardLibrary::STATIC_ByteDataEntry_CreateFromByteArray(TArray<unsigned char> Value)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function LowEntryExtendedStandardLibrary.LowEntryExtendedStandardLibrary.ByteDataEntry_CreateFromByteArray");

	ULowEntryExtendedStandardLibrary_ByteDataEntry_CreateFromByteArray_Params params {};
	params.Value = Value;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00469BE0
//		Name   -> Function LowEntryExtendedStandardLibrary.LowEntryExtendedStandardLibrary.ByteDataEntry_CreateFromByte
//		Flags  -> (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
//		unsigned char                                      Value                                                      (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		class ULowEntryByteDataEntry*                      ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
class ULowEntryByteDataEntry* ULowEntryExtendedStandardLibrary::STATIC_ByteDataEntry_CreateFromByte(unsigned char Value)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function LowEntryExtendedStandardLibrary.LowEntryExtendedStandardLibrary.ByteDataEntry_CreateFromByte");

	ULowEntryExtendedStandardLibrary_ByteDataEntry_CreateFromByte_Params params {};
	params.Value = Value;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00469B30
//		Name   -> Function LowEntryExtendedStandardLibrary.LowEntryExtendedStandardLibrary.ByteDataEntry_CreateFromBooleanArray
//		Flags  -> (Final, Native, Static, Public, HasOutParms, BlueprintCallable, BlueprintPure)
// Parameters:
//		TArray<bool>                                       Value                                                      (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
//		class ULowEntryByteDataEntry*                      ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
class ULowEntryByteDataEntry* ULowEntryExtendedStandardLibrary::STATIC_ByteDataEntry_CreateFromBooleanArray(TArray<bool> Value)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function LowEntryExtendedStandardLibrary.LowEntryExtendedStandardLibrary.ByteDataEntry_CreateFromBooleanArray");

	ULowEntryExtendedStandardLibrary_ByteDataEntry_CreateFromBooleanArray_Params params {};
	params.Value = Value;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00469AA0
//		Name   -> Function LowEntryExtendedStandardLibrary.LowEntryExtendedStandardLibrary.ByteDataEntry_CreateFromBoolean
//		Flags  -> (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
//		bool                                               Value                                                      (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		class ULowEntryByteDataEntry*                      ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
class ULowEntryByteDataEntry* ULowEntryExtendedStandardLibrary::STATIC_ByteDataEntry_CreateFromBoolean(bool Value)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function LowEntryExtendedStandardLibrary.LowEntryExtendedStandardLibrary.ByteDataEntry_CreateFromBoolean");

	ULowEntryExtendedStandardLibrary_ByteDataEntry_CreateFromBoolean_Params params {};
	params.Value = Value;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x004699D0
//		Name   -> Function LowEntryExtendedStandardLibrary.LowEntryExtendedStandardLibrary.BooleanToBytes
//		Flags  -> (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
//		bool                                               Value                                                      (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		TArray<unsigned char>                              ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, NativeAccessSpecifierPublic)
TArray<unsigned char> ULowEntryExtendedStandardLibrary::STATIC_BooleanToBytes(bool Value)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function LowEntryExtendedStandardLibrary.LowEntryExtendedStandardLibrary.BooleanToBytes");

	ULowEntryExtendedStandardLibrary_BooleanToBytes_Params params {};
	params.Value = Value;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00469950
//		Name   -> Function LowEntryExtendedStandardLibrary.LowEntryExtendedStandardLibrary.BooleanToByte
//		Flags  -> (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
//		bool                                               Value                                                      (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		unsigned char                                      ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
unsigned char ULowEntryExtendedStandardLibrary::STATIC_BooleanToByte(bool Value)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function LowEntryExtendedStandardLibrary.LowEntryExtendedStandardLibrary.BooleanToByte");

	ULowEntryExtendedStandardLibrary_BooleanToByte_Params params {};
	params.Value = Value;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x004695C0
//		Name   -> Function LowEntryExtendedStandardLibrary.LowEntryExtendedStandardLibrary.BitStringToBytes
//		Flags  -> (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
//		struct FString                                     Bits                                                       (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		TArray<unsigned char>                              ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, NativeAccessSpecifierPublic)
TArray<unsigned char> ULowEntryExtendedStandardLibrary::STATIC_BitStringToBytes(const struct FString& Bits)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function LowEntryExtendedStandardLibrary.LowEntryExtendedStandardLibrary.BitStringToBytes");

	ULowEntryExtendedStandardLibrary_BitStringToBytes_Params params {};
	params.Bits = Bits;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x004696A0
//		Name   -> Function LowEntryExtendedStandardLibrary.LowEntryExtendedStandardLibrary.BitsToByte
//		Flags  -> (Final, Native, Static, Public, HasOutParms, BlueprintCallable, BlueprintPure)
// Parameters:
//		bool                                               Bit1                                                       (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		bool                                               Bit2                                                       (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		bool                                               Bit3                                                       (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		bool                                               Bit4                                                       (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		bool                                               Bit5                                                       (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		bool                                               Bit6                                                       (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		bool                                               Bit7                                                       (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		bool                                               Bit8                                                       (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		unsigned char                                      Byte                                                       (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void ULowEntryExtendedStandardLibrary::STATIC_BitsToByte(bool Bit1, bool Bit2, bool Bit3, bool Bit4, bool Bit5, bool Bit6, bool Bit7, bool Bit8, unsigned char* Byte)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function LowEntryExtendedStandardLibrary.LowEntryExtendedStandardLibrary.BitsToByte");

	ULowEntryExtendedStandardLibrary_BitsToByte_Params params {};
	params.Bit1 = Bit1;
	params.Bit2 = Bit2;
	params.Bit3 = Bit3;
	params.Bit4 = Bit4;
	params.Bit5 = Bit5;
	params.Bit6 = Bit6;
	params.Bit7 = Bit7;
	params.Bit8 = Bit8;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Byte != nullptr)
		*Byte = params.Byte;

}


// Function:
//		Offset -> 0x004694F0
//		Name   -> Function LowEntryExtendedStandardLibrary.LowEntryExtendedStandardLibrary.BitDataWriter_GetBytes
//		Flags  -> (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
//		class ULowEntryBitDataWriter*                      BitDataWriter                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		TArray<unsigned char>                              ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, NativeAccessSpecifierPublic)
TArray<unsigned char> ULowEntryExtendedStandardLibrary::STATIC_BitDataWriter_GetBytes(class ULowEntryBitDataWriter* BitDataWriter)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function LowEntryExtendedStandardLibrary.LowEntryExtendedStandardLibrary.BitDataWriter_GetBytes");

	ULowEntryExtendedStandardLibrary_BitDataWriter_GetBytes_Params params {};
	params.BitDataWriter = BitDataWriter;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00469440
//		Name   -> Function LowEntryExtendedStandardLibrary.LowEntryExtendedStandardLibrary.BitDataWriter_CreateFromEntryArrayPure
//		Flags  -> (Final, Native, Static, Public, HasOutParms, BlueprintCallable, BlueprintPure)
// Parameters:
//		TArray<class ULowEntryBitDataEntry*>               Array                                                      (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
//		class ULowEntryBitDataWriter*                      ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
class ULowEntryBitDataWriter* ULowEntryExtendedStandardLibrary::STATIC_BitDataWriter_CreateFromEntryArrayPure(TArray<class ULowEntryBitDataEntry*> Array)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function LowEntryExtendedStandardLibrary.LowEntryExtendedStandardLibrary.BitDataWriter_CreateFromEntryArrayPure");

	ULowEntryExtendedStandardLibrary_BitDataWriter_CreateFromEntryArrayPure_Params params {};
	params.Array = Array;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00469440
//		Name   -> Function LowEntryExtendedStandardLibrary.LowEntryExtendedStandardLibrary.BitDataWriter_CreateFromEntryArray
//		Flags  -> (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
// Parameters:
//		TArray<class ULowEntryBitDataEntry*>               Array                                                      (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
//		class ULowEntryBitDataWriter*                      ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
class ULowEntryBitDataWriter* ULowEntryExtendedStandardLibrary::STATIC_BitDataWriter_CreateFromEntryArray(TArray<class ULowEntryBitDataEntry*> Array)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function LowEntryExtendedStandardLibrary.LowEntryExtendedStandardLibrary.BitDataWriter_CreateFromEntryArray");

	ULowEntryExtendedStandardLibrary_BitDataWriter_CreateFromEntryArray_Params params {};
	params.Array = Array;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00469320
//		Name   -> Function LowEntryExtendedStandardLibrary.LowEntryExtendedStandardLibrary.BitDataReader_Create
//		Flags  -> (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
// Parameters:
//		TArray<unsigned char>                              Bytes                                                      (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
//		int                                                Index                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		int                                                Length                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		class ULowEntryBitDataReader*                      ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
class ULowEntryBitDataReader* ULowEntryExtendedStandardLibrary::STATIC_BitDataReader_Create(TArray<unsigned char> Bytes, int Index, int Length)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function LowEntryExtendedStandardLibrary.LowEntryExtendedStandardLibrary.BitDataReader_Create");

	ULowEntryExtendedStandardLibrary_BitDataReader_Create_Params params {};
	params.Bytes = Bytes;
	params.Index = Index;
	params.Length = Length;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00469250
//		Name   -> Function LowEntryExtendedStandardLibrary.LowEntryExtendedStandardLibrary.BitDataEntry_CreateFromStringUtf8Array
//		Flags  -> (Final, Native, Static, Public, HasOutParms, BlueprintCallable, BlueprintPure)
// Parameters:
//		TArray<struct FString>                             Value                                                      (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
//		class ULowEntryBitDataEntry*                       ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
class ULowEntryBitDataEntry* ULowEntryExtendedStandardLibrary::STATIC_BitDataEntry_CreateFromStringUtf8Array(TArray<struct FString> Value)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function LowEntryExtendedStandardLibrary.LowEntryExtendedStandardLibrary.BitDataEntry_CreateFromStringUtf8Array");

	ULowEntryExtendedStandardLibrary_BitDataEntry_CreateFromStringUtf8Array_Params params {};
	params.Value = Value;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x004691B0
//		Name   -> Function LowEntryExtendedStandardLibrary.LowEntryExtendedStandardLibrary.BitDataEntry_CreateFromStringUtf8
//		Flags  -> (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
//		struct FString                                     Value                                                      (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		class ULowEntryBitDataEntry*                       ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
class ULowEntryBitDataEntry* ULowEntryExtendedStandardLibrary::STATIC_BitDataEntry_CreateFromStringUtf8(const struct FString& Value)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function LowEntryExtendedStandardLibrary.LowEntryExtendedStandardLibrary.BitDataEntry_CreateFromStringUtf8");

	ULowEntryExtendedStandardLibrary_BitDataEntry_CreateFromStringUtf8_Params params {};
	params.Value = Value;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00469100
//		Name   -> Function LowEntryExtendedStandardLibrary.LowEntryExtendedStandardLibrary.BitDataEntry_CreateFromPositiveInteger3Array
//		Flags  -> (Final, Native, Static, Public, HasOutParms, BlueprintCallable, BlueprintPure)
// Parameters:
//		TArray<int>                                        Value                                                      (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
//		class ULowEntryBitDataEntry*                       ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
class ULowEntryBitDataEntry* ULowEntryExtendedStandardLibrary::STATIC_BitDataEntry_CreateFromPositiveInteger3Array(TArray<int> Value)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function LowEntryExtendedStandardLibrary.LowEntryExtendedStandardLibrary.BitDataEntry_CreateFromPositiveInteger3Array");

	ULowEntryExtendedStandardLibrary_BitDataEntry_CreateFromPositiveInteger3Array_Params params {};
	params.Value = Value;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00469080
//		Name   -> Function LowEntryExtendedStandardLibrary.LowEntryExtendedStandardLibrary.BitDataEntry_CreateFromPositiveInteger3
//		Flags  -> (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
//		int                                                Value                                                      (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		class ULowEntryBitDataEntry*                       ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
class ULowEntryBitDataEntry* ULowEntryExtendedStandardLibrary::STATIC_BitDataEntry_CreateFromPositiveInteger3(int Value)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function LowEntryExtendedStandardLibrary.LowEntryExtendedStandardLibrary.BitDataEntry_CreateFromPositiveInteger3");

	ULowEntryExtendedStandardLibrary_BitDataEntry_CreateFromPositiveInteger3_Params params {};
	params.Value = Value;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00468FD0
//		Name   -> Function LowEntryExtendedStandardLibrary.LowEntryExtendedStandardLibrary.BitDataEntry_CreateFromPositiveInteger2Array
//		Flags  -> (Final, Native, Static, Public, HasOutParms, BlueprintCallable, BlueprintPure)
// Parameters:
//		TArray<int>                                        Value                                                      (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
//		class ULowEntryBitDataEntry*                       ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
class ULowEntryBitDataEntry* ULowEntryExtendedStandardLibrary::STATIC_BitDataEntry_CreateFromPositiveInteger2Array(TArray<int> Value)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function LowEntryExtendedStandardLibrary.LowEntryExtendedStandardLibrary.BitDataEntry_CreateFromPositiveInteger2Array");

	ULowEntryExtendedStandardLibrary_BitDataEntry_CreateFromPositiveInteger2Array_Params params {};
	params.Value = Value;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00468F50
//		Name   -> Function LowEntryExtendedStandardLibrary.LowEntryExtendedStandardLibrary.BitDataEntry_CreateFromPositiveInteger2
//		Flags  -> (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
//		int                                                Value                                                      (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		class ULowEntryBitDataEntry*                       ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
class ULowEntryBitDataEntry* ULowEntryExtendedStandardLibrary::STATIC_BitDataEntry_CreateFromPositiveInteger2(int Value)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function LowEntryExtendedStandardLibrary.LowEntryExtendedStandardLibrary.BitDataEntry_CreateFromPositiveInteger2");

	ULowEntryExtendedStandardLibrary_BitDataEntry_CreateFromPositiveInteger2_Params params {};
	params.Value = Value;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00468EA0
//		Name   -> Function LowEntryExtendedStandardLibrary.LowEntryExtendedStandardLibrary.BitDataEntry_CreateFromPositiveInteger1Array
//		Flags  -> (Final, Native, Static, Public, HasOutParms, BlueprintCallable, BlueprintPure)
// Parameters:
//		TArray<int>                                        Value                                                      (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
//		class ULowEntryBitDataEntry*                       ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
class ULowEntryBitDataEntry* ULowEntryExtendedStandardLibrary::STATIC_BitDataEntry_CreateFromPositiveInteger1Array(TArray<int> Value)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function LowEntryExtendedStandardLibrary.LowEntryExtendedStandardLibrary.BitDataEntry_CreateFromPositiveInteger1Array");

	ULowEntryExtendedStandardLibrary_BitDataEntry_CreateFromPositiveInteger1Array_Params params {};
	params.Value = Value;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00468E20
//		Name   -> Function LowEntryExtendedStandardLibrary.LowEntryExtendedStandardLibrary.BitDataEntry_CreateFromPositiveInteger1
//		Flags  -> (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
//		int                                                Value                                                      (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		class ULowEntryBitDataEntry*                       ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
class ULowEntryBitDataEntry* ULowEntryExtendedStandardLibrary::STATIC_BitDataEntry_CreateFromPositiveInteger1(int Value)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function LowEntryExtendedStandardLibrary.LowEntryExtendedStandardLibrary.BitDataEntry_CreateFromPositiveInteger1");

	ULowEntryExtendedStandardLibrary_BitDataEntry_CreateFromPositiveInteger1_Params params {};
	params.Value = Value;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00468D70
//		Name   -> Function LowEntryExtendedStandardLibrary.LowEntryExtendedStandardLibrary.BitDataEntry_CreateFromLongBytesArray
//		Flags  -> (Final, Native, Static, Public, HasOutParms, BlueprintCallable, BlueprintPure)
// Parameters:
//		TArray<class ULowEntryLong*>                       Value                                                      (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
//		class ULowEntryBitDataEntry*                       ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
class ULowEntryBitDataEntry* ULowEntryExtendedStandardLibrary::STATIC_BitDataEntry_CreateFromLongBytesArray(TArray<class ULowEntryLong*> Value)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function LowEntryExtendedStandardLibrary.LowEntryExtendedStandardLibrary.BitDataEntry_CreateFromLongBytesArray");

	ULowEntryExtendedStandardLibrary_BitDataEntry_CreateFromLongBytesArray_Params params {};
	params.Value = Value;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00468CF0
//		Name   -> Function LowEntryExtendedStandardLibrary.LowEntryExtendedStandardLibrary.BitDataEntry_CreateFromLongBytes
//		Flags  -> (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
//		class ULowEntryLong*                               Value                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		class ULowEntryBitDataEntry*                       ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
class ULowEntryBitDataEntry* ULowEntryExtendedStandardLibrary::STATIC_BitDataEntry_CreateFromLongBytes(class ULowEntryLong* Value)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function LowEntryExtendedStandardLibrary.LowEntryExtendedStandardLibrary.BitDataEntry_CreateFromLongBytes");

	ULowEntryExtendedStandardLibrary_BitDataEntry_CreateFromLongBytes_Params params {};
	params.Value = Value;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00468C30
//		Name   -> Function LowEntryExtendedStandardLibrary.LowEntryExtendedStandardLibrary.BitDataEntry_CreateFromIntegerMostSignificantBits
//		Flags  -> (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
//		int                                                Value                                                      (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		int                                                BitCount                                                   (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		class ULowEntryBitDataEntry*                       ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
class ULowEntryBitDataEntry* ULowEntryExtendedStandardLibrary::STATIC_BitDataEntry_CreateFromIntegerMostSignificantBits(int Value, int BitCount)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function LowEntryExtendedStandardLibrary.LowEntryExtendedStandardLibrary.BitDataEntry_CreateFromIntegerMostSignificantBits");

	ULowEntryExtendedStandardLibrary_BitDataEntry_CreateFromIntegerMostSignificantBits_Params params {};
	params.Value = Value;
	params.BitCount = BitCount;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00468B70
//		Name   -> Function LowEntryExtendedStandardLibrary.LowEntryExtendedStandardLibrary.BitDataEntry_CreateFromIntegerLeastSignificantBits
//		Flags  -> (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
//		int                                                Value                                                      (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		int                                                BitCount                                                   (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		class ULowEntryBitDataEntry*                       ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
class ULowEntryBitDataEntry* ULowEntryExtendedStandardLibrary::STATIC_BitDataEntry_CreateFromIntegerLeastSignificantBits(int Value, int BitCount)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function LowEntryExtendedStandardLibrary.LowEntryExtendedStandardLibrary.BitDataEntry_CreateFromIntegerLeastSignificantBits");

	ULowEntryExtendedStandardLibrary_BitDataEntry_CreateFromIntegerLeastSignificantBits_Params params {};
	params.Value = Value;
	params.BitCount = BitCount;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00468A80
//		Name   -> Function LowEntryExtendedStandardLibrary.LowEntryExtendedStandardLibrary.BitDataEntry_CreateFromIntegerArrayMostSignificantBits
//		Flags  -> (Final, Native, Static, Public, HasOutParms, BlueprintCallable, BlueprintPure)
// Parameters:
//		TArray<int>                                        Value                                                      (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
//		int                                                BitCount                                                   (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		class ULowEntryBitDataEntry*                       ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
class ULowEntryBitDataEntry* ULowEntryExtendedStandardLibrary::STATIC_BitDataEntry_CreateFromIntegerArrayMostSignificantBits(TArray<int> Value, int BitCount)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function LowEntryExtendedStandardLibrary.LowEntryExtendedStandardLibrary.BitDataEntry_CreateFromIntegerArrayMostSignificantBits");

	ULowEntryExtendedStandardLibrary_BitDataEntry_CreateFromIntegerArrayMostSignificantBits_Params params {};
	params.Value = Value;
	params.BitCount = BitCount;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00468990
//		Name   -> Function LowEntryExtendedStandardLibrary.LowEntryExtendedStandardLibrary.BitDataEntry_CreateFromIntegerArrayLeastSignificantBits
//		Flags  -> (Final, Native, Static, Public, HasOutParms, BlueprintCallable, BlueprintPure)
// Parameters:
//		TArray<int>                                        Value                                                      (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
//		int                                                BitCount                                                   (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		class ULowEntryBitDataEntry*                       ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
class ULowEntryBitDataEntry* ULowEntryExtendedStandardLibrary::STATIC_BitDataEntry_CreateFromIntegerArrayLeastSignificantBits(TArray<int> Value, int BitCount)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function LowEntryExtendedStandardLibrary.LowEntryExtendedStandardLibrary.BitDataEntry_CreateFromIntegerArrayLeastSignificantBits");

	ULowEntryExtendedStandardLibrary_BitDataEntry_CreateFromIntegerArrayLeastSignificantBits_Params params {};
	params.Value = Value;
	params.BitCount = BitCount;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x004688E0
//		Name   -> Function LowEntryExtendedStandardLibrary.LowEntryExtendedStandardLibrary.BitDataEntry_CreateFromIntegerArray
//		Flags  -> (Final, Native, Static, Public, HasOutParms, BlueprintCallable, BlueprintPure)
// Parameters:
//		TArray<int>                                        Value                                                      (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
//		class ULowEntryBitDataEntry*                       ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
class ULowEntryBitDataEntry* ULowEntryExtendedStandardLibrary::STATIC_BitDataEntry_CreateFromIntegerArray(TArray<int> Value)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function LowEntryExtendedStandardLibrary.LowEntryExtendedStandardLibrary.BitDataEntry_CreateFromIntegerArray");

	ULowEntryExtendedStandardLibrary_BitDataEntry_CreateFromIntegerArray_Params params {};
	params.Value = Value;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00468860
//		Name   -> Function LowEntryExtendedStandardLibrary.LowEntryExtendedStandardLibrary.BitDataEntry_CreateFromInteger
//		Flags  -> (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
//		int                                                Value                                                      (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		class ULowEntryBitDataEntry*                       ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
class ULowEntryBitDataEntry* ULowEntryExtendedStandardLibrary::STATIC_BitDataEntry_CreateFromInteger(int Value)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function LowEntryExtendedStandardLibrary.LowEntryExtendedStandardLibrary.BitDataEntry_CreateFromInteger");

	ULowEntryExtendedStandardLibrary_BitDataEntry_CreateFromInteger_Params params {};
	params.Value = Value;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x004687B0
//		Name   -> Function LowEntryExtendedStandardLibrary.LowEntryExtendedStandardLibrary.BitDataEntry_CreateFromFloatArray
//		Flags  -> (Final, Native, Static, Public, HasOutParms, BlueprintCallable, BlueprintPure)
// Parameters:
//		TArray<float>                                      Value                                                      (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
//		class ULowEntryBitDataEntry*                       ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
class ULowEntryBitDataEntry* ULowEntryExtendedStandardLibrary::STATIC_BitDataEntry_CreateFromFloatArray(TArray<float> Value)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function LowEntryExtendedStandardLibrary.LowEntryExtendedStandardLibrary.BitDataEntry_CreateFromFloatArray");

	ULowEntryExtendedStandardLibrary_BitDataEntry_CreateFromFloatArray_Params params {};
	params.Value = Value;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00468730
//		Name   -> Function LowEntryExtendedStandardLibrary.LowEntryExtendedStandardLibrary.BitDataEntry_CreateFromFloat
//		Flags  -> (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
//		float                                              Value                                                      (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		class ULowEntryBitDataEntry*                       ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
class ULowEntryBitDataEntry* ULowEntryExtendedStandardLibrary::STATIC_BitDataEntry_CreateFromFloat(float Value)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function LowEntryExtendedStandardLibrary.LowEntryExtendedStandardLibrary.BitDataEntry_CreateFromFloat");

	ULowEntryExtendedStandardLibrary_BitDataEntry_CreateFromFloat_Params params {};
	params.Value = Value;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00468680
//		Name   -> Function LowEntryExtendedStandardLibrary.LowEntryExtendedStandardLibrary.BitDataEntry_CreateFromDoubleBytesArray
//		Flags  -> (Final, Native, Static, Public, HasOutParms, BlueprintCallable, BlueprintPure)
// Parameters:
//		TArray<class ULowEntryDouble*>                     Value                                                      (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
//		class ULowEntryBitDataEntry*                       ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
class ULowEntryBitDataEntry* ULowEntryExtendedStandardLibrary::STATIC_BitDataEntry_CreateFromDoubleBytesArray(TArray<class ULowEntryDouble*> Value)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function LowEntryExtendedStandardLibrary.LowEntryExtendedStandardLibrary.BitDataEntry_CreateFromDoubleBytesArray");

	ULowEntryExtendedStandardLibrary_BitDataEntry_CreateFromDoubleBytesArray_Params params {};
	params.Value = Value;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00468600
//		Name   -> Function LowEntryExtendedStandardLibrary.LowEntryExtendedStandardLibrary.BitDataEntry_CreateFromDoubleBytes
//		Flags  -> (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
//		class ULowEntryDouble*                             Value                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		class ULowEntryBitDataEntry*                       ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
class ULowEntryBitDataEntry* ULowEntryExtendedStandardLibrary::STATIC_BitDataEntry_CreateFromDoubleBytes(class ULowEntryDouble* Value)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function LowEntryExtendedStandardLibrary.LowEntryExtendedStandardLibrary.BitDataEntry_CreateFromDoubleBytes");

	ULowEntryExtendedStandardLibrary_BitDataEntry_CreateFromDoubleBytes_Params params {};
	params.Value = Value;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00468540
//		Name   -> Function LowEntryExtendedStandardLibrary.LowEntryExtendedStandardLibrary.BitDataEntry_CreateFromByteMostSignificantBits
//		Flags  -> (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
//		unsigned char                                      Value                                                      (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		int                                                BitCount                                                   (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		class ULowEntryBitDataEntry*                       ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
class ULowEntryBitDataEntry* ULowEntryExtendedStandardLibrary::STATIC_BitDataEntry_CreateFromByteMostSignificantBits(unsigned char Value, int BitCount)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function LowEntryExtendedStandardLibrary.LowEntryExtendedStandardLibrary.BitDataEntry_CreateFromByteMostSignificantBits");

	ULowEntryExtendedStandardLibrary_BitDataEntry_CreateFromByteMostSignificantBits_Params params {};
	params.Value = Value;
	params.BitCount = BitCount;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00468480
//		Name   -> Function LowEntryExtendedStandardLibrary.LowEntryExtendedStandardLibrary.BitDataEntry_CreateFromByteLeastSignificantBits
//		Flags  -> (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
//		unsigned char                                      Value                                                      (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		int                                                BitCount                                                   (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		class ULowEntryBitDataEntry*                       ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
class ULowEntryBitDataEntry* ULowEntryExtendedStandardLibrary::STATIC_BitDataEntry_CreateFromByteLeastSignificantBits(unsigned char Value, int BitCount)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function LowEntryExtendedStandardLibrary.LowEntryExtendedStandardLibrary.BitDataEntry_CreateFromByteLeastSignificantBits");

	ULowEntryExtendedStandardLibrary_BitDataEntry_CreateFromByteLeastSignificantBits_Params params {};
	params.Value = Value;
	params.BitCount = BitCount;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00468390
//		Name   -> Function LowEntryExtendedStandardLibrary.LowEntryExtendedStandardLibrary.BitDataEntry_CreateFromByteArrayMostSignificantBits
//		Flags  -> (Final, Native, Static, Public, HasOutParms, BlueprintCallable, BlueprintPure)
// Parameters:
//		TArray<unsigned char>                              Value                                                      (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
//		int                                                BitCount                                                   (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		class ULowEntryBitDataEntry*                       ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
class ULowEntryBitDataEntry* ULowEntryExtendedStandardLibrary::STATIC_BitDataEntry_CreateFromByteArrayMostSignificantBits(TArray<unsigned char> Value, int BitCount)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function LowEntryExtendedStandardLibrary.LowEntryExtendedStandardLibrary.BitDataEntry_CreateFromByteArrayMostSignificantBits");

	ULowEntryExtendedStandardLibrary_BitDataEntry_CreateFromByteArrayMostSignificantBits_Params params {};
	params.Value = Value;
	params.BitCount = BitCount;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x004682A0
//		Name   -> Function LowEntryExtendedStandardLibrary.LowEntryExtendedStandardLibrary.BitDataEntry_CreateFromByteArrayLeastSignificantBits
//		Flags  -> (Final, Native, Static, Public, HasOutParms, BlueprintCallable, BlueprintPure)
// Parameters:
//		TArray<unsigned char>                              Value                                                      (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
//		int                                                BitCount                                                   (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		class ULowEntryBitDataEntry*                       ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
class ULowEntryBitDataEntry* ULowEntryExtendedStandardLibrary::STATIC_BitDataEntry_CreateFromByteArrayLeastSignificantBits(TArray<unsigned char> Value, int BitCount)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function LowEntryExtendedStandardLibrary.LowEntryExtendedStandardLibrary.BitDataEntry_CreateFromByteArrayLeastSignificantBits");

	ULowEntryExtendedStandardLibrary_BitDataEntry_CreateFromByteArrayLeastSignificantBits_Params params {};
	params.Value = Value;
	params.BitCount = BitCount;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x004681F0
//		Name   -> Function LowEntryExtendedStandardLibrary.LowEntryExtendedStandardLibrary.BitDataEntry_CreateFromByteArray
//		Flags  -> (Final, Native, Static, Public, HasOutParms, BlueprintCallable, BlueprintPure)
// Parameters:
//		TArray<unsigned char>                              Value                                                      (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
//		class ULowEntryBitDataEntry*                       ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
class ULowEntryBitDataEntry* ULowEntryExtendedStandardLibrary::STATIC_BitDataEntry_CreateFromByteArray(TArray<unsigned char> Value)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function LowEntryExtendedStandardLibrary.LowEntryExtendedStandardLibrary.BitDataEntry_CreateFromByteArray");

	ULowEntryExtendedStandardLibrary_BitDataEntry_CreateFromByteArray_Params params {};
	params.Value = Value;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00468170
//		Name   -> Function LowEntryExtendedStandardLibrary.LowEntryExtendedStandardLibrary.BitDataEntry_CreateFromByte
//		Flags  -> (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
//		unsigned char                                      Value                                                      (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		class ULowEntryBitDataEntry*                       ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
class ULowEntryBitDataEntry* ULowEntryExtendedStandardLibrary::STATIC_BitDataEntry_CreateFromByte(unsigned char Value)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function LowEntryExtendedStandardLibrary.LowEntryExtendedStandardLibrary.BitDataEntry_CreateFromByte");

	ULowEntryExtendedStandardLibrary_BitDataEntry_CreateFromByte_Params params {};
	params.Value = Value;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x004680C0
//		Name   -> Function LowEntryExtendedStandardLibrary.LowEntryExtendedStandardLibrary.BitDataEntry_CreateFromBooleanArray
//		Flags  -> (Final, Native, Static, Public, HasOutParms, BlueprintCallable, BlueprintPure)
// Parameters:
//		TArray<bool>                                       Value                                                      (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
//		class ULowEntryBitDataEntry*                       ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
class ULowEntryBitDataEntry* ULowEntryExtendedStandardLibrary::STATIC_BitDataEntry_CreateFromBooleanArray(TArray<bool> Value)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function LowEntryExtendedStandardLibrary.LowEntryExtendedStandardLibrary.BitDataEntry_CreateFromBooleanArray");

	ULowEntryExtendedStandardLibrary_BitDataEntry_CreateFromBooleanArray_Params params {};
	params.Value = Value;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00468030
//		Name   -> Function LowEntryExtendedStandardLibrary.LowEntryExtendedStandardLibrary.BitDataEntry_CreateFromBoolean
//		Flags  -> (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
//		bool                                               Value                                                      (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		class ULowEntryBitDataEntry*                       ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
class ULowEntryBitDataEntry* ULowEntryExtendedStandardLibrary::STATIC_BitDataEntry_CreateFromBoolean(bool Value)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function LowEntryExtendedStandardLibrary.LowEntryExtendedStandardLibrary.BitDataEntry_CreateFromBoolean");

	ULowEntryExtendedStandardLibrary_BitDataEntry_CreateFromBoolean_Params params {};
	params.Value = Value;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00467F80
//		Name   -> Function LowEntryExtendedStandardLibrary.LowEntryExtendedStandardLibrary.BitDataEntry_CreateFromBitArray
//		Flags  -> (Final, Native, Static, Public, HasOutParms, BlueprintCallable, BlueprintPure)
// Parameters:
//		TArray<bool>                                       Value                                                      (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
//		class ULowEntryBitDataEntry*                       ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
class ULowEntryBitDataEntry* ULowEntryExtendedStandardLibrary::STATIC_BitDataEntry_CreateFromBitArray(TArray<bool> Value)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function LowEntryExtendedStandardLibrary.LowEntryExtendedStandardLibrary.BitDataEntry_CreateFromBitArray");

	ULowEntryExtendedStandardLibrary_BitDataEntry_CreateFromBitArray_Params params {};
	params.Value = Value;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00467EF0
//		Name   -> Function LowEntryExtendedStandardLibrary.LowEntryExtendedStandardLibrary.BitDataEntry_CreateFromBit
//		Flags  -> (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
//		bool                                               Value                                                      (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		class ULowEntryBitDataEntry*                       ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
class ULowEntryBitDataEntry* ULowEntryExtendedStandardLibrary::STATIC_BitDataEntry_CreateFromBit(bool Value)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function LowEntryExtendedStandardLibrary.LowEntryExtendedStandardLibrary.BitDataEntry_CreateFromBit");

	ULowEntryExtendedStandardLibrary_BitDataEntry_CreateFromBit_Params params {};
	params.Value = Value;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00467E10
//		Name   -> Function LowEntryExtendedStandardLibrary.LowEntryExtendedStandardLibrary.BinaryToBytes
//		Flags  -> (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
//		struct FString                                     Binary                                                     (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		TArray<unsigned char>                              ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, NativeAccessSpecifierPublic)
TArray<unsigned char> ULowEntryExtendedStandardLibrary::STATIC_BinaryToBytes(const struct FString& Binary)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function LowEntryExtendedStandardLibrary.LowEntryExtendedStandardLibrary.BinaryToBytes");

	ULowEntryExtendedStandardLibrary_BinaryToBytes_Params params {};
	params.Binary = Binary;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00467890
//		Name   -> Function LowEntryExtendedStandardLibrary.LowEntryExtendedStandardLibrary.BCrypt
//		Flags  -> (Final, Native, Static, Public, HasOutParms, BlueprintCallable, BlueprintPure)
// Parameters:
//		TArray<unsigned char>                              ByteArray                                                  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
//		TArray<unsigned char>                              salt                                                       (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
//		int                                                Strength                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		int                                                Index                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		int                                                Length                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		TArray<unsigned char>                              ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, NativeAccessSpecifierPublic)
TArray<unsigned char> ULowEntryExtendedStandardLibrary::STATIC_BCrypt(TArray<unsigned char> ByteArray, TArray<unsigned char> salt, int Strength, int Index, int Length)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function LowEntryExtendedStandardLibrary.LowEntryExtendedStandardLibrary.BCrypt");

	ULowEntryExtendedStandardLibrary_BCrypt_Params params {};
	params.ByteArray = ByteArray;
	params.salt = salt;
	params.Strength = Strength;
	params.Index = Index;
	params.Length = Length;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00467D30
//		Name   -> Function LowEntryExtendedStandardLibrary.LowEntryExtendedStandardLibrary.Base64UrlToBytes
//		Flags  -> (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
//		struct FString                                     Base64Url                                                  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		TArray<unsigned char>                              ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, NativeAccessSpecifierPublic)
TArray<unsigned char> ULowEntryExtendedStandardLibrary::STATIC_Base64UrlToBytes(const struct FString& Base64Url)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function LowEntryExtendedStandardLibrary.LowEntryExtendedStandardLibrary.Base64UrlToBytes");

	ULowEntryExtendedStandardLibrary_Base64UrlToBytes_Params params {};
	params.Base64Url = Base64Url;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00467C50
//		Name   -> Function LowEntryExtendedStandardLibrary.LowEntryExtendedStandardLibrary.Base64UrlToBase64
//		Flags  -> (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
//		struct FString                                     Base64Url                                                  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		struct FString                                     ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
struct FString ULowEntryExtendedStandardLibrary::STATIC_Base64UrlToBase64(const struct FString& Base64Url)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function LowEntryExtendedStandardLibrary.LowEntryExtendedStandardLibrary.Base64UrlToBase64");

	ULowEntryExtendedStandardLibrary_Base64UrlToBase64_Params params {};
	params.Base64Url = Base64Url;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00467B70
//		Name   -> Function LowEntryExtendedStandardLibrary.LowEntryExtendedStandardLibrary.Base64ToBytes
//		Flags  -> (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
//		struct FString                                     Base64                                                     (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		TArray<unsigned char>                              ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, NativeAccessSpecifierPublic)
TArray<unsigned char> ULowEntryExtendedStandardLibrary::STATIC_Base64ToBytes(const struct FString& Base64)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function LowEntryExtendedStandardLibrary.LowEntryExtendedStandardLibrary.Base64ToBytes");

	ULowEntryExtendedStandardLibrary_Base64ToBytes_Params params {};
	params.Base64 = Base64;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00467A90
//		Name   -> Function LowEntryExtendedStandardLibrary.LowEntryExtendedStandardLibrary.Base64ToBase64Url
//		Flags  -> (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
//		struct FString                                     Base64                                                     (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		struct FString                                     ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
struct FString ULowEntryExtendedStandardLibrary::STATIC_Base64ToBase64Url(const struct FString& Base64)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function LowEntryExtendedStandardLibrary.LowEntryExtendedStandardLibrary.Base64ToBase64Url");

	ULowEntryExtendedStandardLibrary_Base64ToBase64Url_Params params {};
	params.Base64 = Base64;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00467690
//		Name   -> Function LowEntryExtendedStandardLibrary.LowEntryExtendedStandardLibrary.AreBytesEqual
//		Flags  -> (Final, Native, Static, Public, HasOutParms, BlueprintCallable, BlueprintPure)
// Parameters:
//		TArray<unsigned char>                              A                                                          (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
//		TArray<unsigned char>                              B                                                          (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
//		int                                                IndexA                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		int                                                LengthA                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		int                                                IndexB                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		int                                                LengthB                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		bool                                               ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool ULowEntryExtendedStandardLibrary::STATIC_AreBytesEqual(TArray<unsigned char> A, TArray<unsigned char> B, int IndexA, int LengthA, int IndexB, int LengthB)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function LowEntryExtendedStandardLibrary.LowEntryExtendedStandardLibrary.AreBytesEqual");

	ULowEntryExtendedStandardLibrary_AreBytesEqual_Params params {};
	params.A = A;
	params.B = B;
	params.IndexA = IndexA;
	params.LengthA = LengthA;
	params.IndexB = IndexB;
	params.LengthB = LengthB;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00467660
//		Name   -> Function LowEntryExtendedStandardLibrary.LowEntryExtendedStandardLibrary.AreAndroidHeadphonesPluggedIn
//		Flags  -> (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
//		bool                                               ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool ULowEntryExtendedStandardLibrary::STATIC_AreAndroidHeadphonesPluggedIn()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function LowEntryExtendedStandardLibrary.LowEntryExtendedStandardLibrary.AreAndroidHeadphonesPluggedIn");

	ULowEntryExtendedStandardLibrary_AreAndroidHeadphonesPluggedIn_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00467660
//		Name   -> Function LowEntryExtendedStandardLibrary.LowEntryExtendedStandardLibrary.AndroidPlatform
//		Flags  -> (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
//		bool                                               ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool ULowEntryExtendedStandardLibrary::STATIC_AndroidPlatform()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function LowEntryExtendedStandardLibrary.LowEntryExtendedStandardLibrary.AndroidPlatform");

	ULowEntryExtendedStandardLibrary_AndroidPlatform_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x0047B020
//		Name   -> Function LowEntryExtendedStandardLibrary.LowEntryLatentActionBoolean.WaitTillDone
//		Flags  -> (Final, Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
//		class UObject*                                     WorldContextObject                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		struct FLatentActionInfo                           LatentInfo                                                 (Parm, NoDestructor, NativeAccessSpecifierPublic)
//		bool                                               Result_                                                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void ULowEntryLatentActionBoolean::WaitTillDone(class UObject* WorldContextObject, const struct FLatentActionInfo& LatentInfo, bool* Result_)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function LowEntryExtendedStandardLibrary.LowEntryLatentActionBoolean.WaitTillDone");

	ULowEntryLatentActionBoolean_WaitTillDone_Params params {};
	params.WorldContextObject = WorldContextObject;
	params.LatentInfo = LatentInfo;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Result_ != nullptr)
		*Result_ = params.Result_;

}


// Function:
//		Offset -> 0x0047ACC0
//		Name   -> Function LowEntryExtendedStandardLibrary.LowEntryLatentActionBoolean.IsDone
//		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure)
// Parameters:
//		bool                                               ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool ULowEntryLatentActionBoolean::IsDone()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function LowEntryExtendedStandardLibrary.LowEntryLatentActionBoolean.IsDone");

	ULowEntryLatentActionBoolean_IsDone_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x0047A710
//		Name   -> Function LowEntryExtendedStandardLibrary.LowEntryLatentActionBoolean.GetResult
//		Flags  -> (Final, Native, Public, HasOutParms, BlueprintCallable, BlueprintPure)
// Parameters:
//		bool                                               Result_                                                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void ULowEntryLatentActionBoolean::GetResult(bool* Result_)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function LowEntryExtendedStandardLibrary.LowEntryLatentActionBoolean.GetResult");

	ULowEntryLatentActionBoolean_GetResult_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Result_ != nullptr)
		*Result_ = params.Result_;

}


// Function:
//		Offset -> 0x0047A0D0
//		Name   -> Function LowEntryExtendedStandardLibrary.LowEntryLatentActionBoolean.Done
//		Flags  -> (Final, Native, Public, BlueprintCallable)
// Parameters:
//		bool                                               Result_                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void ULowEntryLatentActionBoolean::Done(bool Result_)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function LowEntryExtendedStandardLibrary.LowEntryLatentActionBoolean.Done");

	ULowEntryLatentActionBoolean_Done_Params params {};
	params.Result_ = Result_;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x0047B160
//		Name   -> Function LowEntryExtendedStandardLibrary.LowEntryLatentActionFloat.WaitTillDone
//		Flags  -> (Final, Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
//		class UObject*                                     WorldContextObject                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		struct FLatentActionInfo                           LatentInfo                                                 (Parm, NoDestructor, NativeAccessSpecifierPublic)
//		float                                              Result_                                                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void ULowEntryLatentActionFloat::WaitTillDone(class UObject* WorldContextObject, const struct FLatentActionInfo& LatentInfo, float* Result_)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function LowEntryExtendedStandardLibrary.LowEntryLatentActionFloat.WaitTillDone");

	ULowEntryLatentActionFloat_WaitTillDone_Params params {};
	params.WorldContextObject = WorldContextObject;
	params.LatentInfo = LatentInfo;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Result_ != nullptr)
		*Result_ = params.Result_;

}


// Function:
//		Offset -> 0x0047ACC0
//		Name   -> Function LowEntryExtendedStandardLibrary.LowEntryLatentActionFloat.IsDone
//		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure)
// Parameters:
//		bool                                               ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool ULowEntryLatentActionFloat::IsDone()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function LowEntryExtendedStandardLibrary.LowEntryLatentActionFloat.IsDone");

	ULowEntryLatentActionFloat_IsDone_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x0047A7A0
//		Name   -> Function LowEntryExtendedStandardLibrary.LowEntryLatentActionFloat.GetResult
//		Flags  -> (Final, Native, Public, HasOutParms, BlueprintCallable, BlueprintPure)
// Parameters:
//		float                                              Result_                                                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void ULowEntryLatentActionFloat::GetResult(float* Result_)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function LowEntryExtendedStandardLibrary.LowEntryLatentActionFloat.GetResult");

	ULowEntryLatentActionFloat_GetResult_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Result_ != nullptr)
		*Result_ = params.Result_;

}


// Function:
//		Offset -> 0x0047A160
//		Name   -> Function LowEntryExtendedStandardLibrary.LowEntryLatentActionFloat.Done
//		Flags  -> (Final, Native, Public, BlueprintCallable)
// Parameters:
//		float                                              Result_                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void ULowEntryLatentActionFloat::Done(float Result_)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function LowEntryExtendedStandardLibrary.LowEntryLatentActionFloat.Done");

	ULowEntryLatentActionFloat_Done_Params params {};
	params.Result_ = Result_;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x0047B2A0
//		Name   -> Function LowEntryExtendedStandardLibrary.LowEntryLatentActionInteger.WaitTillDone
//		Flags  -> (Final, Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
//		class UObject*                                     WorldContextObject                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		struct FLatentActionInfo                           LatentInfo                                                 (Parm, NoDestructor, NativeAccessSpecifierPublic)
//		int                                                Result_                                                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void ULowEntryLatentActionInteger::WaitTillDone(class UObject* WorldContextObject, const struct FLatentActionInfo& LatentInfo, int* Result_)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function LowEntryExtendedStandardLibrary.LowEntryLatentActionInteger.WaitTillDone");

	ULowEntryLatentActionInteger_WaitTillDone_Params params {};
	params.WorldContextObject = WorldContextObject;
	params.LatentInfo = LatentInfo;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Result_ != nullptr)
		*Result_ = params.Result_;

}


// Function:
//		Offset -> 0x0047ACC0
//		Name   -> Function LowEntryExtendedStandardLibrary.LowEntryLatentActionInteger.IsDone
//		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure)
// Parameters:
//		bool                                               ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool ULowEntryLatentActionInteger::IsDone()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function LowEntryExtendedStandardLibrary.LowEntryLatentActionInteger.IsDone");

	ULowEntryLatentActionInteger_IsDone_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x0047A840
//		Name   -> Function LowEntryExtendedStandardLibrary.LowEntryLatentActionInteger.GetResult
//		Flags  -> (Final, Native, Public, HasOutParms, BlueprintCallable, BlueprintPure)
// Parameters:
//		int                                                Result_                                                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void ULowEntryLatentActionInteger::GetResult(int* Result_)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function LowEntryExtendedStandardLibrary.LowEntryLatentActionInteger.GetResult");

	ULowEntryLatentActionInteger_GetResult_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Result_ != nullptr)
		*Result_ = params.Result_;

}


// Function:
//		Offset -> 0x0047A1E0
//		Name   -> Function LowEntryExtendedStandardLibrary.LowEntryLatentActionInteger.Done
//		Flags  -> (Final, Native, Public, BlueprintCallable)
// Parameters:
//		int                                                Result_                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void ULowEntryLatentActionInteger::Done(int Result_)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function LowEntryExtendedStandardLibrary.LowEntryLatentActionInteger.Done");

	ULowEntryLatentActionInteger_Done_Params params {};
	params.Result_ = Result_;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x0047B3E0
//		Name   -> Function LowEntryExtendedStandardLibrary.LowEntryLatentActionNone.WaitTillDone
//		Flags  -> (Final, Native, Public, BlueprintCallable)
// Parameters:
//		class UObject*                                     WorldContextObject                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		struct FLatentActionInfo                           LatentInfo                                                 (Parm, NoDestructor, NativeAccessSpecifierPublic)
void ULowEntryLatentActionNone::WaitTillDone(class UObject* WorldContextObject, const struct FLatentActionInfo& LatentInfo)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function LowEntryExtendedStandardLibrary.LowEntryLatentActionNone.WaitTillDone");

	ULowEntryLatentActionNone_WaitTillDone_Params params {};
	params.WorldContextObject = WorldContextObject;
	params.LatentInfo = LatentInfo;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x0047ACC0
//		Name   -> Function LowEntryExtendedStandardLibrary.LowEntryLatentActionNone.IsDone
//		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure)
// Parameters:
//		bool                                               ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool ULowEntryLatentActionNone::IsDone()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function LowEntryExtendedStandardLibrary.LowEntryLatentActionNone.IsDone");

	ULowEntryLatentActionNone_IsDone_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x0047A260
//		Name   -> Function LowEntryExtendedStandardLibrary.LowEntryLatentActionNone.Done
//		Flags  -> (Final, Native, Public, BlueprintCallable)
void ULowEntryLatentActionNone::Done()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function LowEntryExtendedStandardLibrary.LowEntryLatentActionNone.Done");

	ULowEntryLatentActionNone_Done_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x0047B4D0
//		Name   -> Function LowEntryExtendedStandardLibrary.LowEntryLatentActionObject.WaitTillDone
//		Flags  -> (Final, Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
//		class UObject*                                     WorldContextObject                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		struct FLatentActionInfo                           LatentInfo                                                 (Parm, NoDestructor, NativeAccessSpecifierPublic)
//		class UObject*                                     Result_                                                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void ULowEntryLatentActionObject::WaitTillDone(class UObject* WorldContextObject, const struct FLatentActionInfo& LatentInfo, class UObject** Result_)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function LowEntryExtendedStandardLibrary.LowEntryLatentActionObject.WaitTillDone");

	ULowEntryLatentActionObject_WaitTillDone_Params params {};
	params.WorldContextObject = WorldContextObject;
	params.LatentInfo = LatentInfo;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Result_ != nullptr)
		*Result_ = params.Result_;

}


// Function:
//		Offset -> 0x0047ACC0
//		Name   -> Function LowEntryExtendedStandardLibrary.LowEntryLatentActionObject.IsDone
//		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure)
// Parameters:
//		bool                                               ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool ULowEntryLatentActionObject::IsDone()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function LowEntryExtendedStandardLibrary.LowEntryLatentActionObject.IsDone");

	ULowEntryLatentActionObject_IsDone_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x0047A8D0
//		Name   -> Function LowEntryExtendedStandardLibrary.LowEntryLatentActionObject.GetResult
//		Flags  -> (Final, Native, Public, HasOutParms, BlueprintCallable, BlueprintPure)
// Parameters:
//		class UObject*                                     Result_                                                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void ULowEntryLatentActionObject::GetResult(class UObject** Result_)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function LowEntryExtendedStandardLibrary.LowEntryLatentActionObject.GetResult");

	ULowEntryLatentActionObject_GetResult_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Result_ != nullptr)
		*Result_ = params.Result_;

}


// Function:
//		Offset -> 0x0047A280
//		Name   -> Function LowEntryExtendedStandardLibrary.LowEntryLatentActionObject.Done
//		Flags  -> (Final, Native, Public, BlueprintCallable)
// Parameters:
//		class UObject*                                     Result_                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void ULowEntryLatentActionObject::Done(class UObject* Result_)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function LowEntryExtendedStandardLibrary.LowEntryLatentActionObject.Done");

	ULowEntryLatentActionObject_Done_Params params {};
	params.Result_ = Result_;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x0047B610
//		Name   -> Function LowEntryExtendedStandardLibrary.LowEntryLatentActionString.WaitTillDone
//		Flags  -> (Final, Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
//		class UObject*                                     WorldContextObject                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		struct FLatentActionInfo                           LatentInfo                                                 (Parm, NoDestructor, NativeAccessSpecifierPublic)
//		struct FString                                     Result_                                                    (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void ULowEntryLatentActionString::WaitTillDone(class UObject* WorldContextObject, const struct FLatentActionInfo& LatentInfo, struct FString* Result_)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function LowEntryExtendedStandardLibrary.LowEntryLatentActionString.WaitTillDone");

	ULowEntryLatentActionString_WaitTillDone_Params params {};
	params.WorldContextObject = WorldContextObject;
	params.LatentInfo = LatentInfo;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Result_ != nullptr)
		*Result_ = params.Result_;

}


// Function:
//		Offset -> 0x0047ACC0
//		Name   -> Function LowEntryExtendedStandardLibrary.LowEntryLatentActionString.IsDone
//		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure)
// Parameters:
//		bool                                               ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool ULowEntryLatentActionString::IsDone()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function LowEntryExtendedStandardLibrary.LowEntryLatentActionString.IsDone");

	ULowEntryLatentActionString_IsDone_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x0047A960
//		Name   -> Function LowEntryExtendedStandardLibrary.LowEntryLatentActionString.GetResult
//		Flags  -> (Final, Native, Public, HasOutParms, BlueprintCallable, BlueprintPure)
// Parameters:
//		struct FString                                     Result_                                                    (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void ULowEntryLatentActionString::GetResult(struct FString* Result_)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function LowEntryExtendedStandardLibrary.LowEntryLatentActionString.GetResult");

	ULowEntryLatentActionString_GetResult_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Result_ != nullptr)
		*Result_ = params.Result_;

}


// Function:
//		Offset -> 0x0047A300
//		Name   -> Function LowEntryExtendedStandardLibrary.LowEntryLatentActionString.Done
//		Flags  -> (Final, Native, Public, BlueprintCallable)
// Parameters:
//		struct FString                                     Result_                                                    (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void ULowEntryLatentActionString::Done(const struct FString& Result_)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function LowEntryExtendedStandardLibrary.LowEntryLatentActionString.Done");

	ULowEntryLatentActionString_Done_Params params {};
	params.Result_ = Result_;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00476310
//		Name   -> Function LowEntryExtendedStandardLibrary.LowEntryLong.SetBytes
//		Flags  -> (Final, Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
//		TArray<unsigned char>                              ByteArray                                                  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
//		int                                                Index                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		int                                                Length                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void ULowEntryLong::SetBytes(TArray<unsigned char> ByteArray, int Index, int Length)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function LowEntryExtendedStandardLibrary.LowEntryLong.SetBytes");

	ULowEntryLong_SetBytes_Params params {};
	params.ByteArray = ByteArray;
	params.Index = Index;
	params.Length = Length;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x0047AF20
//		Name   -> Function LowEntryExtendedStandardLibrary.LowEntryLong.LongBytes_Subtract
//		Flags  -> (Final, Native, Public, BlueprintCallable)
// Parameters:
//		class ULowEntryLong*                               Value                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void ULowEntryLong::LongBytes_Subtract(class ULowEntryLong* Value)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function LowEntryExtendedStandardLibrary.LowEntryLong.LongBytes_Subtract");

	ULowEntryLong_LongBytes_Subtract_Params params {};
	params.Value = Value;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x0047AE90
//		Name   -> Function LowEntryExtendedStandardLibrary.LowEntryLong.LongBytes_LessThan
//		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure)
// Parameters:
//		class ULowEntryLong*                               Value                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		bool                                               ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool ULowEntryLong::LongBytes_LessThan(class ULowEntryLong* Value)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function LowEntryExtendedStandardLibrary.LowEntryLong.LongBytes_LessThan");

	ULowEntryLong_LongBytes_LessThan_Params params {};
	params.Value = Value;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x0047AE00
//		Name   -> Function LowEntryExtendedStandardLibrary.LowEntryLong.LongBytes_GreaterThan
//		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure)
// Parameters:
//		class ULowEntryLong*                               Value                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		bool                                               ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool ULowEntryLong::LongBytes_GreaterThan(class ULowEntryLong* Value)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function LowEntryExtendedStandardLibrary.LowEntryLong.LongBytes_GreaterThan");

	ULowEntryLong_LongBytes_GreaterThan_Params params {};
	params.Value = Value;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x0047AD70
//		Name   -> Function LowEntryExtendedStandardLibrary.LowEntryLong.LongBytes_Equals
//		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure)
// Parameters:
//		class ULowEntryLong*                               Value                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		bool                                               ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool ULowEntryLong::LongBytes_Equals(class ULowEntryLong* Value)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function LowEntryExtendedStandardLibrary.LowEntryLong.LongBytes_Equals");

	ULowEntryLong_LongBytes_Equals_Params params {};
	params.Value = Value;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x0047ACF0
//		Name   -> Function LowEntryExtendedStandardLibrary.LowEntryLong.LongBytes_Add
//		Flags  -> (Final, Native, Public, BlueprintCallable)
// Parameters:
//		class ULowEntryLong*                               Value                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void ULowEntryLong::LongBytes_Add(class ULowEntryLong* Value)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function LowEntryExtendedStandardLibrary.LowEntryLong.LongBytes_Add");

	ULowEntryLong_LongBytes_Add_Params params {};
	params.Value = Value;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x0047AC40
//		Name   -> Function LowEntryExtendedStandardLibrary.LowEntryLong.Integer_Subtract
//		Flags  -> (Final, Native, Public, BlueprintCallable)
// Parameters:
//		int                                                Value                                                      (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void ULowEntryLong::Integer_Subtract(int Value)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function LowEntryExtendedStandardLibrary.LowEntryLong.Integer_Subtract");

	ULowEntryLong_Integer_Subtract_Params params {};
	params.Value = Value;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x0047ABB0
//		Name   -> Function LowEntryExtendedStandardLibrary.LowEntryLong.Integer_LessThan
//		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure)
// Parameters:
//		int                                                Value                                                      (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		bool                                               ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool ULowEntryLong::Integer_LessThan(int Value)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function LowEntryExtendedStandardLibrary.LowEntryLong.Integer_LessThan");

	ULowEntryLong_Integer_LessThan_Params params {};
	params.Value = Value;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x0047AB20
//		Name   -> Function LowEntryExtendedStandardLibrary.LowEntryLong.Integer_GreaterThan
//		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure)
// Parameters:
//		int                                                Value                                                      (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		bool                                               ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool ULowEntryLong::Integer_GreaterThan(int Value)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function LowEntryExtendedStandardLibrary.LowEntryLong.Integer_GreaterThan");

	ULowEntryLong_Integer_GreaterThan_Params params {};
	params.Value = Value;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x0047AA90
//		Name   -> Function LowEntryExtendedStandardLibrary.LowEntryLong.Integer_Equals
//		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure)
// Parameters:
//		int                                                Value                                                      (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		bool                                               ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool ULowEntryLong::Integer_Equals(int Value)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function LowEntryExtendedStandardLibrary.LowEntryLong.Integer_Equals");

	ULowEntryLong_Integer_Equals_Params params {};
	params.Value = Value;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x0047AA10
//		Name   -> Function LowEntryExtendedStandardLibrary.LowEntryLong.Integer_Add
//		Flags  -> (Final, Native, Public, BlueprintCallable)
// Parameters:
//		int                                                Value                                                      (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void ULowEntryLong::Integer_Add(int Value)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function LowEntryExtendedStandardLibrary.LowEntryLong.Integer_Add");

	ULowEntryLong_Integer_Add_Params params {};
	params.Value = Value;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x0046F130
//		Name   -> Function LowEntryExtendedStandardLibrary.LowEntryLong.GetBytes
//		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure)
// Parameters:
//		TArray<unsigned char>                              ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, NativeAccessSpecifierPublic)
TArray<unsigned char> ULowEntryLong::GetBytes()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function LowEntryExtendedStandardLibrary.LowEntryLong.GetBytes");

	ULowEntryLong_GetBytes_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x0047A590
//		Name   -> Function LowEntryExtendedStandardLibrary.LowEntryLong.Float_LessThan
//		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure)
// Parameters:
//		float                                              Value                                                      (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		bool                                               ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool ULowEntryLong::Float_LessThan(float Value)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function LowEntryExtendedStandardLibrary.LowEntryLong.Float_LessThan");

	ULowEntryLong_Float_LessThan_Params params {};
	params.Value = Value;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x0047A500
//		Name   -> Function LowEntryExtendedStandardLibrary.LowEntryLong.Float_GreaterThan
//		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure)
// Parameters:
//		float                                              Value                                                      (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		bool                                               ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool ULowEntryLong::Float_GreaterThan(float Value)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function LowEntryExtendedStandardLibrary.LowEntryLong.Float_GreaterThan");

	ULowEntryLong_Float_GreaterThan_Params params {};
	params.Value = Value;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x0047A470
//		Name   -> Function LowEntryExtendedStandardLibrary.LowEntryLong.DoubleBytes_LessThan
//		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure)
// Parameters:
//		class ULowEntryDouble*                             Value                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		bool                                               ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool ULowEntryLong::DoubleBytes_LessThan(class ULowEntryDouble* Value)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function LowEntryExtendedStandardLibrary.LowEntryLong.DoubleBytes_LessThan");

	ULowEntryLong_DoubleBytes_LessThan_Params params {};
	params.Value = Value;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x0047A3E0
//		Name   -> Function LowEntryExtendedStandardLibrary.LowEntryLong.DoubleBytes_GreaterThan
//		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure)
// Parameters:
//		class ULowEntryDouble*                             Value                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		bool                                               ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool ULowEntryLong::DoubleBytes_GreaterThan(class ULowEntryDouble* Value)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function LowEntryExtendedStandardLibrary.LowEntryLong.DoubleBytes_GreaterThan");

	ULowEntryLong_DoubleBytes_GreaterThan_Params params {};
	params.Value = Value;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x0047A0A0
//		Name   -> Function LowEntryExtendedStandardLibrary.LowEntryLong.CreateClone
//		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure)
// Parameters:
//		class ULowEntryLong*                               ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
class ULowEntryLong* ULowEntryLong::CreateClone()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function LowEntryExtendedStandardLibrary.LowEntryLong.CreateClone");

	ULowEntryLong_CreateClone_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x0047A020
//		Name   -> Function LowEntryExtendedStandardLibrary.LowEntryLong.CastToString
//		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure)
// Parameters:
//		struct FString                                     ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
struct FString ULowEntryLong::CastToString()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function LowEntryExtendedStandardLibrary.LowEntryLong.CastToString");

	ULowEntryLong_CastToString_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00479FF0
//		Name   -> Function LowEntryExtendedStandardLibrary.LowEntryLong.CastToDoubleBytes
//		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure)
// Parameters:
//		class ULowEntryDouble*                             ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
class ULowEntryDouble* ULowEntryLong::CastToDoubleBytes()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function LowEntryExtendedStandardLibrary.LowEntryLong.CastToDoubleBytes");

	ULowEntryLong_CastToDoubleBytes_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x0047AFA0
//		Name   -> Function LowEntryExtendedStandardLibrary.LowEntryParsedHashcash.ToString
//		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure)
// Parameters:
//		struct FString                                     ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
struct FString ULowEntryParsedHashcash::ToString()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function LowEntryExtendedStandardLibrary.LowEntryParsedHashcash.ToString");

	ULowEntryParsedHashcash_ToString_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x0047A690
//		Name   -> Function LowEntryExtendedStandardLibrary.LowEntryParsedHashcash.GetResource
//		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure)
// Parameters:
//		struct FString                                     ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
struct FString ULowEntryParsedHashcash::GetResource()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function LowEntryExtendedStandardLibrary.LowEntryParsedHashcash.GetResource");

	ULowEntryParsedHashcash_GetResource_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x0047A650
//		Name   -> Function LowEntryExtendedStandardLibrary.LowEntryParsedHashcash.GetDate
//		Flags  -> (Final, Native, Public, HasDefaults, BlueprintCallable, BlueprintPure)
// Parameters:
//		struct FDateTime                                   ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
struct FDateTime ULowEntryParsedHashcash::GetDate()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function LowEntryExtendedStandardLibrary.LowEntryParsedHashcash.GetDate");

	ULowEntryParsedHashcash_GetDate_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x0047A620
//		Name   -> Function LowEntryExtendedStandardLibrary.LowEntryParsedHashcash.GetBits
//		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure)
// Parameters:
//		int                                                ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
int ULowEntryParsedHashcash::GetBits()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function LowEntryExtendedStandardLibrary.LowEntryParsedHashcash.GetBits");

	ULowEntryParsedHashcash_GetBits_Params params {};

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
