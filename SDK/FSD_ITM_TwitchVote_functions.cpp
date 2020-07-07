// DeepRockGalactic SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "FSD_ITM_TwitchVote_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function ITM_TwitchVote.ITM_TwitchVote_C.SetVotes
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void UITM_TwitchVote_C::SetVotes()
{
	static auto fn = UObject::FindObject<UFunction>("Function ITM_TwitchVote.ITM_TwitchVote_C.SetVotes");

	UITM_TwitchVote_C_SetVotes_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ITM_TwitchVote.ITM_TwitchVote_C.SetBiomes
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void UITM_TwitchVote_C::SetBiomes()
{
	static auto fn = UObject::FindObject<UFunction>("Function ITM_TwitchVote.ITM_TwitchVote_C.SetBiomes");

	UITM_TwitchVote_C_SetBiomes_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ITM_TwitchVote.ITM_TwitchVote_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool*                          IsDesignTime                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UITM_TwitchVote_C::PreConstruct(bool* IsDesignTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function ITM_TwitchVote.ITM_TwitchVote_C.PreConstruct");

	UITM_TwitchVote_C_PreConstruct_Params params;
	params.IsDesignTime = IsDesignTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ITM_TwitchVote.ITM_TwitchVote_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UITM_TwitchVote_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function ITM_TwitchVote.ITM_TwitchVote_C.Construct");

	UITM_TwitchVote_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ITM_TwitchVote.ITM_TwitchVote_C.OnCommandCalled
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class FString*                 Command                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)

void UITM_TwitchVote_C::OnCommandCalled(class FString* Command)
{
	static auto fn = UObject::FindObject<UFunction>("Function ITM_TwitchVote.ITM_TwitchVote_C.OnCommandCalled");

	UITM_TwitchVote_C_OnCommandCalled_Params params;
	params.Command = Command;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ITM_TwitchVote.ITM_TwitchVote_C.HandleClock
// (BlueprintCallable, BlueprintEvent)

void UITM_TwitchVote_C::HandleClock()
{
	static auto fn = UObject::FindObject<UFunction>("Function ITM_TwitchVote.ITM_TwitchVote_C.HandleClock");

	UITM_TwitchVote_C_HandleClock_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ITM_TwitchVote.ITM_TwitchVote_C.ExecuteUbergraph_ITM_TwitchVote
// (Final, HasDefaults)
// Parameters:
// int*                           EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UITM_TwitchVote_C::ExecuteUbergraph_ITM_TwitchVote(int* EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function ITM_TwitchVote.ITM_TwitchVote_C.ExecuteUbergraph_ITM_TwitchVote");

	UITM_TwitchVote_C_ExecuteUbergraph_ITM_TwitchVote_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
