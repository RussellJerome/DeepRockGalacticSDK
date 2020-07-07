// DeepRockGalactic SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "FSD_ITM_MisSel_MissionIconBasic_Locked_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function ITM_MisSel_MissionIconBasic_Locked.ITM_MisSel_MissionIconBasic_Locked_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool*                          IsDesignTime                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UITM_MisSel_MissionIconBasic_Locked_C::PreConstruct(bool* IsDesignTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function ITM_MisSel_MissionIconBasic_Locked.ITM_MisSel_MissionIconBasic_Locked_C.PreConstruct");

	UITM_MisSel_MissionIconBasic_Locked_C_PreConstruct_Params params;
	params.IsDesignTime = IsDesignTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ITM_MisSel_MissionIconBasic_Locked.ITM_MisSel_MissionIconBasic_Locked_C.ExecuteUbergraph_ITM_MisSel_MissionIconBasic_Locked
// (Final)
// Parameters:
// int*                           EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UITM_MisSel_MissionIconBasic_Locked_C::ExecuteUbergraph_ITM_MisSel_MissionIconBasic_Locked(int* EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function ITM_MisSel_MissionIconBasic_Locked.ITM_MisSel_MissionIconBasic_Locked_C.ExecuteUbergraph_ITM_MisSel_MissionIconBasic_Locked");

	UITM_MisSel_MissionIconBasic_Locked_C_ExecuteUbergraph_ITM_MisSel_MissionIconBasic_Locked_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
