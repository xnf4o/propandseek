﻿#pragma once

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

// BlueprintGeneratedClass FirebaseBPI.FirebaseBPI_C
// 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
class UFirebaseBPI_C : public UInterface
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("BlueprintGeneratedClass FirebaseBPI.FirebaseBPI_C");
		return ptr;
	}



	void OnProcessReady();
	void OnGetAllGames();
	void OnGetAllLobbies();
	void OnAuthFinished();
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
