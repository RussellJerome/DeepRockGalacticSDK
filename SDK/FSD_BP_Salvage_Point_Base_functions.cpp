// DeepRockGalactic SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "FSD_BP_Salvage_Point_Base_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function BP_Salvage_Point_Base.BP_Salvage_Point_Base_C.BndEvt__SingleUsable_K2Node_ComponentBoundEvent_0_UsableChangedSignature__DelegateSignature
// (BlueprintEvent)
// Parameters:
// bool*                          canUse                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_Salvage_Point_Base_C::BndEvt__SingleUsable_K2Node_ComponentBoundEvent_0_UsableChangedSignature__DelegateSignature(bool* canUse)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Salvage_Point_Base.BP_Salvage_Point_Base_C.BndEvt__SingleUsable_K2Node_ComponentBoundEvent_0_UsableChangedSignature__DelegateSignature");

	ABP_Salvage_Point_Base_C_BndEvt__SingleUsable_K2Node_ComponentBoundEvent_0_UsableChangedSignature__DelegateSignature_Params params;
	params.canUse = canUse;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Salvage_Point_Base.BP_Salvage_Point_Base_C.BndEvt__SingleUsable_K2Node_ComponentBoundEvent_1_UsedBySignature__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class APlayerCharacter**       user                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_Salvage_Point_Base_C::BndEvt__SingleUsable_K2Node_ComponentBoundEvent_1_UsedBySignature__DelegateSignature(class APlayerCharacter** user)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Salvage_Point_Base.BP_Salvage_Point_Base_C.BndEvt__SingleUsable_K2Node_ComponentBoundEvent_1_UsedBySignature__DelegateSignature");

	ABP_Salvage_Point_Base_C_BndEvt__SingleUsable_K2Node_ComponentBoundEvent_1_UsedBySignature__DelegateSignature_Params params;
	params.user = user;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Salvage_Point_Base.BP_Salvage_Point_Base_C.EnableRepair
// (BlueprintCallable, BlueprintEvent)

void ABP_Salvage_Point_Base_C::EnableRepair()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Salvage_Point_Base.BP_Salvage_Point_Base_C.EnableRepair");

	ABP_Salvage_Point_Base_C_EnableRepair_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Salvage_Point_Base.BP_Salvage_Point_Base_C.ExecuteUbergraph_BP_Salvage_Point_Base
// (Final)
// Parameters:
// int*                           EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_Salvage_Point_Base_C::ExecuteUbergraph_BP_Salvage_Point_Base(int* EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Salvage_Point_Base.BP_Salvage_Point_Base_C.ExecuteUbergraph_BP_Salvage_Point_Base");

	ABP_Salvage_Point_Base_C_ExecuteUbergraph_BP_Salvage_Point_Base_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
