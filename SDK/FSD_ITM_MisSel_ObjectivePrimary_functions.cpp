// DeepRockGalactic SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "FSD_ITM_MisSel_ObjectivePrimary_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function ITM_MisSel_ObjectivePrimary.ITM_MisSel_ObjectivePrimary_C.SetData
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UClass**                 Objective                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float*                         MissionScale                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float*                         HazardBonus                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UITM_MisSel_ObjectivePrimary_C::SetData(class UClass** Objective, float* MissionScale, float* HazardBonus)
{
	static auto fn = UObject::FindObject<UFunction>("Function ITM_MisSel_ObjectivePrimary.ITM_MisSel_ObjectivePrimary_C.SetData");

	UITM_MisSel_ObjectivePrimary_C_SetData_Params params;
	params.Objective = Objective;
	params.MissionScale = MissionScale;
	params.HazardBonus = HazardBonus;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ITM_MisSel_ObjectivePrimary.ITM_MisSel_ObjectivePrimary_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool*                          IsDesignTime                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UITM_MisSel_ObjectivePrimary_C::PreConstruct(bool* IsDesignTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function ITM_MisSel_ObjectivePrimary.ITM_MisSel_ObjectivePrimary_C.PreConstruct");

	UITM_MisSel_ObjectivePrimary_C_PreConstruct_Params params;
	params.IsDesignTime = IsDesignTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ITM_MisSel_ObjectivePrimary.ITM_MisSel_ObjectivePrimary_C.ExecuteUbergraph_ITM_MisSel_ObjectivePrimary
// (Final, HasDefaults)
// Parameters:
// int*                           EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UITM_MisSel_ObjectivePrimary_C::ExecuteUbergraph_ITM_MisSel_ObjectivePrimary(int* EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function ITM_MisSel_ObjectivePrimary.ITM_MisSel_ObjectivePrimary_C.ExecuteUbergraph_ITM_MisSel_ObjectivePrimary");

	UITM_MisSel_ObjectivePrimary_C_ExecuteUbergraph_ITM_MisSel_ObjectivePrimary_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
