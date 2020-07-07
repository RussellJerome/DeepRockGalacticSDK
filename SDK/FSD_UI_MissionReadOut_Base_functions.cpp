// DeepRockGalactic SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "FSD_UI_MissionReadOut_Base_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function UI_MissionReadOut_Base.UI_MissionReadOut_Base_C.CanShowMissionType
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class UGeneratedMission**      InMission                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           CanShow                        (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UUI_MissionReadOut_Base_C::CanShowMissionType(class UGeneratedMission** InMission, bool* CanShow)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_MissionReadOut_Base.UI_MissionReadOut_Base_C.CanShowMissionType");

	UUI_MissionReadOut_Base_C_CanShowMissionType_Params params;
	params.InMission = InMission;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (CanShow != nullptr)
		*CanShow = params.CanShow;
}


// Function UI_MissionReadOut_Base.UI_MissionReadOut_Base_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UUI_MissionReadOut_Base_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_MissionReadOut_Base.UI_MissionReadOut_Base_C.Construct");

	UUI_MissionReadOut_Base_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_MissionReadOut_Base.UI_MissionReadOut_Base_C.OnGeneratedMissionChanged
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UGeneratedMission**      OutGeneratedMission            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UUI_MissionReadOut_Base_C::OnGeneratedMissionChanged(class UGeneratedMission** OutGeneratedMission)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_MissionReadOut_Base.UI_MissionReadOut_Base_C.OnGeneratedMissionChanged");

	UUI_MissionReadOut_Base_C_OnGeneratedMissionChanged_Params params;
	params.OutGeneratedMission = OutGeneratedMission;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_MissionReadOut_Base.UI_MissionReadOut_Base_C.ExecuteUbergraph_UI_MissionReadOut_Base
// (Final)
// Parameters:
// int*                           EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UUI_MissionReadOut_Base_C::ExecuteUbergraph_UI_MissionReadOut_Base(int* EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_MissionReadOut_Base.UI_MissionReadOut_Base_C.ExecuteUbergraph_UI_MissionReadOut_Base");

	UUI_MissionReadOut_Base_C_ExecuteUbergraph_UI_MissionReadOut_Base_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_MissionReadOut_Base.UI_MissionReadOut_Base_C.OnMissionSelected__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UGeneratedMission**      InMission                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UUI_MissionReadOut_Base_C::OnMissionSelected__DelegateSignature(class UGeneratedMission** InMission)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_MissionReadOut_Base.UI_MissionReadOut_Base_C.OnMissionSelected__DelegateSignature");

	UUI_MissionReadOut_Base_C_OnMissionSelected__DelegateSignature_Params params;
	params.InMission = InMission;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
