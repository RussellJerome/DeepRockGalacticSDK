// DeepRockGalactic SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "FSD_TOOLTIP_UpgradeIcon_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function TOOLTIP_UpgradeIcon.TOOLTIP_UpgradeIcon_C.UpdateDetailVisibility
// (Private, HasDefaults, BlueprintCallable, BlueprintEvent)

void UTOOLTIP_UpgradeIcon_C::UpdateDetailVisibility()
{
	static auto fn = UObject::FindObject<UFunction>("Function TOOLTIP_UpgradeIcon.TOOLTIP_UpgradeIcon_C.UpdateDetailVisibility");

	UTOOLTIP_UpgradeIcon_C_UpdateDetailVisibility_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TOOLTIP_UpgradeIcon.TOOLTIP_UpgradeIcon_C.Update
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UItemUpgradeCategory**   Category                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FText*                  InUpgradeName                  (BlueprintVisible, BlueprintReadOnly, Parm)
// struct FText*                  InUpgradeDescription           (BlueprintVisible, BlueprintReadOnly, Parm)
// EItemUpgradeStatus*            InStatus                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// TArray<struct FCraftingCost>   InCost                         (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
// bool*                          InCanUnequip                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool*                          ShowUpgradeStatus              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UTOOLTIP_UpgradeIcon_C::Update(class UItemUpgradeCategory** Category, struct FText* InUpgradeName, struct FText* InUpgradeDescription, EItemUpgradeStatus* InStatus, bool* InCanUnequip, bool* ShowUpgradeStatus, TArray<struct FCraftingCost>* InCost)
{
	static auto fn = UObject::FindObject<UFunction>("Function TOOLTIP_UpgradeIcon.TOOLTIP_UpgradeIcon_C.Update");

	UTOOLTIP_UpgradeIcon_C_Update_Params params;
	params.Category = Category;
	params.InUpgradeName = InUpgradeName;
	params.InUpgradeDescription = InUpgradeDescription;
	params.InStatus = InStatus;
	params.InCanUnequip = InCanUnequip;
	params.ShowUpgradeStatus = ShowUpgradeStatus;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (InCost != nullptr)
		*InCost = params.InCost;
}


// Function TOOLTIP_UpgradeIcon.TOOLTIP_UpgradeIcon_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool*                          IsDesignTime                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UTOOLTIP_UpgradeIcon_C::PreConstruct(bool* IsDesignTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function TOOLTIP_UpgradeIcon.TOOLTIP_UpgradeIcon_C.PreConstruct");

	UTOOLTIP_UpgradeIcon_C_PreConstruct_Params params;
	params.IsDesignTime = IsDesignTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TOOLTIP_UpgradeIcon.TOOLTIP_UpgradeIcon_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UTOOLTIP_UpgradeIcon_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function TOOLTIP_UpgradeIcon.TOOLTIP_UpgradeIcon_C.Construct");

	UTOOLTIP_UpgradeIcon_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TOOLTIP_UpgradeIcon.TOOLTIP_UpgradeIcon_C.OnShowUpgradeExtraDetailsChanged
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool*                          NewValue                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UTOOLTIP_UpgradeIcon_C::OnShowUpgradeExtraDetailsChanged(bool* NewValue)
{
	static auto fn = UObject::FindObject<UFunction>("Function TOOLTIP_UpgradeIcon.TOOLTIP_UpgradeIcon_C.OnShowUpgradeExtraDetailsChanged");

	UTOOLTIP_UpgradeIcon_C_OnShowUpgradeExtraDetailsChanged_Params params;
	params.NewValue = NewValue;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TOOLTIP_UpgradeIcon.TOOLTIP_UpgradeIcon_C.ExecuteUbergraph_TOOLTIP_UpgradeIcon
// (Final)
// Parameters:
// int*                           EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UTOOLTIP_UpgradeIcon_C::ExecuteUbergraph_TOOLTIP_UpgradeIcon(int* EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function TOOLTIP_UpgradeIcon.TOOLTIP_UpgradeIcon_C.ExecuteUbergraph_TOOLTIP_UpgradeIcon");

	UTOOLTIP_UpgradeIcon_C_ExecuteUbergraph_TOOLTIP_UpgradeIcon_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
