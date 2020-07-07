// DeepRockGalactic SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "FSD_BP_DiscordConsole_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function BP_DiscordConsole.BP_DiscordConsole_C.ValidGetPlayer
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class ABP_PlayerController_SpaceRig_C* Player                         (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABP_DiscordConsole_C::ValidGetPlayer(class ABP_PlayerController_SpaceRig_C** Player)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_DiscordConsole.BP_DiscordConsole_C.ValidGetPlayer");

	ABP_DiscordConsole_C_ValidGetPlayer_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Player != nullptr)
		*Player = params.Player;
}


// Function BP_DiscordConsole.BP_DiscordConsole_C.SetUsable
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool*                          Usable                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_DiscordConsole_C::SetUsable(bool* Usable)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_DiscordConsole.BP_DiscordConsole_C.SetUsable");

	ABP_DiscordConsole_C_SetUsable_Params params;
	params.Usable = Usable;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_DiscordConsole.BP_DiscordConsole_C.Answer
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool*                          Yes                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_DiscordConsole_C::Answer(bool* Yes)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_DiscordConsole.BP_DiscordConsole_C.Answer");

	ABP_DiscordConsole_C_Answer_Params params;
	params.Yes = Yes;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_DiscordConsole.BP_DiscordConsole_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void ABP_DiscordConsole_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_DiscordConsole.BP_DiscordConsole_C.ReceiveBeginPlay");

	ABP_DiscordConsole_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_DiscordConsole.BP_DiscordConsole_C.ReceiveTick
// (Event, Public, BlueprintEvent)
// Parameters:
// float*                         DeltaSeconds                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_DiscordConsole_C::ReceiveTick(float* DeltaSeconds)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_DiscordConsole.BP_DiscordConsole_C.ReceiveTick");

	ABP_DiscordConsole_C_ReceiveTick_Params params;
	params.DeltaSeconds = DeltaSeconds;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_DiscordConsole.BP_DiscordConsole_C.UserIn
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool*                          isInServer                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_DiscordConsole_C::UserIn(bool* isInServer)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_DiscordConsole.BP_DiscordConsole_C.UserIn");

	ABP_DiscordConsole_C_UserIn_Params params;
	params.isInServer = isInServer;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_DiscordConsole.BP_DiscordConsole_C.BndEvt__ProxmityTrigger_K2Node_ComponentBoundEvent_1_ComponentBeginOverlapSignature__DelegateSignature
// (HasOutParms, BlueprintEvent)
// Parameters:
// class UPrimitiveComponent**    OverlappedComponent            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// class AActor**                 OtherActor                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UPrimitiveComponent**    OtherComp                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// int*                           OtherBodyIndex                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool*                          bFromSweep                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FHitResult*             SweepResult                    (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData)

void ABP_DiscordConsole_C::BndEvt__ProxmityTrigger_K2Node_ComponentBoundEvent_1_ComponentBeginOverlapSignature__DelegateSignature(class UPrimitiveComponent** OverlappedComponent, class AActor** OtherActor, class UPrimitiveComponent** OtherComp, int* OtherBodyIndex, bool* bFromSweep, struct FHitResult* SweepResult)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_DiscordConsole.BP_DiscordConsole_C.BndEvt__ProxmityTrigger_K2Node_ComponentBoundEvent_1_ComponentBeginOverlapSignature__DelegateSignature");

	ABP_DiscordConsole_C_BndEvt__ProxmityTrigger_K2Node_ComponentBoundEvent_1_ComponentBeginOverlapSignature__DelegateSignature_Params params;
	params.OverlappedComponent = OverlappedComponent;
	params.OtherActor = OtherActor;
	params.OtherComp = OtherComp;
	params.OtherBodyIndex = OtherBodyIndex;
	params.bFromSweep = bFromSweep;
	params.SweepResult = SweepResult;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_DiscordConsole.BP_DiscordConsole_C.BndEvt__ProxmityTrigger_K2Node_ComponentBoundEvent_2_ComponentEndOverlapSignature__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UPrimitiveComponent**    OverlappedComponent            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// class AActor**                 OtherActor                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UPrimitiveComponent**    OtherComp                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// int*                           OtherBodyIndex                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_DiscordConsole_C::BndEvt__ProxmityTrigger_K2Node_ComponentBoundEvent_2_ComponentEndOverlapSignature__DelegateSignature(class UPrimitiveComponent** OverlappedComponent, class AActor** OtherActor, class UPrimitiveComponent** OtherComp, int* OtherBodyIndex)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_DiscordConsole.BP_DiscordConsole_C.BndEvt__ProxmityTrigger_K2Node_ComponentBoundEvent_2_ComponentEndOverlapSignature__DelegateSignature");

	ABP_DiscordConsole_C_BndEvt__ProxmityTrigger_K2Node_ComponentBoundEvent_2_ComponentEndOverlapSignature__DelegateSignature_Params params;
	params.OverlappedComponent = OverlappedComponent;
	params.OtherActor = OtherActor;
	params.OtherComp = OtherComp;
	params.OtherBodyIndex = OtherBodyIndex;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_DiscordConsole.BP_DiscordConsole_C.RefreshUsable
// (BlueprintCallable, BlueprintEvent)

void ABP_DiscordConsole_C::RefreshUsable()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_DiscordConsole.BP_DiscordConsole_C.RefreshUsable");

	ABP_DiscordConsole_C_RefreshUsable_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_DiscordConsole.BP_DiscordConsole_C.OnUsedClient
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class ABP_PlayerControllerBase_C** user                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_DiscordConsole_C::OnUsedClient(class ABP_PlayerControllerBase_C** user)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_DiscordConsole.BP_DiscordConsole_C.OnUsedClient");

	ABP_DiscordConsole_C_OnUsedClient_Params params;
	params.user = user;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_DiscordConsole.BP_DiscordConsole_C.callRefreshUsable
// (BlueprintCallable, BlueprintEvent)

void ABP_DiscordConsole_C::callRefreshUsable()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_DiscordConsole.BP_DiscordConsole_C.callRefreshUsable");

	ABP_DiscordConsole_C_callRefreshUsable_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_DiscordConsole.BP_DiscordConsole_C.BndEvt__BP_DiscordInstantUsable_K2Node_ComponentBoundEvent_3_UsedBySignature__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class APlayerCharacter**       user                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_DiscordConsole_C::BndEvt__BP_DiscordInstantUsable_K2Node_ComponentBoundEvent_3_UsedBySignature__DelegateSignature(class APlayerCharacter** user)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_DiscordConsole.BP_DiscordConsole_C.BndEvt__BP_DiscordInstantUsable_K2Node_ComponentBoundEvent_3_UsedBySignature__DelegateSignature");

	ABP_DiscordConsole_C_BndEvt__BP_DiscordInstantUsable_K2Node_ComponentBoundEvent_3_UsedBySignature__DelegateSignature_Params params;
	params.user = user;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_DiscordConsole.BP_DiscordConsole_C.ExecuteUbergraph_BP_DiscordConsole
// (Final, HasDefaults)
// Parameters:
// int*                           EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_DiscordConsole_C::ExecuteUbergraph_BP_DiscordConsole(int* EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_DiscordConsole.BP_DiscordConsole_C.ExecuteUbergraph_BP_DiscordConsole");

	ABP_DiscordConsole_C_ExecuteUbergraph_BP_DiscordConsole_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
