// DeepRockGalactic SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "FSD_ITM_UpgGear_ResourceCounter_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function ITM_UpgGear_ResourceCounter.ITM_UpgGear_ResourceCounter_C.SetIconSize
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int*                           InSize                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UITM_UpgGear_ResourceCounter_C::SetIconSize(int* InSize)
{
	static auto fn = UObject::FindObject<UFunction>("Function ITM_UpgGear_ResourceCounter.ITM_UpgGear_ResourceCounter_C.SetIconSize");

	UITM_UpgGear_ResourceCounter_C_SetIconSize_Params params;
	params.InSize = InSize;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ITM_UpgGear_ResourceCounter.ITM_UpgGear_ResourceCounter_C.SetCanAfford
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool*                          IsAffordable                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UITM_UpgGear_ResourceCounter_C::SetCanAfford(bool* IsAffordable)
{
	static auto fn = UObject::FindObject<UFunction>("Function ITM_UpgGear_ResourceCounter.ITM_UpgGear_ResourceCounter_C.SetCanAfford");

	UITM_UpgGear_ResourceCounter_C_SetCanAfford_Params params;
	params.IsAffordable = IsAffordable;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ITM_UpgGear_ResourceCounter.ITM_UpgGear_ResourceCounter_C.SetResourceData
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UResourceData**          InResource                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float*                         InAmount                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float*                         InRequiredAmount               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool*                          InShowRequiredAmount           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UITM_UpgGear_ResourceCounter_C::SetResourceData(class UResourceData** InResource, float* InAmount, float* InRequiredAmount, bool* InShowRequiredAmount)
{
	static auto fn = UObject::FindObject<UFunction>("Function ITM_UpgGear_ResourceCounter.ITM_UpgGear_ResourceCounter_C.SetResourceData");

	UITM_UpgGear_ResourceCounter_C_SetResourceData_Params params;
	params.InResource = InResource;
	params.InAmount = InAmount;
	params.InRequiredAmount = InRequiredAmount;
	params.InShowRequiredAmount = InShowRequiredAmount;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ITM_UpgGear_ResourceCounter.ITM_UpgGear_ResourceCounter_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool*                          IsDesignTime                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UITM_UpgGear_ResourceCounter_C::PreConstruct(bool* IsDesignTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function ITM_UpgGear_ResourceCounter.ITM_UpgGear_ResourceCounter_C.PreConstruct");

	UITM_UpgGear_ResourceCounter_C_PreConstruct_Params params;
	params.IsDesignTime = IsDesignTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ITM_UpgGear_ResourceCounter.ITM_UpgGear_ResourceCounter_C.UpdateAmount
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// float*                         InAmount                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UITM_UpgGear_ResourceCounter_C::UpdateAmount(float* InAmount)
{
	static auto fn = UObject::FindObject<UFunction>("Function ITM_UpgGear_ResourceCounter.ITM_UpgGear_ResourceCounter_C.UpdateAmount");

	UITM_UpgGear_ResourceCounter_C_UpdateAmount_Params params;
	params.InAmount = InAmount;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ITM_UpgGear_ResourceCounter.ITM_UpgGear_ResourceCounter_C.ExecuteUbergraph_ITM_UpgGear_ResourceCounter
// (Final)
// Parameters:
// int*                           EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UITM_UpgGear_ResourceCounter_C::ExecuteUbergraph_ITM_UpgGear_ResourceCounter(int* EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function ITM_UpgGear_ResourceCounter.ITM_UpgGear_ResourceCounter_C.ExecuteUbergraph_ITM_UpgGear_ResourceCounter");

	UITM_UpgGear_ResourceCounter_C_ExecuteUbergraph_ITM_UpgGear_ResourceCounter_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
