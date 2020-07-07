// DeepRockGalactic SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "FSD_BP_BarGlass_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function BP_BarGlass.BP_BarGlass_C.BndEvt__InstantUsable_K2Node_ComponentBoundEvent_0_UsedBySignature__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class APlayerCharacter**       user                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_BarGlass_C::BndEvt__InstantUsable_K2Node_ComponentBoundEvent_0_UsedBySignature__DelegateSignature(class APlayerCharacter** user)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BarGlass.BP_BarGlass_C.BndEvt__InstantUsable_K2Node_ComponentBoundEvent_0_UsedBySignature__DelegateSignature");

	ABP_BarGlass_C_BndEvt__InstantUsable_K2Node_ComponentBoundEvent_0_UsedBySignature__DelegateSignature_Params params;
	params.user = user;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_BarGlass.BP_BarGlass_C.OnRep_DrinkableData
// (Event, Protected, BlueprintEvent)

void ABP_BarGlass_C::OnRep_DrinkableData()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BarGlass.BP_BarGlass_C.OnRep_DrinkableData");

	ABP_BarGlass_C_OnRep_DrinkableData_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_BarGlass.BP_BarGlass_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void ABP_BarGlass_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BarGlass.BP_BarGlass_C.ReceiveBeginPlay");

	ABP_BarGlass_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_BarGlass.BP_BarGlass_C.ExecuteUbergraph_BP_BarGlass
// (Final, HasDefaults)
// Parameters:
// int*                           EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_BarGlass_C::ExecuteUbergraph_BP_BarGlass(int* EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BarGlass.BP_BarGlass_C.ExecuteUbergraph_BP_BarGlass");

	ABP_BarGlass_C_ExecuteUbergraph_BP_BarGlass_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
