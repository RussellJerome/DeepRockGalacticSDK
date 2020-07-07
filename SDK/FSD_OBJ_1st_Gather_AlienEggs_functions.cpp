// DeepRockGalactic SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "FSD_OBJ_1st_Gather_AlienEggs_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function OBJ_1st_Gather_AlienEggs.OBJ_1st_Gather_AlienEggs_C.GetMissionIcon
// (Event, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// struct FObjectiveMissionIcon   ReturnValue                    (Parm, OutParm, ReturnParm)

struct FObjectiveMissionIcon UOBJ_1st_Gather_AlienEggs_C::GetMissionIcon()
{
	static auto fn = UObject::FindObject<UFunction>("Function OBJ_1st_Gather_AlienEggs.OBJ_1st_Gather_AlienEggs_C.GetMissionIcon");

	UOBJ_1st_Gather_AlienEggs_C_GetMissionIcon_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function OBJ_1st_Gather_AlienEggs.OBJ_1st_Gather_AlienEggs_C.GetNumberOfSpeicalEggs
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// TArray<class AActor*>*         TargetArray                    (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
// int                            count                          (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UOBJ_1st_Gather_AlienEggs_C::GetNumberOfSpeicalEggs(TArray<class AActor*>* TargetArray, int* count)
{
	static auto fn = UObject::FindObject<UFunction>("Function OBJ_1st_Gather_AlienEggs.OBJ_1st_Gather_AlienEggs_C.GetNumberOfSpeicalEggs");

	UOBJ_1st_Gather_AlienEggs_C_GetNumberOfSpeicalEggs_Params params;
	params.TargetArray = TargetArray;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (count != nullptr)
		*count = params.count;
}


// Function OBJ_1st_Gather_AlienEggs.OBJ_1st_Gather_AlienEggs_C.TurnOnSpecialEggs
// (Public, BlueprintCallable, BlueprintEvent)

void UOBJ_1st_Gather_AlienEggs_C::TurnOnSpecialEggs()
{
	static auto fn = UObject::FindObject<UFunction>("Function OBJ_1st_Gather_AlienEggs.OBJ_1st_Gather_AlienEggs_C.TurnOnSpecialEggs");

	UOBJ_1st_Gather_AlienEggs_C_TurnOnSpecialEggs_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OBJ_1st_Gather_AlienEggs.OBJ_1st_Gather_AlienEggs_C.Receive_StartTracking
// (Event, Protected, BlueprintEvent)

void UOBJ_1st_Gather_AlienEggs_C::Receive_StartTracking()
{
	static auto fn = UObject::FindObject<UFunction>("Function OBJ_1st_Gather_AlienEggs.OBJ_1st_Gather_AlienEggs_C.Receive_StartTracking");

	UOBJ_1st_Gather_AlienEggs_C_Receive_StartTracking_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OBJ_1st_Gather_AlienEggs.OBJ_1st_Gather_AlienEggs_C.ExecuteUbergraph_OBJ_1st_Gather_AlienEggs
// (Final)
// Parameters:
// int*                           EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UOBJ_1st_Gather_AlienEggs_C::ExecuteUbergraph_OBJ_1st_Gather_AlienEggs(int* EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function OBJ_1st_Gather_AlienEggs.OBJ_1st_Gather_AlienEggs_C.ExecuteUbergraph_OBJ_1st_Gather_AlienEggs");

	UOBJ_1st_Gather_AlienEggs_C_ExecuteUbergraph_OBJ_1st_Gather_AlienEggs_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
