// DeepRockGalactic SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "FSD_BP_BarGlass_Standard_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function BP_BarGlass_Standard.BP_BarGlass_Standard_C.Fill
// (Event, Public, BlueprintCallable, BlueprintEvent)

void ABP_BarGlass_Standard_C::Fill()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BarGlass_Standard.BP_BarGlass_Standard_C.Fill");

	ABP_BarGlass_Standard_C_Fill_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_BarGlass_Standard.BP_BarGlass_Standard_C.BndEvt__ParticleSystem_K2Node_ComponentBoundEvent_1_ActorComponentActivatedSignature__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UActorComponent**        Component                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// bool*                          bReset                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_BarGlass_Standard_C::BndEvt__ParticleSystem_K2Node_ComponentBoundEvent_1_ActorComponentActivatedSignature__DelegateSignature(class UActorComponent** Component, bool* bReset)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BarGlass_Standard.BP_BarGlass_Standard_C.BndEvt__ParticleSystem_K2Node_ComponentBoundEvent_1_ActorComponentActivatedSignature__DelegateSignature");

	ABP_BarGlass_Standard_C_BndEvt__ParticleSystem_K2Node_ComponentBoundEvent_1_ActorComponentActivatedSignature__DelegateSignature_Params params;
	params.Component = Component;
	params.bReset = bReset;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_BarGlass_Standard.BP_BarGlass_Standard_C.ExecuteUbergraph_BP_BarGlass_Standard
// (Final)
// Parameters:
// int*                           EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_BarGlass_Standard_C::ExecuteUbergraph_BP_BarGlass_Standard(int* EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BarGlass_Standard.BP_BarGlass_Standard_C.ExecuteUbergraph_BP_BarGlass_Standard");

	ABP_BarGlass_Standard_C_ExecuteUbergraph_BP_BarGlass_Standard_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
