// DeepRockGalactic SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "FSD_OnScreen_Indicator_UsableZipLine_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function OnScreen_Indicator_UsableZipLine.OnScreen_Indicator_UsableZipLine_C.Refresh
// (Public, BlueprintCallable, BlueprintEvent)

void UOnScreen_Indicator_UsableZipLine_C::Refresh()
{
	static auto fn = UObject::FindObject<UFunction>("Function OnScreen_Indicator_UsableZipLine.OnScreen_Indicator_UsableZipLine_C.Refresh");

	UOnScreen_Indicator_UsableZipLine_C_Refresh_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OnScreen_Indicator_UsableZipLine.OnScreen_Indicator_UsableZipLine_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UOnScreen_Indicator_UsableZipLine_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function OnScreen_Indicator_UsableZipLine.OnScreen_Indicator_UsableZipLine_C.Construct");

	UOnScreen_Indicator_UsableZipLine_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OnScreen_Indicator_UsableZipLine.OnScreen_Indicator_UsableZipLine_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool*                          IsDesignTime                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UOnScreen_Indicator_UsableZipLine_C::PreConstruct(bool* IsDesignTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function OnScreen_Indicator_UsableZipLine.OnScreen_Indicator_UsableZipLine_C.PreConstruct");

	UOnScreen_Indicator_UsableZipLine_C_PreConstruct_Params params;
	params.IsDesignTime = IsDesignTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OnScreen_Indicator_UsableZipLine.OnScreen_Indicator_UsableZipLine_C.Tick
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// struct FGeometry*              MyGeometry                     (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// float*                         InDeltaTime                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UOnScreen_Indicator_UsableZipLine_C::Tick(struct FGeometry* MyGeometry, float* InDeltaTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function OnScreen_Indicator_UsableZipLine.OnScreen_Indicator_UsableZipLine_C.Tick");

	UOnScreen_Indicator_UsableZipLine_C_Tick_Params params;
	params.MyGeometry = MyGeometry;
	params.InDeltaTime = InDeltaTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OnScreen_Indicator_UsableZipLine.OnScreen_Indicator_UsableZipLine_C.OnCharacterStateChanged_Event
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// ECharacterState*               NewState                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UOnScreen_Indicator_UsableZipLine_C::OnCharacterStateChanged_Event(ECharacterState* NewState)
{
	static auto fn = UObject::FindObject<UFunction>("Function OnScreen_Indicator_UsableZipLine.OnScreen_Indicator_UsableZipLine_C.OnCharacterStateChanged_Event");

	UOnScreen_Indicator_UsableZipLine_C_OnCharacterStateChanged_Event_Params params;
	params.NewState = NewState;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OnScreen_Indicator_UsableZipLine.OnScreen_Indicator_UsableZipLine_C.OnInputSourceChanged_Event
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// EInputSource*                  InputSource                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UOnScreen_Indicator_UsableZipLine_C::OnInputSourceChanged_Event(EInputSource* InputSource)
{
	static auto fn = UObject::FindObject<UFunction>("Function OnScreen_Indicator_UsableZipLine.OnScreen_Indicator_UsableZipLine_C.OnInputSourceChanged_Event");

	UOnScreen_Indicator_UsableZipLine_C_OnInputSourceChanged_Event_Params params;
	params.InputSource = InputSource;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OnScreen_Indicator_UsableZipLine.OnScreen_Indicator_UsableZipLine_C.ExecuteUbergraph_OnScreen_Indicator_UsableZipLine
// (Final, HasDefaults)
// Parameters:
// int*                           EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UOnScreen_Indicator_UsableZipLine_C::ExecuteUbergraph_OnScreen_Indicator_UsableZipLine(int* EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function OnScreen_Indicator_UsableZipLine.OnScreen_Indicator_UsableZipLine_C.ExecuteUbergraph_OnScreen_Indicator_UsableZipLine");

	UOnScreen_Indicator_UsableZipLine_C_ExecuteUbergraph_OnScreen_Indicator_UsableZipLine_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
