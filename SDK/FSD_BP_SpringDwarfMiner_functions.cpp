// DeepRockGalactic SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "FSD_BP_SpringDwarfMiner_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function BP_SpringDwarfMiner.BP_SpringDwarfMiner_C.BndEvt__InstantUsable_K2Node_ComponentBoundEvent_0_UsedBySignature__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class APlayerCharacter**       user                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_SpringDwarfMiner_C::BndEvt__InstantUsable_K2Node_ComponentBoundEvent_0_UsedBySignature__DelegateSignature(class APlayerCharacter** user)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_SpringDwarfMiner.BP_SpringDwarfMiner_C.BndEvt__InstantUsable_K2Node_ComponentBoundEvent_0_UsedBySignature__DelegateSignature");

	ABP_SpringDwarfMiner_C_BndEvt__InstantUsable_K2Node_ComponentBoundEvent_0_UsedBySignature__DelegateSignature_Params params;
	params.user = user;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_SpringDwarfMiner.BP_SpringDwarfMiner_C.ImpulseSpringDwarf
// (Net, NetMulticast, BlueprintCallable, BlueprintEvent)

void ABP_SpringDwarfMiner_C::ImpulseSpringDwarf()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_SpringDwarfMiner.BP_SpringDwarfMiner_C.ImpulseSpringDwarf");

	ABP_SpringDwarfMiner_C_ImpulseSpringDwarf_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_SpringDwarfMiner.BP_SpringDwarfMiner_C.ExecuteUbergraph_BP_SpringDwarfMiner
// (Final)
// Parameters:
// int*                           EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_SpringDwarfMiner_C::ExecuteUbergraph_BP_SpringDwarfMiner(int* EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_SpringDwarfMiner.BP_SpringDwarfMiner_C.ExecuteUbergraph_BP_SpringDwarfMiner");

	ABP_SpringDwarfMiner_C_ExecuteUbergraph_BP_SpringDwarfMiner_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
