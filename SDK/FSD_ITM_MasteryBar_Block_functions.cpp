// DeepRockGalactic SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "FSD_ITM_MasteryBar_Block_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function ITM_MasteryBar_Block.ITM_MasteryBar_Block_C.SetUnlocked
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool*                          IsUnlocked                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UITM_MasteryBar_Block_C::SetUnlocked(bool* IsUnlocked)
{
	static auto fn = UObject::FindObject<UFunction>("Function ITM_MasteryBar_Block.ITM_MasteryBar_Block_C.SetUnlocked");

	UITM_MasteryBar_Block_C_SetUnlocked_Params params;
	params.IsUnlocked = IsUnlocked;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ITM_MasteryBar_Block.ITM_MasteryBar_Block_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool*                          IsDesignTime                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UITM_MasteryBar_Block_C::PreConstruct(bool* IsDesignTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function ITM_MasteryBar_Block.ITM_MasteryBar_Block_C.PreConstruct");

	UITM_MasteryBar_Block_C_PreConstruct_Params params;
	params.IsDesignTime = IsDesignTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ITM_MasteryBar_Block.ITM_MasteryBar_Block_C.ReceiveUnlocked
// (Event, Public, BlueprintCallable, BlueprintEvent)

void UITM_MasteryBar_Block_C::ReceiveUnlocked()
{
	static auto fn = UObject::FindObject<UFunction>("Function ITM_MasteryBar_Block.ITM_MasteryBar_Block_C.ReceiveUnlocked");

	UITM_MasteryBar_Block_C_ReceiveUnlocked_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ITM_MasteryBar_Block.ITM_MasteryBar_Block_C.ExecuteUbergraph_ITM_MasteryBar_Block
// (Final)
// Parameters:
// int*                           EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UITM_MasteryBar_Block_C::ExecuteUbergraph_ITM_MasteryBar_Block(int* EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function ITM_MasteryBar_Block.ITM_MasteryBar_Block_C.ExecuteUbergraph_ITM_MasteryBar_Block");

	UITM_MasteryBar_Block_C_ExecuteUbergraph_ITM_MasteryBar_Block_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
