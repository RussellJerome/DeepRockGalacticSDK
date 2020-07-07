// DeepRockGalactic SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "FSD_ITM_WarningAndMutator_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function ITM_WarningAndMutator.ITM_WarningAndMutator_C.SetMutatorInfo
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UMissionMutator**        Mutator                        (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UITM_WarningAndMutator_C::SetMutatorInfo(class UMissionMutator** Mutator)
{
	static auto fn = UObject::FindObject<UFunction>("Function ITM_WarningAndMutator.ITM_WarningAndMutator_C.SetMutatorInfo");

	UITM_WarningAndMutator_C_SetMutatorInfo_Params params;
	params.Mutator = Mutator;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ITM_WarningAndMutator.ITM_WarningAndMutator_C.SetWarningInfo
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UMissionWarning**        Warning                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UITM_WarningAndMutator_C::SetWarningInfo(class UMissionWarning** Warning)
{
	static auto fn = UObject::FindObject<UFunction>("Function ITM_WarningAndMutator.ITM_WarningAndMutator_C.SetWarningInfo");

	UITM_WarningAndMutator_C_SetWarningInfo_Params params;
	params.Warning = Warning;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ITM_WarningAndMutator.ITM_WarningAndMutator_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool*                          IsDesignTime                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UITM_WarningAndMutator_C::PreConstruct(bool* IsDesignTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function ITM_WarningAndMutator.ITM_WarningAndMutator_C.PreConstruct");

	UITM_WarningAndMutator_C_PreConstruct_Params params;
	params.IsDesignTime = IsDesignTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ITM_WarningAndMutator.ITM_WarningAndMutator_C.Update
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UGeneratedMission**      mission                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UITM_WarningAndMutator_C::Update(class UGeneratedMission** mission)
{
	static auto fn = UObject::FindObject<UFunction>("Function ITM_WarningAndMutator.ITM_WarningAndMutator_C.Update");

	UITM_WarningAndMutator_C_Update_Params params;
	params.mission = mission;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ITM_WarningAndMutator.ITM_WarningAndMutator_C.BndEvt__Button_Warning_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)

void UITM_WarningAndMutator_C::BndEvt__Button_Warning_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function ITM_WarningAndMutator.ITM_WarningAndMutator_C.BndEvt__Button_Warning_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature");

	UITM_WarningAndMutator_C_BndEvt__Button_Warning_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ITM_WarningAndMutator.ITM_WarningAndMutator_C.BndEvt__Button_Mutator_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)

void UITM_WarningAndMutator_C::BndEvt__Button_Mutator_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function ITM_WarningAndMutator.ITM_WarningAndMutator_C.BndEvt__Button_Mutator_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature");

	UITM_WarningAndMutator_C_BndEvt__Button_Mutator_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ITM_WarningAndMutator.ITM_WarningAndMutator_C.ExecuteUbergraph_ITM_WarningAndMutator
// (Final, HasDefaults)
// Parameters:
// int*                           EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UITM_WarningAndMutator_C::ExecuteUbergraph_ITM_WarningAndMutator(int* EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function ITM_WarningAndMutator.ITM_WarningAndMutator_C.ExecuteUbergraph_ITM_WarningAndMutator");

	UITM_WarningAndMutator_C_ExecuteUbergraph_ITM_WarningAndMutator_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ITM_WarningAndMutator.ITM_WarningAndMutator_C.MutatorClicked__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)

void UITM_WarningAndMutator_C::MutatorClicked__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function ITM_WarningAndMutator.ITM_WarningAndMutator_C.MutatorClicked__DelegateSignature");

	UITM_WarningAndMutator_C_MutatorClicked__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ITM_WarningAndMutator.ITM_WarningAndMutator_C.WarningClicked__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)

void UITM_WarningAndMutator_C::WarningClicked__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function ITM_WarningAndMutator.ITM_WarningAndMutator_C.WarningClicked__DelegateSignature");

	UITM_WarningAndMutator_C_WarningClicked__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
