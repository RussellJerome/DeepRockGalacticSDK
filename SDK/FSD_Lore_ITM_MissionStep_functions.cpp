// DeepRockGalactic SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "FSD_Lore_ITM_MissionStep_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function Lore_ITM_MissionStep.Lore_ITM_MissionStep_C.BndEvt__Button_Image_K2Node_ComponentBoundEvent_0_OnButtonHoverEvent__DelegateSignature
// (BlueprintEvent)

void ULore_ITM_MissionStep_C::BndEvt__Button_Image_K2Node_ComponentBoundEvent_0_OnButtonHoverEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function Lore_ITM_MissionStep.Lore_ITM_MissionStep_C.BndEvt__Button_Image_K2Node_ComponentBoundEvent_0_OnButtonHoverEvent__DelegateSignature");

	ULore_ITM_MissionStep_C_BndEvt__Button_Image_K2Node_ComponentBoundEvent_0_OnButtonHoverEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Lore_ITM_MissionStep.Lore_ITM_MissionStep_C.BndEvt__Button_Image_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature
// (BlueprintEvent)

void ULore_ITM_MissionStep_C::BndEvt__Button_Image_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function Lore_ITM_MissionStep.Lore_ITM_MissionStep_C.BndEvt__Button_Image_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature");

	ULore_ITM_MissionStep_C_BndEvt__Button_Image_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Lore_ITM_MissionStep.Lore_ITM_MissionStep_C.SetData
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FMissionStepDescription* step                           (BlueprintVisible, BlueprintReadOnly, Parm)
// int*                           StepNumber                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int*                           StepsInRow                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ULore_ITM_MissionStep_C::SetData(struct FMissionStepDescription* step, int* StepNumber, int* StepsInRow)
{
	static auto fn = UObject::FindObject<UFunction>("Function Lore_ITM_MissionStep.Lore_ITM_MissionStep_C.SetData");

	ULore_ITM_MissionStep_C_SetData_Params params;
	params.step = step;
	params.StepNumber = StepNumber;
	params.StepsInRow = StepsInRow;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Lore_ITM_MissionStep.Lore_ITM_MissionStep_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool*                          IsDesignTime                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ULore_ITM_MissionStep_C::PreConstruct(bool* IsDesignTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function Lore_ITM_MissionStep.Lore_ITM_MissionStep_C.PreConstruct");

	ULore_ITM_MissionStep_C_PreConstruct_Params params;
	params.IsDesignTime = IsDesignTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Lore_ITM_MissionStep.Lore_ITM_MissionStep_C.ExecuteUbergraph_Lore_ITM_MissionStep
// (Final, HasDefaults)
// Parameters:
// int*                           EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ULore_ITM_MissionStep_C::ExecuteUbergraph_Lore_ITM_MissionStep(int* EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Lore_ITM_MissionStep.Lore_ITM_MissionStep_C.ExecuteUbergraph_Lore_ITM_MissionStep");

	ULore_ITM_MissionStep_C_ExecuteUbergraph_Lore_ITM_MissionStep_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Lore_ITM_MissionStep.Lore_ITM_MissionStep_C.OnUnhovered__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)

void ULore_ITM_MissionStep_C::OnUnhovered__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function Lore_ITM_MissionStep.Lore_ITM_MissionStep_C.OnUnhovered__DelegateSignature");

	ULore_ITM_MissionStep_C_OnUnhovered__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Lore_ITM_MissionStep.Lore_ITM_MissionStep_C.OnHovered__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FMissionStepDescription* step                           (BlueprintVisible, BlueprintReadOnly, Parm)
// int*                           StepIndex                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int*                           StepsInRow                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ULore_ITM_MissionStep_C::OnHovered__DelegateSignature(struct FMissionStepDescription* step, int* StepIndex, int* StepsInRow)
{
	static auto fn = UObject::FindObject<UFunction>("Function Lore_ITM_MissionStep.Lore_ITM_MissionStep_C.OnHovered__DelegateSignature");

	ULore_ITM_MissionStep_C_OnHovered__DelegateSignature_Params params;
	params.step = step;
	params.StepIndex = StepIndex;
	params.StepsInRow = StepsInRow;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
