// DeepRockGalactic SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "FSD_OnScreen_SentryDistance_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function OnScreen_SentryDistance.OnScreen_SentryDistance_C.Set End Points
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor**                 Target                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class AActor**                 Destination                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UOnScreen_SentryDistance_C::Set_End_Points(class AActor** Target, class AActor** Destination)
{
	static auto fn = UObject::FindObject<UFunction>("Function OnScreen_SentryDistance.OnScreen_SentryDistance_C.Set End Points");

	UOnScreen_SentryDistance_C_Set_End_Points_Params params;
	params.Target = Target;
	params.Destination = Destination;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OnScreen_SentryDistance.OnScreen_SentryDistance_C.Tick
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// struct FGeometry*              MyGeometry                     (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// float*                         InDeltaTime                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UOnScreen_SentryDistance_C::Tick(struct FGeometry* MyGeometry, float* InDeltaTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function OnScreen_SentryDistance.OnScreen_SentryDistance_C.Tick");

	UOnScreen_SentryDistance_C_Tick_Params params;
	params.MyGeometry = MyGeometry;
	params.InDeltaTime = InDeltaTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OnScreen_SentryDistance.OnScreen_SentryDistance_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UOnScreen_SentryDistance_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function OnScreen_SentryDistance.OnScreen_SentryDistance_C.Construct");

	UOnScreen_SentryDistance_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OnScreen_SentryDistance.OnScreen_SentryDistance_C.ExecuteUbergraph_OnScreen_SentryDistance
// (Final, HasDefaults)
// Parameters:
// int*                           EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UOnScreen_SentryDistance_C::ExecuteUbergraph_OnScreen_SentryDistance(int* EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function OnScreen_SentryDistance.OnScreen_SentryDistance_C.ExecuteUbergraph_OnScreen_SentryDistance");

	UOnScreen_SentryDistance_C_ExecuteUbergraph_OnScreen_SentryDistance_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
