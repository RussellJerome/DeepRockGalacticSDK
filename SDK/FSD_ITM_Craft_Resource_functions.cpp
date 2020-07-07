// DeepRockGalactic SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "FSD_ITM_Craft_Resource_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function ITM_Craft_Resource.ITM_Craft_Resource_C.OnResourceAmountChanged
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UResourceData**          Resource                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float*                         currentAmount                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UITM_Craft_Resource_C::OnResourceAmountChanged(class UResourceData** Resource, float* currentAmount)
{
	static auto fn = UObject::FindObject<UFunction>("Function ITM_Craft_Resource.ITM_Craft_Resource_C.OnResourceAmountChanged");

	UITM_Craft_Resource_C_OnResourceAmountChanged_Params params;
	params.Resource = Resource;
	params.currentAmount = currentAmount;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ITM_Craft_Resource.ITM_Craft_Resource_C.SetAmount
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// float*                         amount                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UITM_Craft_Resource_C::SetAmount(float* amount)
{
	static auto fn = UObject::FindObject<UFunction>("Function ITM_Craft_Resource.ITM_Craft_Resource_C.SetAmount");

	UITM_Craft_Resource_C_SetAmount_Params params;
	params.amount = amount;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ITM_Craft_Resource.ITM_Craft_Resource_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UITM_Craft_Resource_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function ITM_Craft_Resource.ITM_Craft_Resource_C.Construct");

	UITM_Craft_Resource_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ITM_Craft_Resource.ITM_Craft_Resource_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool*                          IsDesignTime                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UITM_Craft_Resource_C::PreConstruct(bool* IsDesignTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function ITM_Craft_Resource.ITM_Craft_Resource_C.PreConstruct");

	UITM_Craft_Resource_C_PreConstruct_Params params;
	params.IsDesignTime = IsDesignTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ITM_Craft_Resource.ITM_Craft_Resource_C.ExecuteUbergraph_ITM_Craft_Resource
// (Final, HasDefaults)
// Parameters:
// int*                           EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UITM_Craft_Resource_C::ExecuteUbergraph_ITM_Craft_Resource(int* EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function ITM_Craft_Resource.ITM_Craft_Resource_C.ExecuteUbergraph_ITM_Craft_Resource");

	UITM_Craft_Resource_C_ExecuteUbergraph_ITM_Craft_Resource_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
