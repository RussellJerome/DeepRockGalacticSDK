// DeepRockGalactic SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "FSD_UI_Perks_Column_Items_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function UI_Perks_Column_Items.UI_Perks_Column_Items_C.IsInteractable
// (BlueprintCosmetic, Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UUI_Perks_Column_Items_C::IsInteractable()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_Perks_Column_Items.UI_Perks_Column_Items_C.IsInteractable");

	UUI_Perks_Column_Items_C_IsInteractable_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function UI_Perks_Column_Items.UI_Perks_Column_Items_C.RefreshTier
// (Public, BlueprintCallable, BlueprintEvent)

void UUI_Perks_Column_Items_C::RefreshTier()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_Perks_Column_Items.UI_Perks_Column_Items_C.RefreshTier");

	UUI_Perks_Column_Items_C_RefreshTier_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_Perks_Column_Items.UI_Perks_Column_Items_C.AddPerk
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UPerkAsset**             Perk                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UPerkAsset*              OutPerk                        (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// class UUI_Perks_Item_C*        OutWidget                      (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData)

void UUI_Perks_Column_Items_C::AddPerk(class UPerkAsset** Perk, class UPerkAsset** OutPerk, class UUI_Perks_Item_C** OutWidget)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_Perks_Column_Items.UI_Perks_Column_Items_C.AddPerk");

	UUI_Perks_Column_Items_C_AddPerk_Params params;
	params.Perk = Perk;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (OutPerk != nullptr)
		*OutPerk = params.OutPerk;
	if (OutWidget != nullptr)
		*OutWidget = params.OutWidget;
}


// Function UI_Perks_Column_Items.UI_Perks_Column_Items_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool*                          IsDesignTime                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UUI_Perks_Column_Items_C::PreConstruct(bool* IsDesignTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_Perks_Column_Items.UI_Perks_Column_Items_C.PreConstruct");

	UUI_Perks_Column_Items_C_PreConstruct_Params params;
	params.IsDesignTime = IsDesignTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_Perks_Column_Items.UI_Perks_Column_Items_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UUI_Perks_Column_Items_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_Perks_Column_Items.UI_Perks_Column_Items_C.Construct");

	UUI_Perks_Column_Items_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_Perks_Column_Items.UI_Perks_Column_Items_C.OnPerkClicked_Event
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UUI_Perks_Item_C**       Widget                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void UUI_Perks_Column_Items_C::OnPerkClicked_Event(class UUI_Perks_Item_C** Widget)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_Perks_Column_Items.UI_Perks_Column_Items_C.OnPerkClicked_Event");

	UUI_Perks_Column_Items_C_OnPerkClicked_Event_Params params;
	params.Widget = Widget;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_Perks_Column_Items.UI_Perks_Column_Items_C.OnPerkClaimed_Event
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UPerkAsset**             Perk                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int*                           ClaimedTier                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UUI_Perks_Column_Items_C::OnPerkClaimed_Event(class UPerkAsset** Perk, int* ClaimedTier)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_Perks_Column_Items.UI_Perks_Column_Items_C.OnPerkClaimed_Event");

	UUI_Perks_Column_Items_C_OnPerkClaimed_Event_Params params;
	params.Perk = Perk;
	params.ClaimedTier = ClaimedTier;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_Perks_Column_Items.UI_Perks_Column_Items_C.SetPerks
// (HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<class UPerkAsset*>      Array                          (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)

void UUI_Perks_Column_Items_C::SetPerks(TArray<class UPerkAsset*>* Array)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_Perks_Column_Items.UI_Perks_Column_Items_C.SetPerks");

	UUI_Perks_Column_Items_C_SetPerks_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Array != nullptr)
		*Array = params.Array;
}


// Function UI_Perks_Column_Items.UI_Perks_Column_Items_C.ExecuteUbergraph_UI_Perks_Column_Items
// (Final)
// Parameters:
// int*                           EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UUI_Perks_Column_Items_C::ExecuteUbergraph_UI_Perks_Column_Items(int* EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_Perks_Column_Items.UI_Perks_Column_Items_C.ExecuteUbergraph_UI_Perks_Column_Items");

	UUI_Perks_Column_Items_C_ExecuteUbergraph_UI_Perks_Column_Items_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_Perks_Column_Items.UI_Perks_Column_Items_C.OnPerkClicked__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UUI_Perks_Item_C**       PerkWidget                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void UUI_Perks_Column_Items_C::OnPerkClicked__DelegateSignature(class UUI_Perks_Item_C** PerkWidget)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_Perks_Column_Items.UI_Perks_Column_Items_C.OnPerkClicked__DelegateSignature");

	UUI_Perks_Column_Items_C_OnPerkClicked__DelegateSignature_Params params;
	params.PerkWidget = PerkWidget;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
