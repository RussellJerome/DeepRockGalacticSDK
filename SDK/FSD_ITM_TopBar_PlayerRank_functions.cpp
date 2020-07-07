// DeepRockGalactic SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "FSD_ITM_TopBar_PlayerRank_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function ITM_TopBar_PlayerRank.ITM_TopBar_PlayerRank_C.FromPlayerState
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class APlayerState**           PlayerState                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UITM_TopBar_PlayerRank_C::FromPlayerState(class APlayerState** PlayerState)
{
	static auto fn = UObject::FindObject<UFunction>("Function ITM_TopBar_PlayerRank.ITM_TopBar_PlayerRank_C.FromPlayerState");

	UITM_TopBar_PlayerRank_C_FromPlayerState_Params params;
	params.PlayerState = PlayerState;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ITM_TopBar_PlayerRank.ITM_TopBar_PlayerRank_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UITM_TopBar_PlayerRank_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function ITM_TopBar_PlayerRank.ITM_TopBar_PlayerRank_C.Construct");

	UITM_TopBar_PlayerRank_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ITM_TopBar_PlayerRank.ITM_TopBar_PlayerRank_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool*                          IsDesignTime                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UITM_TopBar_PlayerRank_C::PreConstruct(bool* IsDesignTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function ITM_TopBar_PlayerRank.ITM_TopBar_PlayerRank_C.PreConstruct");

	UITM_TopBar_PlayerRank_C_PreConstruct_Params params;
	params.IsDesignTime = IsDesignTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ITM_TopBar_PlayerRank.ITM_TopBar_PlayerRank_C.SetRankAndStars
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int*                           Rank                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int*                           Stars                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UITM_TopBar_PlayerRank_C::SetRankAndStars(int* Rank, int* Stars)
{
	static auto fn = UObject::FindObject<UFunction>("Function ITM_TopBar_PlayerRank.ITM_TopBar_PlayerRank_C.SetRankAndStars");

	UITM_TopBar_PlayerRank_C_SetRankAndStars_Params params;
	params.Rank = Rank;
	params.Stars = Stars;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ITM_TopBar_PlayerRank.ITM_TopBar_PlayerRank_C.OnPlayerProgressChanged
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class AFSDPlayerState**        PlayerState                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FPlayerProgress*        Progress                       (BlueprintVisible, BlueprintReadOnly, Parm)

void UITM_TopBar_PlayerRank_C::OnPlayerProgressChanged(class AFSDPlayerState** PlayerState, struct FPlayerProgress* Progress)
{
	static auto fn = UObject::FindObject<UFunction>("Function ITM_TopBar_PlayerRank.ITM_TopBar_PlayerRank_C.OnPlayerProgressChanged");

	UITM_TopBar_PlayerRank_C_OnPlayerProgressChanged_Params params;
	params.PlayerState = PlayerState;
	params.Progress = Progress;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ITM_TopBar_PlayerRank.ITM_TopBar_PlayerRank_C.ExecuteUbergraph_ITM_TopBar_PlayerRank
// (Final, HasDefaults)
// Parameters:
// int*                           EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UITM_TopBar_PlayerRank_C::ExecuteUbergraph_ITM_TopBar_PlayerRank(int* EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function ITM_TopBar_PlayerRank.ITM_TopBar_PlayerRank_C.ExecuteUbergraph_ITM_TopBar_PlayerRank");

	UITM_TopBar_PlayerRank_C_ExecuteUbergraph_ITM_TopBar_PlayerRank_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
