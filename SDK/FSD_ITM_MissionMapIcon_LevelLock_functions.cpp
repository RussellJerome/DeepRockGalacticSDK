// DeepRockGalactic SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "FSD_ITM_MissionMapIcon_LevelLock_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function ITM_MissionMapIcon_LevelLock.ITM_MissionMapIcon_LevelLock_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool*                          IsDesignTime                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UITM_MissionMapIcon_LevelLock_C::PreConstruct(bool* IsDesignTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function ITM_MissionMapIcon_LevelLock.ITM_MissionMapIcon_LevelLock_C.PreConstruct");

	UITM_MissionMapIcon_LevelLock_C_PreConstruct_Params params;
	params.IsDesignTime = IsDesignTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ITM_MissionMapIcon_LevelLock.ITM_MissionMapIcon_LevelLock_C.ExecuteUbergraph_ITM_MissionMapIcon_LevelLock
// (Final)
// Parameters:
// int*                           EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UITM_MissionMapIcon_LevelLock_C::ExecuteUbergraph_ITM_MissionMapIcon_LevelLock(int* EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function ITM_MissionMapIcon_LevelLock.ITM_MissionMapIcon_LevelLock_C.ExecuteUbergraph_ITM_MissionMapIcon_LevelLock");

	UITM_MissionMapIcon_LevelLock_C_ExecuteUbergraph_ITM_MissionMapIcon_LevelLock_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
