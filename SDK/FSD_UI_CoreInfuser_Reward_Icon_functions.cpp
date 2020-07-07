// DeepRockGalactic SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "FSD_UI_CoreInfuser_Reward_Icon_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function UI_CoreInfuser_Reward_Icon.UI_CoreInfuser_Reward_Icon_C.ToggleActivateAudio
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool*                          AudioActive                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UUI_CoreInfuser_Reward_Icon_C::ToggleActivateAudio(bool* AudioActive)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_CoreInfuser_Reward_Icon.UI_CoreInfuser_Reward_Icon_C.ToggleActivateAudio");

	UUI_CoreInfuser_Reward_Icon_C_ToggleActivateAudio_Params params;
	params.AudioActive = AudioActive;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_CoreInfuser_Reward_Icon.UI_CoreInfuser_Reward_Icon_C.GetReward
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class USchematic*              SchematicReward                (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UUI_CoreInfuser_Reward_Icon_C::GetReward(class USchematic** SchematicReward)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_CoreInfuser_Reward_Icon.UI_CoreInfuser_Reward_Icon_C.GetReward");

	UUI_CoreInfuser_Reward_Icon_C_GetReward_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (SchematicReward != nullptr)
		*SchematicReward = params.SchematicReward;
}


// Function UI_CoreInfuser_Reward_Icon.UI_CoreInfuser_Reward_Icon_C.SetSchematicReward
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class USchematic**             InSchematic                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UUI_CoreInfuser_Reward_Icon_C::SetSchematicReward(class USchematic** InSchematic)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_CoreInfuser_Reward_Icon.UI_CoreInfuser_Reward_Icon_C.SetSchematicReward");

	UUI_CoreInfuser_Reward_Icon_C_SetSchematicReward_Params params;
	params.InSchematic = InSchematic;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_CoreInfuser_Reward_Icon.UI_CoreInfuser_Reward_Icon_C.GetIsRewardSelected
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                           IsSelected                     (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UUI_CoreInfuser_Reward_Icon_C::GetIsRewardSelected(bool* IsSelected)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_CoreInfuser_Reward_Icon.UI_CoreInfuser_Reward_Icon_C.GetIsRewardSelected");

	UUI_CoreInfuser_Reward_Icon_C_GetIsRewardSelected_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (IsSelected != nullptr)
		*IsSelected = params.IsSelected;
}


// Function UI_CoreInfuser_Reward_Icon.UI_CoreInfuser_Reward_Icon_C.TrySelectReward
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           Reward_Given                   (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UUI_CoreInfuser_Reward_Icon_C::TrySelectReward(bool* Reward_Given)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_CoreInfuser_Reward_Icon.UI_CoreInfuser_Reward_Icon_C.TrySelectReward");

	UUI_CoreInfuser_Reward_Icon_C_TrySelectReward_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Reward_Given != nullptr)
		*Reward_Given = params.Reward_Given;
}


// Function UI_CoreInfuser_Reward_Icon.UI_CoreInfuser_Reward_Icon_C.GetUseProgress
// (Private, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// float                          Progress                       (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UUI_CoreInfuser_Reward_Icon_C::GetUseProgress(float* Progress)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_CoreInfuser_Reward_Icon.UI_CoreInfuser_Reward_Icon_C.GetUseProgress");

	UUI_CoreInfuser_Reward_Icon_C_GetUseProgress_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Progress != nullptr)
		*Progress = params.Progress;
}


// Function UI_CoreInfuser_Reward_Icon.UI_CoreInfuser_Reward_Icon_C.SetUseProgress
// (Private, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// float*                         InProgress                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           Finished                       (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UUI_CoreInfuser_Reward_Icon_C::SetUseProgress(float* InProgress, bool* Finished)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_CoreInfuser_Reward_Icon.UI_CoreInfuser_Reward_Icon_C.SetUseProgress");

	UUI_CoreInfuser_Reward_Icon_C_SetUseProgress_Params params;
	params.InProgress = InProgress;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Finished != nullptr)
		*Finished = params.Finished;
}


// Function UI_CoreInfuser_Reward_Icon.UI_CoreInfuser_Reward_Icon_C.IsInteractable
// (BlueprintCosmetic, Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UUI_CoreInfuser_Reward_Icon_C::IsInteractable()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_CoreInfuser_Reward_Icon.UI_CoreInfuser_Reward_Icon_C.IsInteractable");

	UUI_CoreInfuser_Reward_Icon_C_IsInteractable_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function UI_CoreInfuser_Reward_Icon.UI_CoreInfuser_Reward_Icon_C.SetFaded
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool*                          InFade                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UUI_CoreInfuser_Reward_Icon_C::SetFaded(bool* InFade)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_CoreInfuser_Reward_Icon.UI_CoreInfuser_Reward_Icon_C.SetFaded");

	UUI_CoreInfuser_Reward_Icon_C_SetFaded_Params params;
	params.InFade = InFade;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_CoreInfuser_Reward_Icon.UI_CoreInfuser_Reward_Icon_C.SetHover
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool*                          InHovering                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UUI_CoreInfuser_Reward_Icon_C::SetHover(bool* InHovering)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_CoreInfuser_Reward_Icon.UI_CoreInfuser_Reward_Icon_C.SetHover");

	UUI_CoreInfuser_Reward_Icon_C_SetHover_Params params;
	params.InHovering = InHovering;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_CoreInfuser_Reward_Icon.UI_CoreInfuser_Reward_Icon_C.BndEvt__IconButton_K2Node_ComponentBoundEvent_4_OnButtonHoverEvent__DelegateSignature
// (BlueprintEvent)

void UUI_CoreInfuser_Reward_Icon_C::BndEvt__IconButton_K2Node_ComponentBoundEvent_4_OnButtonHoverEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_CoreInfuser_Reward_Icon.UI_CoreInfuser_Reward_Icon_C.BndEvt__IconButton_K2Node_ComponentBoundEvent_4_OnButtonHoverEvent__DelegateSignature");

	UUI_CoreInfuser_Reward_Icon_C_BndEvt__IconButton_K2Node_ComponentBoundEvent_4_OnButtonHoverEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_CoreInfuser_Reward_Icon.UI_CoreInfuser_Reward_Icon_C.BndEvt__IconButton_K2Node_ComponentBoundEvent_1_OnButtonPressedEvent__DelegateSignature
// (BlueprintEvent)

void UUI_CoreInfuser_Reward_Icon_C::BndEvt__IconButton_K2Node_ComponentBoundEvent_1_OnButtonPressedEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_CoreInfuser_Reward_Icon.UI_CoreInfuser_Reward_Icon_C.BndEvt__IconButton_K2Node_ComponentBoundEvent_1_OnButtonPressedEvent__DelegateSignature");

	UUI_CoreInfuser_Reward_Icon_C_BndEvt__IconButton_K2Node_ComponentBoundEvent_1_OnButtonPressedEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_CoreInfuser_Reward_Icon.UI_CoreInfuser_Reward_Icon_C.BndEvt__IconButton_K2Node_ComponentBoundEvent_2_OnButtonReleasedEvent__DelegateSignature
// (BlueprintEvent)

void UUI_CoreInfuser_Reward_Icon_C::BndEvt__IconButton_K2Node_ComponentBoundEvent_2_OnButtonReleasedEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_CoreInfuser_Reward_Icon.UI_CoreInfuser_Reward_Icon_C.BndEvt__IconButton_K2Node_ComponentBoundEvent_2_OnButtonReleasedEvent__DelegateSignature");

	UUI_CoreInfuser_Reward_Icon_C_BndEvt__IconButton_K2Node_ComponentBoundEvent_2_OnButtonReleasedEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_CoreInfuser_Reward_Icon.UI_CoreInfuser_Reward_Icon_C.OnProgressTick
// (BlueprintCallable, BlueprintEvent)

void UUI_CoreInfuser_Reward_Icon_C::OnProgressTick()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_CoreInfuser_Reward_Icon.UI_CoreInfuser_Reward_Icon_C.OnProgressTick");

	UUI_CoreInfuser_Reward_Icon_C_OnProgressTick_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_CoreInfuser_Reward_Icon.UI_CoreInfuser_Reward_Icon_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UUI_CoreInfuser_Reward_Icon_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_CoreInfuser_Reward_Icon.UI_CoreInfuser_Reward_Icon_C.Construct");

	UUI_CoreInfuser_Reward_Icon_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_CoreInfuser_Reward_Icon.UI_CoreInfuser_Reward_Icon_C.BndEvt__IconButton_K2Node_ComponentBoundEvent_3_OnButtonHoverEvent__DelegateSignature
// (BlueprintEvent)

void UUI_CoreInfuser_Reward_Icon_C::BndEvt__IconButton_K2Node_ComponentBoundEvent_3_OnButtonHoverEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_CoreInfuser_Reward_Icon.UI_CoreInfuser_Reward_Icon_C.BndEvt__IconButton_K2Node_ComponentBoundEvent_3_OnButtonHoverEvent__DelegateSignature");

	UUI_CoreInfuser_Reward_Icon_C_BndEvt__IconButton_K2Node_ComponentBoundEvent_3_OnButtonHoverEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_CoreInfuser_Reward_Icon.UI_CoreInfuser_Reward_Icon_C.SetDispenser
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class AEventRewardDispenser**  InDispenser                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UUI_CoreInfuser_Reward_Icon_C::SetDispenser(class AEventRewardDispenser** InDispenser)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_CoreInfuser_Reward_Icon.UI_CoreInfuser_Reward_Icon_C.SetDispenser");

	UUI_CoreInfuser_Reward_Icon_C_SetDispenser_Params params;
	params.InDispenser = InDispenser;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_CoreInfuser_Reward_Icon.UI_CoreInfuser_Reward_Icon_C.ExecuteUbergraph_UI_CoreInfuser_Reward_Icon
// (Final, HasDefaults)
// Parameters:
// int*                           EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UUI_CoreInfuser_Reward_Icon_C::ExecuteUbergraph_UI_CoreInfuser_Reward_Icon(int* EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_CoreInfuser_Reward_Icon.UI_CoreInfuser_Reward_Icon_C.ExecuteUbergraph_UI_CoreInfuser_Reward_Icon");

	UUI_CoreInfuser_Reward_Icon_C_ExecuteUbergraph_UI_CoreInfuser_Reward_Icon_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_CoreInfuser_Reward_Icon.UI_CoreInfuser_Reward_Icon_C.OnRewardSelected__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UUI_CoreInfuser_Reward_Icon_C** IconWidget                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void UUI_CoreInfuser_Reward_Icon_C::OnRewardSelected__DelegateSignature(class UUI_CoreInfuser_Reward_Icon_C** IconWidget)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_CoreInfuser_Reward_Icon.UI_CoreInfuser_Reward_Icon_C.OnRewardSelected__DelegateSignature");

	UUI_CoreInfuser_Reward_Icon_C_OnRewardSelected__DelegateSignature_Params params;
	params.IconWidget = IconWidget;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_CoreInfuser_Reward_Icon.UI_CoreInfuser_Reward_Icon_C.OnUnhovered__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UUI_CoreInfuser_Reward_Icon_C** IconWidget                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void UUI_CoreInfuser_Reward_Icon_C::OnUnhovered__DelegateSignature(class UUI_CoreInfuser_Reward_Icon_C** IconWidget)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_CoreInfuser_Reward_Icon.UI_CoreInfuser_Reward_Icon_C.OnUnhovered__DelegateSignature");

	UUI_CoreInfuser_Reward_Icon_C_OnUnhovered__DelegateSignature_Params params;
	params.IconWidget = IconWidget;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_CoreInfuser_Reward_Icon.UI_CoreInfuser_Reward_Icon_C.OnHovered__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UUI_CoreInfuser_Reward_Icon_C** IconWidget                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void UUI_CoreInfuser_Reward_Icon_C::OnHovered__DelegateSignature(class UUI_CoreInfuser_Reward_Icon_C** IconWidget)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_CoreInfuser_Reward_Icon.UI_CoreInfuser_Reward_Icon_C.OnHovered__DelegateSignature");

	UUI_CoreInfuser_Reward_Icon_C_OnHovered__DelegateSignature_Params params;
	params.IconWidget = IconWidget;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
