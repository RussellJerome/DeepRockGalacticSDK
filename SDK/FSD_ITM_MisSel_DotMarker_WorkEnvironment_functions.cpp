// DeepRockGalactic SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "FSD_ITM_MisSel_DotMarker_WorkEnvironment_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function ITM_MisSel_DotMarker_WorkEnvironment.ITM_MisSel_DotMarker_WorkEnvironment_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool*                          IsDesignTime                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UITM_MisSel_DotMarker_WorkEnvironment_C::PreConstruct(bool* IsDesignTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function ITM_MisSel_DotMarker_WorkEnvironment.ITM_MisSel_DotMarker_WorkEnvironment_C.PreConstruct");

	UITM_MisSel_DotMarker_WorkEnvironment_C_PreConstruct_Params params;
	params.IsDesignTime = IsDesignTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ITM_MisSel_DotMarker_WorkEnvironment.ITM_MisSel_DotMarker_WorkEnvironment_C.SetData
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UDifficultySetting**     Difficulty                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UITM_MisSel_DotMarker_WorkEnvironment_C::SetData(class UDifficultySetting** Difficulty)
{
	static auto fn = UObject::FindObject<UFunction>("Function ITM_MisSel_DotMarker_WorkEnvironment.ITM_MisSel_DotMarker_WorkEnvironment_C.SetData");

	UITM_MisSel_DotMarker_WorkEnvironment_C_SetData_Params params;
	params.Difficulty = Difficulty;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ITM_MisSel_DotMarker_WorkEnvironment.ITM_MisSel_DotMarker_WorkEnvironment_C.ExecuteUbergraph_ITM_MisSel_DotMarker_WorkEnvironment
// (Final)
// Parameters:
// int*                           EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UITM_MisSel_DotMarker_WorkEnvironment_C::ExecuteUbergraph_ITM_MisSel_DotMarker_WorkEnvironment(int* EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function ITM_MisSel_DotMarker_WorkEnvironment.ITM_MisSel_DotMarker_WorkEnvironment_C.ExecuteUbergraph_ITM_MisSel_DotMarker_WorkEnvironment");

	UITM_MisSel_DotMarker_WorkEnvironment_C_ExecuteUbergraph_ITM_MisSel_DotMarker_WorkEnvironment_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
