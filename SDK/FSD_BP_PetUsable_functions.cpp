// DeepRockGalactic SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "FSD_BP_PetUsable_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function BP_PetUsable.BP_PetUsable_C.BPCanUse
// (Event, Protected, HasOutParms, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// class APlayerCharacter**       user                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class USceneComponent**        UseCollider                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UBP_PetUsable_C::BPCanUse(class APlayerCharacter** user, class USceneComponent** UseCollider)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PetUsable.BP_PetUsable_C.BPCanUse");

	UBP_PetUsable_C_BPCanUse_Params params;
	params.user = user;
	params.UseCollider = UseCollider;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BP_PetUsable.BP_PetUsable_C.ReceiveBeginPlay
// (Event, Public, BlueprintEvent)

void UBP_PetUsable_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PetUsable.BP_PetUsable_C.ReceiveBeginPlay");

	UBP_PetUsable_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_PetUsable.BP_PetUsable_C.OnUsedBy_Event_1
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class APlayerCharacter**       user                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBP_PetUsable_C::OnUsedBy_Event_1(class APlayerCharacter** user)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PetUsable.BP_PetUsable_C.OnUsedBy_Event_1");

	UBP_PetUsable_C_OnUsedBy_Event_1_Params params;
	params.user = user;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_PetUsable.BP_PetUsable_C.ExecuteUbergraph_BP_PetUsable
// (Final)
// Parameters:
// int*                           EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBP_PetUsable_C::ExecuteUbergraph_BP_PetUsable(int* EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PetUsable.BP_PetUsable_C.ExecuteUbergraph_BP_PetUsable");

	UBP_PetUsable_C_ExecuteUbergraph_BP_PetUsable_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
