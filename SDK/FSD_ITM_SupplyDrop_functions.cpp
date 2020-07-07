// DeepRockGalactic SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "FSD_ITM_SupplyDrop_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function ITM_SupplyDrop.ITM_SupplyDrop_C.RecieveCycledItem
// (Event, Protected, BlueprintEvent)

void AITM_SupplyDrop_C::RecieveCycledItem()
{
	static auto fn = UObject::FindObject<UFunction>("Function ITM_SupplyDrop.ITM_SupplyDrop_C.RecieveCycledItem");

	AITM_SupplyDrop_C_RecieveCycledItem_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ITM_SupplyDrop.ITM_SupplyDrop_C.RecieveEquipped
// (Event, Protected, BlueprintEvent)

void AITM_SupplyDrop_C::RecieveEquipped()
{
	static auto fn = UObject::FindObject<UFunction>("Function ITM_SupplyDrop.ITM_SupplyDrop_C.RecieveEquipped");

	AITM_SupplyDrop_C_RecieveEquipped_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ITM_SupplyDrop.ITM_SupplyDrop_C.ExecuteUbergraph_ITM_SupplyDrop
// (Final)
// Parameters:
// int*                           EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AITM_SupplyDrop_C::ExecuteUbergraph_ITM_SupplyDrop(int* EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function ITM_SupplyDrop.ITM_SupplyDrop_C.ExecuteUbergraph_ITM_SupplyDrop");

	AITM_SupplyDrop_C_ExecuteUbergraph_ITM_SupplyDrop_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
