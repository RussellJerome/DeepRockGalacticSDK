// DeepRockGalactic SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "FSD_LureTarget_HealthReadout_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function LureTarget_HealthReadout.LureTarget_HealthReadout_C.SetText
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FText*                  Text                           (BlueprintVisible, BlueprintReadOnly, Parm)

void ULureTarget_HealthReadout_C::SetText(struct FText* Text)
{
	static auto fn = UObject::FindObject<UFunction>("Function LureTarget_HealthReadout.LureTarget_HealthReadout_C.SetText");

	ULureTarget_HealthReadout_C_SetText_Params params;
	params.Text = Text;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function LureTarget_HealthReadout.LureTarget_HealthReadout_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool*                          IsDesignTime                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ULureTarget_HealthReadout_C::PreConstruct(bool* IsDesignTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function LureTarget_HealthReadout.LureTarget_HealthReadout_C.PreConstruct");

	ULureTarget_HealthReadout_C_PreConstruct_Params params;
	params.IsDesignTime = IsDesignTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function LureTarget_HealthReadout.LureTarget_HealthReadout_C.ExecuteUbergraph_LureTarget_HealthReadout
// (Final, HasDefaults)
// Parameters:
// int*                           EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ULureTarget_HealthReadout_C::ExecuteUbergraph_LureTarget_HealthReadout(int* EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function LureTarget_HealthReadout.LureTarget_HealthReadout_C.ExecuteUbergraph_LureTarget_HealthReadout");

	ULureTarget_HealthReadout_C_ExecuteUbergraph_LureTarget_HealthReadout_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
