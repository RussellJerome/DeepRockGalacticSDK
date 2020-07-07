// DeepRockGalactic SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "FSD_ITM_Gear_Bar_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function ITM_Gear_Bar.ITM_Gear_Bar_C.SetStageStatus
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UITM_DeepDive_StageIcon_C** Target                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// bool*                          Claimed                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UITM_Gear_Bar_C::SetStageStatus(class UITM_DeepDive_StageIcon_C** Target, bool* Claimed)
{
	static auto fn = UObject::FindObject<UFunction>("Function ITM_Gear_Bar.ITM_Gear_Bar_C.SetStageStatus");

	UITM_Gear_Bar_C_SetStageStatus_Params params;
	params.Target = Target;
	params.Claimed = Claimed;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ITM_Gear_Bar.ITM_Gear_Bar_C.SetDeepDiveProgress
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UDeepDive**              Deep_Dive                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UITM_Gear_Bar_C::SetDeepDiveProgress(class UDeepDive** Deep_Dive)
{
	static auto fn = UObject::FindObject<UFunction>("Function ITM_Gear_Bar.ITM_Gear_Bar_C.SetDeepDiveProgress");

	UITM_Gear_Bar_C_SetDeepDiveProgress_Params params;
	params.Deep_Dive = Deep_Dive;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ITM_Gear_Bar.ITM_Gear_Bar_C.SetActiveProgress
// (Public, BlueprintCallable, BlueprintEvent)

void UITM_Gear_Bar_C::SetActiveProgress()
{
	static auto fn = UObject::FindObject<UFunction>("Function ITM_Gear_Bar.ITM_Gear_Bar_C.SetActiveProgress");

	UITM_Gear_Bar_C_SetActiveProgress_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ITM_Gear_Bar.ITM_Gear_Bar_C.SetCustomProgress
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool*                          Stage1Complete                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool*                          Stage2Complete                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool*                          Stage3Complete                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UITM_Gear_Bar_C::SetCustomProgress(bool* Stage1Complete, bool* Stage2Complete, bool* Stage3Complete)
{
	static auto fn = UObject::FindObject<UFunction>("Function ITM_Gear_Bar.ITM_Gear_Bar_C.SetCustomProgress");

	UITM_Gear_Bar_C_SetCustomProgress_Params params;
	params.Stage1Complete = Stage1Complete;
	params.Stage2Complete = Stage2Complete;
	params.Stage3Complete = Stage3Complete;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ITM_Gear_Bar.ITM_Gear_Bar_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool*                          IsDesignTime                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UITM_Gear_Bar_C::PreConstruct(bool* IsDesignTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function ITM_Gear_Bar.ITM_Gear_Bar_C.PreConstruct");

	UITM_Gear_Bar_C_PreConstruct_Params params;
	params.IsDesignTime = IsDesignTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ITM_Gear_Bar.ITM_Gear_Bar_C.ExecuteUbergraph_ITM_Gear_Bar
// (Final)
// Parameters:
// int*                           EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UITM_Gear_Bar_C::ExecuteUbergraph_ITM_Gear_Bar(int* EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function ITM_Gear_Bar.ITM_Gear_Bar_C.ExecuteUbergraph_ITM_Gear_Bar");

	UITM_Gear_Bar_C_ExecuteUbergraph_ITM_Gear_Bar_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
