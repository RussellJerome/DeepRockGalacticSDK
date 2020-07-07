// DeepRockGalactic SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "FSD_MixFunctions_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function MixFunctions.MixFunctions_C.PushMixAtDistanceForDuration
// (Static, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class USoundMix**              InSoundMixModifier             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class AActor**                 Target                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float*                         MinDistance                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float*                         MaxDistance                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float*                         Duration                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UObject**                __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UMixFunctions_C::STATIC_PushMixAtDistanceForDuration(class USoundMix** InSoundMixModifier, class AActor** Target, float* MinDistance, float* MaxDistance, float* Duration, class UObject** __WorldContext)
{
	static auto fn = UObject::FindObject<UFunction>("Function MixFunctions.MixFunctions_C.PushMixAtDistanceForDuration");

	UMixFunctions_C_PushMixAtDistanceForDuration_Params params;
	params.InSoundMixModifier = InSoundMixModifier;
	params.Target = Target;
	params.MinDistance = MinDistance;
	params.MaxDistance = MaxDistance;
	params.Duration = Duration;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MixFunctions.MixFunctions_C.PopMix
// (Static, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class USoundMix**              InSoundMixModifier             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UObject**                __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UMixFunctions_C::STATIC_PopMix(class USoundMix** InSoundMixModifier, class UObject** __WorldContext)
{
	static auto fn = UObject::FindObject<UFunction>("Function MixFunctions.MixFunctions_C.PopMix");

	UMixFunctions_C_PopMix_Params params;
	params.InSoundMixModifier = InSoundMixModifier;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MixFunctions.MixFunctions_C.PopMixAtDistance
// (Static, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class USoundMix**              InSoundMixModifier             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class AActor**                 Target                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float*                         MinDistance                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float*                         MaxDistance                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UObject**                __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UMixFunctions_C::STATIC_PopMixAtDistance(class USoundMix** InSoundMixModifier, class AActor** Target, float* MinDistance, float* MaxDistance, class UObject** __WorldContext)
{
	static auto fn = UObject::FindObject<UFunction>("Function MixFunctions.MixFunctions_C.PopMixAtDistance");

	UMixFunctions_C_PopMixAtDistance_Params params;
	params.InSoundMixModifier = InSoundMixModifier;
	params.Target = Target;
	params.MinDistance = MinDistance;
	params.MaxDistance = MaxDistance;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MixFunctions.MixFunctions_C.PushMixAtDistance
// (Static, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class USoundMix**              InSoundMixModifier             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class AActor**                 Target                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float*                         MinDistance                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float*                         MaxDistance                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UObject**                __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UMixFunctions_C::STATIC_PushMixAtDistance(class USoundMix** InSoundMixModifier, class AActor** Target, float* MinDistance, float* MaxDistance, class UObject** __WorldContext)
{
	static auto fn = UObject::FindObject<UFunction>("Function MixFunctions.MixFunctions_C.PushMixAtDistance");

	UMixFunctions_C_PushMixAtDistance_Params params;
	params.InSoundMixModifier = InSoundMixModifier;
	params.Target = Target;
	params.MinDistance = MinDistance;
	params.MaxDistance = MaxDistance;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
