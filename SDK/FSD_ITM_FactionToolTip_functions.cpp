// DeepRockGalactic SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "FSD_ITM_FactionToolTip_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function ITM_FactionToolTip.ITM_FactionToolTip_C.Initialize
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int*                           New_Fee                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UCommunityGoalFaction**  Faction                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UITM_FactionToolTip_C::Initialize(int* New_Fee, class UCommunityGoalFaction** Faction)
{
	static auto fn = UObject::FindObject<UFunction>("Function ITM_FactionToolTip.ITM_FactionToolTip_C.Initialize");

	UITM_FactionToolTip_C_Initialize_Params params;
	params.New_Fee = New_Fee;
	params.Faction = Faction;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ITM_FactionToolTip.ITM_FactionToolTip_C.SetFaction
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UCommunityGoalFaction**  Faction                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UITM_FactionToolTip_C::SetFaction(class UCommunityGoalFaction** Faction)
{
	static auto fn = UObject::FindObject<UFunction>("Function ITM_FactionToolTip.ITM_FactionToolTip_C.SetFaction");

	UITM_FactionToolTip_C_SetFaction_Params params;
	params.Faction = Faction;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ITM_FactionToolTip.ITM_FactionToolTip_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool*                          IsDesignTime                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UITM_FactionToolTip_C::PreConstruct(bool* IsDesignTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function ITM_FactionToolTip.ITM_FactionToolTip_C.PreConstruct");

	UITM_FactionToolTip_C_PreConstruct_Params params;
	params.IsDesignTime = IsDesignTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ITM_FactionToolTip.ITM_FactionToolTip_C.ExecuteUbergraph_ITM_FactionToolTip
// (Final)
// Parameters:
// int*                           EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UITM_FactionToolTip_C::ExecuteUbergraph_ITM_FactionToolTip(int* EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function ITM_FactionToolTip.ITM_FactionToolTip_C.ExecuteUbergraph_ITM_FactionToolTip");

	UITM_FactionToolTip_C_ExecuteUbergraph_ITM_FactionToolTip_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ITM_FactionToolTip.ITM_FactionToolTip_C.FactionSelected__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)

void UITM_FactionToolTip_C::FactionSelected__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function ITM_FactionToolTip.ITM_FactionToolTip_C.FactionSelected__DelegateSignature");

	UITM_FactionToolTip_C_FactionSelected__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
