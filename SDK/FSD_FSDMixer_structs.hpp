#pragma once

// DeepRockGalactic SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "FSD_Basic.hpp"
#include "FSD_CoreUObject_classes.hpp"
#include "FSD_Engine_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Enums
//---------------------------------------------------------------------------

// Enum FSDMixer.EFSDMixerLoginState
enum class EFSDMixerLoginState : uint8_t
{
	Not_Logged_In                  = 0,
	Logging_In                     = 1,
	Logged_In                      = 2,
	Logging_Out                    = 3,
	EFSDMixerLoginState_MAX        = 4
};


// Enum FSDMixer.EFSDMixerModuleState
enum class EFSDMixerModuleState : uint8_t
{
	Uninitialized                  = 0,
	Initializing                   = 1,
	Initialized                    = 2,
	EFSDMixerModuleState_MAX       = 3
};


// Enum FSDMixer.EFSDMixerRefreshState
enum class EFSDMixerRefreshState : uint8_t
{
	ReadyToRefresh                 = 0,
	Refreshing                     = 1,
	ReadyToJoin                    = 2,
	EFSDMixerRefreshState_MAX      = 3
};


// Enum FSDMixer.EFSDMixerInteractivityState
enum class EFSDMixerInteractivityState : uint8_t
{
	Not_Interactive                = 0,
	Interactivity_Starting         = 1,
	Interactive                    = 2,
	Interactivity_Stopping         = 3,
	EFSDMixerInteractivityState_MAX = 4
};



//---------------------------------------------------------------------------
//Script Structs
//---------------------------------------------------------------------------

// ScriptStruct FSDMixer.MixerParticipant
// 0x0020
struct FMixerParticipant
{
	class FString                                      ParticipantID;                                            // 0x0000(0x0010) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor)
	class FString                                      ParticipantName;                                          // 0x0010(0x0010) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor)
};

// ScriptStruct FSDMixer.MixerButtonInput
// 0x0048
struct FMixerButtonInput
{
	unsigned char                                      UnknownData00[0x8];                                       // 0x0000(0x0008) MISSED OFFSET
	class FString                                      TransactionID;                                            // 0x0008(0x0010) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor)
	class FString                                      ControlID;                                                // 0x0018(0x0010) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor)
	struct FMixerParticipant                           Participant;                                              // 0x0028(0x0020) (BlueprintVisible, BlueprintReadOnly)
};

// ScriptStruct FSDMixer.FSDMixerButtonEventBinding
// 0x0018
struct FFSDMixerButtonEventBinding
{
	struct FName                                       TargetFunctionName;                                       // 0x0000(0x0008) (ZeroConstructor, IsPlainOldData)
	struct FName                                       ButtonId;                                                 // 0x0008(0x0008) (ZeroConstructor, IsPlainOldData)
	struct FName                                       MixerButtonEventID;                                       // 0x0010(0x0008) (ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
