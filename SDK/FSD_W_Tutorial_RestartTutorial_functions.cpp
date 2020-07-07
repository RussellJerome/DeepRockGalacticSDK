// DeepRockGalactic SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "FSD_W_Tutorial_RestartTutorial_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function W_Tutorial_RestartTutorial.W_Tutorial_RestartTutorial_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool*                          IsDesignTime                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UW_Tutorial_RestartTutorial_C::PreConstruct(bool* IsDesignTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function W_Tutorial_RestartTutorial.W_Tutorial_RestartTutorial_C.PreConstruct");

	UW_Tutorial_RestartTutorial_C_PreConstruct_Params params;
	params.IsDesignTime = IsDesignTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function W_Tutorial_RestartTutorial.W_Tutorial_RestartTutorial_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UW_Tutorial_RestartTutorial_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function W_Tutorial_RestartTutorial.W_Tutorial_RestartTutorial_C.Construct");

	UW_Tutorial_RestartTutorial_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function W_Tutorial_RestartTutorial.W_Tutorial_RestartTutorial_C.OnCloseTutorial
// (BlueprintCallable, BlueprintEvent)

void UW_Tutorial_RestartTutorial_C::OnCloseTutorial()
{
	static auto fn = UObject::FindObject<UFunction>("Function W_Tutorial_RestartTutorial.W_Tutorial_RestartTutorial_C.OnCloseTutorial");

	UW_Tutorial_RestartTutorial_C_OnCloseTutorial_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function W_Tutorial_RestartTutorial.W_Tutorial_RestartTutorial_C.ExecuteUbergraph_W_Tutorial_RestartTutorial
// (Final, HasDefaults)
// Parameters:
// int*                           EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UW_Tutorial_RestartTutorial_C::ExecuteUbergraph_W_Tutorial_RestartTutorial(int* EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function W_Tutorial_RestartTutorial.W_Tutorial_RestartTutorial_C.ExecuteUbergraph_W_Tutorial_RestartTutorial");

	UW_Tutorial_RestartTutorial_C_ExecuteUbergraph_W_Tutorial_RestartTutorial_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
