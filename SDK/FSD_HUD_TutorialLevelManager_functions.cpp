// DeepRockGalactic SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "FSD_HUD_TutorialLevelManager_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function HUD_TutorialLevelManager.HUD_TutorialLevelManager_C.OnNewActiveTutorial
// (Event, Public, BlueprintEvent)
// Parameters:
// class UTutorialContentWidget** Widget                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void UHUD_TutorialLevelManager_C::OnNewActiveTutorial(class UTutorialContentWidget** Widget)
{
	static auto fn = UObject::FindObject<UFunction>("Function HUD_TutorialLevelManager.HUD_TutorialLevelManager_C.OnNewActiveTutorial");

	UHUD_TutorialLevelManager_C_OnNewActiveTutorial_Params params;
	params.Widget = Widget;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function HUD_TutorialLevelManager.HUD_TutorialLevelManager_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UHUD_TutorialLevelManager_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function HUD_TutorialLevelManager.HUD_TutorialLevelManager_C.Construct");

	UHUD_TutorialLevelManager_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function HUD_TutorialLevelManager.HUD_TutorialLevelManager_C.ExecuteUbergraph_HUD_TutorialLevelManager
// (Final)
// Parameters:
// int*                           EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UHUD_TutorialLevelManager_C::ExecuteUbergraph_HUD_TutorialLevelManager(int* EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function HUD_TutorialLevelManager.HUD_TutorialLevelManager_C.ExecuteUbergraph_HUD_TutorialLevelManager");

	UHUD_TutorialLevelManager_C_ExecuteUbergraph_HUD_TutorialLevelManager_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
