// DeepRockGalactic SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "FSD_BP_LasePointer_SecondaryMarker_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function BP_LasePointer_SecondaryMarker.BP_LasePointer_SecondaryMarker_C.UpdateMaterial
// (Public, BlueprintCallable, BlueprintEvent)

void ABP_LasePointer_SecondaryMarker_C::UpdateMaterial()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_LasePointer_SecondaryMarker.BP_LasePointer_SecondaryMarker_C.UpdateMaterial");

	ABP_LasePointer_SecondaryMarker_C_UpdateMaterial_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_LasePointer_SecondaryMarker.BP_LasePointer_SecondaryMarker_C.ExecuteUbergraph_BP_LasePointer_SecondaryMarker
// (Final)
// Parameters:
// int*                           EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_LasePointer_SecondaryMarker_C::ExecuteUbergraph_BP_LasePointer_SecondaryMarker(int* EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_LasePointer_SecondaryMarker.BP_LasePointer_SecondaryMarker_C.ExecuteUbergraph_BP_LasePointer_SecondaryMarker");

	ABP_LasePointer_SecondaryMarker_C_ExecuteUbergraph_BP_LasePointer_SecondaryMarker_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
