// DeepRockGalactic SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "FSD_ITM_FactionSelect_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function ITM_FactionSelect.ITM_FactionSelect_C.Initialize
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int*                           New_Fee                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UCommunityGoalFaction**  Faction                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UITM_FactionSelect_C::Initialize(int* New_Fee, class UCommunityGoalFaction** Faction)
{
	static auto fn = UObject::FindObject<UFunction>("Function ITM_FactionSelect.ITM_FactionSelect_C.Initialize");

	UITM_FactionSelect_C_Initialize_Params params;
	params.New_Fee = New_Fee;
	params.Faction = Faction;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ITM_FactionSelect.ITM_FactionSelect_C.SetFaction
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UCommunityGoalFaction**  Faction                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UITM_FactionSelect_C::SetFaction(class UCommunityGoalFaction** Faction)
{
	static auto fn = UObject::FindObject<UFunction>("Function ITM_FactionSelect.ITM_FactionSelect_C.SetFaction");

	UITM_FactionSelect_C_SetFaction_Params params;
	params.Faction = Faction;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ITM_FactionSelect.ITM_FactionSelect_C.SetFee
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// int*                           New_Fee                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UITM_FactionSelect_C::SetFee(int* New_Fee)
{
	static auto fn = UObject::FindObject<UFunction>("Function ITM_FactionSelect.ITM_FactionSelect_C.SetFee");

	UITM_FactionSelect_C_SetFee_Params params;
	params.New_Fee = New_Fee;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ITM_FactionSelect.ITM_FactionSelect_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool*                          IsDesignTime                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UITM_FactionSelect_C::PreConstruct(bool* IsDesignTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function ITM_FactionSelect.ITM_FactionSelect_C.PreConstruct");

	UITM_FactionSelect_C_PreConstruct_Params params;
	params.IsDesignTime = IsDesignTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ITM_FactionSelect.ITM_FactionSelect_C.BndEvt__JoinButton_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature
// (BlueprintEvent)

void UITM_FactionSelect_C::BndEvt__JoinButton_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function ITM_FactionSelect.ITM_FactionSelect_C.BndEvt__JoinButton_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature");

	UITM_FactionSelect_C_BndEvt__JoinButton_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ITM_FactionSelect.ITM_FactionSelect_C.AnswerCC
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool*                          Yes                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UITM_FactionSelect_C::AnswerCC(bool* Yes)
{
	static auto fn = UObject::FindObject<UFunction>("Function ITM_FactionSelect.ITM_FactionSelect_C.AnswerCC");

	UITM_FactionSelect_C_AnswerCC_Params params;
	params.Yes = Yes;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ITM_FactionSelect.ITM_FactionSelect_C.ExecuteUbergraph_ITM_FactionSelect
// (Final, HasDefaults)
// Parameters:
// int*                           EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UITM_FactionSelect_C::ExecuteUbergraph_ITM_FactionSelect(int* EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function ITM_FactionSelect.ITM_FactionSelect_C.ExecuteUbergraph_ITM_FactionSelect");

	UITM_FactionSelect_C_ExecuteUbergraph_ITM_FactionSelect_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ITM_FactionSelect.ITM_FactionSelect_C.FactionSelected__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)

void UITM_FactionSelect_C::FactionSelected__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function ITM_FactionSelect.ITM_FactionSelect_C.FactionSelected__DelegateSignature");

	UITM_FactionSelect_C_FactionSelected__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
