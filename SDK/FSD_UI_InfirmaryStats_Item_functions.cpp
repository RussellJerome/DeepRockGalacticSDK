// DeepRockGalactic SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "FSD_UI_InfirmaryStats_Item_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function UI_InfirmaryStats_Item.UI_InfirmaryStats_Item_C.OwnedByLocal
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UUI_InfirmaryStats_Item_C::OwnedByLocal()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_InfirmaryStats_Item.UI_InfirmaryStats_Item_C.OwnedByLocal");

	UUI_InfirmaryStats_Item_C_OwnedByLocal_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function UI_InfirmaryStats_Item.UI_InfirmaryStats_Item_C.GetPlayer
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class AFSDPlayerController*    ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class AFSDPlayerController* UUI_InfirmaryStats_Item_C::GetPlayer()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_InfirmaryStats_Item.UI_InfirmaryStats_Item_C.GetPlayer");

	UUI_InfirmaryStats_Item_C_GetPlayer_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function UI_InfirmaryStats_Item.UI_InfirmaryStats_Item_C.SetCategoryFilter
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<class UTexture2D*>      Filter                         (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)

void UUI_InfirmaryStats_Item_C::SetCategoryFilter(TArray<class UTexture2D*>* Filter)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_InfirmaryStats_Item.UI_InfirmaryStats_Item_C.SetCategoryFilter");

	UUI_InfirmaryStats_Item_C_SetCategoryFilter_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Filter != nullptr)
		*Filter = params.Filter;
}


// Function UI_InfirmaryStats_Item.UI_InfirmaryStats_Item_C.GetMissionStat
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class UMissionStat*            Mission_Stat                   (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UUI_InfirmaryStats_Item_C::GetMissionStat(class UMissionStat** Mission_Stat)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_InfirmaryStats_Item.UI_InfirmaryStats_Item_C.GetMissionStat");

	UUI_InfirmaryStats_Item_C_GetMissionStat_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Mission_Stat != nullptr)
		*Mission_Stat = params.Mission_Stat;
}


// Function UI_InfirmaryStats_Item.UI_InfirmaryStats_Item_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool*                          IsDesignTime                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UUI_InfirmaryStats_Item_C::PreConstruct(bool* IsDesignTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_InfirmaryStats_Item.UI_InfirmaryStats_Item_C.PreConstruct");

	UUI_InfirmaryStats_Item_C_PreConstruct_Params params;
	params.IsDesignTime = IsDesignTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_InfirmaryStats_Item.UI_InfirmaryStats_Item_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UUI_InfirmaryStats_Item_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_InfirmaryStats_Item.UI_InfirmaryStats_Item_C.Construct");

	UUI_InfirmaryStats_Item_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_InfirmaryStats_Item.UI_InfirmaryStats_Item_C.Set Selected
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool*                          Selected                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UUI_InfirmaryStats_Item_C::Set_Selected(bool* Selected)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_InfirmaryStats_Item.UI_InfirmaryStats_Item_C.Set Selected");

	UUI_InfirmaryStats_Item_C_Set_Selected_Params params;
	params.Selected = Selected;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_InfirmaryStats_Item.UI_InfirmaryStats_Item_C.MissonStatUpdate
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UMissionStat**           MissionStat                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FText*                  StatValue                      (BlueprintVisible, BlueprintReadOnly, Parm)

void UUI_InfirmaryStats_Item_C::MissonStatUpdate(class UMissionStat** MissionStat, struct FText* StatValue)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_InfirmaryStats_Item.UI_InfirmaryStats_Item_C.MissonStatUpdate");

	UUI_InfirmaryStats_Item_C_MissonStatUpdate_Params params;
	params.MissionStat = MissionStat;
	params.StatValue = StatValue;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_InfirmaryStats_Item.UI_InfirmaryStats_Item_C.ExecuteUbergraph_UI_InfirmaryStats_Item
// (Final, HasDefaults)
// Parameters:
// int*                           EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UUI_InfirmaryStats_Item_C::ExecuteUbergraph_UI_InfirmaryStats_Item(int* EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_InfirmaryStats_Item.UI_InfirmaryStats_Item_C.ExecuteUbergraph_UI_InfirmaryStats_Item");

	UUI_InfirmaryStats_Item_C_ExecuteUbergraph_UI_InfirmaryStats_Item_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_InfirmaryStats_Item.UI_InfirmaryStats_Item_C.OnHoverEnd__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UUI_MissionStats_Item_C** Sender                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void UUI_InfirmaryStats_Item_C::OnHoverEnd__DelegateSignature(class UUI_MissionStats_Item_C** Sender)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_InfirmaryStats_Item.UI_InfirmaryStats_Item_C.OnHoverEnd__DelegateSignature");

	UUI_InfirmaryStats_Item_C_OnHoverEnd__DelegateSignature_Params params;
	params.Sender = Sender;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_InfirmaryStats_Item.UI_InfirmaryStats_Item_C.OnHoverBegin__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UUI_MissionStats_Item_C** Sender                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void UUI_InfirmaryStats_Item_C::OnHoverBegin__DelegateSignature(class UUI_MissionStats_Item_C** Sender)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_InfirmaryStats_Item.UI_InfirmaryStats_Item_C.OnHoverBegin__DelegateSignature");

	UUI_InfirmaryStats_Item_C_OnHoverBegin__DelegateSignature_Params params;
	params.Sender = Sender;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
