// DeepRockGalactic SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "FSD_LCD_MissionReadout_Garbage01_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function LCD_MissionReadout_Garbage01.LCD_MissionReadout_Garbage01_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void ULCD_MissionReadout_Garbage01_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function LCD_MissionReadout_Garbage01.LCD_MissionReadout_Garbage01_C.Construct");

	ULCD_MissionReadout_Garbage01_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function LCD_MissionReadout_Garbage01.LCD_MissionReadout_Garbage01_C.ExecuteUbergraph_LCD_MissionReadout_Garbage01
// (Final)
// Parameters:
// int*                           EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ULCD_MissionReadout_Garbage01_C::ExecuteUbergraph_LCD_MissionReadout_Garbage01(int* EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function LCD_MissionReadout_Garbage01.LCD_MissionReadout_Garbage01_C.ExecuteUbergraph_LCD_MissionReadout_Garbage01");

	ULCD_MissionReadout_Garbage01_C_ExecuteUbergraph_LCD_MissionReadout_Garbage01_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
