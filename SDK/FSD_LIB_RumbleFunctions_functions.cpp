// DeepRockGalactic SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "FSD_LIB_RumbleFunctions_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function LIB_RumbleFunctions.LIB_RumbleFunctions_C.FSD Rumble At Actor
// (Static, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor**                 Actor                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UForceFeedbackEffect**   ForceFeedbackEffect            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool*                          bLooping                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float*                         IntensityMultiplier            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float*                         StartTime                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool*                          bAutoDestroy                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UObject**                __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ULIB_RumbleFunctions_C::STATIC_FSD_Rumble_At_Actor(class AActor** Actor, class UForceFeedbackEffect** ForceFeedbackEffect, bool* bLooping, float* IntensityMultiplier, float* StartTime, bool* bAutoDestroy, class UObject** __WorldContext)
{
	static auto fn = UObject::FindObject<UFunction>("Function LIB_RumbleFunctions.LIB_RumbleFunctions_C.FSD Rumble At Actor");

	ULIB_RumbleFunctions_C_FSD_Rumble_At_Actor_Params params;
	params.Actor = Actor;
	params.ForceFeedbackEffect = ForceFeedbackEffect;
	params.bLooping = bLooping;
	params.IntensityMultiplier = IntensityMultiplier;
	params.StartTime = StartTime;
	params.bAutoDestroy = bAutoDestroy;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function LIB_RumbleFunctions.LIB_RumbleFunctions_C.FSD Rumble At Location
// (Static, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UObject**                WorldContextObject             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UForceFeedbackEffect**   ForceFeedbackEffect            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FVector*                Location                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FRotator*               Rotation                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool*                          bLooping                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float*                         IntensityMultiplier            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float*                         StartTime                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool*                          bAutoDestroy                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UObject**                __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ULIB_RumbleFunctions_C::STATIC_FSD_Rumble_At_Location(class UObject** WorldContextObject, class UForceFeedbackEffect** ForceFeedbackEffect, struct FVector* Location, struct FRotator* Rotation, bool* bLooping, float* IntensityMultiplier, float* StartTime, bool* bAutoDestroy, class UObject** __WorldContext)
{
	static auto fn = UObject::FindObject<UFunction>("Function LIB_RumbleFunctions.LIB_RumbleFunctions_C.FSD Rumble At Location");

	ULIB_RumbleFunctions_C_FSD_Rumble_At_Location_Params params;
	params.WorldContextObject = WorldContextObject;
	params.ForceFeedbackEffect = ForceFeedbackEffect;
	params.Location = Location;
	params.Rotation = Rotation;
	params.bLooping = bLooping;
	params.IntensityMultiplier = IntensityMultiplier;
	params.StartTime = StartTime;
	params.bAutoDestroy = bAutoDestroy;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
