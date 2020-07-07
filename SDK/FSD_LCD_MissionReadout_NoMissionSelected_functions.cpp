// DeepRockGalactic SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "FSD_LCD_MissionReadout_NoMissionSelected_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function LCD_MissionReadout_NoMissionSelected.LCD_MissionReadout_NoMissionSelected_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void ULCD_MissionReadout_NoMissionSelected_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function LCD_MissionReadout_NoMissionSelected.LCD_MissionReadout_NoMissionSelected_C.Construct");

	ULCD_MissionReadout_NoMissionSelected_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function LCD_MissionReadout_NoMissionSelected.LCD_MissionReadout_NoMissionSelected_C.ExecuteUbergraph_LCD_MissionReadout_NoMissionSelected
// (Final)
// Parameters:
// int*                           EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ULCD_MissionReadout_NoMissionSelected_C::ExecuteUbergraph_LCD_MissionReadout_NoMissionSelected(int* EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function LCD_MissionReadout_NoMissionSelected.LCD_MissionReadout_NoMissionSelected_C.ExecuteUbergraph_LCD_MissionReadout_NoMissionSelected");

	ULCD_MissionReadout_NoMissionSelected_C_ExecuteUbergraph_LCD_MissionReadout_NoMissionSelected_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
