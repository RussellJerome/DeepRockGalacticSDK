// DeepRockGalactic SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "FSD_LCD_MissionReadout_Biome_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function LCD_MissionReadout_Biome.LCD_MissionReadout_Biome_C.BndEvt__UI_MissionReadOut_Base_K2Node_ComponentBoundEvent_0_OnMissionSelected__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UGeneratedMission**      InMission                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ULCD_MissionReadout_Biome_C::BndEvt__UI_MissionReadOut_Base_K2Node_ComponentBoundEvent_0_OnMissionSelected__DelegateSignature(class UGeneratedMission** InMission)
{
	static auto fn = UObject::FindObject<UFunction>("Function LCD_MissionReadout_Biome.LCD_MissionReadout_Biome_C.BndEvt__UI_MissionReadOut_Base_K2Node_ComponentBoundEvent_0_OnMissionSelected__DelegateSignature");

	ULCD_MissionReadout_Biome_C_BndEvt__UI_MissionReadOut_Base_K2Node_ComponentBoundEvent_0_OnMissionSelected__DelegateSignature_Params params;
	params.InMission = InMission;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function LCD_MissionReadout_Biome.LCD_MissionReadout_Biome_C.ExecuteUbergraph_LCD_MissionReadout_Biome
// (Final, HasDefaults)
// Parameters:
// int*                           EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ULCD_MissionReadout_Biome_C::ExecuteUbergraph_LCD_MissionReadout_Biome(int* EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function LCD_MissionReadout_Biome.LCD_MissionReadout_Biome_C.ExecuteUbergraph_LCD_MissionReadout_Biome");

	ULCD_MissionReadout_Biome_C_ExecuteUbergraph_LCD_MissionReadout_Biome_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
