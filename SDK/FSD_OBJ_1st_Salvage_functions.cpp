// DeepRockGalactic SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "FSD_OBJ_1st_Salvage_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function OBJ_1st_Salvage.OBJ_1st_Salvage_C.GetInMissionCounterIcon
// (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// class UTexture2D*              ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UTexture2D* UOBJ_1st_Salvage_C::GetInMissionCounterIcon()
{
	static auto fn = UObject::FindObject<UFunction>("Function OBJ_1st_Salvage.OBJ_1st_Salvage_C.GetInMissionCounterIcon");

	UOBJ_1st_Salvage_C_GetInMissionCounterIcon_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function OBJ_1st_Salvage.OBJ_1st_Salvage_C.GetInMissionCounterText
// (Event, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// struct FText                   ReturnValue                    (Parm, OutParm, ReturnParm)

struct FText UOBJ_1st_Salvage_C::GetInMissionCounterText()
{
	static auto fn = UObject::FindObject<UFunction>("Function OBJ_1st_Salvage.OBJ_1st_Salvage_C.GetInMissionCounterText");

	UOBJ_1st_Salvage_C_GetInMissionCounterText_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function OBJ_1st_Salvage.OBJ_1st_Salvage_C.GetMissionIcon
// (Event, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// struct FObjectiveMissionIcon   ReturnValue                    (Parm, OutParm, ReturnParm)

struct FObjectiveMissionIcon UOBJ_1st_Salvage_C::GetMissionIcon()
{
	static auto fn = UObject::FindObject<UFunction>("Function OBJ_1st_Salvage.OBJ_1st_Salvage_C.GetMissionIcon");

	UOBJ_1st_Salvage_C_GetMissionIcon_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function OBJ_1st_Salvage.OBJ_1st_Salvage_C.GetObjectiveAmount
// (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// float*                         missionLength                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

int UOBJ_1st_Salvage_C::GetObjectiveAmount(float* missionLength)
{
	static auto fn = UObject::FindObject<UFunction>("Function OBJ_1st_Salvage.OBJ_1st_Salvage_C.GetObjectiveAmount");

	UOBJ_1st_Salvage_C_GetObjectiveAmount_Params params;
	params.missionLength = missionLength;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function OBJ_1st_Salvage.OBJ_1st_Salvage_C.GetInMissionText
// (Event, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// struct FText                   ReturnValue                    (Parm, OutParm, ReturnParm)

struct FText UOBJ_1st_Salvage_C::GetInMissionText()
{
	static auto fn = UObject::FindObject<UFunction>("Function OBJ_1st_Salvage.OBJ_1st_Salvage_C.GetInMissionText");

	UOBJ_1st_Salvage_C_GetInMissionText_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function OBJ_1st_Salvage.OBJ_1st_Salvage_C.GetObjectiveDescription
// (Event, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// float*                         missionLength                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FText                   ReturnValue                    (Parm, OutParm, ReturnParm)

struct FText UOBJ_1st_Salvage_C::GetObjectiveDescription(float* missionLength)
{
	static auto fn = UObject::FindObject<UFunction>("Function OBJ_1st_Salvage.OBJ_1st_Salvage_C.GetObjectiveDescription");

	UOBJ_1st_Salvage_C_GetObjectiveDescription_Params params;
	params.missionLength = missionLength;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function OBJ_1st_Salvage.OBJ_1st_Salvage_C.GetObjectiveIcon
// (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// class UTexture2D*              ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UTexture2D* UOBJ_1st_Salvage_C::GetObjectiveIcon()
{
	static auto fn = UObject::FindObject<UFunction>("Function OBJ_1st_Salvage.OBJ_1st_Salvage_C.GetObjectiveIcon");

	UOBJ_1st_Salvage_C_GetObjectiveIcon_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function OBJ_1st_Salvage.OBJ_1st_Salvage_C.ReceiveBeginPlay
// (Event, Public, BlueprintEvent)

void UOBJ_1st_Salvage_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function OBJ_1st_Salvage.OBJ_1st_Salvage_C.ReceiveBeginPlay");

	UOBJ_1st_Salvage_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OBJ_1st_Salvage.OBJ_1st_Salvage_C.AllActorsSalvaged
// (Event, Protected, BlueprintEvent)

void UOBJ_1st_Salvage_C::AllActorsSalvaged()
{
	static auto fn = UObject::FindObject<UFunction>("Function OBJ_1st_Salvage.OBJ_1st_Salvage_C.AllActorsSalvaged");

	UOBJ_1st_Salvage_C_AllActorsSalvaged_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OBJ_1st_Salvage.OBJ_1st_Salvage_C.ExecuteUbergraph_OBJ_1st_Salvage
// (Final)
// Parameters:
// int*                           EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UOBJ_1st_Salvage_C::ExecuteUbergraph_OBJ_1st_Salvage(int* EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function OBJ_1st_Salvage.OBJ_1st_Salvage_C.ExecuteUbergraph_OBJ_1st_Salvage");

	UOBJ_1st_Salvage_C_ExecuteUbergraph_OBJ_1st_Salvage_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
