#pragma once

// DeepRockGalactic SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "FSD_LIB_Game_SpaceRig_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function LIB_Game_SpaceRig.LIB_Game_SpaceRig_C.RefreshSpacerigUpgradePreview
struct ULIB_Game_SpaceRig_C_RefreshSpacerigUpgradePreview_Params
{
	class APlayerController**                          PlayerController;                                         // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UObject**                                    __WorldContext;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function LIB_Game_SpaceRig.LIB_Game_SpaceRig_C.GetSpaceRigUpgradePreview
struct ULIB_Game_SpaceRig_C_GetSpaceRigUpgradePreview_Params
{
	class APlayerController**                          PlayerController;                                         // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UObject**                                    __WorldContext;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UItemUpgrade*                                PreviewUpgrade;                                           // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function LIB_Game_SpaceRig.LIB_Game_SpaceRig_C.SetSpaceRigUpgradePreview
struct ULIB_Game_SpaceRig_C_SetSpaceRigUpgradePreview_Params
{
	class APlayerController**                          PlayerController;                                         // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UItemUpgrade**                               ItemUpgrade;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UObject**                                    __WorldContext;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function LIB_Game_SpaceRig.LIB_Game_SpaceRig_C.GetSRGameMode
struct ULIB_Game_SpaceRig_C_GetSRGameMode_Params
{
	class UObject**                                    __WorldContext;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class ABP_SpaceRig_Gamemode_C*                     AsBP_Space_Rig_Gamemode;                                  // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function LIB_Game_SpaceRig.LIB_Game_SpaceRig_C.GetSRGameState
struct ULIB_Game_SpaceRig_C_GetSRGameState_Params
{
	class UObject**                                    __WorldContext;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class ABP_GameState_SpaceRig_C*                    GameState;                                                // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function LIB_Game_SpaceRig.LIB_Game_SpaceRig_C.GetSRController
struct ULIB_Game_SpaceRig_C_GetSRController_Params
{
	class UObject**                                    __WorldContext;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class ABP_PlayerController_SpaceRig_C*             SRController;                                             // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
