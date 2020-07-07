// DeepRockGalactic SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "FSD_UI_MissionStats_Item_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function UI_MissionStats_Item.UI_MissionStats_Item_C.IsInteractable
// (BlueprintCosmetic, Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UUI_MissionStats_Item_C::IsInteractable()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_MissionStats_Item.UI_MissionStats_Item_C.IsInteractable");

	UUI_MissionStats_Item_C_IsInteractable_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function UI_MissionStats_Item.UI_MissionStats_Item_C.SetCategoryFilter
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<class UTexture2D*>      Filter                         (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)

void UUI_MissionStats_Item_C::SetCategoryFilter(TArray<class UTexture2D*>* Filter)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_MissionStats_Item.UI_MissionStats_Item_C.SetCategoryFilter");

	UUI_MissionStats_Item_C_SetCategoryFilter_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Filter != nullptr)
		*Filter = params.Filter;
}


// Function UI_MissionStats_Item.UI_MissionStats_Item_C.GetMissionStat
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class UMissionStat*            Mission_Stat                   (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UUI_MissionStats_Item_C::GetMissionStat(class UMissionStat** Mission_Stat)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_MissionStats_Item.UI_MissionStats_Item_C.GetMissionStat");

	UUI_MissionStats_Item_C_GetMissionStat_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Mission_Stat != nullptr)
		*Mission_Stat = params.Mission_Stat;
}


// Function UI_MissionStats_Item.UI_MissionStats_Item_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool*                          IsDesignTime                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UUI_MissionStats_Item_C::PreConstruct(bool* IsDesignTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_MissionStats_Item.UI_MissionStats_Item_C.PreConstruct");

	UUI_MissionStats_Item_C_PreConstruct_Params params;
	params.IsDesignTime = IsDesignTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_MissionStats_Item.UI_MissionStats_Item_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UUI_MissionStats_Item_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_MissionStats_Item.UI_MissionStats_Item_C.Construct");

	UUI_MissionStats_Item_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_MissionStats_Item.UI_MissionStats_Item_C.OnCountChanged_Event
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UMissionStat**           MissionStat                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float*                         Value                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UUI_MissionStats_Item_C::OnCountChanged_Event(class UMissionStat** MissionStat, float* Value)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_MissionStats_Item.UI_MissionStats_Item_C.OnCountChanged_Event");

	UUI_MissionStats_Item_C_OnCountChanged_Event_Params params;
	params.MissionStat = MissionStat;
	params.Value = Value;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_MissionStats_Item.UI_MissionStats_Item_C.Set Selected
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool*                          Selected                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UUI_MissionStats_Item_C::Set_Selected(bool* Selected)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_MissionStats_Item.UI_MissionStats_Item_C.Set Selected");

	UUI_MissionStats_Item_C_Set_Selected_Params params;
	params.Selected = Selected;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_MissionStats_Item.UI_MissionStats_Item_C.OnMouseEnter
// (BlueprintCosmetic, Event, Public, HasOutParms, BlueprintEvent)
// Parameters:
// struct FGeometry*              MyGeometry                     (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// struct FPointerEvent*          MouseEvent                     (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void UUI_MissionStats_Item_C::OnMouseEnter(struct FGeometry* MyGeometry, struct FPointerEvent* MouseEvent)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_MissionStats_Item.UI_MissionStats_Item_C.OnMouseEnter");

	UUI_MissionStats_Item_C_OnMouseEnter_Params params;
	params.MyGeometry = MyGeometry;
	params.MouseEvent = MouseEvent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_MissionStats_Item.UI_MissionStats_Item_C.OnMouseLeave
// (BlueprintCosmetic, Event, Public, HasOutParms, BlueprintEvent)
// Parameters:
// struct FPointerEvent*          MouseEvent                     (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void UUI_MissionStats_Item_C::OnMouseLeave(struct FPointerEvent* MouseEvent)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_MissionStats_Item.UI_MissionStats_Item_C.OnMouseLeave");

	UUI_MissionStats_Item_C_OnMouseLeave_Params params;
	params.MouseEvent = MouseEvent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_MissionStats_Item.UI_MissionStats_Item_C.ExecuteUbergraph_UI_MissionStats_Item
// (Final, HasDefaults)
// Parameters:
// int*                           EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UUI_MissionStats_Item_C::ExecuteUbergraph_UI_MissionStats_Item(int* EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_MissionStats_Item.UI_MissionStats_Item_C.ExecuteUbergraph_UI_MissionStats_Item");

	UUI_MissionStats_Item_C_ExecuteUbergraph_UI_MissionStats_Item_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_MissionStats_Item.UI_MissionStats_Item_C.OnHoverEnd__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UUI_MissionStats_Item_C** Sender                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void UUI_MissionStats_Item_C::OnHoverEnd__DelegateSignature(class UUI_MissionStats_Item_C** Sender)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_MissionStats_Item.UI_MissionStats_Item_C.OnHoverEnd__DelegateSignature");

	UUI_MissionStats_Item_C_OnHoverEnd__DelegateSignature_Params params;
	params.Sender = Sender;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_MissionStats_Item.UI_MissionStats_Item_C.OnHoverBegin__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UUI_MissionStats_Item_C** Sender                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void UUI_MissionStats_Item_C::OnHoverBegin__DelegateSignature(class UUI_MissionStats_Item_C** Sender)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_MissionStats_Item.UI_MissionStats_Item_C.OnHoverBegin__DelegateSignature");

	UUI_MissionStats_Item_C_OnHoverBegin__DelegateSignature_Params params;
	params.Sender = Sender;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
