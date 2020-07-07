// DeepRockGalactic SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "FSD_UI_Milestone_Item_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function UI_Milestone_Item.UI_Milestone_Item_C.UpdateRewardStar
// (Private, BlueprintCallable, BlueprintEvent)
// Parameters:
// int*                           Index                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UUI_Milestone_Item_C::UpdateRewardStar(int* Index)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_Milestone_Item.UI_Milestone_Item_C.UpdateRewardStar");

	UUI_Milestone_Item_C_UpdateRewardStar_Params params;
	params.Index = Index;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_Milestone_Item.UI_Milestone_Item_C.GetIsClaimable
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                           ItemClaimable                  (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UUI_Milestone_Item_C::GetIsClaimable(bool* ItemClaimable)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_Milestone_Item.UI_Milestone_Item_C.GetIsClaimable");

	UUI_Milestone_Item_C_GetIsClaimable_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (ItemClaimable != nullptr)
		*ItemClaimable = params.ItemClaimable;
}


// Function UI_Milestone_Item.UI_Milestone_Item_C.GetIcon
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class UTexture2D*              Icon                           (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UUI_Milestone_Item_C::GetIcon(class UTexture2D** Icon)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_Milestone_Item.UI_Milestone_Item_C.GetIcon");

	UUI_Milestone_Item_C_GetIcon_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Icon != nullptr)
		*Icon = params.Icon;
}


// Function UI_Milestone_Item.UI_Milestone_Item_C.SetCategoryFilter
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<class UTexture2D*>      Filter                         (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)

void UUI_Milestone_Item_C::SetCategoryFilter(TArray<class UTexture2D*>* Filter)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_Milestone_Item.UI_Milestone_Item_C.SetCategoryFilter");

	UUI_Milestone_Item_C_SetCategoryFilter_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Filter != nullptr)
		*Filter = params.Filter;
}


// Function UI_Milestone_Item.UI_Milestone_Item_C.OnMouseButtonUp
// (BlueprintCosmetic, Event, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGeometry*              MyGeometry                     (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// struct FPointerEvent*          MouseEvent                     (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// struct FEventReply             ReturnValue                    (Parm, OutParm, ReturnParm)

struct FEventReply UUI_Milestone_Item_C::OnMouseButtonUp(struct FGeometry* MyGeometry, struct FPointerEvent* MouseEvent)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_Milestone_Item.UI_Milestone_Item_C.OnMouseButtonUp");

	UUI_Milestone_Item_C_OnMouseButtonUp_Params params;
	params.MyGeometry = MyGeometry;
	params.MouseEvent = MouseEvent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function UI_Milestone_Item.UI_Milestone_Item_C.OnMouseButtonDown
// (BlueprintCosmetic, Event, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGeometry*              MyGeometry                     (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// struct FPointerEvent*          MouseEvent                     (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// struct FEventReply             ReturnValue                    (Parm, OutParm, ReturnParm)

struct FEventReply UUI_Milestone_Item_C::OnMouseButtonDown(struct FGeometry* MyGeometry, struct FPointerEvent* MouseEvent)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_Milestone_Item.UI_Milestone_Item_C.OnMouseButtonDown");

	UUI_Milestone_Item_C_OnMouseButtonDown_Params params;
	params.MyGeometry = MyGeometry;
	params.MouseEvent = MouseEvent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function UI_Milestone_Item.UI_Milestone_Item_C.SetHovered
// (Private, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool*                          Hovered                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UUI_Milestone_Item_C::SetHovered(bool* Hovered)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_Milestone_Item.UI_Milestone_Item_C.SetHovered");

	UUI_Milestone_Item_C_SetHovered_Params params;
	params.Hovered = Hovered;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_Milestone_Item.UI_Milestone_Item_C.SetProgress
// (Private, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// int*                           Tier                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float*                         Progress                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float*                         CurrentCount                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float*                         TargetCount                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool*                          IsClaimable                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UUI_Milestone_Item_C::SetProgress(int* Tier, float* Progress, float* CurrentCount, float* TargetCount, bool* IsClaimable)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_Milestone_Item.UI_Milestone_Item_C.SetProgress");

	UUI_Milestone_Item_C_SetProgress_Params params;
	params.Tier = Tier;
	params.Progress = Progress;
	params.CurrentCount = CurrentCount;
	params.TargetCount = TargetCount;
	params.IsClaimable = IsClaimable;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_Milestone_Item.UI_Milestone_Item_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool*                          IsDesignTime                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UUI_Milestone_Item_C::PreConstruct(bool* IsDesignTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_Milestone_Item.UI_Milestone_Item_C.PreConstruct");

	UUI_Milestone_Item_C_PreConstruct_Params params;
	params.IsDesignTime = IsDesignTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_Milestone_Item.UI_Milestone_Item_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UUI_Milestone_Item_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_Milestone_Item.UI_Milestone_Item_C.Construct");

	UUI_Milestone_Item_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_Milestone_Item.UI_Milestone_Item_C.UpdateItem
// (BlueprintCallable, BlueprintEvent)

void UUI_Milestone_Item_C::UpdateItem()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_Milestone_Item.UI_Milestone_Item_C.UpdateItem");

	UUI_Milestone_Item_C_UpdateItem_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_Milestone_Item.UI_Milestone_Item_C.OnCountChanged_Event
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UMissionStat**           MissionStat                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float*                         Value                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UUI_Milestone_Item_C::OnCountChanged_Event(class UMissionStat** MissionStat, float* Value)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_Milestone_Item.UI_Milestone_Item_C.OnCountChanged_Event");

	UUI_Milestone_Item_C_OnCountChanged_Event_Params params;
	params.MissionStat = MissionStat;
	params.Value = Value;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_Milestone_Item.UI_Milestone_Item_C.OnMouseEnter
// (BlueprintCosmetic, Event, Public, HasOutParms, BlueprintEvent)
// Parameters:
// struct FGeometry*              MyGeometry                     (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// struct FPointerEvent*          MouseEvent                     (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void UUI_Milestone_Item_C::OnMouseEnter(struct FGeometry* MyGeometry, struct FPointerEvent* MouseEvent)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_Milestone_Item.UI_Milestone_Item_C.OnMouseEnter");

	UUI_Milestone_Item_C_OnMouseEnter_Params params;
	params.MyGeometry = MyGeometry;
	params.MouseEvent = MouseEvent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_Milestone_Item.UI_Milestone_Item_C.OnMouseLeave
// (BlueprintCosmetic, Event, Public, HasOutParms, BlueprintEvent)
// Parameters:
// struct FPointerEvent*          MouseEvent                     (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void UUI_Milestone_Item_C::OnMouseLeave(struct FPointerEvent* MouseEvent)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_Milestone_Item.UI_Milestone_Item_C.OnMouseLeave");

	UUI_Milestone_Item_C_OnMouseLeave_Params params;
	params.MouseEvent = MouseEvent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_Milestone_Item.UI_Milestone_Item_C.Claim KPI
// (BlueprintCallable, BlueprintEvent)

void UUI_Milestone_Item_C::Claim_KPI()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_Milestone_Item.UI_Milestone_Item_C.Claim KPI");

	UUI_Milestone_Item_C_Claim_KPI_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_Milestone_Item.UI_Milestone_Item_C.CreateRewardStars
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int*                           StarCount                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UUI_Milestone_Item_C::CreateRewardStars(int* StarCount)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_Milestone_Item.UI_Milestone_Item_C.CreateRewardStars");

	UUI_Milestone_Item_C_CreateRewardStars_Params params;
	params.StarCount = StarCount;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_Milestone_Item.UI_Milestone_Item_C.SetAnimClaimProgress
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// float*                         Progress                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UUI_Milestone_Item_C::SetAnimClaimProgress(float* Progress)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_Milestone_Item.UI_Milestone_Item_C.SetAnimClaimProgress");

	UUI_Milestone_Item_C_SetAnimClaimProgress_Params params;
	params.Progress = Progress;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_Milestone_Item.UI_Milestone_Item_C.OnClaimAnimFinished
// (BlueprintCallable, BlueprintEvent)

void UUI_Milestone_Item_C::OnClaimAnimFinished()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_Milestone_Item.UI_Milestone_Item_C.OnClaimAnimFinished");

	UUI_Milestone_Item_C_OnClaimAnimFinished_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_Milestone_Item.UI_Milestone_Item_C.OnCompletedAnimFinished
// (BlueprintCallable, BlueprintEvent)

void UUI_Milestone_Item_C::OnCompletedAnimFinished()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_Milestone_Item.UI_Milestone_Item_C.OnCompletedAnimFinished");

	UUI_Milestone_Item_C_OnCompletedAnimFinished_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_Milestone_Item.UI_Milestone_Item_C.OnCompletedAnimStarted
// (BlueprintCallable, BlueprintEvent)

void UUI_Milestone_Item_C::OnCompletedAnimStarted()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_Milestone_Item.UI_Milestone_Item_C.OnCompletedAnimStarted");

	UUI_Milestone_Item_C_OnCompletedAnimStarted_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_Milestone_Item.UI_Milestone_Item_C.ExecuteUbergraph_UI_Milestone_Item
// (Final, HasDefaults)
// Parameters:
// int*                           EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UUI_Milestone_Item_C::ExecuteUbergraph_UI_Milestone_Item(int* EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_Milestone_Item.UI_Milestone_Item_C.ExecuteUbergraph_UI_Milestone_Item");

	UUI_Milestone_Item_C_ExecuteUbergraph_UI_Milestone_Item_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_Milestone_Item.UI_Milestone_Item_C.OnItemClaimableChanged__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UUI_Milestone_Item_C**   Milestone_Item                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void UUI_Milestone_Item_C::OnItemClaimableChanged__DelegateSignature(class UUI_Milestone_Item_C** Milestone_Item)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_Milestone_Item.UI_Milestone_Item_C.OnItemClaimableChanged__DelegateSignature");

	UUI_Milestone_Item_C_OnItemClaimableChanged__DelegateSignature_Params params;
	params.Milestone_Item = Milestone_Item;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
