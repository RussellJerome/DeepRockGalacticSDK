// DeepRockGalactic SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "FSD_DE_GenericBuffEffect_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function DE_GenericBuffEffect.DE_GenericBuffEffect_C.OnStartEffect
// (Event, Protected, BlueprintEvent)
// Parameters:
// class APlayerCharacter**       Character                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UDE_GenericBuffEffect_C::OnStartEffect(class APlayerCharacter** Character)
{
	static auto fn = UObject::FindObject<UFunction>("Function DE_GenericBuffEffect.DE_GenericBuffEffect_C.OnStartEffect");

	UDE_GenericBuffEffect_C_OnStartEffect_Params params;
	params.Character = Character;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DE_GenericBuffEffect.DE_GenericBuffEffect_C.OnStopEffect
// (Event, Protected, BlueprintEvent)

void UDE_GenericBuffEffect_C::OnStopEffect()
{
	static auto fn = UObject::FindObject<UFunction>("Function DE_GenericBuffEffect.DE_GenericBuffEffect_C.OnStopEffect");

	UDE_GenericBuffEffect_C_OnStopEffect_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DE_GenericBuffEffect.DE_GenericBuffEffect_C.ExecuteUbergraph_DE_GenericBuffEffect
// (Final)
// Parameters:
// int*                           EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UDE_GenericBuffEffect_C::ExecuteUbergraph_DE_GenericBuffEffect(int* EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function DE_GenericBuffEffect.DE_GenericBuffEffect_C.ExecuteUbergraph_DE_GenericBuffEffect");

	UDE_GenericBuffEffect_C_ExecuteUbergraph_DE_GenericBuffEffect_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
