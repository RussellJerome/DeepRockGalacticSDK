// DeepRockGalactic SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "FSD_UI_Milestone_View_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function UI_Milestone_View.UI_Milestone_View_C.Update Has Claimable State
// (Public, BlueprintCallable, BlueprintEvent)

void UUI_Milestone_View_C::Update_Has_Claimable_State()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_Milestone_View.UI_Milestone_View_C.Update Has Claimable State");

	UUI_Milestone_View_C_Update_Has_Claimable_State_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_Milestone_View.UI_Milestone_View_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UUI_Milestone_View_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_Milestone_View.UI_Milestone_View_C.Construct");

	UUI_Milestone_View_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_Milestone_View.UI_Milestone_View_C.BndEvt__UI_MissionStats_Categories_K2Node_ComponentBoundEvent_14_OnSelectedChanged__DelegateSignature
// (BlueprintEvent)

void UUI_Milestone_View_C::BndEvt__UI_MissionStats_Categories_K2Node_ComponentBoundEvent_14_OnSelectedChanged__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_Milestone_View.UI_Milestone_View_C.BndEvt__UI_MissionStats_Categories_K2Node_ComponentBoundEvent_14_OnSelectedChanged__DelegateSignature");

	UUI_Milestone_View_C_BndEvt__UI_MissionStats_Categories_K2Node_ComponentBoundEvent_14_OnSelectedChanged__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_Milestone_View.UI_Milestone_View_C.Init Milestone Widget
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UUI_Milestone_Item_C**   Item                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void UUI_Milestone_View_C::Init_Milestone_Widget(class UUI_Milestone_Item_C** Item)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_Milestone_View.UI_Milestone_View_C.Init Milestone Widget");

	UUI_Milestone_View_C_Init_Milestone_Widget_Params params;
	params.Item = Item;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_Milestone_View.UI_Milestone_View_C.OnItemClaimableChanged_Event
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UUI_Milestone_Item_C**   Milestone_Item                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void UUI_Milestone_View_C::OnItemClaimableChanged_Event(class UUI_Milestone_Item_C** Milestone_Item)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_Milestone_View.UI_Milestone_View_C.OnItemClaimableChanged_Event");

	UUI_Milestone_View_C_OnItemClaimableChanged_Event_Params params;
	params.Milestone_Item = Milestone_Item;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_Milestone_View.UI_Milestone_View_C.Refresh
// (BlueprintCallable, BlueprintEvent)

void UUI_Milestone_View_C::Refresh()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_Milestone_View.UI_Milestone_View_C.Refresh");

	UUI_Milestone_View_C_Refresh_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_Milestone_View.UI_Milestone_View_C.ExecuteUbergraph_UI_Milestone_View
// (Final)
// Parameters:
// int*                           EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UUI_Milestone_View_C::ExecuteUbergraph_UI_Milestone_View(int* EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_Milestone_View.UI_Milestone_View_C.ExecuteUbergraph_UI_Milestone_View");

	UUI_Milestone_View_C_ExecuteUbergraph_UI_Milestone_View_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_Milestone_View.UI_Milestone_View_C.OnHasClaimableChanged__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool*                          HasClaimable                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UUI_Milestone_View_C::OnHasClaimableChanged__DelegateSignature(bool* HasClaimable)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_Milestone_View.UI_Milestone_View_C.OnHasClaimableChanged__DelegateSignature");

	UUI_Milestone_View_C_OnHasClaimableChanged__DelegateSignature_Params params;
	params.HasClaimable = HasClaimable;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
