// DeepRockGalactic SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "FSD_ITM_MisSel_DotMarker_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function ITM_MisSel_DotMarker.ITM_MisSel_DotMarker_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool*                          IsDesignTime                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UITM_MisSel_DotMarker_C::PreConstruct(bool* IsDesignTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function ITM_MisSel_DotMarker.ITM_MisSel_DotMarker_C.PreConstruct");

	UITM_MisSel_DotMarker_C_PreConstruct_Params params;
	params.IsDesignTime = IsDesignTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ITM_MisSel_DotMarker.ITM_MisSel_DotMarker_C.SetData
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int*                           Level                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UITM_MisSel_DotMarker_C::SetData(int* Level)
{
	static auto fn = UObject::FindObject<UFunction>("Function ITM_MisSel_DotMarker.ITM_MisSel_DotMarker_C.SetData");

	UITM_MisSel_DotMarker_C_SetData_Params params;
	params.Level = Level;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ITM_MisSel_DotMarker.ITM_MisSel_DotMarker_C.ExecuteUbergraph_ITM_MisSel_DotMarker
// (Final)
// Parameters:
// int*                           EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UITM_MisSel_DotMarker_C::ExecuteUbergraph_ITM_MisSel_DotMarker(int* EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function ITM_MisSel_DotMarker.ITM_MisSel_DotMarker_C.ExecuteUbergraph_ITM_MisSel_DotMarker");

	UITM_MisSel_DotMarker_C_ExecuteUbergraph_ITM_MisSel_DotMarker_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
