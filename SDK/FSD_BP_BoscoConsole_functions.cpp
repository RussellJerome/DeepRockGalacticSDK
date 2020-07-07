// DeepRockGalactic SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "FSD_BP_BoscoConsole_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function BP_BoscoConsole.BP_BoscoConsole_C.IsNewPlayer
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class ABP_PlayerController_SpaceRig_C** PlayerController               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           IsNewPlayer                    (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABP_BoscoConsole_C::IsNewPlayer(class ABP_PlayerController_SpaceRig_C** PlayerController, bool* IsNewPlayer)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BoscoConsole.BP_BoscoConsole_C.IsNewPlayer");

	ABP_BoscoConsole_C_IsNewPlayer_Params params;
	params.PlayerController = PlayerController;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (IsNewPlayer != nullptr)
		*IsNewPlayer = params.IsNewPlayer;
}


// Function BP_BoscoConsole.BP_BoscoConsole_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void ABP_BoscoConsole_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BoscoConsole.BP_BoscoConsole_C.ReceiveBeginPlay");

	ABP_BoscoConsole_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_BoscoConsole.BP_BoscoConsole_C.BndEvt__InstantUsable_K2Node_ComponentBoundEvent_0_UsedBySignature__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class APlayerCharacter**       user                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_BoscoConsole_C::BndEvt__InstantUsable_K2Node_ComponentBoundEvent_0_UsedBySignature__DelegateSignature(class APlayerCharacter** user)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BoscoConsole.BP_BoscoConsole_C.BndEvt__InstantUsable_K2Node_ComponentBoundEvent_0_UsedBySignature__DelegateSignature");

	ABP_BoscoConsole_C_BndEvt__InstantUsable_K2Node_ComponentBoundEvent_0_UsedBySignature__DelegateSignature_Params params;
	params.user = user;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_BoscoConsole.BP_BoscoConsole_C.ExecuteUbergraph_BP_BoscoConsole
// (Final)
// Parameters:
// int*                           EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_BoscoConsole_C::ExecuteUbergraph_BP_BoscoConsole(int* EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BoscoConsole.BP_BoscoConsole_C.ExecuteUbergraph_BP_BoscoConsole");

	ABP_BoscoConsole_C_ExecuteUbergraph_BP_BoscoConsole_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
