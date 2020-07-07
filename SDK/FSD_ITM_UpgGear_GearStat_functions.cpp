// DeepRockGalactic SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "FSD_ITM_UpgGear_GearStat_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function ITM_UpgGear_GearStat.ITM_UpgGear_GearStat_C.SetGearStat
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGearStatEntry*         InStat                         (BlueprintVisible, BlueprintReadOnly, Parm)

void UITM_UpgGear_GearStat_C::SetGearStat(struct FGearStatEntry* InStat)
{
	static auto fn = UObject::FindObject<UFunction>("Function ITM_UpgGear_GearStat.ITM_UpgGear_GearStat_C.SetGearStat");

	UITM_UpgGear_GearStat_C_SetGearStat_Params params;
	params.InStat = InStat;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ITM_UpgGear_GearStat.ITM_UpgGear_GearStat_C.SetData
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FText*                  InStatName                     (BlueprintVisible, BlueprintReadOnly, Parm)
// struct FText*                  InStatValue                    (BlueprintVisible, BlueprintReadOnly, Parm)
// struct FText*                  InStatBaseValue                (BlueprintVisible, BlueprintReadOnly, Parm)
// struct FText*                  InStatUpgradeValue             (BlueprintVisible, BlueprintReadOnly, Parm)
// EItemPreviewStatus*            InItemPreviewStatus            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UITM_UpgGear_GearStat_C::SetData(struct FText* InStatName, struct FText* InStatValue, struct FText* InStatBaseValue, struct FText* InStatUpgradeValue, EItemPreviewStatus* InItemPreviewStatus)
{
	static auto fn = UObject::FindObject<UFunction>("Function ITM_UpgGear_GearStat.ITM_UpgGear_GearStat_C.SetData");

	UITM_UpgGear_GearStat_C_SetData_Params params;
	params.InStatName = InStatName;
	params.InStatValue = InStatValue;
	params.InStatBaseValue = InStatBaseValue;
	params.InStatUpgradeValue = InStatUpgradeValue;
	params.InItemPreviewStatus = InItemPreviewStatus;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ITM_UpgGear_GearStat.ITM_UpgGear_GearStat_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool*                          IsDesignTime                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UITM_UpgGear_GearStat_C::PreConstruct(bool* IsDesignTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function ITM_UpgGear_GearStat.ITM_UpgGear_GearStat_C.PreConstruct");

	UITM_UpgGear_GearStat_C_PreConstruct_Params params;
	params.IsDesignTime = IsDesignTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ITM_UpgGear_GearStat.ITM_UpgGear_GearStat_C.ExecuteUbergraph_ITM_UpgGear_GearStat
// (Final, HasDefaults)
// Parameters:
// int*                           EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UITM_UpgGear_GearStat_C::ExecuteUbergraph_ITM_UpgGear_GearStat(int* EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function ITM_UpgGear_GearStat.ITM_UpgGear_GearStat_C.ExecuteUbergraph_ITM_UpgGear_GearStat");

	UITM_UpgGear_GearStat_C_ExecuteUbergraph_ITM_UpgGear_GearStat_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
