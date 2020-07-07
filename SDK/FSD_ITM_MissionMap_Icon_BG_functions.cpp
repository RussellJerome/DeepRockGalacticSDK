// DeepRockGalactic SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "FSD_ITM_MissionMap_Icon_BG_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function ITM_MissionMap_Icon_BG.ITM_MissionMap_Icon_BG_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool*                          IsDesignTime                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UITM_MissionMap_Icon_BG_C::PreConstruct(bool* IsDesignTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function ITM_MissionMap_Icon_BG.ITM_MissionMap_Icon_BG_C.PreConstruct");

	UITM_MissionMap_Icon_BG_C_PreConstruct_Params params;
	params.IsDesignTime = IsDesignTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ITM_MissionMap_Icon_BG.ITM_MissionMap_Icon_BG_C.ExecuteUbergraph_ITM_MissionMap_Icon_BG
// (Final)
// Parameters:
// int*                           EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UITM_MissionMap_Icon_BG_C::ExecuteUbergraph_ITM_MissionMap_Icon_BG(int* EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function ITM_MissionMap_Icon_BG.ITM_MissionMap_Icon_BG_C.ExecuteUbergraph_ITM_MissionMap_Icon_BG");

	UITM_MissionMap_Icon_BG_C_ExecuteUbergraph_ITM_MissionMap_Icon_BG_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
