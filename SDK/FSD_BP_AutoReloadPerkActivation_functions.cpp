// DeepRockGalactic SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "FSD_BP_AutoReloadPerkActivation_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function BP_AutoReloadPerkActivation.BP_AutoReloadPerkActivation_C.Receive_ActivatePerk
// (Event, Protected, BlueprintEvent)
// Parameters:
// class APlayerCharacter**       Character                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float*                         Value                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBP_AutoReloadPerkActivation_C::Receive_ActivatePerk(class APlayerCharacter** Character, float* Value)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_AutoReloadPerkActivation.BP_AutoReloadPerkActivation_C.Receive_ActivatePerk");

	UBP_AutoReloadPerkActivation_C_Receive_ActivatePerk_Params params;
	params.Character = Character;
	params.Value = Value;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_AutoReloadPerkActivation.BP_AutoReloadPerkActivation_C.OnItemEquipped_Event_1
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class AItem**                  Item                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBP_AutoReloadPerkActivation_C::OnItemEquipped_Event_1(class AItem** Item)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_AutoReloadPerkActivation.BP_AutoReloadPerkActivation_C.OnItemEquipped_Event_1");

	UBP_AutoReloadPerkActivation_C_OnItemEquipped_Event_1_Params params;
	params.Item = Item;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_AutoReloadPerkActivation.BP_AutoReloadPerkActivation_C.ExecuteUbergraph_BP_AutoReloadPerkActivation
// (Final)
// Parameters:
// int*                           EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBP_AutoReloadPerkActivation_C::ExecuteUbergraph_BP_AutoReloadPerkActivation(int* EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_AutoReloadPerkActivation.BP_AutoReloadPerkActivation_C.ExecuteUbergraph_BP_AutoReloadPerkActivation");

	UBP_AutoReloadPerkActivation_C_ExecuteUbergraph_BP_AutoReloadPerkActivation_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
