// DeepRockGalactic SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "FSD_ITM_TopBar_ResourceCounter_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function ITM_TopBar_ResourceCounter.ITM_TopBar_ResourceCounter_C.SetResourceData
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UResourceData**          InResource                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float*                         InAmount                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float*                         InRequiredAmount               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UITM_TopBar_ResourceCounter_C::SetResourceData(class UResourceData** InResource, float* InAmount, float* InRequiredAmount)
{
	static auto fn = UObject::FindObject<UFunction>("Function ITM_TopBar_ResourceCounter.ITM_TopBar_ResourceCounter_C.SetResourceData");

	UITM_TopBar_ResourceCounter_C_SetResourceData_Params params;
	params.InResource = InResource;
	params.InAmount = InAmount;
	params.InRequiredAmount = InRequiredAmount;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ITM_TopBar_ResourceCounter.ITM_TopBar_ResourceCounter_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool*                          IsDesignTime                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UITM_TopBar_ResourceCounter_C::PreConstruct(bool* IsDesignTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function ITM_TopBar_ResourceCounter.ITM_TopBar_ResourceCounter_C.PreConstruct");

	UITM_TopBar_ResourceCounter_C_PreConstruct_Params params;
	params.IsDesignTime = IsDesignTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ITM_TopBar_ResourceCounter.ITM_TopBar_ResourceCounter_C.UpdateAmount
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// float*                         InAmount                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UITM_TopBar_ResourceCounter_C::UpdateAmount(float* InAmount)
{
	static auto fn = UObject::FindObject<UFunction>("Function ITM_TopBar_ResourceCounter.ITM_TopBar_ResourceCounter_C.UpdateAmount");

	UITM_TopBar_ResourceCounter_C_UpdateAmount_Params params;
	params.InAmount = InAmount;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ITM_TopBar_ResourceCounter.ITM_TopBar_ResourceCounter_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UITM_TopBar_ResourceCounter_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function ITM_TopBar_ResourceCounter.ITM_TopBar_ResourceCounter_C.Construct");

	UITM_TopBar_ResourceCounter_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ITM_TopBar_ResourceCounter.ITM_TopBar_ResourceCounter_C.OnResourceAmountChanged_Event
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UResourceData**          Resource                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float*                         currentAmount                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UITM_TopBar_ResourceCounter_C::OnResourceAmountChanged_Event(class UResourceData** Resource, float* currentAmount)
{
	static auto fn = UObject::FindObject<UFunction>("Function ITM_TopBar_ResourceCounter.ITM_TopBar_ResourceCounter_C.OnResourceAmountChanged_Event");

	UITM_TopBar_ResourceCounter_C_OnResourceAmountChanged_Event_Params params;
	params.Resource = Resource;
	params.currentAmount = currentAmount;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ITM_TopBar_ResourceCounter.ITM_TopBar_ResourceCounter_C.UpdateFromSave
// (BlueprintCallable, BlueprintEvent)

void UITM_TopBar_ResourceCounter_C::UpdateFromSave()
{
	static auto fn = UObject::FindObject<UFunction>("Function ITM_TopBar_ResourceCounter.ITM_TopBar_ResourceCounter_C.UpdateFromSave");

	UITM_TopBar_ResourceCounter_C_UpdateFromSave_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ITM_TopBar_ResourceCounter.ITM_TopBar_ResourceCounter_C.ExecuteUbergraph_ITM_TopBar_ResourceCounter
// (Final)
// Parameters:
// int*                           EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UITM_TopBar_ResourceCounter_C::ExecuteUbergraph_ITM_TopBar_ResourceCounter(int* EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function ITM_TopBar_ResourceCounter.ITM_TopBar_ResourceCounter_C.ExecuteUbergraph_ITM_TopBar_ResourceCounter");

	UITM_TopBar_ResourceCounter_C_ExecuteUbergraph_ITM_TopBar_ResourceCounter_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
