// DeepRockGalactic SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "FSD_ITM_MisSel_MissionIconSmall_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function ITM_MisSel_MissionIconSmall.ITM_MisSel_MissionIconSmall_C.SetData
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UGeneratedMission**      mission                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UITM_MisSel_MissionIconSmall_C::SetData(class UGeneratedMission** mission)
{
	static auto fn = UObject::FindObject<UFunction>("Function ITM_MisSel_MissionIconSmall.ITM_MisSel_MissionIconSmall_C.SetData");

	UITM_MisSel_MissionIconSmall_C_SetData_Params params;
	params.mission = mission;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ITM_MisSel_MissionIconSmall.ITM_MisSel_MissionIconSmall_C.BndEvt__ITEM_MissionSelection_MissionIconBasic_K2Node_ComponentBoundEvent_19_OnClicked__DelegateSignature
// (BlueprintEvent)

void UITM_MisSel_MissionIconSmall_C::BndEvt__ITEM_MissionSelection_MissionIconBasic_K2Node_ComponentBoundEvent_19_OnClicked__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function ITM_MisSel_MissionIconSmall.ITM_MisSel_MissionIconSmall_C.BndEvt__ITEM_MissionSelection_MissionIconBasic_K2Node_ComponentBoundEvent_19_OnClicked__DelegateSignature");

	UITM_MisSel_MissionIconSmall_C_BndEvt__ITEM_MissionSelection_MissionIconBasic_K2Node_ComponentBoundEvent_19_OnClicked__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ITM_MisSel_MissionIconSmall.ITM_MisSel_MissionIconSmall_C.ExecuteUbergraph_ITM_MisSel_MissionIconSmall
// (Final)
// Parameters:
// int*                           EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UITM_MisSel_MissionIconSmall_C::ExecuteUbergraph_ITM_MisSel_MissionIconSmall(int* EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function ITM_MisSel_MissionIconSmall.ITM_MisSel_MissionIconSmall_C.ExecuteUbergraph_ITM_MisSel_MissionIconSmall");

	UITM_MisSel_MissionIconSmall_C_ExecuteUbergraph_ITM_MisSel_MissionIconSmall_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
