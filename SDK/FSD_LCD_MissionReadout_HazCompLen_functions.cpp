// DeepRockGalactic SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "FSD_LCD_MissionReadout_HazCompLen_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function LCD_MissionReadout_HazCompLen.LCD_MissionReadout_HazCompLen_C.AdjustCLBar
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float*                         InputPin                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ULCD_MissionReadout_HazCompLen_C::AdjustCLBar(float* InputPin)
{
	static auto fn = UObject::FindObject<UFunction>("Function LCD_MissionReadout_HazCompLen.LCD_MissionReadout_HazCompLen_C.AdjustCLBar");

	ULCD_MissionReadout_HazCompLen_C_AdjustCLBar_Params params;
	params.InputPin = InputPin;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function LCD_MissionReadout_HazCompLen.LCD_MissionReadout_HazCompLen_C.AdjustBar
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float*                         InputPin                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ULCD_MissionReadout_HazCompLen_C::AdjustBar(float* InputPin)
{
	static auto fn = UObject::FindObject<UFunction>("Function LCD_MissionReadout_HazCompLen.LCD_MissionReadout_HazCompLen_C.AdjustBar");

	ULCD_MissionReadout_HazCompLen_C_AdjustBar_Params params;
	params.InputPin = InputPin;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function LCD_MissionReadout_HazCompLen.LCD_MissionReadout_HazCompLen_C.SetGeneratedMission
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UGeneratedMission**      In_Mission                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ULCD_MissionReadout_HazCompLen_C::SetGeneratedMission(class UGeneratedMission** In_Mission)
{
	static auto fn = UObject::FindObject<UFunction>("Function LCD_MissionReadout_HazCompLen.LCD_MissionReadout_HazCompLen_C.SetGeneratedMission");

	ULCD_MissionReadout_HazCompLen_C_SetGeneratedMission_Params params;
	params.In_Mission = In_Mission;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function LCD_MissionReadout_HazCompLen.LCD_MissionReadout_HazCompLen_C.Tick
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// struct FGeometry*              MyGeometry                     (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// float*                         InDeltaTime                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ULCD_MissionReadout_HazCompLen_C::Tick(struct FGeometry* MyGeometry, float* InDeltaTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function LCD_MissionReadout_HazCompLen.LCD_MissionReadout_HazCompLen_C.Tick");

	ULCD_MissionReadout_HazCompLen_C_Tick_Params params;
	params.MyGeometry = MyGeometry;
	params.InDeltaTime = InDeltaTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function LCD_MissionReadout_HazCompLen.LCD_MissionReadout_HazCompLen_C.BndEvt__UI_MissionReadOut_Base_K2Node_ComponentBoundEvent_0_OnMissionSelected__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UGeneratedMission**      InMission                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ULCD_MissionReadout_HazCompLen_C::BndEvt__UI_MissionReadOut_Base_K2Node_ComponentBoundEvent_0_OnMissionSelected__DelegateSignature(class UGeneratedMission** InMission)
{
	static auto fn = UObject::FindObject<UFunction>("Function LCD_MissionReadout_HazCompLen.LCD_MissionReadout_HazCompLen_C.BndEvt__UI_MissionReadOut_Base_K2Node_ComponentBoundEvent_0_OnMissionSelected__DelegateSignature");

	ULCD_MissionReadout_HazCompLen_C_BndEvt__UI_MissionReadOut_Base_K2Node_ComponentBoundEvent_0_OnMissionSelected__DelegateSignature_Params params;
	params.InMission = InMission;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function LCD_MissionReadout_HazCompLen.LCD_MissionReadout_HazCompLen_C.ExecuteUbergraph_LCD_MissionReadout_HazCompLen
// (Final, HasDefaults)
// Parameters:
// int*                           EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ULCD_MissionReadout_HazCompLen_C::ExecuteUbergraph_LCD_MissionReadout_HazCompLen(int* EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function LCD_MissionReadout_HazCompLen.LCD_MissionReadout_HazCompLen_C.ExecuteUbergraph_LCD_MissionReadout_HazCompLen");

	ULCD_MissionReadout_HazCompLen_C_ExecuteUbergraph_LCD_MissionReadout_HazCompLen_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
