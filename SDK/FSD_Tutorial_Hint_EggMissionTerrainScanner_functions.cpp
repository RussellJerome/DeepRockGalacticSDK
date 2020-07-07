// DeepRockGalactic SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "FSD_Tutorial_Hint_EggMissionTerrainScanner_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function Tutorial_Hint_EggMissionTerrainScanner.Tutorial_Hint_EggMissionTerrainScanner_C.ReceiveOnInitialized
// (Event, Protected, BlueprintEvent)

void UTutorial_Hint_EggMissionTerrainScanner_C::ReceiveOnInitialized()
{
	static auto fn = UObject::FindObject<UFunction>("Function Tutorial_Hint_EggMissionTerrainScanner.Tutorial_Hint_EggMissionTerrainScanner_C.ReceiveOnInitialized");

	UTutorial_Hint_EggMissionTerrainScanner_C_ReceiveOnInitialized_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Tutorial_Hint_EggMissionTerrainScanner.Tutorial_Hint_EggMissionTerrainScanner_C.OnToggleMapTool_Event
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool*                          Visible                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UTutorial_Hint_EggMissionTerrainScanner_C::OnToggleMapTool_Event(bool* Visible)
{
	static auto fn = UObject::FindObject<UFunction>("Function Tutorial_Hint_EggMissionTerrainScanner.Tutorial_Hint_EggMissionTerrainScanner_C.OnToggleMapTool_Event");

	UTutorial_Hint_EggMissionTerrainScanner_C_OnToggleMapTool_Event_Params params;
	params.Visible = Visible;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Tutorial_Hint_EggMissionTerrainScanner.Tutorial_Hint_EggMissionTerrainScanner_C.Mark Ready
// (BlueprintCallable, BlueprintEvent)

void UTutorial_Hint_EggMissionTerrainScanner_C::Mark_Ready()
{
	static auto fn = UObject::FindObject<UFunction>("Function Tutorial_Hint_EggMissionTerrainScanner.Tutorial_Hint_EggMissionTerrainScanner_C.Mark Ready");

	UTutorial_Hint_EggMissionTerrainScanner_C_Mark_Ready_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Tutorial_Hint_EggMissionTerrainScanner.Tutorial_Hint_EggMissionTerrainScanner_C.ReceiveOnHidden
// (Event, Protected, BlueprintEvent)

void UTutorial_Hint_EggMissionTerrainScanner_C::ReceiveOnHidden()
{
	static auto fn = UObject::FindObject<UFunction>("Function Tutorial_Hint_EggMissionTerrainScanner.Tutorial_Hint_EggMissionTerrainScanner_C.ReceiveOnHidden");

	UTutorial_Hint_EggMissionTerrainScanner_C_ReceiveOnHidden_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Tutorial_Hint_EggMissionTerrainScanner.Tutorial_Hint_EggMissionTerrainScanner_C.ExecuteUbergraph_Tutorial_Hint_EggMissionTerrainScanner
// (Final)
// Parameters:
// int*                           EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UTutorial_Hint_EggMissionTerrainScanner_C::ExecuteUbergraph_Tutorial_Hint_EggMissionTerrainScanner(int* EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Tutorial_Hint_EggMissionTerrainScanner.Tutorial_Hint_EggMissionTerrainScanner_C.ExecuteUbergraph_Tutorial_Hint_EggMissionTerrainScanner");

	UTutorial_Hint_EggMissionTerrainScanner_C_ExecuteUbergraph_Tutorial_Hint_EggMissionTerrainScanner_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
