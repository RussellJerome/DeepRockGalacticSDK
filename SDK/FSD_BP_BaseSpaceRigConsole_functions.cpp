// DeepRockGalactic SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "FSD_BP_BaseSpaceRigConsole_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function BP_BaseSpaceRigConsole.BP_BaseSpaceRigConsole_C.ShowNotification
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool*                          IsVisible                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_BaseSpaceRigConsole_C::ShowNotification(bool* IsVisible)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BaseSpaceRigConsole.BP_BaseSpaceRigConsole_C.ShowNotification");

	ABP_BaseSpaceRigConsole_C_ShowNotification_Params params;
	params.IsVisible = IsVisible;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_BaseSpaceRigConsole.BP_BaseSpaceRigConsole_C.SetCreateMenuOnStartUp
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool*                          InCreateOnStartUp              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_BaseSpaceRigConsole_C::SetCreateMenuOnStartUp(bool* InCreateOnStartUp)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BaseSpaceRigConsole.BP_BaseSpaceRigConsole_C.SetCreateMenuOnStartUp");

	ABP_BaseSpaceRigConsole_C_SetCreateMenuOnStartUp_Params params;
	params.InCreateOnStartUp = InCreateOnStartUp;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_BaseSpaceRigConsole.BP_BaseSpaceRigConsole_C.IsNewPlayer
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class ABP_PlayerController_SpaceRig_C** PlayerController               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           IsNewPlayer                    (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABP_BaseSpaceRigConsole_C::IsNewPlayer(class ABP_PlayerController_SpaceRig_C** PlayerController, bool* IsNewPlayer)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BaseSpaceRigConsole.BP_BaseSpaceRigConsole_C.IsNewPlayer");

	ABP_BaseSpaceRigConsole_C_IsNewPlayer_Params params;
	params.PlayerController = PlayerController;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (IsNewPlayer != nullptr)
		*IsNewPlayer = params.IsNewPlayer;
}


// Function BP_BaseSpaceRigConsole.BP_BaseSpaceRigConsole_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void ABP_BaseSpaceRigConsole_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BaseSpaceRigConsole.BP_BaseSpaceRigConsole_C.UserConstructionScript");

	ABP_BaseSpaceRigConsole_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_BaseSpaceRigConsole.BP_BaseSpaceRigConsole_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void ABP_BaseSpaceRigConsole_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BaseSpaceRigConsole.BP_BaseSpaceRigConsole_C.ReceiveBeginPlay");

	ABP_BaseSpaceRigConsole_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_BaseSpaceRigConsole.BP_BaseSpaceRigConsole_C.BndEvt__InstantUsable_K2Node_ComponentBoundEvent_0_UsedBySignature__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class APlayerCharacter**       user                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_BaseSpaceRigConsole_C::BndEvt__InstantUsable_K2Node_ComponentBoundEvent_0_UsedBySignature__DelegateSignature(class APlayerCharacter** user)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BaseSpaceRigConsole.BP_BaseSpaceRigConsole_C.BndEvt__InstantUsable_K2Node_ComponentBoundEvent_0_UsedBySignature__DelegateSignature");

	ABP_BaseSpaceRigConsole_C_BndEvt__InstantUsable_K2Node_ComponentBoundEvent_0_UsedBySignature__DelegateSignature_Params params;
	params.user = user;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_BaseSpaceRigConsole.BP_BaseSpaceRigConsole_C.OnOpenConsole
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class ABP_PlayerController_SpaceRig_C** InPlayerController             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_BaseSpaceRigConsole_C::OnOpenConsole(class ABP_PlayerController_SpaceRig_C** InPlayerController)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BaseSpaceRigConsole.BP_BaseSpaceRigConsole_C.OnOpenConsole");

	ABP_BaseSpaceRigConsole_C_OnOpenConsole_Params params;
	params.InPlayerController = InPlayerController;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_BaseSpaceRigConsole.BP_BaseSpaceRigConsole_C.OnWindowCreated
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UWindowWidget**          WindowWidget                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void ABP_BaseSpaceRigConsole_C::OnWindowCreated(class UWindowWidget** WindowWidget)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BaseSpaceRigConsole.BP_BaseSpaceRigConsole_C.OnWindowCreated");

	ABP_BaseSpaceRigConsole_C_OnWindowCreated_Params params;
	params.WindowWidget = WindowWidget;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_BaseSpaceRigConsole.BP_BaseSpaceRigConsole_C.ExecuteUbergraph_BP_BaseSpaceRigConsole
// (Final)
// Parameters:
// int*                           EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_BaseSpaceRigConsole_C::ExecuteUbergraph_BP_BaseSpaceRigConsole(int* EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BaseSpaceRigConsole.BP_BaseSpaceRigConsole_C.ExecuteUbergraph_BP_BaseSpaceRigConsole");

	ABP_BaseSpaceRigConsole_C_ExecuteUbergraph_BP_BaseSpaceRigConsole_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
