#pragma once

// DeepRockGalactic SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "FSD_LIB_Game_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function LIB_Game.LIB_Game_C.IsFlaggedVisible
struct ULIB_Game_C_IsFlaggedVisible_Params
{
	class UWidget**                                    InWidget;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UObject**                                    __WorldContext;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               IsFlaggedVisible;                                         // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function LIB_Game.LIB_Game_C.SetSoftTextureAndTint
struct ULIB_Game_C_SetSoftTextureAndTint_Params
{
	class UImage**                                     Target;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	TSoftObjectPtr<class UTexture2D>*                  Texture;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm)
	bool*                                              bMatchSize;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FLinearColor*                               Tint;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UObject**                                    __WorldContext;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function LIB_Game.LIB_Game_C.SetTextureAndTint
struct ULIB_Game_C_SetTextureAndTint_Params
{
	class UImage**                                     Target;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UTexture2D**                                 Texture;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool*                                              bMatchSize;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FLinearColor*                               Tint;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UObject**                                    __WorldContext;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function LIB_Game.LIB_Game_C.UpdateBool
struct ULIB_Game_C_UpdateBool_Params
{
	bool                                               Variable;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
	bool*                                              InValue;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UObject**                                    __WorldContext;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ValueChanged;                                             // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	bool                                               OutValue;                                                 // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function LIB_Game.LIB_Game_C.SetVisibilityIf
struct ULIB_Game_C_SetVisibilityIf_Params
{
	class UWidget**                                    Widget;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	ESlateVisibility*                                  Visibility;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool*                                              Condition;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UObject**                                    __WorldContext;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               IsVisible;                                                // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function LIB_Game.LIB_Game_C.LoadMission
struct ULIB_Game_C_LoadMission_Params
{
	struct FSoftObjectPath*                            NewParam;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
	class UObject**                                    __WorldContext;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function LIB_Game.LIB_Game_C.SelectVisibility
struct ULIB_Game_C_SelectVisibility_Params
{
	class UWidget**                                    Widget;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	ESlateVisibility*                                  FALSE;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	ESlateVisibility*                                  TRUE;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool*                                              Index;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UObject**                                    __WorldContext;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               IsVisible;                                                // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	bool                                               VisibilityChanged;                                        // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	ESlateVisibility                                   New_Visibility;                                           // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function LIB_Game.LIB_Game_C.IsOnSpaceRig
struct ULIB_Game_C_IsOnSpaceRig_Params
{
	class UObject**                                    __WorldContext;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               OnSpaceRig;                                               // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function LIB_Game.LIB_Game_C.GetPLSBase
struct ULIB_Game_C_GetPLSBase_Params
{
	class UObject**                                    __WorldContext;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class APLS_Base_C*                                 AsPLS_Base;                                               // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function LIB_Game.LIB_Game_C.IsKickReason
struct ULIB_Game_C_IsKickReason_Params
{
	EDisconnectReason*                                 DisconnectReason;                                         // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UObject**                                    __WorldContext;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               Kicked;                                                   // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function LIB_Game.LIB_Game_C.GetBPGameState
struct ULIB_Game_C_GetBPGameState_Params
{
	class UObject**                                    __WorldContext;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class ABP_GameState_C*                             AsBP_Game_State;                                          // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function LIB_Game.LIB_Game_C.GetBPGameInstance
struct ULIB_Game_C_GetBPGameInstance_Params
{
	class UObject**                                    __WorldContext;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UBP_GameInstance_C*                          AsBP_Game_Instance;                                       // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
