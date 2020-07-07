// DeepRockGalactic SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "FSD_ITM_MisSel_DotMarker_CaveDifficulty_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function ITM_MisSel_DotMarker_CaveDifficulty.ITM_MisSel_DotMarker_CaveDifficulty_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool*                          IsDesignTime                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UITM_MisSel_DotMarker_CaveDifficulty_C::PreConstruct(bool* IsDesignTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function ITM_MisSel_DotMarker_CaveDifficulty.ITM_MisSel_DotMarker_CaveDifficulty_C.PreConstruct");

	UITM_MisSel_DotMarker_CaveDifficulty_C_PreConstruct_Params params;
	params.IsDesignTime = IsDesignTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ITM_MisSel_DotMarker_CaveDifficulty.ITM_MisSel_DotMarker_CaveDifficulty_C.SetData
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int*                           Level                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UITM_MisSel_DotMarker_CaveDifficulty_C::SetData(int* Level)
{
	static auto fn = UObject::FindObject<UFunction>("Function ITM_MisSel_DotMarker_CaveDifficulty.ITM_MisSel_DotMarker_CaveDifficulty_C.SetData");

	UITM_MisSel_DotMarker_CaveDifficulty_C_SetData_Params params;
	params.Level = Level;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ITM_MisSel_DotMarker_CaveDifficulty.ITM_MisSel_DotMarker_CaveDifficulty_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UITM_MisSel_DotMarker_CaveDifficulty_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function ITM_MisSel_DotMarker_CaveDifficulty.ITM_MisSel_DotMarker_CaveDifficulty_C.Construct");

	UITM_MisSel_DotMarker_CaveDifficulty_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ITM_MisSel_DotMarker_CaveDifficulty.ITM_MisSel_DotMarker_CaveDifficulty_C.ExecuteUbergraph_ITM_MisSel_DotMarker_CaveDifficulty
// (Final)
// Parameters:
// int*                           EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UITM_MisSel_DotMarker_CaveDifficulty_C::ExecuteUbergraph_ITM_MisSel_DotMarker_CaveDifficulty(int* EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function ITM_MisSel_DotMarker_CaveDifficulty.ITM_MisSel_DotMarker_CaveDifficulty_C.ExecuteUbergraph_ITM_MisSel_DotMarker_CaveDifficulty");

	UITM_MisSel_DotMarker_CaveDifficulty_C_ExecuteUbergraph_ITM_MisSel_DotMarker_CaveDifficulty_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
