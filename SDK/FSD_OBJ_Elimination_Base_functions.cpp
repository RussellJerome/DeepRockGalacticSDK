// DeepRockGalactic SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "FSD_OBJ_Elimination_Base_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function OBJ_Elimination_Base.OBJ_Elimination_Base_C.GetEnemyInfo
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// class UObjectInfoComponent*    ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)

class UObjectInfoComponent* UOBJ_Elimination_Base_C::GetEnemyInfo()
{
	static auto fn = UObject::FindObject<UFunction>("Function OBJ_Elimination_Base.OBJ_Elimination_Base_C.GetEnemyInfo");

	UOBJ_Elimination_Base_C_GetEnemyInfo_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function OBJ_Elimination_Base.OBJ_Elimination_Base_C.GetInMissionCounterIcon
// (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// class UTexture2D*              ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UTexture2D* UOBJ_Elimination_Base_C::GetInMissionCounterIcon()
{
	static auto fn = UObject::FindObject<UFunction>("Function OBJ_Elimination_Base.OBJ_Elimination_Base_C.GetInMissionCounterIcon");

	UOBJ_Elimination_Base_C_GetInMissionCounterIcon_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function OBJ_Elimination_Base.OBJ_Elimination_Base_C.GetInMissionCounterText
// (Event, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// struct FText                   ReturnValue                    (Parm, OutParm, ReturnParm)

struct FText UOBJ_Elimination_Base_C::GetInMissionCounterText()
{
	static auto fn = UObject::FindObject<UFunction>("Function OBJ_Elimination_Base.OBJ_Elimination_Base_C.GetInMissionCounterText");

	UOBJ_Elimination_Base_C_GetInMissionCounterText_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function OBJ_Elimination_Base.OBJ_Elimination_Base_C.GetMissionIcon
// (Event, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// struct FObjectiveMissionIcon   ReturnValue                    (Parm, OutParm, ReturnParm)

struct FObjectiveMissionIcon UOBJ_Elimination_Base_C::GetMissionIcon()
{
	static auto fn = UObject::FindObject<UFunction>("Function OBJ_Elimination_Base.OBJ_Elimination_Base_C.GetMissionIcon");

	UOBJ_Elimination_Base_C_GetMissionIcon_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function OBJ_Elimination_Base.OBJ_Elimination_Base_C.GetObjectiveIcon
// (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// class UTexture2D*              ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UTexture2D* UOBJ_Elimination_Base_C::GetObjectiveIcon()
{
	static auto fn = UObject::FindObject<UFunction>("Function OBJ_Elimination_Base.OBJ_Elimination_Base_C.GetObjectiveIcon");

	UOBJ_Elimination_Base_C_GetObjectiveIcon_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function OBJ_Elimination_Base.OBJ_Elimination_Base_C.GetObjectiveAmount
// (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// float*                         missionLength                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

int UOBJ_Elimination_Base_C::GetObjectiveAmount(float* missionLength)
{
	static auto fn = UObject::FindObject<UFunction>("Function OBJ_Elimination_Base.OBJ_Elimination_Base_C.GetObjectiveAmount");

	UOBJ_Elimination_Base_C_GetObjectiveAmount_Params params;
	params.missionLength = missionLength;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function OBJ_Elimination_Base.OBJ_Elimination_Base_C.GetInMissionText
// (Event, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// struct FText                   ReturnValue                    (Parm, OutParm, ReturnParm)

struct FText UOBJ_Elimination_Base_C::GetInMissionText()
{
	static auto fn = UObject::FindObject<UFunction>("Function OBJ_Elimination_Base.OBJ_Elimination_Base_C.GetInMissionText");

	UOBJ_Elimination_Base_C_GetInMissionText_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function OBJ_Elimination_Base.OBJ_Elimination_Base_C.GetObjectiveDescription
// (Event, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// float*                         missionLength                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FText                   ReturnValue                    (Parm, OutParm, ReturnParm)

struct FText UOBJ_Elimination_Base_C::GetObjectiveDescription(float* missionLength)
{
	static auto fn = UObject::FindObject<UFunction>("Function OBJ_Elimination_Base.OBJ_Elimination_Base_C.GetObjectiveDescription");

	UOBJ_Elimination_Base_C_GetObjectiveDescription_Params params;
	params.missionLength = missionLength;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function OBJ_Elimination_Base.OBJ_Elimination_Base_C.ReceiveTargetKilled
// (Event, Protected, BlueprintEvent)
// Parameters:
// class UHealthComponentBase**   Health                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void UOBJ_Elimination_Base_C::ReceiveTargetKilled(class UHealthComponentBase** Health)
{
	static auto fn = UObject::FindObject<UFunction>("Function OBJ_Elimination_Base.OBJ_Elimination_Base_C.ReceiveTargetKilled");

	UOBJ_Elimination_Base_C_ReceiveTargetKilled_Params params;
	params.Health = Health;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OBJ_Elimination_Base.OBJ_Elimination_Base_C.ReceiveBeginPlay
// (Event, Public, BlueprintEvent)

void UOBJ_Elimination_Base_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function OBJ_Elimination_Base.OBJ_Elimination_Base_C.ReceiveBeginPlay");

	UOBJ_Elimination_Base_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OBJ_Elimination_Base.OBJ_Elimination_Base_C.ExecuteUbergraph_OBJ_Elimination_Base
// (Final)
// Parameters:
// int*                           EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UOBJ_Elimination_Base_C::ExecuteUbergraph_OBJ_Elimination_Base(int* EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function OBJ_Elimination_Base.OBJ_Elimination_Base_C.ExecuteUbergraph_OBJ_Elimination_Base");

	UOBJ_Elimination_Base_C_ExecuteUbergraph_OBJ_Elimination_Base_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
