// DeepRockGalactic SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "FSD_BP_GameState_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function BP_GameState.BP_GameState_C.GetPlayableCharacters
// (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// TArray<class UClass*>          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm)

TArray<class UClass*> ABP_GameState_C::GetPlayableCharacters()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_GameState.BP_GameState_C.GetPlayableCharacters");

	ABP_GameState_C_GetPlayableCharacters_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BP_GameState.BP_GameState_C.GetRandomIntialHero
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UClass*                  HeroClass                      (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABP_GameState_C::GetRandomIntialHero(class UClass** HeroClass)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_GameState.BP_GameState_C.GetRandomIntialHero");

	ABP_GameState_C_GetRandomIntialHero_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (HeroClass != nullptr)
		*HeroClass = params.HeroClass;
}


// Function BP_GameState.BP_GameState_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void ABP_GameState_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_GameState.BP_GameState_C.UserConstructionScript");

	ABP_GameState_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_GameState.BP_GameState_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void ABP_GameState_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_GameState.BP_GameState_C.ReceiveBeginPlay");

	ABP_GameState_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_GameState.BP_GameState_C.StartGame
// (Net, NetReliable, NetServer, BlueprintCallable, BlueprintEvent)

void ABP_GameState_C::StartGame()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_GameState.BP_GameState_C.StartGame");

	ABP_GameState_C_StartGame_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_GameState.BP_GameState_C.HandleSeamlessTravelEvent
// (Event, Protected, BlueprintEvent)

void ABP_GameState_C::HandleSeamlessTravelEvent()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_GameState.BP_GameState_C.HandleSeamlessTravelEvent");

	ABP_GameState_C_HandleSeamlessTravelEvent_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_GameState.BP_GameState_C.ReceiveTick
// (Event, Public, BlueprintEvent)
// Parameters:
// float*                         DeltaSeconds                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_GameState_C::ReceiveTick(float* DeltaSeconds)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_GameState.BP_GameState_C.ReceiveTick");

	ABP_GameState_C_ReceiveTick_Params params;
	params.DeltaSeconds = DeltaSeconds;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_GameState.BP_GameState_C.ExecuteUbergraph_BP_GameState
// (Final)
// Parameters:
// int*                           EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_GameState_C::ExecuteUbergraph_BP_GameState(int* EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_GameState.BP_GameState_C.ExecuteUbergraph_BP_GameState");

	ABP_GameState_C_ExecuteUbergraph_BP_GameState_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
