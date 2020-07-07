// DeepRockGalactic SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "FSD_UI_MissionStat_Preview_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function UI_MissionStat_Preview.UI_MissionStat_Preview_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UUI_MissionStat_Preview_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_MissionStat_Preview.UI_MissionStat_Preview_C.Construct");

	UUI_MissionStat_Preview_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_MissionStat_Preview.UI_MissionStat_Preview_C.SetMissionStat
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UMissionStat**           MissionStat                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UUI_MissionStat_Preview_C::SetMissionStat(class UMissionStat** MissionStat)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_MissionStat_Preview.UI_MissionStat_Preview_C.SetMissionStat");

	UUI_MissionStat_Preview_C_SetMissionStat_Params params;
	params.MissionStat = MissionStat;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_MissionStat_Preview.UI_MissionStat_Preview_C.ExecuteUbergraph_UI_MissionStat_Preview
// (Final, HasDefaults)
// Parameters:
// int*                           EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UUI_MissionStat_Preview_C::ExecuteUbergraph_UI_MissionStat_Preview(int* EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_MissionStat_Preview.UI_MissionStat_Preview_C.ExecuteUbergraph_UI_MissionStat_Preview");

	UUI_MissionStat_Preview_C_ExecuteUbergraph_UI_MissionStat_Preview_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
