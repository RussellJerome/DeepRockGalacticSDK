// DeepRockGalactic SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "FSD_ITM_Overclocks_Equip_Item_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function ITM_Overclocks_Equip_Item.ITM_Overclocks_Equip_Item_C.GetToolTipWidget
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class UWidget*                 ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)

class UWidget* UITM_Overclocks_Equip_Item_C::GetToolTipWidget()
{
	static auto fn = UObject::FindObject<UFunction>("Function ITM_Overclocks_Equip_Item.ITM_Overclocks_Equip_Item_C.GetToolTipWidget");

	UITM_Overclocks_Equip_Item_C_GetToolTipWidget_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function ITM_Overclocks_Equip_Item.ITM_Overclocks_Equip_Item_C.SetState
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// EItemUpgradeStatus*            InState                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UITM_Overclocks_Equip_Item_C::SetState(EItemUpgradeStatus* InState)
{
	static auto fn = UObject::FindObject<UFunction>("Function ITM_Overclocks_Equip_Item.ITM_Overclocks_Equip_Item_C.SetState");

	UITM_Overclocks_Equip_Item_C_SetState_Params params;
	params.InState = InState;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ITM_Overclocks_Equip_Item.ITM_Overclocks_Equip_Item_C.GetOverClock
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class UItemUpgrade*            Overclock                      (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UITM_Overclocks_Equip_Item_C::GetOverClock(class UItemUpgrade** Overclock)
{
	static auto fn = UObject::FindObject<UFunction>("Function ITM_Overclocks_Equip_Item.ITM_Overclocks_Equip_Item_C.GetOverClock");

	UITM_Overclocks_Equip_Item_C_GetOverClock_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Overclock != nullptr)
		*Overclock = params.Overclock;
}


// Function ITM_Overclocks_Equip_Item.ITM_Overclocks_Equip_Item_C.SetOverclock
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UItemUpgrade**           InOverclock                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UITM_Overclocks_Equip_Item_C::SetOverclock(class UItemUpgrade** InOverclock)
{
	static auto fn = UObject::FindObject<UFunction>("Function ITM_Overclocks_Equip_Item.ITM_Overclocks_Equip_Item_C.SetOverclock");

	UITM_Overclocks_Equip_Item_C_SetOverclock_Params params;
	params.InOverclock = InOverclock;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ITM_Overclocks_Equip_Item.ITM_Overclocks_Equip_Item_C.SetIconSize
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int*                           NewSize                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UITM_Overclocks_Equip_Item_C::SetIconSize(int* NewSize)
{
	static auto fn = UObject::FindObject<UFunction>("Function ITM_Overclocks_Equip_Item.ITM_Overclocks_Equip_Item_C.SetIconSize");

	UITM_Overclocks_Equip_Item_C_SetIconSize_Params params;
	params.NewSize = NewSize;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ITM_Overclocks_Equip_Item.ITM_Overclocks_Equip_Item_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool*                          IsDesignTime                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UITM_Overclocks_Equip_Item_C::PreConstruct(bool* IsDesignTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function ITM_Overclocks_Equip_Item.ITM_Overclocks_Equip_Item_C.PreConstruct");

	UITM_Overclocks_Equip_Item_C_PreConstruct_Params params;
	params.IsDesignTime = IsDesignTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ITM_Overclocks_Equip_Item.ITM_Overclocks_Equip_Item_C.BndEvt__ClickButton_K2Node_ComponentBoundEvent_0_OnButtonHoverEvent__DelegateSignature
// (BlueprintEvent)

void UITM_Overclocks_Equip_Item_C::BndEvt__ClickButton_K2Node_ComponentBoundEvent_0_OnButtonHoverEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function ITM_Overclocks_Equip_Item.ITM_Overclocks_Equip_Item_C.BndEvt__ClickButton_K2Node_ComponentBoundEvent_0_OnButtonHoverEvent__DelegateSignature");

	UITM_Overclocks_Equip_Item_C_BndEvt__ClickButton_K2Node_ComponentBoundEvent_0_OnButtonHoverEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ITM_Overclocks_Equip_Item.ITM_Overclocks_Equip_Item_C.BndEvt__ClickButton_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature
// (BlueprintEvent)

void UITM_Overclocks_Equip_Item_C::BndEvt__ClickButton_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function ITM_Overclocks_Equip_Item.ITM_Overclocks_Equip_Item_C.BndEvt__ClickButton_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature");

	UITM_Overclocks_Equip_Item_C_BndEvt__ClickButton_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ITM_Overclocks_Equip_Item.ITM_Overclocks_Equip_Item_C.BndEvt__ClickButton_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)

void UITM_Overclocks_Equip_Item_C::BndEvt__ClickButton_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function ITM_Overclocks_Equip_Item.ITM_Overclocks_Equip_Item_C.BndEvt__ClickButton_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature");

	UITM_Overclocks_Equip_Item_C_BndEvt__ClickButton_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ITM_Overclocks_Equip_Item.ITM_Overclocks_Equip_Item_C.ExecuteUbergraph_ITM_Overclocks_Equip_Item
// (Final)
// Parameters:
// int*                           EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UITM_Overclocks_Equip_Item_C::ExecuteUbergraph_ITM_Overclocks_Equip_Item(int* EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function ITM_Overclocks_Equip_Item.ITM_Overclocks_Equip_Item_C.ExecuteUbergraph_ITM_Overclocks_Equip_Item");

	UITM_Overclocks_Equip_Item_C_ExecuteUbergraph_ITM_Overclocks_Equip_Item_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ITM_Overclocks_Equip_Item.ITM_Overclocks_Equip_Item_C.OnClicked__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UITM_Overclocks_Equip_Item_C** Item                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void UITM_Overclocks_Equip_Item_C::OnClicked__DelegateSignature(class UITM_Overclocks_Equip_Item_C** Item)
{
	static auto fn = UObject::FindObject<UFunction>("Function ITM_Overclocks_Equip_Item.ITM_Overclocks_Equip_Item_C.OnClicked__DelegateSignature");

	UITM_Overclocks_Equip_Item_C_OnClicked__DelegateSignature_Params params;
	params.Item = Item;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ITM_Overclocks_Equip_Item.ITM_Overclocks_Equip_Item_C.OnUnhovered__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UITM_Overclocks_Equip_Item_C** Item                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void UITM_Overclocks_Equip_Item_C::OnUnhovered__DelegateSignature(class UITM_Overclocks_Equip_Item_C** Item)
{
	static auto fn = UObject::FindObject<UFunction>("Function ITM_Overclocks_Equip_Item.ITM_Overclocks_Equip_Item_C.OnUnhovered__DelegateSignature");

	UITM_Overclocks_Equip_Item_C_OnUnhovered__DelegateSignature_Params params;
	params.Item = Item;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ITM_Overclocks_Equip_Item.ITM_Overclocks_Equip_Item_C.OnHovered__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UITM_Overclocks_Equip_Item_C** Item                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void UITM_Overclocks_Equip_Item_C::OnHovered__DelegateSignature(class UITM_Overclocks_Equip_Item_C** Item)
{
	static auto fn = UObject::FindObject<UFunction>("Function ITM_Overclocks_Equip_Item.ITM_Overclocks_Equip_Item_C.OnHovered__DelegateSignature");

	UITM_Overclocks_Equip_Item_C_OnHovered__DelegateSignature_Params params;
	params.Item = Item;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
