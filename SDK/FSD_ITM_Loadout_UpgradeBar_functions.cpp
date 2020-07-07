// DeepRockGalactic SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "FSD_ITM_Loadout_UpgradeBar_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function ITM_Loadout_UpgradeBar.ITM_Loadout_UpgradeBar_C.ShowItemUpgrades
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UClass*                  InCharacterClass               (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
// class UClass**                 InItemClass                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class AFSDPlayerState**        InPlayerState                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool*                          EnableHoverTooltip             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UITM_Loadout_UpgradeBar_C::ShowItemUpgrades(class UClass** InItemClass, class AFSDPlayerState** InPlayerState, bool* EnableHoverTooltip, class UClass** InCharacterClass)
{
	static auto fn = UObject::FindObject<UFunction>("Function ITM_Loadout_UpgradeBar.ITM_Loadout_UpgradeBar_C.ShowItemUpgrades");

	UITM_Loadout_UpgradeBar_C_ShowItemUpgrades_Params params;
	params.InItemClass = InItemClass;
	params.InPlayerState = InPlayerState;
	params.EnableHoverTooltip = EnableHoverTooltip;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (InCharacterClass != nullptr)
		*InCharacterClass = params.InCharacterClass;
}


// Function ITM_Loadout_UpgradeBar.ITM_Loadout_UpgradeBar_C.GetUpgradeFromList
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// int*                           Index                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// TArray<class UItemUpgrade*>    Upgrades                       (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
// class UItemUpgrade*            Output                         (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UITM_Loadout_UpgradeBar_C::GetUpgradeFromList(int* Index, TArray<class UItemUpgrade*>* Upgrades, class UItemUpgrade** Output)
{
	static auto fn = UObject::FindObject<UFunction>("Function ITM_Loadout_UpgradeBar.ITM_Loadout_UpgradeBar_C.GetUpgradeFromList");

	UITM_Loadout_UpgradeBar_C_GetUpgradeFromList_Params params;
	params.Index = Index;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Upgrades != nullptr)
		*Upgrades = params.Upgrades;
	if (Output != nullptr)
		*Output = params.Output;
}


// Function ITM_Loadout_UpgradeBar.ITM_Loadout_UpgradeBar_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UITM_Loadout_UpgradeBar_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function ITM_Loadout_UpgradeBar.ITM_Loadout_UpgradeBar_C.Construct");

	UITM_Loadout_UpgradeBar_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ITM_Loadout_UpgradeBar.ITM_Loadout_UpgradeBar_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool*                          IsDesignTime                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UITM_Loadout_UpgradeBar_C::PreConstruct(bool* IsDesignTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function ITM_Loadout_UpgradeBar.ITM_Loadout_UpgradeBar_C.PreConstruct");

	UITM_Loadout_UpgradeBar_C_PreConstruct_Params params;
	params.IsDesignTime = IsDesignTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ITM_Loadout_UpgradeBar.ITM_Loadout_UpgradeBar_C.ExecuteUbergraph_ITM_Loadout_UpgradeBar
// (Final)
// Parameters:
// int*                           EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UITM_Loadout_UpgradeBar_C::ExecuteUbergraph_ITM_Loadout_UpgradeBar(int* EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function ITM_Loadout_UpgradeBar.ITM_Loadout_UpgradeBar_C.ExecuteUbergraph_ITM_Loadout_UpgradeBar");

	UITM_Loadout_UpgradeBar_C_ExecuteUbergraph_ITM_Loadout_UpgradeBar_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
