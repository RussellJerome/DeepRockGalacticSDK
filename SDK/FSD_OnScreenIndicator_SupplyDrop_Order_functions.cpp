// DeepRockGalactic SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "FSD_OnScreenIndicator_SupplyDrop_Order_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function OnScreenIndicator_SupplyDrop_Order.OnScreenIndicator_SupplyDrop_Order_C.SetDetails
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FText*                  Name                           (BlueprintVisible, BlueprintReadOnly, Parm)
// int*                           Cost                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UResourceData**          ResourceRequired               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UOnScreenIndicator_SupplyDrop_Order_C::SetDetails(struct FText* Name, int* Cost, class UResourceData** ResourceRequired)
{
	static auto fn = UObject::FindObject<UFunction>("Function OnScreenIndicator_SupplyDrop_Order.OnScreenIndicator_SupplyDrop_Order_C.SetDetails");

	UOnScreenIndicator_SupplyDrop_Order_C_SetDetails_Params params;
	params.Name = Name;
	params.Cost = Cost;
	params.ResourceRequired = ResourceRequired;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OnScreenIndicator_SupplyDrop_Order.OnScreenIndicator_SupplyDrop_Order_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool*                          IsDesignTime                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UOnScreenIndicator_SupplyDrop_Order_C::PreConstruct(bool* IsDesignTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function OnScreenIndicator_SupplyDrop_Order.OnScreenIndicator_SupplyDrop_Order_C.PreConstruct");

	UOnScreenIndicator_SupplyDrop_Order_C_PreConstruct_Params params;
	params.IsDesignTime = IsDesignTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OnScreenIndicator_SupplyDrop_Order.OnScreenIndicator_SupplyDrop_Order_C.ExecuteUbergraph_OnScreenIndicator_SupplyDrop_Order
// (Final, HasDefaults)
// Parameters:
// int*                           EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UOnScreenIndicator_SupplyDrop_Order_C::ExecuteUbergraph_OnScreenIndicator_SupplyDrop_Order(int* EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function OnScreenIndicator_SupplyDrop_Order.OnScreenIndicator_SupplyDrop_Order_C.ExecuteUbergraph_OnScreenIndicator_SupplyDrop_Order");

	UOnScreenIndicator_SupplyDrop_Order_C_ExecuteUbergraph_OnScreenIndicator_SupplyDrop_Order_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
