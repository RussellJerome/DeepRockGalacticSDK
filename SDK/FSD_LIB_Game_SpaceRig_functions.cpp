// DeepRockGalactic SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "FSD_LIB_Game_SpaceRig_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function LIB_Game_SpaceRig.LIB_Game_SpaceRig_C.RefreshSpacerigUpgradePreview
// (Static, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class APlayerController**      PlayerController               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UObject**                __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ULIB_Game_SpaceRig_C::STATIC_RefreshSpacerigUpgradePreview(class APlayerController** PlayerController, class UObject** __WorldContext)
{
	static auto fn = UObject::FindObject<UFunction>("Function LIB_Game_SpaceRig.LIB_Game_SpaceRig_C.RefreshSpacerigUpgradePreview");

	ULIB_Game_SpaceRig_C_RefreshSpacerigUpgradePreview_Params params;
	params.PlayerController = PlayerController;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function LIB_Game_SpaceRig.LIB_Game_SpaceRig_C.GetSpaceRigUpgradePreview
// (Static, Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class APlayerController**      PlayerController               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UObject**                __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UItemUpgrade*            PreviewUpgrade                 (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ULIB_Game_SpaceRig_C::STATIC_GetSpaceRigUpgradePreview(class APlayerController** PlayerController, class UObject** __WorldContext, class UItemUpgrade** PreviewUpgrade)
{
	static auto fn = UObject::FindObject<UFunction>("Function LIB_Game_SpaceRig.LIB_Game_SpaceRig_C.GetSpaceRigUpgradePreview");

	ULIB_Game_SpaceRig_C_GetSpaceRigUpgradePreview_Params params;
	params.PlayerController = PlayerController;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (PreviewUpgrade != nullptr)
		*PreviewUpgrade = params.PreviewUpgrade;
}


// Function LIB_Game_SpaceRig.LIB_Game_SpaceRig_C.SetSpaceRigUpgradePreview
// (Static, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class APlayerController**      PlayerController               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UItemUpgrade**           ItemUpgrade                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UObject**                __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ULIB_Game_SpaceRig_C::STATIC_SetSpaceRigUpgradePreview(class APlayerController** PlayerController, class UItemUpgrade** ItemUpgrade, class UObject** __WorldContext)
{
	static auto fn = UObject::FindObject<UFunction>("Function LIB_Game_SpaceRig.LIB_Game_SpaceRig_C.SetSpaceRigUpgradePreview");

	ULIB_Game_SpaceRig_C_SetSpaceRigUpgradePreview_Params params;
	params.PlayerController = PlayerController;
	params.ItemUpgrade = ItemUpgrade;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function LIB_Game_SpaceRig.LIB_Game_SpaceRig_C.GetSRGameMode
// (Static, Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class UObject**                __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class ABP_SpaceRig_Gamemode_C* AsBP_Space_Rig_Gamemode        (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ULIB_Game_SpaceRig_C::STATIC_GetSRGameMode(class UObject** __WorldContext, class ABP_SpaceRig_Gamemode_C** AsBP_Space_Rig_Gamemode)
{
	static auto fn = UObject::FindObject<UFunction>("Function LIB_Game_SpaceRig.LIB_Game_SpaceRig_C.GetSRGameMode");

	ULIB_Game_SpaceRig_C_GetSRGameMode_Params params;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (AsBP_Space_Rig_Gamemode != nullptr)
		*AsBP_Space_Rig_Gamemode = params.AsBP_Space_Rig_Gamemode;
}


// Function LIB_Game_SpaceRig.LIB_Game_SpaceRig_C.GetSRGameState
// (Static, Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class UObject**                __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class ABP_GameState_SpaceRig_C* GameState                      (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ULIB_Game_SpaceRig_C::STATIC_GetSRGameState(class UObject** __WorldContext, class ABP_GameState_SpaceRig_C** GameState)
{
	static auto fn = UObject::FindObject<UFunction>("Function LIB_Game_SpaceRig.LIB_Game_SpaceRig_C.GetSRGameState");

	ULIB_Game_SpaceRig_C_GetSRGameState_Params params;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (GameState != nullptr)
		*GameState = params.GameState;
}


// Function LIB_Game_SpaceRig.LIB_Game_SpaceRig_C.GetSRController
// (Static, Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class UObject**                __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class ABP_PlayerController_SpaceRig_C* SRController                   (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ULIB_Game_SpaceRig_C::STATIC_GetSRController(class UObject** __WorldContext, class ABP_PlayerController_SpaceRig_C** SRController)
{
	static auto fn = UObject::FindObject<UFunction>("Function LIB_Game_SpaceRig.LIB_Game_SpaceRig_C.GetSRController");

	ULIB_Game_SpaceRig_C_GetSRController_Params params;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (SRController != nullptr)
		*SRController = params.SRController;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
