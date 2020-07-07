// DeepRockGalactic SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "FSD_DE_LeafLoverDisableAllEffects_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function DE_LeafLoverDisableAllEffects.DE_LeafLoverDisableAllEffects_C.OnStartEffect
// (Event, Protected, BlueprintEvent)
// Parameters:
// class APlayerCharacter**       Character                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UDE_LeafLoverDisableAllEffects_C::OnStartEffect(class APlayerCharacter** Character)
{
	static auto fn = UObject::FindObject<UFunction>("Function DE_LeafLoverDisableAllEffects.DE_LeafLoverDisableAllEffects_C.OnStartEffect");

	UDE_LeafLoverDisableAllEffects_C_OnStartEffect_Params params;
	params.Character = Character;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DE_LeafLoverDisableAllEffects.DE_LeafLoverDisableAllEffects_C.ExecuteUbergraph_DE_LeafLoverDisableAllEffects
// (Final)
// Parameters:
// int*                           EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UDE_LeafLoverDisableAllEffects_C::ExecuteUbergraph_DE_LeafLoverDisableAllEffects(int* EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function DE_LeafLoverDisableAllEffects.DE_LeafLoverDisableAllEffects_C.ExecuteUbergraph_DE_LeafLoverDisableAllEffects");

	UDE_LeafLoverDisableAllEffects_C_ExecuteUbergraph_DE_LeafLoverDisableAllEffects_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
