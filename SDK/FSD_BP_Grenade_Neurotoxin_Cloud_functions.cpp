// DeepRockGalactic SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "FSD_BP_Grenade_Neurotoxin_Cloud_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function BP_Grenade_Neurotoxin_Cloud.BP_Grenade_Neurotoxin_Cloud_C.BndEvt__SimpleHealth_K2Node_ComponentBoundEvent_0_DeathSig__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UHealthComponentBase**   HealthComponent                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void ABP_Grenade_Neurotoxin_Cloud_C::BndEvt__SimpleHealth_K2Node_ComponentBoundEvent_0_DeathSig__DelegateSignature(class UHealthComponentBase** HealthComponent)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Grenade_Neurotoxin_Cloud.BP_Grenade_Neurotoxin_Cloud_C.BndEvt__SimpleHealth_K2Node_ComponentBoundEvent_0_DeathSig__DelegateSignature");

	ABP_Grenade_Neurotoxin_Cloud_C_BndEvt__SimpleHealth_K2Node_ComponentBoundEvent_0_DeathSig__DelegateSignature_Params params;
	params.HealthComponent = HealthComponent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Grenade_Neurotoxin_Cloud.BP_Grenade_Neurotoxin_Cloud_C.ExecuteUbergraph_BP_Grenade_Neurotoxin_Cloud
// (Final)
// Parameters:
// int*                           EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_Grenade_Neurotoxin_Cloud_C::ExecuteUbergraph_BP_Grenade_Neurotoxin_Cloud(int* EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Grenade_Neurotoxin_Cloud.BP_Grenade_Neurotoxin_Cloud_C.ExecuteUbergraph_BP_Grenade_Neurotoxin_Cloud");

	ABP_Grenade_Neurotoxin_Cloud_C_ExecuteUbergraph_BP_Grenade_Neurotoxin_Cloud_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
