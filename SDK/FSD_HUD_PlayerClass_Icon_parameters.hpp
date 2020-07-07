#pragma once

// DeepRockGalactic SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "FSD_HUD_PlayerClass_Icon_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function HUD_PlayerClass_Icon.HUD_PlayerClass_Icon_C.SetBuf
struct UHUD_PlayerClass_Icon_C_SetBuf_Params
{
	class UTemporaryBuff**                             Buf;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function HUD_PlayerClass_Icon.HUD_PlayerClass_Icon_C.SetIsServer
struct UHUD_PlayerClass_Icon_C_SetIsServer_Params
{
	bool*                                              IsServer;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function HUD_PlayerClass_Icon.HUD_PlayerClass_Icon_C.SetData
struct UHUD_PlayerClass_Icon_C_SetData_Params
{
	class UClass**                                     playerClass;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int*                                               TimesRetired;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool*                                              IsServer;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UTemporaryBuff**                             Buf;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function HUD_PlayerClass_Icon.HUD_PlayerClass_Icon_C.Construct
struct UHUD_PlayerClass_Icon_C_Construct_Params
{
};

// Function HUD_PlayerClass_Icon.HUD_PlayerClass_Icon_C.FromPlayerState
struct UHUD_PlayerClass_Icon_C_FromPlayerState_Params
{
	class APlayerState**                               PlayerState;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UClass**                                     playerClass;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function HUD_PlayerClass_Icon.HUD_PlayerClass_Icon_C.OnTemporaryBuffChanged
struct UHUD_PlayerClass_Icon_C_OnTemporaryBuffChanged_Params
{
	class UTemporaryBuff**                             buff;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class APlayerCharacter**                           AffectedPlayer;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function HUD_PlayerClass_Icon.HUD_PlayerClass_Icon_C.ExecuteUbergraph_HUD_PlayerClass_Icon
struct UHUD_PlayerClass_Icon_C_ExecuteUbergraph_HUD_PlayerClass_Icon_Params
{
	int*                                               EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
