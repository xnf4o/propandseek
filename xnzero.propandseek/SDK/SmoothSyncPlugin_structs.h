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

// Enum SmoothSyncPlugin.RestState
enum class SmoothSyncPlugin_ERestState : uint8_t
{
	RestState__AT_REST             = 0,
	RestState__JUST_STARTED_MOVING = 1,
	RestState__MOVING              = 2,
	RestState__RestState_MAX       = 3,

};

// Enum SmoothSyncPlugin.ExtrapolationMode
enum class SmoothSyncPlugin_ExtrapolationMode : uint8_t
{
	ExtrapolationMode__UNLIMITED   = 0,
	ExtrapolationMode__LIMITED     = 1,
	ExtrapolationMode__NONE        = 2,
	ExtrapolationMode__ExtrapolationMode_MAX = 3,

};

// Enum SmoothSyncPlugin.SyncMode
enum class SmoothSyncPlugin_ESyncMode : uint8_t
{
	SyncMode__XYZ                  = 0,
	SyncMode__XY                   = 1,
	SyncMode__XZ                   = 2,
	SyncMode__YZ                   = 3,
	SyncMode__X                    = 4,
	SyncMode__Y                    = 5,
	SyncMode__Z                    = 6,
	SyncMode__NONE                 = 7,
	SyncMode__SyncMode_MAX         = 8,

};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
