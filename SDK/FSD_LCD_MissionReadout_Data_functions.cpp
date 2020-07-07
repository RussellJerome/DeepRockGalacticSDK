// DeepRockGalactic SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "FSD_LCD_MissionReadout_Data_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function LCD_MissionReadout_Data.LCD_MissionReadout_Data_C.SetGeneratedMission
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UGeneratedMission**      In_Mission                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ULCD_MissionReadout_Data_C::SetGeneratedMission(class UGeneratedMission** In_Mission)
{
	static auto fn = UObject::FindObject<UFunction>("Function LCD_MissionReadout_Data.LCD_MissionReadout_Data_C.SetGeneratedMission");

	ULCD_MissionReadout_Data_C_SetGeneratedMission_Params params;
	params.In_Mission = In_Mission;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function LCD_MissionReadout_Data.LCD_MissionReadout_Data_C.BndEvt__UI_MissionReadOut_Base_K2Node_ComponentBoundEvent_0_OnMissionSelected__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UGeneratedMission**      InMission                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ULCD_MissionReadout_Data_C::BndEvt__UI_MissionReadOut_Base_K2Node_ComponentBoundEvent_0_OnMissionSelected__DelegateSignature(class UGeneratedMission** InMission)
{
	static auto fn = UObject::FindObject<UFunction>("Function LCD_MissionReadout_Data.LCD_MissionReadout_Data_C.BndEvt__UI_MissionReadOut_Base_K2Node_ComponentBoundEvent_0_OnMissionSelected__DelegateSignature");

	ULCD_MissionReadout_Data_C_BndEvt__UI_MissionReadOut_Base_K2Node_ComponentBoundEvent_0_OnMissionSelected__DelegateSignature_Params params;
	params.InMission = InMission;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function LCD_MissionReadout_Data.LCD_MissionReadout_Data_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool*                          IsDesignTime                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ULCD_MissionReadout_Data_C::PreConstruct(bool* IsDesignTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function LCD_MissionReadout_Data.LCD_MissionReadout_Data_C.PreConstruct");

	ULCD_MissionReadout_Data_C_PreConstruct_Params params;
	params.IsDesignTime = IsDesignTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function LCD_MissionReadout_Data.LCD_MissionReadout_Data_C.ExecuteUbergraph_LCD_MissionReadout_Data
// (Final)
// Parameters:
// int*                           EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ULCD_MissionReadout_Data_C::ExecuteUbergraph_LCD_MissionReadout_Data(int* EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function LCD_MissionReadout_Data.LCD_MissionReadout_Data_C.ExecuteUbergraph_LCD_MissionReadout_Data");

	ULCD_MissionReadout_Data_C_ExecuteUbergraph_LCD_MissionReadout_Data_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
