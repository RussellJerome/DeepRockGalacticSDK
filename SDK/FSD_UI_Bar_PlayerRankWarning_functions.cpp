// DeepRockGalactic SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "FSD_UI_Bar_PlayerRankWarning_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function UI_Bar_PlayerRankWarning.UI_Bar_PlayerRankWarning_C.SetRank
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// int*                           Value                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UUI_Bar_PlayerRankWarning_C::SetRank(int* Value)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_Bar_PlayerRankWarning.UI_Bar_PlayerRankWarning_C.SetRank");

	UUI_Bar_PlayerRankWarning_C_SetRank_Params params;
	params.Value = Value;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_Bar_PlayerRankWarning.UI_Bar_PlayerRankWarning_C.AnimStop
// (Public, BlueprintCallable, BlueprintEvent)

void UUI_Bar_PlayerRankWarning_C::AnimStop()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_Bar_PlayerRankWarning.UI_Bar_PlayerRankWarning_C.AnimStop");

	UUI_Bar_PlayerRankWarning_C_AnimStop_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_Bar_PlayerRankWarning.UI_Bar_PlayerRankWarning_C.AnimPlay
// (Public, BlueprintCallable, BlueprintEvent)

void UUI_Bar_PlayerRankWarning_C::AnimPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_Bar_PlayerRankWarning.UI_Bar_PlayerRankWarning_C.AnimPlay");

	UUI_Bar_PlayerRankWarning_C_AnimPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_Bar_PlayerRankWarning.UI_Bar_PlayerRankWarning_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool*                          IsDesignTime                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UUI_Bar_PlayerRankWarning_C::PreConstruct(bool* IsDesignTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_Bar_PlayerRankWarning.UI_Bar_PlayerRankWarning_C.PreConstruct");

	UUI_Bar_PlayerRankWarning_C_PreConstruct_Params params;
	params.IsDesignTime = IsDesignTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_Bar_PlayerRankWarning.UI_Bar_PlayerRankWarning_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UUI_Bar_PlayerRankWarning_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_Bar_PlayerRankWarning.UI_Bar_PlayerRankWarning_C.Construct");

	UUI_Bar_PlayerRankWarning_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_Bar_PlayerRankWarning.UI_Bar_PlayerRankWarning_C.ExecuteUbergraph_UI_Bar_PlayerRankWarning
// (Final)
// Parameters:
// int*                           EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UUI_Bar_PlayerRankWarning_C::ExecuteUbergraph_UI_Bar_PlayerRankWarning(int* EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_Bar_PlayerRankWarning.UI_Bar_PlayerRankWarning_C.ExecuteUbergraph_UI_Bar_PlayerRankWarning");

	UUI_Bar_PlayerRankWarning_C_ExecuteUbergraph_UI_Bar_PlayerRankWarning_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
